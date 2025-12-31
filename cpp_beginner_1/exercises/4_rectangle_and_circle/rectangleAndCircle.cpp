#include <iostream>
using namespace std;

int main() {

    // Declarations
    double length = 5.6;
    double width = 4.2;
    const double PI = 3.14159;

    // Caluclation Rectangle
    double area = length * width;
    double perimeter = 2 * (length + width);

    // Bonus Circle
    double radius = 2.0;
    double circleArea = PI * radius * radius;

    cout << "Rectangle Calculation:" << endl;
    cout << "Length: " << length << " m, Width: " << width << " m" << endl;
    cout << "Area: " << area << " m²" << endl;
    cout << "Perimeter: " << perimeter << " m" << endl;
    cout << "Bonus: Circle area with radius " << radius << " m: " << circleArea << " m²" << endl;



    return 0;
}