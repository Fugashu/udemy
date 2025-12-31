#include <iostream> 
#include <string>
#include "my_greeting.hpp"

int main() { 

    string userName;
    cout << "Please enter your name" << endl;
    getline(cin, userName);

    greeting(userName);


    return 0; 
}



