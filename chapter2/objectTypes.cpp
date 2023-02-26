#include <iostream>
#include <opencv2/core.hpp>

using namespace std;
using namespace cv;

Vec<double, 19> myVector;

typedef Vec<uchar, 2> Vec2b;
typedef Vec<uchar, 3> Vec3b;

typedef Vec<int, 2> Vec2i;
typedef Vec<int, 3> Vec3i;

typedef Vec<float, 2> Vec2f;
typedef Vec<float, 3> Vec3f;

typedef Vec<double, 2> Vec2d;
typedef Vec<double, 3> Vec3d;

typedef Point_<int> Point2i;
typedef Point2i Point;
typedef Point_<float> Point2f;
typedef Point_<double> Point2d;


int main() {
    Vec2i v2 = {2, 2};
    Vec2i v3 = {1, 2};
    Vec2i sum = v2 + v3;
    cout << sum << endl;

    Vec3i v4 = {2, 2, 1};
    Vec3i v5 = {1, 2, 4};
    Vec3i sum2 = v4 + v5;
    cout << sum2 << endl;

    Vec3f v6 = {2, 2, 1, 0};
    Vec3f v7 = {1, 2, 4, 7};
    Vec3f sum3 = v6 + v7;
    cout << sum3 << endl;

    Vec3d v8 = {2.5, 2.1, 1.9};
    Vec3d v9 = {1.5, 2.8, 9.0};
    Vec3d sum4 = v8 + v9;
    cout << sum4 << endl;

    cout << "\nScalar object: " << endl;

    Scalar s0(0);
    Scalar s1(0.0, 1.0, 2.0, 3.0);
    Scalar s2(s1);

    cout << s0 << endl;
    cout << s1 << endl;
    cout << s2 << endl;

    Scalar s_sum = s1 + s2;
    cout << s_sum << endl;
    cout << s_sum[0] << endl;
    cout << s_sum[1] << endl;
    cout << s_sum[2] << endl;
    cout << s_sum[3] << endl;

    cout << "\nPoint object: " << endl;

    Point2i p21 = {1, 2};
    Point2i p22 = {3, 4};
    Point2i p2_sum = p21 + p22;
    cout << p2_sum << endl;
}



