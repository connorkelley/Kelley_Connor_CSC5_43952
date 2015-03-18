/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on March 17, 2015, 3:15 PM
 * Purpose:  Homework Assignment 2 - 10th Problem - Celsius to Fahrenheit
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
    float c, f;
    
    
    //Input
    cout<<"\"Celsius to Fahrenheit\" Assignment."<<endl;
    cout<<"Please enter the temperature (Celsius) to be converted to Fahrenheit."<<endl;
    cin>>c;
        
    //Calculate 
    f = c * 9 / 5 + 32;
    
    //Output 
    cout<<"The temperature in degrees Fahrenheit is "<<f<<"."<<endl;
                   
    //Exit Stage Right!
        return 0;
}

