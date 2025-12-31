#include <iostream>
#include "ticlib.hpp"

using namespace std;
void printBoard(char board[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool checkWin(char board[3][3], char player){
    // Check rows, colums and diagonal 
    for (int i = 0; i<3; i++){
        // Check rows
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player){
            return true;
        }
        // Check colums
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player){
            return true;
        }
    } 

    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player){
        return true;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player){
        return true;
    }
    return false;
}
