#include <iostream>
#include <cmath>
#include "triangle.h"
#include "constants/constants.h"

using namespace std;


bool Triangle::exist_triangle() const {
    return ((a + b > c) && (b + c > a) && (a + c > b));
}

void Triangle::set(double a1, double b1, double c1) {
    a = a1;
    b = b1;
    c = c1;
}

void Triangle::show() const {
    cout << OUTPUT_1_SIDE << a << endl;
    cout << OUTPUT_2_SIDE << b << endl;
    cout << OUTPUT_3_SIDE << c << endl;
}

double Triangle::perimeter() const {
    return a + b + c;
}

double Triangle::square() const {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}