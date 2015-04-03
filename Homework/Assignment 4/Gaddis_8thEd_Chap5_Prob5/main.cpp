/* 
 * File:   main.cpp
 * Author: Connor Kelley 
 * Created on April 2, 2015, 6:48 PM
 * Purpose: Homework Assignment 4 - 5th Problem - 5. Membership Fees Increase
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Variables

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short memFee = 2500, sum;   //Current rate charged to country club members
    float incAmt = 0.04;     //Amount to increase
    
    //Loop to calculate rate increase over the next six years
    for(int counter =1; counter <= 6; counter++){
        sum = memFee*incAmt*counter+memFee;
        cout<<"The projected rate for "<<counter<<" year from now is "<<sum<<"."<<endl;    
    }          
    
    //Exit Stage Right!
    return 0;
}

