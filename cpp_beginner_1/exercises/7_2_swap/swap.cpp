#include <iostream> 
#include "my_swap.hpp"

using namespace std;


int main() { 

    int x, y;

    cout << "Please enter two values to swap: " << endl;
    cin >> x >> y;

    if (cin.fail()){
        cout << "Wrong datatype!" << endl;
        return 0;
    }

    cout << "Values before the swap: " << x << " " << y << endl;
    swapValues(x, y);
    cout << "Values after the swap: " << x << " " << y << endl;



}


