/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on April 8, 2015, 9:35 AM
 * Purpose: Homework Assignment 4 - Problem 13. The Greatest and Least of these
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
    int num,    //Entered Number
        maxNum,     //Maximum Number
        minNum;     //Minimum Number
    
    //Program Title
    cout<<"\"The Greatest and Least of These\""<<endl;
    
    //Do-While Loop 
    while (num != -99){
        cout<<"Please enter an integer (Enter -99 to exit)."<<endl;
        cin>>num;
        if(num > maxNum){
            maxNum = num;
        } 
        if (num < minNum){
            minNum = num;
        } 
        if (num == -99){
            break;
        }
    }
    //Output the Results
    cout<<endl<<"Smallest Number: "<<minNum<<endl;
    cout<<"Greatest Number: "<<maxNum<<endl;
    
    //Exit Stage Right!
    return 0;
}