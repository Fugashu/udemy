#include <iostream> 

using namespace std;

int main() { 

    // int // Integer, 1,2,3, Alter, Anzahl an Gegenstaenden 3.5 -> 3
    // float // float Fliesskommazahl 3.5 -> 3.5
    // double // double Fliesskommazahl 3.5 -> 3.5
    // char // character 'c', '@', '5'
    // bool // bool -> wahr/falsch
    // short // short, Ganzzahlen, weniger Speicher
    // long // long, Ganzzahlen, mehr Speicher 
    //     // short > int > long

    int age = 29.8; // Ganze Zahl Alter 29
    float pi_approx = 3.14f; // Float mit f
    double pi_better = 3.141592653589793; // Genauers Pi
    char initial = 'J'; // Zeichen
    bool logged_in = true; // Boolean Bedingung
    short small_number = 42000000000000; // kleine integer Zahl
    long big_number = 100000000; // grosse integer Zahl
    long long very_big_number = 1000000000000000000; // sehr grosse Integer Zahl

    cout << "int (Age):" << age << endl;
    cout << "float (Pi approx): " << pi_approx << endl;
    cout << "double (Pi better): " << pi_better << endl;
    cout << "char (Initial): " << initial << endl;
    cout << "bool (Logged in?): " << logged_in << " (1 = true)" << endl;
    cout << "short: " << small_number << endl;
    cout << "long: " << big_number << endl;
    cout << "long long: " << very_big_number << endl;

    return 0; 
}