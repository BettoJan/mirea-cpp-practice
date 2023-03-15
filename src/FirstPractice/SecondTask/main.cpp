#include <iostream>
#include "constants/constants.h"
#include "circle.h"

using namespace std;

int main() {
    Circle circles[NUM_CIRCLES];
    for (int i = 0; i < NUM_CIRCLES; i++) {
        float radius, x_center, y_center;
        cout << sprintf(PROMPT_RADIUS, i + 1);
        cin >> radius;
        cout << sprintf(PROMPT_X_CENTER, i + 1);
        cin >> x_center;
        cout << sprintf(PROMPT_Y_CENTER, i + 1);
        cin >> y_center;
        circles[i].set_circle(radius, x_center, y_center);
    }

    for (int i = 0; i < NUM_CIRCLES; i++) {
        cout << sprintf(OUTPUT_SQUARE, i + 1, circles[i].square());

        bool is_triangle_around = circles[i].triangle_around(3, 4, 5);
        cout << sprintf(OUTPUT_TRIANGLE_AROUND, i + 1, is_triangle_around ? "can be" : "cannot be");

        bool is_triangle_in = circles[i].triangle_in(3, 4, 5);
        cout << sprintf(OUTPUT_TRIANGLE_IN, i + 1, is_triangle_in ? "can be" : "cannot be");

        bool is_intersected = circles[i].check_circle(2, 3, 4);
        cout << sprintf(OUTPUT_CHECK_CIRCLE, i + 1, is_intersected ? "is intersected with" : "does not intersect");
    }

    return 0;
}