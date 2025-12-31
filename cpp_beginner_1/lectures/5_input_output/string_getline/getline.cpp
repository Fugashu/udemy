#include <iostream>
#include <string>
using namespace std;

int main() {

    int age;
    string fullName;

    cout << "Please enter your age: " << endl;
    cin >> age; // '\n'

    cin.ignore();
    getline (cin, fullName);

}