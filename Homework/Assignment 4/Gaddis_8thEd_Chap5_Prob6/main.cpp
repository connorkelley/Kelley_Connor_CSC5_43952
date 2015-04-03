/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on April 2, 2015, 5:09 PM
 * Purpose: Homework Assignment 4 - 4th Problem - 6. Distance Traveled
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
    int dist, speed, tHours;
    
    
    //Prompt the user for input
    cout<<"Please enter a speed (in miles per hour): "<<endl;
    cin>>speed;
    cout<<"Please enter a number of hours: "<<endl;
    cin>>tHours;
    
    //For loop to indicate how far the vehicle traveled from origin per hour
    if((speed >= 0)&&(tHours > 0)){
        cout<<"Hour\tDistance Traveled"<<endl;
        cout<<"-------------------------"<<endl;
        for(int counter =1; counter <= tHours; counter++){
            dist = speed*counter;
            cout<<counter<<"\t"<<dist<<endl;    
        }
    } else {
        cout<<"You did not enter positive numbers for speed or hours. "<<endl;
    }
    
    //Exit Stage Right!
    return 0;
}

