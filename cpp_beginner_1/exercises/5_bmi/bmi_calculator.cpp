#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    string fullName;
    double weight, height, bmi, ideal_weight;

    cout << "Please enter your full name: "<< endl;
    getline(cin, fullName);

    cout << "Please enter your weight in kg: "<< endl;
    cin >> weight;

    cout << "Enter your height in meters (e.g., 1.75): ";
    cin >> height;

    bmi = weight/ (height * height);
    ideal_weight = height * height * 22;

    cout << fixed << setprecision(2);
    cout << "Hello" << fullName << ", your BMI is: " << bmi << endl;
    cout << "Your ideal weight would be: " << ideal_weight << " kg" << endl;

    return 0;
}