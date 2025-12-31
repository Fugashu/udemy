#include "grades_functions.hpp"

double calcAverage(int* gradesArray, const int count){
    double sum = 0;

    for (int i=0; i< count; i++){
        // if (gradesArray[i] < 1 || gradesArray[i] > 6){
        //     cout << "Wrong input!" << endl;
        //     gradesArray[i] = 0;
        // }
        sum += gradesArray[i];
    }

    double average = sum/count;

    return average;
}
