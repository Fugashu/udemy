#include <iostream> 
#include "ticlib.hpp"
using namespace std;



int main() { 

    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}}; // 2D-Array (Matrix 3x3)
    char player = 'X';
    int row, col, moves = 0;
    
    while (true){
        printBoard(board);
        cout << "Player" << player << ", please enter your row (0-2):" << endl;
        cin >> row;
        cout << "Player" << player << ", please enter your column (0-2):" << endl;
        cin >> col;

        // Invalid check
        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' '){
            cout << "Invalid turn!" << endl;
            continue;
        }
        // Now we know the turn is valid!
        board[row][col] = player;
        moves++;

        if (checkWin(board, player)){
            printBoard(board);
            cout << "Player" << player << "wins!" << endl;
            break;
        }

        if (moves == 9){
            cout << "Draw! No winner." << endl;
            break;
        }
        if (player == 'X'){
            player = 'O';
        }
        else
        {
            player = 'X';
        }
        

    }

    return 0; 
}


