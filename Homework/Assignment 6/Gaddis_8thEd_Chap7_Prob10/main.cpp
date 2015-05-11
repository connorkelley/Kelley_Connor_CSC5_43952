/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on May 11, 2015, 4:19 PM
 * Purpose: Homework Assignment 6: 10. Driver's License Exam
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
    const int SIZE = 20;
    //Initialize the Array to Correct Answers
    char ansKey[SIZE] = {'A', 'D', 'B', 'B', 'C', 
                         'B', 'A', 'B', 'C', 'D',
                         'A', 'C', 'D', 'B', 'D',
                         'C', 'C', 'A', 'D', 'B'};
    //Initialize the User's Array
    char userKey[SIZE] = {};
    
    //Prompt the User for input
    cout<<"Please enter your responses for the following questions:"<<endl;
    cout<<"Answers must be A, B, C, or D"<<endl;
    for(int count=0; count < SIZE; count++){
        cout<<(count+1)<<".";
        cin>>userKey[count];
    }
    
    
    
    //Exit Stage Right!
    return 0;
}

