#include <iostream> 
#include <vector>
using namespace std;

void printVector (vector<int> vec);

int main() { 

    vector<int> my_vector = {10, 20, 30};
    printVector(my_vector);
    return 0; 
}

void printVector (vector<int> vec){
    for (int i = 0; i < vec.size(); i++){
        cout << vec.at(i) << endl;
    }
}

