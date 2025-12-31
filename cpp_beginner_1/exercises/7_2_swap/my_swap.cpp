#include "my_swap.hpp"

void swapValues (int &numberOne, int &numberTwo){

    int temp = numberOne; 
    numberOne = numberTwo;
    numberTwo = temp;

}