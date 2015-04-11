/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on April 2, 2015, 4:55 PM
 * Purpose: Homework Assignment 4 - 3rd Problem - 4. Calories Burned
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
    float cal = 3.6, sum;    //Calories burned per minute on a treadmill
    
    //Loop to desired value
    for(int counter =5; counter <=30; counter+=5){ //'x' = minutes on the treadmill
        sum = cal*counter;
        cout<<"After "<<counter<<" minutes, you will burn "<<sum<<" calories on the treadmill."<<endl;    
    }
    
    //Exit Stage Right!
    return 0;
}

