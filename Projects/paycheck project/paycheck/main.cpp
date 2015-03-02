/* 
 * File:    main.cpp
 * Author:  Connor Kelley
 * Purpose: Input/Process/Output and Flowchart!!!
 * Created on February 23, 2015, 9:55 AM
 */

//System Libraries
#include <iostream>//I/O Library
using namespace std;//I/O Library under std namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!!!
int main(int argc, char** argv) {
    //Declare variables
    //Inputs:
    //  Pay Rate = payRate -> $'s/hour
    //  Hours worked = hrsWrkd -> hrs
    //Output:
    //  Gross pay check amount = payChk ->$'s
    float payRate, hrsWrkd, payChk;
    //Prompt the user for inputs
    cout<<"This program calculates your gross Paycheck"<<endl;
    //Give them the format to enter the amount as
    cout<<"Input your pay rate as $xx.xx, provide the x's"<<endl;
    cin>>payRate;
    cout<<"Input your hours worked during this pay period"<<endl;
    cout<<"Format xxx.x, provide the x's"<<endl;
    cin>> hrsWrkd;
    //Calculate the paycheck
    payChk = payRate * hrsWrkd;
    //Output the results
    cout<<"$"<<payChk<<" = $"<<payRate<<"/hr * "<<hrsWrkd<<"(hrs) "<<endl;
    //Exit Stage Right!
    
    return 0;
}