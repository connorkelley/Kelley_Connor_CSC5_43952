/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on April 6, 2015, 9:35 AM
 * Purpose: Homework Assignment 4 - Problem 17. Sales Bar Chart
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
    unsigned int sales1, sales2, sales3, sales4, sales5, store, bar;
    
    //Prompt the user for input
    cout<<"Please enter the sales for store 1: ";
    cin>>sales1;
    cout<<"Please enter the sales for store 2: ";
    cin>>sales2;
    cout<<"Please enter the sales for store 3: ";
    cin>>sales3;
    cout<<"Please enter the sales for store 4: ";
    cin>>sales4;
    cout<<"Please enter the sales for store 5: ";
    cin>>sales5;
    
    //For loop to display the bar graphs
    unsigned short stars1 = sales1/100;
    unsigned short stars2 = sales2/100;
    unsigned short stars3 = sales3/100;
    unsigned short stars4 = sales4/100;
    unsigned short stars5 = sales5/100;
    
    cout<<"SALES BAR CHART \n (Each * = $100)"<<endl;
    for (store = 1; store <= 5; store++){   //Makes 5 rows
        cout<<"Store "<<store<<": ";    
        for(int x; x < stars1; x++){
            cout<<'*';
        }   cout<<endl;
        for(int x; x < stars2; x++){
            cout<<'*';
        }   cout<<endl;
        for(int x; x < stars3; x++){
            cout<<'*';
        }   cout<<endl;
        for(int x; x < stars4; x++){
            cout<<'*';
        }   cout<<endl;
        for(int x; x < stars5; x++){
            cout<<'*';
        }   cout<<endl;
        }
    
    //Exit Stage Right!
    return 0;
}

