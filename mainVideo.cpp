
/*
Reading Videos and cameras
*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
using namespace cv;

const char* keys = {
    "{help h usage ? | | print this message}"
    "{@video | | Video file, if not defined try to use webcamera}"
};

int main(int argc, const char** argv) {
    CommandLineParser parser(argc, argv, keys);
    parser.about("Chap 2");

    if (parser.has("help")) {
        parser.printMessage();
        return 0;
    }

    String videoFile = parser.get<String>(0);
    if (!parser.check()) {
        parser.printErrors();
        return 0;
    }

    VideoCapture cap;
    cout << "videoFile: " << videoFile << endl;
    if (videoFile != "") {
        cap.open(videoFile);
    }
    else 
        cap.open("Recording3.webm");

    if (!cap.isOpened()) 
        return -1;

    namedWindow("Video", 1);
    for (;;) {
        Mat frame;
        cap >> frame;
        if (frame.empty()) 
            return 0;
        imshow("Video", frame);
        if (waitKey(30) >= 0)
            break;
    }

    cap.release();
    return 0;
}
