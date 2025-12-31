#include <iostream> 
using namespace std;

// Call by value
// int sum(int numberOne, int numberTwo);

// Call by reference
int sum(int &numberOne, int &numberTwo);

int main() { 

    int a = 3;
    int b = 8;
    int myFunctionSum = sum(a, b);
    cout << myFunctionSum << endl;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    return 0; 
}

// Call By Value
// int sum(int numberOne, int numberTwo ){
//     numberOne++;
//     numberTwo++;
//     int mySum = numberOne + numberTwo;

//     return mySum;
// }

int sum(int &numberOne, int &numberTwo ){
    numberOne++;
    numberTwo++;
    int mySum = numberOne + numberTwo;

    return mySum;
}