#include <iostream> 

using namespace std;

int main() { 


    // Keine Redifinitionen!
    // Keine Leerzeichen
    // Sinnvolle Namen
    // Keine Zahlen am Anfang
    
    int x; // Deklaration einer Variable
    int y = 5; // Deklaration der Variablen y und Initialisierung mit 5
    y = 7;
    x = y;

    cout << "y:" << y << endl;
    cout << "x:" << x << endl;

    const int MAX_VALUE = 100;

    cout << "MAX_VALUE:" << MAX_VALUE << endl;

    bool toggle = true;
    char initial = 'J';

    float averageGrade; //camelCase
    int age = 29;
    return 0; 
}