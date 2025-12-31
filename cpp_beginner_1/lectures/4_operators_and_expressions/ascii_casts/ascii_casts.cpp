#include <iostream> 

using namespace std;

int main() { 


cout << char(43)<< endl;
char letter = 'A';

cout << "The ASCII value of " << letter << " is " << (int)letter << endl;

// temperature: 5,6,9
// count: 3

int temp1 = 5;
int temp2 = 6;
int temp3 = 9;
int count = 3;

cout << (double)(temp1 + temp2 + temp3)/count << endl;

// loss of precision!
float pi = 3.14159f;
cout << (int)pi << endl;

 return 0; 
}