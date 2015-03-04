/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on March 4, 2015, 8:23 AM
 * Purpose: 5th Homework Problem - Triangle Pattern 
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
    char c;
    
    //Input 
    cout<<"What character would you like to use to make a triangle?"<<endl;
    cin>>c;
    
    //Output Triangle Pattern
    cout<<"   "<<c<<endl;
    cout<<"  "<<c<<c<<c<<endl;
    cout<<" "<<c<<c<<c<<c<<c<<endl;
    cout<<c<<c<<c<<c<<c<<c<<c<<endl;
                    
    //Exit Stage Right!
    return 0;
}

