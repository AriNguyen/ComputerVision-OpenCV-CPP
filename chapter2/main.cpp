#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
using namespace cv;


int main(int argc, const char** argv) {
    Mat color = imread("../eyes.jpg");
    Mat gray = imread("../eyes.jpg", IMREAD_GRAYSCALE);

    if (!color.data) {
        cout << "Could not open or find the image" << endl;
        return -1;
    }

    imwrite("eyes.jpg", gray);

    int myRow = color.cols -1;
    int myCol = color.rows - 1;

    cout << "myRow, myCol: " << myRow << " - " << myCol << endl;

    Vec3b pixel = color.at<Vec3b>(myRow, myCol);
    cout << "Pixel value (B, G, R): (" << (int)pixel[0] << "," << (int)pixel[1] << "," << (int)pixel[2] << ")" << endl;


}
