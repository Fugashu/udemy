#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    const double PI = 3.1415926535;
    cout << PI << endl;

    cout << fixed << setprecision(3) << "Pi: " << PI << endl;  // Pi: 3.142
    cout << fixed << setprecision(6) << "Pi: " << PI << endl;  // Pi: 3.141592

    cout << setw(10) << right << "Name" << setw(10) << "Alter" << endl;
    cout << setw(10) << right << "Max" << setw(10) << 25 << endl;
    return 0;
}