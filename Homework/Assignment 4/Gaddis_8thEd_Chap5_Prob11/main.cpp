/* 
 * File:   main.cpp
 * Author: Connor Kelley 
 * Created on April 3, 2015, 12:40 PM
 * Purpose: Homework Assignment 4 - 6th Problem - 11. Population
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Variables

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int stNum;     //The starting number of organisms as entered by a user
    float avgInc;           //The average daily population increase as a percentage (0.xx) format
    unsigned int numDays;   //The number of days multiplied
    unsigned int dlyPop;    //The size of the population per day
    
    //Prompt the user for input
    cout<<"Please enter a starting number of organisms:"<<endl;
    cin>>stNum;
    cout<<"Please enter the average daily population increase as a decimal formatted percentage:"<<endl;
    cin>>avgInc;
    cout<<"Please enter the number of days you would like to multiply by:"<<endl;
    cin>>numDays;
    
    //Loop to display the size of the population for each day
    for(int x=1; x <= numDays; x++){
        dlyPop = stNum*avgInc*x+stNum;
        cout<<"On day "<<x<<", the population will be "<<dlyPop<<endl;
             
    }          
    
    //Exit Stage Right!
    return 0;
}

