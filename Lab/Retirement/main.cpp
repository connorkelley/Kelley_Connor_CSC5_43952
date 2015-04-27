/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on April 27, 2015, 8:11 AM
 * Purpose: Calculate Retirement
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float rtirmnt(float, float, int, float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float pv=0.0f;  //Present Value $'s
    float ir=0.05f; //Interest Rate %/yr
    float fdep=0.20f;    //Babylonians say 10%
    float salary=100000; //Salary in $'s/yr
    //Calculate our SAvings Required
    float savReq=salary/ir; //Savings required $'s
    //Output all initial Conditions
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Investment Rate from municipal bonds = "<<ir*100<<"%"<<endl;
    cout<<"Salary = $"<<salary<<endl;
    cout<<"Yearly retirement saved = $"<<salary*fdep<<endl;
    cout<<"Savings required to retire = $"<<savReq<<endl;
    cout<<endl<<"Year\tRetirement Savings"<<endl;
    //Output our yearly retirement savings
    float retSave;
    for (int year=1;retSave<savReq;year++){
        retSave = rtirmnt(pv, ir, year, salary*fdep);
        cout<<setw(4)<<year<<setw(13)<<retSave<<endl;
    }
    //Exit Stage Right!
    return 0;
}

//Function for Future Value Calculation
//Inputs
//  p-> Present Value ($'s)
//  i-> Interest Rate %/Compounding Period
//  n-> Compounding Period (years)
//  d-> Deposit Yearly
//Outputs
//  fv-> Future Value ($'s)

float rtirmnt(float p, float i, int n, float d){
    for(int year=1;year<=n;year++){
        p*=(1+i);
        p+=d;
    }
    return p;
}