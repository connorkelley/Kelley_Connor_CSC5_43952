/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on March 19, 2015, 10:33AM
 * Purpose:  Homework Assignment 3 - 2nd Problem - Math Tutor
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
    unsigned short temp1 = rand() % 1000 + 1; //Random number
    unsigned short temp2 = rand() % 1000 + 1; //Random number
    unsigned short ans, userAns; //The answer, User's entered answer
        
    //Calculate 
    ans = temp1 + temp2; //Sum of two random numbers
    
    //Output   
    cout<<setw(7)<<temp1<<endl;
    cout<<"+"<<setw(6)<<temp2<<endl;
    cout<<"_______"<<endl;
    cout<<"Please enter answer to continue."<<endl;
    cin>>userAns;
    
    if (userAns == ans) //If user enters the correct answer
    {
        cout<<"CONGRATULATIONS! You entered the correct answer!";
    } else { //If user does not enter the correct answer
        cout<<"You entered the incorrect answer."<<endl;
        cout<<setw(7)<<temp1<<endl;
        cout<<"+"<<setw(6)<<temp2<<endl;
        cout<<"_______"<<endl;
        cout<<setw(7)<<ans<<endl;
    }

    //Exit Stage Right!
        return 0;
}

