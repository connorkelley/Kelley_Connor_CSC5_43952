/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on March 5, 2015, 10:42 AM
 * Purpose: 8th Homework Problem - Miles per Gallon 
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
    unsigned short gTank, dTank, mPG;
    gTank = 15;
    dTank = 375;
    
    //Calculate 
    mPG = dTank / gTank;
    
    //Output
    cout<<"Miles per Gallon Assignment"<<endl;
    cout<<"A car that holds "<<gTank<<" gallons of fuel and travels "
            <<dTank<<" miles per tank will have an MPG of "<<mPG<<"."<<endl;
    
    
    //Exit Stage Right!
    return 0;
}

