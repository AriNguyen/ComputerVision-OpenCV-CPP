#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
using namespace cv;

#include <iostream>
using namespace std;


const char* keys = {
    "{help h usage ? || print this message}"
    "{@image || Image to process}"
    "{@lightPattern || Image light pattern to apply to image input}"
    "{lightMethod | 1 | Method to remove background light, 0 difference, 1 div}"
    "{segMethod | 1 | Method to segment: 1 connected Componenys, 2 connected components with stats, 3 find Contourss}"
};

static Scalar randomColor( RNG& rng )
{
	auto icolor = (unsigned) rng;
	return Scalar( icolor&255, (icolor>>8)&255, (icolor>>16)&255 );
}

Mat calculateLightPattern(Mat img) {
    Mat pattern;
    blur(img, pattern, Size(img.cols / 3, img.cols / 3));
    return pattern;
}

Mat removeLight(Mat img, Mat pattern, int method) {
    Mat aux;

    if (method == 1) {
        Mat img32, pattern32;
        img.convertTo(img32, CV_32F);
        pattern.convertTo(pattern32, CV_32F);

        aux = 1 - (img32 / pattern32);
        aux.convertTo(aux, CV_8U, 255);
    }
    else {
        aux = pattern - img;
    }
    return aux;
}

void ConnectedComponents(Mat img) {
    Mat labels;

    auto num_objects = connectedComponents(img, labels);

    if (num_objects <= 1) {
        cout << "No objects detected" << endl;
        return;
    }
    else {
        cout << "Number of objects detected: " << num_objects - 1 << endl;
    }

    Mat output = Mat::zeros(img.rows, img.cols, CV_8UC3);
    RNG rng(0xFFFFFFFF);
    for (auto i = 1; i < num_objects; i++) {
        Mat mask = labels == i; // what is this line of code doing?
        output.setTo(randomColor(rng), mask);
    }
    imshow("Result", output);
}

void FindContourBasic(Mat img) {
    vector<vector<Point>> contours;
    findContours(img, contours, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
    Mat output = Mat::zeros(img.rows, img.cols, CV_8UC3);

    if (contours.size() == 0) {
        cout << "No objects detected" << endl;
        return;
    }
    else {
        cout << "Number of objects detected: " << contours.size() << endl;
    }

    RNG rng(0xFFFFFFFF);
    for (auto i = 0; i < contours.size(); i++) {
        drawContours(output, contours, i, randomColor(rng));
        imshow("Result ", output);
    }
}

int main(int argc, const char** argv) {
    CommandLineParser parser(argc, argv, keys);
    parser.about("Chapter 5. PhotobTool v1.0.0");

    if (parser.has("help")) {
        parser.printMessage();
        exit(0);
    }

    String img_file = parser.get<String>(0);
    String light_pattern_file = parser.get<String>(1);
    auto method_light = parser.get<int>("lightMethod");
    auto method_seg = parser.get<int>("segMethod");

    if (!parser.check()) {
        parser.printErrors();
        exit(0);
    }

    // remove background
    Mat img = imread(img_file, 0);
    if (img.data == NULL) {
        cout << "Error loading image " << img_file << endl;
        return 0;
    }

    Mat img_noise;
    medianBlur(img, img_noise, 3);

    // thresholding


    // segmentation
    
}