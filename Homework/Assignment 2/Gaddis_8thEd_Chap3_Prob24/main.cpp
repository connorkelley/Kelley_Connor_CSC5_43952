/* 
 * File:   main.cpp
 * Author: Connor Kelley <kelleyconnor@outlook.com>
 * Created on March 7, 2015, 8:33 PM
 * Purpose: Homework Assignment 2 - 2nd Problem - Word Game
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
//Declare Variables
    string name, age, city, college, prof, animal, petName;
    
    
//Input 
    cout<<"Please enter your name:"<<endl;
    getline(cin, name);
    cout<<"Please enter your age in the following format: xx"<<endl;
    getline(cin, age);
    cout<<"Please enter the name of a city:"<<endl;
    getline(cin, city);
    cout<<"Please enter the name of a college:"<<endl;
    getline(cin, college);
    cout<<"Please enter a profession:"<<endl;
    getline(cin, prof);
    cout<<"Please enter a type of animal:"<<endl;
    getline(cin, animal);
    cout<<"Please enter a pet's name:"<<endl;
    getline(cin, petName);

//Output
    cout<<"There once was a person named "<<name<<" who lived in "<<city
        <<". At the age of "<<age<<", "<<name<<" went to college at "<<college
        <<". "<<name<<" graduated and went to work as a "<<prof<<". Then, "
        <<name<<" adopted a(n) "<<animal<<" named "<<petName<<". They both lived happily ever after!"<<endl;
            
//Exit Stage Right!
    return 0;
}

