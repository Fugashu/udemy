#include <iostream>
using namespace std;

int main() {

    // for loop 
    int counter = 100;
    int sum = 0;

    for (int i = 0; i <= counter; i++)
    {
        cout << "i: " << i << endl;
        sum += i;
    }

    cout << "Sum: " << sum;


    return 0;
}