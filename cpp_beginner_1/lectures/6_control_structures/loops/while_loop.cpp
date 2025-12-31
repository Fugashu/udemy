#include <iostream>
using namespace std;

int main() {

    int counter = 0;

    //while -> Check vorher
    while ( counter < 10 )
    {
        cout << "Counter: " << counter << endl;
        counter++;
    }

    int input;

    //do ... while -> Check erst danach! Mindestens 1 mal durchlaufen
    do {
        cout << "Enter a number > 0: " << endl;
        cin >> input;

    } while (input <= 0 );
    
 

    return 0;
}