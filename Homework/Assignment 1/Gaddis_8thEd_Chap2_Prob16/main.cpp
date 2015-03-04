/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on March 4, 2015, 8:23 AM
 * Purpose: 3rd Homework Problem - Diamond Pattern 
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
    
    //Input character for Diamond Pattern
    cout<<"What character would you like to make a diamond patten with?"<<endl;
    cin>>c;
    
    //Output Diamond Pattern
    cout<<"   "<<c<<endl;
    cout<<"  "<<c<<c<<c<<endl;
    cout<<" "<<c<<c<<c<<c<<c<<endl;
    cout<<c<<c<<c<<c<<c<<c<<c<<endl;
    cout<<" "<<c<<c<<c<<c<<c<<endl;
    cout<<"  "<<c<<c<<c<<endl;        
    cout<<"   "<<c<<endl;        
                    
    //Exit Stage Right!
    return 0;
}

