/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on April 27, 2015, 9:03 AM
 * Purpose: Calculate Finance
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float blnPmnt(float, float, int, float); //For-Loop

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float purPrce = 1e4f;   //Purchase Price $10,000
    float dwnPymt = 1e-1f;  //Down Payment % of Purchase Price
    float intRate = 3.29e-2;//Interest Rate per Year
    int   nMnths  = 60;     //Number of months
    float mPaymnt = 1.65421e2f;   //Monthly Payment
    
    //Calculate the amount to finance
    float finance = purPrce*(1-dwnPymt);
    
    //Output all the initial conditions
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"Purchase Price    = $"<<purPrce<<endl;
    cout<<"Down Payment      = $"<<purPrce*dwnPymt<<endl;
    cout<<"Interest Rate     =  "<<intRate*100<<"%"<<endl;
    cout<<"Months to Finance =  "<<nMnths<<endl;
    cout<<"Amount Financed   = $"<<finance<<endl;
    
    //Balloon Payment and Monthly Payment
    cout<<"Monthly Payment   = $"<<mPaymnt<<endl;
    cout<<"Balloon Payment   = $"<<blnPmnt(finance, intRate/12, nMnths, mPaymnt)<<endl;
    
    //Exit Stage Right!
    return 0;
}


//Balloon Payment Function
//Input
//  f-> Financed Amount in Dollars
//  i-> Interest Rate per Month
//  n-> Number of Months
//  p-> Monthly Payment
//Output
//  bln-> Balloon Payment in Dollars


float blnPmnt(float f, float i, int n, float p){
    for(int month=1;month<n;month++){
        f*=(1+i);   //Increase due to the interest rate
        f-=p;       //Decrease due to the payment
    }
    return f;
}