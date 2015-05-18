/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on May 18, 2015, 9:55 AM
 * Purpose: Homework Assignment 6: 1. Charge Account Validation
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
    const int SIZE = 18;
    int array[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                       8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                       1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    int num, sum = 0;
    
    //Prompt the User for input
    cout<<"Please enter your charge account number; ";
    cin>>num;
    
    //Validate the account number
    for(int count = 0; count < SIZE; count++){
        if(num == array[count]){
            cout<<endl<<"Account number "<<array[count]<<" is valid."<<endl;
            sum++;
        } 
    }
    if(sum == 0){
        cout<<endl<<"The account number that you entered is not a valid account."<<endl;
    }
    
    //Exit Stage Right!
    return 0;
}