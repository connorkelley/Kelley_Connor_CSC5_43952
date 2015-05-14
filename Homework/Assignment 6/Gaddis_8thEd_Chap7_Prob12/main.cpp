/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on May 14, 2015, 11:33 AM
 * Purpose: Homework Assignment 6: 12. Grade Book
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
    const int SIZE = 5;
    //Declare Arrays
    string names[SIZE]   = {};
    float stdnt1[SIZE-1] = {};
    float stdnt2[SIZE-1] = {};
    float stdnt3[SIZE-1] = {};
    float stdnt4[SIZE-1] = {};
    float stdnt5[SIZE-1] = {};
    
    float total1, total2, total3, total4, total5;
    
    //Prompt the user for input
    //Student 1
    cout<<"Enter student name: ";
    cin>>names[0];
    for(int count = 0; count < (SIZE-1); count++){
            cout<<"Enter test score "<<(count+1)<<" ";
            cin>>stdnt1[count];    
            total += stdnt1[count];
    }
    //Student 2
    cout<<"Enter student name: ";
    cin>>names[1];
    for(int count = 0; count < (SIZE-1); count++){
            cout<<"Enter test score "<<(count+1)<<" ";
            cin>>stdnt2[count];    
            total += stdnt2[count];
    }
    //Student 3
    cout<<"Enter student name: ";
    cin>>names[2];
    for(int count = 0; count < (SIZE-1); count++){
            cout<<"Enter test score "<<(count+1)<<" ";
            cin>>stdnt3[count];
            total += stdnt3[count];
    }
    //Student 4
    cout<<"Enter student name: ";
    cin>>names[3];
    for(int count = 0; count < (SIZE-1); count++){
            cout<<"Enter test score "<<(count+1)<<" ";
            cin>>stdnt4[count];    
            total += stdnt4[count];
    }
    //Student 5
    cout<<"Enter student name: ";
    cin>>names[4];
    for(int count = 0; count < (SIZE-1); count++){
            cout<<"Enter test score "<<(count+1)<<" ";
            cin>>stdnt5[count];  
            total += stdnt5[count];
    }
    





    
    //Exit Stage Right!
    return 0;
}

