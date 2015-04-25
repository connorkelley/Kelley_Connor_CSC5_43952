/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on April 20, 2015, 10:50 AM
 * Purpose: Homework Assignment 5: 3. Winning Division
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
unsigned short getSales(string div);
void findHighest(unsigned short salefig);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    
    //Call Functions
    getSales("Northeast");
    getSales("Southeast");
    getSales("Northwest");
    getSales("southwest");
    //findHighest();
    
    //Exit Stage Right!
    return 0;
}

unsigned short getSales(string div){  
    //Declare Variables
    unsigned short salefig;
    //Ask the user for a quarterly sales figure
    cout<<"What is the quarterly sales figure for the "<<div<<" division?"<<endl;
    cin>>salefig;
    //Validates the input (Nothing less than $0.00)
    if (salefig > 0){
    //cout<<"The quarterly sales figure for the "<<div<<" division is $"<<salefig<<endl;
        findHighest(salefig);
    } else cout<<"You did not enter a sales figure above $0.00"<<endl;
    return 0;
}

void findHighest(unsigned short salefig){
    //Declare Variables
    unsigned short highest;
    //Is passed the four sales totals
    //Determines which is the largest
    if (salefig >= 0){
        salefig = highest;
    } 
    //Prints the name of the high grossing division & Sales Figure
}