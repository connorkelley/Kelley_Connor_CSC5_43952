/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on May 7, 2015, 11:51 AM
 * Purpose: Assignment 6: 2. Rainfall Statistics
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE = 13;//Size of the array
    int rnFall[SIZE];   //Initialization and name of the array
    int sum;            //To calculate total rainfall per year
    float rnAvg;          //To calculate the average rainfall per year
    //Prompt for User Input
    cout<<"Please enter the total rainfall for each of the following months in inches:"<<endl;
    for(int month = 1; month < SIZE; month++){
        cout<<"Month "<<month<<": ";
        cin>>rnFall[month];
    }
    //Calculate the total rainfall for the year
    for(int month =1; month < SIZE; month++){
        sum += rnFall[month];
    }
    //Calculate the Average rainfall for the year
    rnAvg = sum/12.0f;
    //Determine the months with the highest and lowest rainfall amount
    int low  = rnFall[1];
    int high = rnFall[2];
    int maxIndx, minIndx;   //The index value of the highest and lowest amounts
    for(int month = 1; month < SIZE; month++){
        if(rnFall[month] < low){
            low = rnFall[month];
            minIndx = month;
        }
        if(rnFall[month] > high){
            high = rnFall[month];
            maxIndx = month;
        }
    }
    //Output the Results
    cout<<endl<<"The total rainfall for the year was: "<<sum<<" inches."<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The average rainfall for the year was: "<<rnAvg<<" inches."<<endl;
    cout<<"The lowest amount of rainfall was "<<low<<" during month "<<minIndx<<"."<<endl;
    cout<<"The highest amount of rainfall was "<<high<<" during month "<<maxIndx<<"."<<endl;
    //Exit Stage Right!
    return 0;
}

