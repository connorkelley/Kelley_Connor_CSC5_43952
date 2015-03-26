/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on March 26, 2015, 10:29AM
 * Purpose:  Homework Assignment 3 - 10th Problem - Body Mass Index
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
    unsigned short weight;   //Measured in lbs
    unsigned short height;   //Measured in inches
    float bmi;      //Body Mass Index
    
    //Program title
    cout<<"\"Body Mass Index\""<<endl;
    
    //Prompt the User for Input
    cout<<"Please enter your weight in lbs, then height in inches, separated by a single space:"<<endl;
    cin>>weight>>height;
    
    //Calculate
    bmi = (weight * 703.0f) / (height * height);
    
    //Output whether BMI is good or bad
    if (18.5 < bmi && bmi < 25.0)
    {
        cout<<"You are at an optimal weight with a BMI of "<<bmi<<endl;
    } else if (bmi < 18.5)
    {
        cout<<"You are underweight with a BMI of "<<bmi<<endl;
    } else if (bmi > 25.0)
    {
        cout<<"You are overweight with a BMI of "<<bmi<<endl;
    }
    
    //Exit Stage Right!
        return 0;
    }



