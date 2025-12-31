#include <iostream> 
// #include <string>
using namespace std;



int sum(int numberOne, int numberTwo); // Vorwaertsdeklaration

// string concatNames (string nameOne, string nameTwo);

// void printLines (string longString);

// double calculateAverageScore (double scoreTeamA, int numberOfGames);

int main() { 

    int myFunctionSum = sum(3, 8);
    cout << myFunctionSum << endl;

    return 0; 
}


int sum(int numberOne, int numberTwo ){

    int mySum = numberOne + numberTwo;
    return mySum;
}