#include <iostream>
#include "triangle.h"
#include "constants/constants.h"

using namespace std;

int main()
{
    Triangle mas[NUM_OF_TRIANGLES];
    double a, b, c;

    for (int i = 0; i < NUM_OF_TRIANGLES; i++) {
        cout << PROMPT_ENTER_SIDES << i+1 << PROMPT_THROUGH_SPACE << endl;
        cin >> a >> b >> c;
        mas[i].set(a, b, c);
        if (!mas[i].exist_triangle()) {
            mas[i].show();
            cout << ERROR_INVALID_TRIANGLE_SIDES << endl;
            i--;
        }
    }

    for (auto & ma : mas) {
        ma.show();
        cout << OUTPUT_PERIMETER << ma.perimeter() << endl;
        cout << OUTPUT_SQUARE << ma.square() << endl;
    }

    return 0;
}
