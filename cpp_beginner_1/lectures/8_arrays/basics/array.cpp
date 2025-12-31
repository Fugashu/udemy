#include <iostream> 

using namespace std;


int main() { 

    // arrays
    int my_array[5] = {10, 20, 30, 40, 50};

    cout << "Element my_array[4]: " << my_array[4] << endl; 
    my_array[0] = 70;
    cout << "Element my_array[0]: " << my_array[0]<< endl; 

    for (int i = 0; i < 5; i++){
        cout << "arr[" << i << "]" << my_array[i] << endl;
    }


    return 0; 
}


