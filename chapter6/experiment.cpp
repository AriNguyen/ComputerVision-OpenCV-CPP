#include <iostream>
#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"

using namespace cv;
using namespace std;

void removeBackGround(Mat& img, Mat& light_img, Mat& out_img) {
    out_img = 255 * (1 - (img / light_img));
}

void preprocess(Mat& img, Mat& light_img, Mat& preprocessed_img) {
    // remove noise
    Mat removedNoise;
    medianBlur(img, removedNoise, 3);
    imwrite("removedNoiseImg.jpg", removedNoise);

    // remove background
    Mat removedBackGround;
    removeBackGround(removedNoise, light_img, removedBackGround);
    imwrite("removedBackGroundImg.jpg", removedBackGround);

    // segmetation
    Mat thres;
    threshold(removedBackGround, thres, 30, 255, THRESH_BINARY);
    imwrite("thresholdImg.jpg", thres);
}

int main() {
    String img_path = "../data/test.pgm";
    String light_img_path = "../data/pattern.pgm";

    Mat img = imread(img_path);
    if (img.data == NULL) {
        cerr << "Error loading image " << img_path << endl;
        return 0;
    }
    Mat light_img = imread(light_img_path);
    if (light_img.data == NULL) {
        cerr << "Error loading image " << light_img_path << endl;
        return 0;
    }

    Mat preprocessed_img;
    preprocess(img, light_img, preprocessed_img);

}