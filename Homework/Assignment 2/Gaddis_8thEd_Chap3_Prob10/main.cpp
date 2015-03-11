/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on March 9, 2015, 3:15 PM
 * Purpose:  Homework Assignment 2 - 5th Problem - How Much Insurance?
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
    float PCTCNV = 0.08;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
        float rCost, mIns;
    
    //Input
        cout<<"\"How Much Insurance?\" Assignment."<<endl;
        cout<<"Please enter the replacement cost of a building in the following format: \"xxx,xxx.xx\" "<<endl;
        cout<<"Integers only!"<<endl;
        cin>>rCost;
        
    //Calculate 
        mIns = rCost*PCTCNV;
    
    //Output 
        cout<<"The minimum amount of insurance you should buy for the property is $"<<mIns<<endl;
                   
    //Exit Stage Right!
        return 0;
}

