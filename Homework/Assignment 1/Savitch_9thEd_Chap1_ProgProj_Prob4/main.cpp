/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on March 2, 2015, 9:07 AM
 * Purpose: Free Fall Problem from Savitch
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//The "f" at the end of the variable declarations means it is a float
const float G = 3.2174e1f; //Acceleration in ft/sec^2 on Earth
const float CNVFTMT = 3.048e-1f;//Conversion from feet to meters

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float time, dstnce;
    
    //Prompt for time
    cout<<"Free Fall Problem"<<endl;
    cout<<"Input the time to drop x.xx (seconds)"<<endl;
    cin>>time;
    
    //Calculate the distance
    //Any of these work:
    //dstnce = static_cast<float>(1)/2*G*time*time;
    //dstnce = 1.0f/2*G*time*time;
    //dstnce = 1/2.0f*G*time*time;
    dstnce = G*1/2*time*time;
    
    //dstnce = 1/2*G*time*time //Does not work -- 
    //An integer divided by a larger integer will output an integer which is "0"
    
    //Output the results
    cout<<"Distance fallen = "<<dstnce<<" (feet)"<<endl;
    cout<<"Distance fallen = "<<dstnce*CNVFTMT<<" (meters)"<<endl;
    
    //Exit stage right!    
    return 0;
}

