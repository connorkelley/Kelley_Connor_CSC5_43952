/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on March 9, 2015, 12:03 PM
 * Purpose:  Homework Assignment 2 - 4th Problem - Test Average
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
        float test1, test2, test3, test4, test5, testAVG;
    
    //Input
        cout<<"Test Average Assignment"<<endl;
        cout<<"Please enter five test scores, each separated by a single space."<<endl;
        cin>>test1>>test2>>test3>>test4>>test5;

    //Calculate 
        testAVG = (test1+test2+test3+test4+test5) / 5;
    
    //Output 
        cout<<setprecision(1)<< fixed;
        cout<<"The average of the five test scores that you entered is: "<<testAVG<<"."<<endl;
                   
    //Exit Stage Right!
        return 0;
}

