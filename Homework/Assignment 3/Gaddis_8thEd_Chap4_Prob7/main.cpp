/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on March 22, 2015, 10:45AM
 * Purpose:  Homework Assignment 3 - 5th Problem - Time Calculator
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
    
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned long seconds, minutes, hours, days;
    
    //Program title
    cout<<"\"Time Calculator\""<<endl;
    
    //Input
    cout<<"Please enter a number of seconds:"<<endl;
    cin>>seconds;
    
    //Calculate
    minutes = seconds / 60;
    hours = seconds / 3600;
    days = seconds / 86400;
    
    //Output
    if (seconds >= 86400)
    {
        cout<<"Days: "<<days;
    } 
    else
    {
        if (seconds >= 3600)
        {
            cout<<"Hours: "<<hours;
        } 
        else 
        {
            if (seconds >= 60)
            {
            cout<<"Minutes: "<<minutes;
            }
            else 
            {
                if (seconds < 60)
                {
                cout<<"Seconds: "<<seconds;
                }
            }
        }   
    }     
   
    //Exit Stage Right!
        return 0;
}

