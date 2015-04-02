/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on March 30, 2015, 10:39 AM
 * Purpose: Homework Assignment 4 - 1st Problem - 1. Sum of Numbers
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
    int posInt, sum; //Integer value from user input
    
    //Prompt for user input
    cout<<"Please enter a positive integer value:"<<endl;
    cin>>posInt;
    
    if(posInt >= 0){
        //Loop to desired value
        for(int x=1; x <= posInt; x++){
            sum += x;   
        }    
        cout<<sum;
        
    } else {
        cout<<"You did not enter a positive integer!";
    }
   
    //Exit Stage Right!
    return 0;
}

