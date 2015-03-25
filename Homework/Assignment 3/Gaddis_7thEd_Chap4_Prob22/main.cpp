/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on March 25, 2015, 8:48AM
 * Purpose:  Homework Assignment 3 - 8th Problem - Cable Bill
 */

//System Libraries
#include <iostream> //I/O Standard
#include <fstream>  //I/O File
#include <iomanip>  //Formatting
using namespace std;

//User Libraries

//Global Constants
    
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    ofstream out;
    float vwdHrs;   //Hours Viewed
    char package;   //Package Type (AaBbCc)
    const int SIZE = 40;  //Max size of name = 39 characters  
    char name[SIZE];      //Customer Name
    float bill;     //Cable Bill in $'s
    
    //Program title
    cout<<"\"Cable Bill\""<<endl;
    
    //Open the File
    out.open("Cable.dat");
    
    //Prompt User for Input
    cout<<"How many hours did you view this month?"<<endl;
    cin>>vwdHrs;
    cout<<"What is your package? A, B, C"<<endl;
    cin>>package;
    cout<<"What is the customer's name?"<<endl;
    cin.ignore();
    cin.getline(name, SIZE);     
    
    //Calculate the Bill
    switch (package)
    {
        case 'A':
        case 'a':{
            bill=9.95;
            if (vwdHrs > 10) bill += 2 * (vwdHrs - 10);
            break;
        }
        case 'B':
        case 'b':{
            bill=14.95;
            if (vwdHrs > 20) bill += (vwdHrs - 20);
            break;
        }
        case 'C':
        case 'c':{
            bill=19.95;
            break;
        }
        default: cout<<"Wrong package chosen"<<endl;
    }
    
    //Output Results to File
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"Your cable bill from CSC5 RCC Programming Class"<<endl;
    out<<"Customer Name: "<<name<<endl;
    out<<"Package: "<<package<<endl;
    out<<"Hours Viewed: "<<vwdHrs<<endl;
    out<<"Amount Due: "<<bill<<endl;
    
    //Close the File
    out.close();
    
    //Exit Stage Right!
        return 0;
    }



