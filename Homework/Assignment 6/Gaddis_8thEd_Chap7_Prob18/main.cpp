/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on May 11, 2015, 3:44 PM
 * Purpose: Homework Assignment 6: 18. Tic-Tac-Toe Game
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int row = 3;
    const int col = 3;
    char board[row][col] = {};
    int user1, user2;
    
    //Initialize the array to display *'s
    for (int x = 0; x < row; x++){
        for(int y = 0; y < col; y++){
            board[x][y] = '*';
        }
    }
    //Display the board
    for (int x = 0; x < row; x++){
        for(int y = 0; y < col; y++){
            cout<<board[x][y]<<" ";
        }
        cout<<endl;
    }
       
    //Exit Stage Right!
    return 0;
}

