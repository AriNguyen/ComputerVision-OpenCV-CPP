#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main() {
    FileStorage fs("test.yml", FileStorage::WRITE);
    int fps = 5;
    fs << "fps"  << fps;

    Mat m1 = Mat::eye(2, 3, CV_32F);
    Mat m2 = Mat::ones(3, 2, CV_32F);
    Mat result = (m1 + 1).mul(m1 + 3);

    fs << "Result" << result;
    fs.release();

    FileStorage fs2("test.yml", FileStorage::READ);
    Mat r;
    fs2["Result"] >> r;
    cout << r << endl;
    fs2.release();

    return 0;
}