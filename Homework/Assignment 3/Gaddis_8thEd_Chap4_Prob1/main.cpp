/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on March 18, 2015, 10:13 AM
 * Purpose: Homework Assignment 3 - 1st Problem - Minimum/Maximum
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
    unsigned short num1, num2;
    
    //Title 
    cout<<"\"Minimum/Maximum\""<<endl;
    //Input
    cout<<"Please enter two integers, separated by a single space."<<endl;
    cin>>num1>>num2;
    
    //Output Option 1
    cout<<"The larger number is "<<(num1>num2?num1:num2)<<"."<<endl;
    cout<<"The smaller number is "<<(num1<num2?num1:num2)<<".";
    
    //Output Option 2
    //if (num1>num2)
    //{
    //    cout<<"The larger number is "<<num1<<"."<<endl;
    //    cout<<"The smaller number is "<<num2<<".";
    //} else {
    //    cout<<"The larger number is "<<num2<<"."<<endl;
    //    cout<<"The smaller number is "<<num1<<".";
    //}
    
    //Exit Stage Right!
    return 0;
}

