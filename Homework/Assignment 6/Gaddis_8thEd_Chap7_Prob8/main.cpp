/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on May 14, 2015, 7:41 PM
 * Purpose: Homework Assignment 6: 8. Lo Shu Magic Square
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void loShu(int[3][3]);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<int>(time(0)));
    
    //Declare Variables
    int magicSq[3][3] = {{1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}};
    //Determine if Lo Shu Magic Square
    loShu(magicSq);
    
    //Exit Stage Right!
    return 0;
}

void loShu(int magicSq[3][3]){
    //Declare Variables
    int total = 0;
    //Sum all rows
    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 3; y++){
        total += magicSq[x][y];
        cout<<"Row "<<x<<" total equals "<<total<<endl;
        }
    }
    //Sum all columns
    
}