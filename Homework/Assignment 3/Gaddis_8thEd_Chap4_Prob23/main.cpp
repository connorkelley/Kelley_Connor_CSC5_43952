/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on March 25, 2015, 10:31AM
 * Purpose:  Homework Assignment 3 - 9th Problem - Geometry Calculator
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
    char prob;  //Signifies what problem the switch solves
    float area, radius, length, width, height, base;
    
    //Program title
    cout<<"\"Geometry Calculator\""<<endl;
    
    //Prompt the User for Input
    cout<<"1. Calculate the Area of a Circle"<<endl;
    cout<<"2. Calculate the Area of a Rectangle"<<endl;
    cout<<"3. Calculate the Area of a Triangle"<<endl;
    cout<<"4. Quit"<<endl;
    cin>>prob;
    
    //Output the Problem selected   
    switch (prob)
    {
        case '1': cout <<"You have selected \"Calculate the Radius of a Circle\""<<endl;
                //Prompt the User for Input
                cout<<"Please enter a radius number: "<<endl;
                cin>>radius;
                
                //Calculate
                area = 3.14159 * (radius * radius);
                
                //Output
                cout<<"The area of your circle is: "<<area;
        
                break;
        case '2': cout <<"You have selected \"Calculate the Area of a Rectangle\""<<endl;
                //Prompt the User for Input
                cout<<"Please enter a length, then a width, separated by a single space:"<<endl;
                cin>>length>>width;
                
                //Calculate
                area = length * width;
                
                //Output
                cout<<"The area of your rectangle is: "<<area;
                
                break;
        case '3': cout <<"You have selected \"Calculate the Area of a Triangle\""<<endl;
                //Prompt the User for Input
                cout<<"Please enter a base, then a height, separated by a single space:"<<endl;
                cin>>base>>height;
                
                //Calculate
                area = base * height * 0.5f;
                
                //Output
                cout<<"The area of your triangle is: "<<area;
                
                break;
        case '4': cout <<"You have quit the program.";
                break;
        default: cout <<"You did not enter a number between 1 and 4.\n";                    
    }  
    //Exit Stage Right!
        return 0;
    }



