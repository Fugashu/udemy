#include <iostream> 

using namespace std;

int main() { 


    int x, y;
    x = 3;
    y = 5;

    cout << "Addition: " << x + y << endl;
    cout << "Subtraktion: " << x - y << endl;
    cout << "Multiplikation: " << x * y << endl;
    cout << "Division: " << x / y << endl; // eigentlich 3/5 => 0.6, aber int! -> 0
    cout << "Modulo: " << x % y << endl;

    double c = 3.0;
    double d = 5.0;
    cout << "Division: " << c / d << endl; 

    int e = 10;
    e /= 5;
    e/0;
    cout << "Division e: " << e << endl;

    // Vergleich ==
    bool b = (5 == 3);
    // Vergleich ungleich
    bool b_2 = (5 != 3);

    cout << "Comparison (5 == 3): " << b << endl;
    cout << "Comparison (5 != 3): " << b_2 << endl;

    cout << "Comparison (5 > 3): " << (5 > 3) << endl;
    cout << "Comparison (5 < 3): " << (5 < 3) << endl;
    cout << "Comparison (5 <= 5): " << (5 <= 5) << endl;
    cout << "Comparison (5 >= 5): " << (5 >= 5) << endl;

 // Vergleiche immer mit ZWEI ==

 // Logische Operatoren:

    cout << "AND (true && true): " << (true && true) << endl;
    cout << "AND (true && false): " << (true && false) << endl;

    cout << "OR (true || true): " << (true || true) << endl;
    cout << "OR (true || false): " << (true || false) << endl;
    cout << "OR (false || false): " << (false || false) << endl;

    cout << "NEGATE (!false): " << (!false) << endl;
    cout << "NEGATE (!true): " << (!true) << endl;

    // Increment/Decrement

    int z = 6;
    //Pre
    cout << "Pre-Increment: " << ++z << endl;

    //Post
    cout << "Post-Increment: " << z++ << endl;

    cout << "z-value: " << z << endl;

    //BMI-Calculator (bmi = weight/(height*height))

    double weight = 78;
    double height = 1.87;

    double bmi = weight/(height*height); 
    cout << "Bmi: " << bmi;

 return 0; 
}