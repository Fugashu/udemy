#include <iostream> 
#include <limits>  // Für min/max-Werte


using namespace std;

// Kleinste Einheit 1 Bit 
// 1 Byte = 8 Bit
// 0|0|0|0|0|0|0|0 -> 0
// 0|0|0|0|0|0|0|1 -> 1
// 0|0|0|0|0|0|1|0 -> 2
// 1|1|1|1|1|1|1|1 -> 255 // 2^8 = 256




int main() { 

    cout<< sizeof(int) * 8 << endl ;
    cout << sizeof(char) * 8 <<endl;
    cout << sizeof(double) * 8 <<endl;

    cout << "Min signed int: " << numeric_limits<int>::min() << " (wegen Vorzeichen-Bit)" << endl;
    cout << "Max signed int: " << numeric_limits<int>::max() << endl;

    int maxInt = numeric_limits<long long>::max();
    cout << "Max int: " << maxInt << " (2^31 - 1)" << endl;
    cout << "Overflow (max int + 1): " << maxInt + 1 << " (wrappt zu min int)" << endl;  // Wird negativ!
    return 0; 
}