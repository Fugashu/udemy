#include <iostream> 
#include <vector>
#include <iomanip>

using namespace std;


int countValidReadings(const vector<int>& readings);

double averageValidReadings(const vector<int>& readings);

void printReadings(const vector<int>& readings);

int main() { 

    vector<int> readings = { -225, 4, 8, 15, 89, -12, 0, -67, -700, 88, 0};
    printReadings(readings);

    vector<int> readingsEmpty = { 0, 0, 0, 0};
    printReadings(readingsEmpty);

}

int countValidReadings(const vector<int>& readings){
    int count = 0;
    for (auto& element: readings){
        if (element > 0 ){
            count ++;
        }
    }
    return count;
}

double averageValidReadings(const vector<int>& readings){
    int validReadingsCount = countValidReadings(readings);
    if (validReadingsCount == 0){
        return 0.0;
    }

    double sum = 0.0;

    for (auto& element: readings){
        if (element > 0 ){
            sum += element;
        }
    }

    return sum/validReadingsCount;
}

void printReadings(const vector<int>& readings){
    int total = readings.size();
    int validCount = countValidReadings(readings); 
    double average = averageValidReadings(readings);
    cout << "Total measurements: " << total << endl;
    cout << "Valid measurements: " << validCount << endl;
    cout << fixed << setprecision(2) << "Average: " << average << endl; 
}
