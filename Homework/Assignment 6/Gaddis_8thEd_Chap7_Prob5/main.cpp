/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on May 11, 2015, 9:08 AM
 * Purpose: Assignment 6: 5. Monkey Business
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
    //3x5 Array where each row represents a different monkey and each column represents a different day of the week
    
    const int mnkyNum = 3;  //3 Rows
    const int weekDay = 5;  //5 Columns
    int mnkyAry[mnkyNum][weekDay] = {};  //3x5 Array
    int total, mnkyAvg, small, big;
    
    //Input data for each monkey
    cout<<"Enter the amount of food eaten per day by each of the following monkeys:"<<endl;
    for(int mnky =0; mnky < mnkyNum; mnky++){
        for(int day =0; day < weekDay; day++){
            cout<<"Monkey "<<(mnky+1)<<", Weekday "<<(day+1)<<": ";
            cin>>(mnkyAry[mnky][day]);
        }
    }
    //Create a report that includes 
    //Average amount of food per day by the whole family of monkeys
    for (int row = 0; row < mnkyNum; row++){
        total = 0;
        //Sum the Row
        for (int col = 0; col < weekDay; col++) total += mnkyAry[row][col];
        mnkyAvg = total / weekDay;
        cout<<"Average amount of food eaten for monkey "<<(row+1)<<": "<<mnkyAvg<<endl;
    }
    //Calculate the most and least amount of food eaten by any one monkey
    small = mnkyAry[0][0];
    big = mnkyAry[0][0];
    for (int row = 0; row < mnkyNum; row++){
        for (int col = 0; col < weekDay; col++){
            if(mnkyAry[row][col] < small) small = mnkyAry[row][col];
            if(mnkyAry[row][col] > big)   big   = mnkyAry[row][col];
        }
    }
    //Least amount of food eaten during the week by any one monkey
    cout<<"The least amount of food eaten by any monkey was "<<small<<"."<<endl;
    //Greatest amount of food eaten during the week by any one monkey
    cout<<"The most  amount of food eaten by any monkey was "<<big<<"."<<endl;
    
    //Exit Stage Right!
    return 0;
}

