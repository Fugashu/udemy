#include <iostream>
#include <limits>  // For numeric_limits
using namespace std;

int main() {
    // Step 1: Display sizes in bytes and bits for int, double, and long long
    cout << "Size of int: " << sizeof(int) << " bytes (" << sizeof(int) * 8 << " bits)" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes (" << sizeof(double) * 8 << " bits)" << endl;
    cout << "Size of long long: " << sizeof(long long) << " bytes (" << sizeof(long long) * 8 << " bits)" << endl;

    // Step 2: Minimum and maximum value for long long
    cout << "Minimum value of long long: " << numeric_limits<long long>::min() << endl;
    cout << "Maximum value of long long: " << numeric_limits<long long>::max() << endl;

    // Step 3: Underflow demo with short
    short minShort = numeric_limits<short>::min();
    cout << "Minimum value of short: " << minShort << endl;
    cout << "Underflow (min short - 1): " << minShort - 1 << endl;  // Typically wraps to max short

    return 0;
}