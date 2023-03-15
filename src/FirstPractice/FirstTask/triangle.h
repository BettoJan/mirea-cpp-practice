#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "constants/variables.h"

class Triangle {
private:
    double a, b, c;
public:
    Triangle();
    Triangle(double a1, double b1, double c1);
    [[nodiscard]] bool exst_tr() const;
    void set(double a1, double b1, double c1);
    void show() const;
    double perimetr() const;
    double square() const;
};

#endif
