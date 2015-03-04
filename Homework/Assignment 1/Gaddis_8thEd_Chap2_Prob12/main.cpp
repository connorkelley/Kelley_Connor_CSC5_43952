/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on March 4, 2015, 8:23 AM
 * Purpose: 6th Homework Problem - Land Calculation 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const unsigned short OAOL = 43560;

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    long lndTrk = 391876;   //In square feet
    
    //Calculate 
    long nwLndTrk = static_cast<float>(lndTrk)/OAOL+0.5; //Round up
    
    //Output
    cout<<"Land Calculation Assignment"<<endl;
    cout<<"A track of land with "<<lndTrk<<" square feet is "<<nwLndTrk<<" acres."<<endl;
             
    //Exit Stage Right!
    return 0;
}

