#include <iostream>
#include "triangle.h"
#include "constants/variables.h"
#include "constants/constants.h"

using namespace std;

int main() {
    Triangle mas[MAX_TRIANGLES];
    double a, b, c;
    for (int i = 0; i < MAX_TRIANGLES; i++) {
        cout << PROMPT << i + 1 << SPACE << endl;
        cin >> a >> b >> c;
        Triangle t(a, b, c);
        if (!t.exst_tr()) {
            t.show();
            cout << TRIANGLE_DOESNT_EXIST << endl;
            i--;
        } else {
            mas[i] = t;
        }
    }
    for (const auto & ma : mas) {
        ma.show();
        cout << PERIMETER << ma.perimetr() << endl;
        cout << SQUARE << ma.square() << endl;
    }
    return 0;
}