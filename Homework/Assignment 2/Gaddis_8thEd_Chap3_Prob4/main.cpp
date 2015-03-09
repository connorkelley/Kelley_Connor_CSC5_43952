/* 
 * File:   main.cpp
 * Author: Connor Kelley <kelleyconnor@outlook.com>
 * Created on March 9, 2015, 8:58 AM
 * Purpose: Homework Assignment 2 - 3rd Problem - Average Rainfall
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
    string month1, month2, month3;
    float rain1, rain2, rain3, mAVG;
    
    
//Input 
    cout<<"Please enter the name of the first month and the amount of rain "
            "that fell, in inches, separated by a space:"<<endl;
    cin>>month1>>rain1;
    cout<<"Please enter the name of the second month and the amount of rain "
            "that fell, in inches, separated by a space:"<<endl;
    cin>>month2>>rain2;
    cout<<"Please enter the name of the third month and the amount of rain "
            "that fell, in inches, separated by a space:"<<endl;
    cin>>month3>>rain3;
    
//Calculate
    mAVG = (rain1 + rain2 + rain3) / 3;

//Output
    cout<<"The average rainfall for "<<month1<<", "<<month2<<", and "<<month3
            <<" is "<<mAVG<<" inches.";
            
//Exit Stage Right!
    return 0;
}

