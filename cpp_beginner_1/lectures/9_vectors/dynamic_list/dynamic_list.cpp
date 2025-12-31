#include <iostream> 
#include <vector>
#include <string>

using namespace std;


int main() { 

    vector<string> my_list;
    string item;

    cout << "Please enter an item: (Type 'quit' to exit! )" << endl;

    while (cin >> item && item != "quit" ){
        my_list.push_back(item);
    }

    cout << "Your list contains " << my_list.size() << " items:" << endl;

    for (const auto& element : my_list){
        cout << element << endl;
    }
    
    my_list.clear();

    return 0; 
}


