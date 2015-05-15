/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on May 14, 2015, 12:59 PM
 * Purpose: Homework Assignment 6: 14. Lottery Application
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed to time
    srand(static_cast<int>(time(0)));
    
    //Declare Variables
    const int SIZE = 4;
    int lottery[SIZE] = {};
    int userNum[SIZE] = {};
    int win = 0;
    
    //Set the lottery array equal to random integers
    for(int count = 0; count < SIZE; count++){
        int randNum = rand()%9+1;
        lottery[count] = randNum;
    }
    
    //Prompt the user to enter numbers for the lottery
    cout<<"Please enter 4 integers between 1 and 9 for the lottery"<<endl;
    for(int count = 0; count < SIZE; count++){
        cin>>userNum[count];
    }
    
    //Compare the user's entry to the lottery array
    for(int x = 0; x < SIZE; x++){   
        if(lottery[x] == userNum[x]){
            cout<<lottery[x]<<" MATCHED! at "<<(x+1)<<endl;
            win++;
        }
    }
    
    //Output the Lottery Array numbers
    cout<<"The lottery numbers are..."<<endl;
    for(int count = 0; count < SIZE; count++){
        cout<<lottery[count]<<" ";
    }
    
    //Output if the user won the lottery or not
    if(win == 4){
        cout<<endl<<"YOU WON THE LOTTERY!!!"<<endl;
    } else cout<<endl<<"Thanks for playing!"<<endl;
    
    //Exit Stage Right!
    return 0;
}