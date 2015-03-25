/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on March 24, 2015, 9:11PM
 * Purpose:  Homework Assignment 3 - 7th Problem - Roman Numeral Converter
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
    
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short num;
    
    //Program title
    cout<<"\"Roman Numeral Converter\""<<endl;
    
    //Input
    cout<<"Please enter a number between 1 and 10:"<<endl;
    cin>>num;
    
    //Output  
    switch (num)
    {
        case 1: cout <<"1 is equal to Roman Numeral \'I\'\n";
                break;
        case 2: cout <<"2 is equal to Roman Numeral \'II\'\n";
                break;
        case 3: cout <<"3 is equal to Roman Numeral \'III\'\n";
                break;
        case 4: cout <<"4 is equal to Roman Numeral \'IV\'\n";
                break;
        case 5: cout <<"5 is equal to Roman Numeral \'V\'\n";
                break;
        case 6: cout <<"6 is equal to Roman Numeral \'VI\'\n";
                break;        
        case 7: cout <<"7 is equal to Roman Numeral \'VII\'\n";
                break;        
        case 8: cout <<"8 is equal to Roman Numeral \'VIII\'\n";
                break;        
        case 9: cout <<"9 is equal to Roman Numeral \'IX\'\n";
                break;        
        case 10: cout <<"10 is equal to Roman Numeral \'X\'\n";
                break;        
        default: cout <<"Sorry, you did not enter a number between 1 and 10.\n";                    
    }  
    //Exit Stage Right!
        return 0;
    }



