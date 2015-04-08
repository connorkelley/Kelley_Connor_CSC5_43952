/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on April 8, 2015, 9:24 AM
 * Purpose:  Homework Assignment 4 - 12th Problem - Celsius to Fahrenheit Table
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
    float f;
   
    //Title
    cout<<"\"Celsius to Fahrenheit Table\" Assignment 4."<<endl;
    
    //Loop to display Celsius Temperatures 0-20
    cout<<"Celsius\tFahrenheit\n-----------------"<<endl;
    for(int count =0; count <=20; count++){
        f = count*9/5 + 32;
        cout<<count<<"\t"<<f<<endl;    
    }
    
    //Exit Stage Right!
        return 0;
}

