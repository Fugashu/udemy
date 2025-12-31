#include <iostream> 
#include <string>
using namespace std;

void printArray (int* array, int size);

int main() { 

    int my_array[3] = {10,20,30};
    printArray(my_array, 30); // Careful! 30 is out of bounds
    return 0; 
}

void printArray (int* array, int size){
    for (int i = 0; i<size; i++){
        cout << array[i]<< endl;
    }
}

