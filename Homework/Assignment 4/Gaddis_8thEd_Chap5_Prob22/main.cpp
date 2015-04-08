/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on April 8, 2015, 9:59 AM
 * Purpose: Homework Assignment 4 - Problem 22. Square Display
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
    int num;        //Positive Integer no Greater than 15
    
    //Prompt the User for Input
    cout<<"Please enter a positive integer no greater than 15:"<<endl;
    cin>>num;
    
    //Loop to display Square 
    if(num > 0 && num <= 15){  //Input Validation 
        for(int row=1; row <=num; row++){
            for(int col=1; col <= num; col++){
                cout<<"*";
            }
            cout<<endl;
        }    
    } else {
        cout<<"You did not enter an integer greater than 0\nand less than or equal to 15.";
    }
    
    //Exit Stage Right!
    return 0;
}