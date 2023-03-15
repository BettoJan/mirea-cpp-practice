#include "triangle.h"
#include <iostream>
#include <cmath>
#include "constants/constants.h"

using namespace std;

Triangle::Triangle() {
    a = 0;
    b = 0;
    c = 0;
}

Triangle::Triangle(double a1, double b1, double c1) {
    a = a1;
    b = b1;
    c = c1;
}

bool Triangle::exst_tr() const {
    return ((a + b > c) && (b + c > a) && (a + c > b));
}

void Triangle::set(double a1, double b1, double c1) {
    a = a1;
    b = b1;
    c = c1;
}

void Triangle::show() const {
    cout << SIDE_1 << a << endl;
    cout << SIDE_2 << b << endl;
    cout << SIDE_3 << c << endl;
}

double Triangle::perimetr() const {
    double p = a + b + c;
    return p;
}

double Triangle::square() const {
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}