/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on March 16, 2015, 10:47AM
 * Purpose:  Homework Assignment 2 - 9th Problem - Math Tutor
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
    
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned seed = time(0); //Get the system time
    srand(seed); //Seed the random number generator
    char ch;
    unsigned short temp1 = rand() % 100 + 1;
    unsigned short temp2 = rand() % 100 + 1;
    unsigned short ans;
        
    //Calculate 
    ans = temp1 + temp2;
    
    //Output   
    cout<<setw(7)<<temp1<<endl;
    cout<<"+"<<setw(6)<<temp2<<endl;
    cout<<"_______"<<endl;
    cout<<"Please press enter to reveal answer."<<endl;
    cin.get(ch);
    cout<<setw(7)<<temp1<<endl;
    cout<<"+"<<setw(6)<<temp2<<endl;
    cout<<"_______"<<endl;
    cout<<setw(7)<<ans<<endl;
    
    
    
    
    
    
    //Exit Stage Right!
        return 0;
}

