#include <iostream> 
using namespace std;

int sum(int numberOne, int numberTwo);
double sum(double numberOne, double numberTwo);

int main() { 

    int a = 3;
    int b = 8;
    int myFunctionSum = sum(a, b);
    double myDoubleSum = sum(3.5, 7.8);
    cout << myDoubleSum << endl;

    return 0; 
}

int sum(int numberOne, int numberTwo){
    return numberOne + numberTwo;

}

double sum(double numberOne, double numberTwo){
    return numberOne + numberTwo;
}

