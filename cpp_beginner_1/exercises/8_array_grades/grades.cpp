#include <iostream> 
#include "grades_functions.hpp"
using namespace std;


int main() { 

    const int numberOfGrades = 5;
    int gradesArray[numberOfGrades];

    cout << "Enter " << numberOfGrades << " grades (1-6):" << endl;

    for (int i = 0; i<numberOfGrades; i++){
        cin >> gradesArray[i];
    }

    cout << "Average: " << calcAverage(gradesArray, numberOfGrades);
    return 0; 
}





