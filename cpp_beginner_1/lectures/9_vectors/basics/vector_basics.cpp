#include <iostream> 
#include <vector>
#include <string>

using namespace std;


int main() { 

    vector<int> my_vec; // Empty 
    my_vec.push_back(30);
    my_vec.push_back(10);

    cout << "First element: " << my_vec[0] << endl;
    cout << "First element: " << my_vec.at(0) << endl;
    cout << "Size: " << my_vec.size() << endl;
    my_vec.clear();
    cout << "Size: " << my_vec.size() << endl;

    vector<string> shopping_list;
    shopping_list.push_back("Milk");
    shopping_list.push_back("Eggs");
    shopping_list.push_back("Bread");

    shopping_list.pop_back();
    
    cout << "Size: " << shopping_list.size() << endl;

    shopping_list.clear();
    if (shopping_list.empty()){
        cout << "You already have all items needed!";
    }
    else{
        cout << "Go shopping!";
    }

    
    return 0; 
}


