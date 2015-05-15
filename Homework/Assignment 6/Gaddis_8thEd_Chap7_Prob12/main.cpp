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
            total1 += stdnt1[count];
    }
    //Student 2
    cout<<"Enter student name: ";
    cin>>names[1];
    for(int count = 0; count < (SIZE-1); count++){
            cout<<"Enter test score "<<(count+1)<<" ";
            cin>>stdnt2[count];    
            total2 += stdnt2[count];
    }
    //Student 3
    cout<<"Enter student name: ";
    cin>>names[2];
    for(int count = 0; count < (SIZE-1); count++){
            cout<<"Enter test score "<<(count+1)<<" ";
            cin>>stdnt3[count];
            total3 += stdnt3[count];
    }
    //Student 4
    cout<<"Enter student name: ";
    cin>>names[3];
    for(int count = 0; count < (SIZE-1); count++){
            cout<<"Enter test score "<<(count+1)<<" ";
            cin>>stdnt4[count];    
            total4 += stdnt4[count];
    }
    //Student 5
    cout<<"Enter student name: ";
    cin>>names[4];
    for(int count = 0; count < (SIZE-1); count++){
            cout<<"Enter test score "<<(count+1)<<" ";
            cin>>stdnt5[count];  
            total5 += stdnt5[count];
    }
    
    //Calculate the average score for each student
    int avg1, avg2, avg3, avg4, avg5;
    
    avg1 = total1 / 4;
    avg2 = total2 / 4;
    avg3 = total3 / 4;
    avg4 = total4 / 4;
    avg5 = total5 / 4;
    
    
    cout<<"For student "<<names[0]<<":"<<endl;
    cout<<"Average test score: "<<avg1<<endl;
    if(avg1 >= 70){
        cout<<"You passed."<<endl;
    } else cout<<"YOU FAILED."<<endl;
    cout<<"For student "<<names[1]<<":"<<endl;
    cout<<"Average test score: "<<avg2<<endl;
    if(avg2 >= 70){
        cout<<"You passed."<<endl;
    } else cout<<"YOU FAILED."<<endl;
    cout<<"For student "<<names[2]<<":"<<endl;
    cout<<"Average test score: "<<avg3<<endl;
    if(avg3 >= 70){
        cout<<"You passed."<<endl;
    } else cout<<"YOU FAILED."<<endl;
    cout<<"For student "<<names[3]<<":"<<endl;
    cout<<"Average test score: "<<avg4<<endl;
    if(avg4 >= 70){
        cout<<"You passed."<<endl;
    } else cout<<"YOU FAILED."<<endl;
    cout<<"For student "<<names[4]<<":"<<endl;
    cout<<"Average test score: "<<avg5<<endl;
    if(avg5 >= 70){
        cout<<"You passed."<<endl;
    } else cout<<"YOU FAILED."<<endl;
    



    
    //Exit Stage Right!
    return 0;
}

