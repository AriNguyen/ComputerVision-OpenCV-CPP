#include "opencv2/core.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main() {
    Mat a = Mat(Size(5, 5), CV_32F);

    Mat mz = Mat::zeros(5, 5, CV_32F);
    Mat mo = Mat::ones(5, 5, CV_32F);

    Mat eye = Mat::eye(5, 5, CV_32F);

    Mat sumE = mo + eye; 

    Mat neg = mo - eye;

    Mat mat2 = mo * 2;
    Mat mat3 = mo.mul(eye);
    Mat mat4 = eye * eye;

    for (int i = 0; i < eye.rows; i++) {
        for (int j = 0; j < eye.cols; j++) {
            cout << mat3.at<float>(i,j) << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << countNonZero(mat3) << endl;

    cout << endl;

    Scalar mean, stddev;
    meanStdDev(mat3, mean, stddev);

    cout << "Mean: " << mean[0] << "   StdDev: " << stddev[0] << endl;


    cout << endl;

    double* minVal, maxVal;
    int* minLoc, maxLoc;
    minMaxLoc(mat3, minVal, maxVal, minLoc, maxLoc);

    cout << "minmaclov: " << minVal << " " << maxVal << " " <<  minLoc << " " <<  maxLoc << endl;

    return 0;
}

