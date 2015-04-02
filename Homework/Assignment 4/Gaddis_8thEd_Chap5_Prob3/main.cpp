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
    float olvl = 1.5, sum;
    
    //Loop to desired value
    for(int x =1; x <= 25; x++){
        sum = olvl * x;
        cout<<"In year "<<x<<": The ocean will have risen a total of "<<sum<<" millimeters."<<endl;
    
    }
    
    //Exit Stage Right!
    return 0;
}

