#include <iostream>
using namespace std;

// Defining PI as a constant value using #define (macro)
#define PI 3.14

int main() {
    int r = 5;   // radius of the circle

    // Formula for area of circle = π * r²
    double area = PI * r * r;

    cout << "Area of circle is: " << area << endl;

    return 0;
}
