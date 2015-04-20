/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on April 20, 2015, 10:28 AM
 * Purpose: Homework Assignment 5: 1. Markup
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float calculateRetail(float, float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float wCost, mPer;
    
    //Prompt the User for Input
    cout<<"Please enter an item's wholesale cost ($'s)"<<endl;
    cin>>wCost;
    cout<<"Please enter the item's markup percentage (%)"<<endl;
    cin>>mPer;
    
    //Call Function
    calculateRetail(wCost, mPer);
    
    //Exit Stage Right!
    return 0;
}

float calculateRetail(float wCost, float mPer){
    float rPrice = (wCost*mPer/100.0f)+wCost;
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"The item's retail price = $"<<rPrice<<endl;
    return 0;    
}