#include <iostream> 
#include <vector>

using namespace std;


int main() { 

    vector<double> my_vec = {1.0, 2.0, 3.5, 4.4};

    // Variant 1, loop with for
    for (int i = 0; i < my_vec.size(); i++ )
    {
        cout << "My vector element at position " << i << ": " << my_vec.at(i) << endl;
    }
    cout << endl;

    // Variant 2, loop with auto (range based loop)
    // Modify the values
    for (auto& number : my_vec){
        
    }



    
    return 0; 
}


