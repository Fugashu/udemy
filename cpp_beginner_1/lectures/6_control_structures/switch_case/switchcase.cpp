#include <iostream>
using namespace std;

int main() {

    //switch case
 
    char option;
    cout << "A: Apple, B: Banana, C: Orange" << endl;
    cin >> option;


    switch(option)
    {
        case 'A':
            cout << "You chose an apple!" << endl;
            break; // Do not forget the breaks!
        case 'B':
            cout << "You chose a banana!" << endl;
            break;
        case 'C':
            cout << "You chose an orange!" << endl;
            break;
        
        default:
            cout << "Wrong input!"<< endl;

    }

    return 0;
}