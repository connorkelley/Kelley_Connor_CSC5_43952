/* 
 * File:   main.cpp
 * Author: Connor Kelley <kelleyconnor@outlook.com>
 * Created on March 7, 2015, 8:33 PM
 * Purpose: Homework Assignment 2 - 1st Problem - Miles per Gallon
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
//Declare Variables
    float gTank, mTank, mPG;
    
//Input 
    cout<<"Miles per Gallon Assignment"<<endl;
    cout<<"Please enter the number of gallons of gas your car can hold xx.xx"<<endl;
    cin>>gTank;
    cout<<"Please enter the number of miles you can travel on one tank of gas xxx.xx"<<endl;
    cin>>mTank;
    
//Calculate
    mPG = mTank / gTank;
    
//Output
    
    cout<<"You can drive "<<mPG<<" mile(s) per gallon of gas."<<endl;
    
//Exit Stage Right!
    return 0;
}

