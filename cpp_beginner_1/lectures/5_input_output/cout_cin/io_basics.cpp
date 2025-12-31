#include <iostream>
using namespace std;

int main() {

    int age = 29;
    double weight, height;

    cout << "my age is " << age << ". welcome to my lecture" << endl;

    cout << "Please enter your age: " << endl;

    cin >> age;

    cout << "The users age is " << age <<  endl;

    cout << "Please enter your age and your weight and height: " << endl;

    cin >> age >> weight >> height;

    cout << "The users age is " << age <<  endl;
    cout << "The users weight is " << weight <<  endl;
    cout << "The users height is " << height <<  endl;


    return 0;
}