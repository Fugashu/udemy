#include <iostream>
using namespace std;

int main() {

    //cin.fail()

    int age;
    
    cout << "Please enter your age:" << endl;
    cin >> age;
    
    if(cin.fail())
    {
        cout << "Invalid input!";
    }
    else
    {
        cout << age; 
    }
    return 0;
}