/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on April 27, 2015, 10:06 AM
 * Purpose: Calculate Finance in Equal Payments
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
float eqlPmnt(float, float, int);        //For-Loop
float eqlPmnt1(float, float, int);       //For-Loop

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float purPrce = 1e4f;   //Purchase Price $10,000
    float dwnPymt = 1e-1f;  //Down Payment % of Purchase Price
    float intRate = 3.29e-2;//Interest Rate per Year
    int   nMnths  = 60;     //Number of months
    float penny   = 0.01f;  //Value of a Penny
    float halfPny = 0.005f; //Value of half a Penny
    
    
    //Calculate the amount to finance
    float finance = purPrce*(1-dwnPymt);
    
    //Output all the initial conditions
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"Purchase Price    = $"<<purPrce<<endl;
    cout<<"Down Payment      = $"<<purPrce*dwnPymt<<endl;
    cout<<"Interest Rate     =  "<<intRate*100<<"%"<<endl;
    cout<<"Months to Finance =  "<<nMnths<<endl;
    cout<<"Amount Financed   = $"<<finance<<endl;
    
    //Calculate the Monthly Payment without Interest
    float mnPmnt  = finance/nMnths; //Payment without Interest
    //Calculate the Balloon Payment tending to zero
    float bln = 0, incrmnt=0;
    do{
        mnPmnt += incrmnt;
        mnPmnt  = static_cast<int>((mnPmnt+halfPny)*100)/100.0f;
        bln = blnPmnt(finance, intRate/12, nMnths, mnPmnt); //Exact Pennies
        incrmnt = bln/nMnths;
    } while (incrmnt>penny||incrmnt<-penny);
    
    //Balloon Payment and Monthly Payment
    cout<<fixed<<setprecision(4)<<showpoint<<endl;
    cout<<"Monthly Payment   = $"<<mnPmnt<<endl;
    cout<<"Balloon Payment   = $"<<bln<<endl;
    
    //Equal Monthly Payment Calculator
    cout<<fixed<<setprecision(4)<<showpoint<<endl;
    cout<<"Monthly Payment   = $"<<eqlPmnt(finance, intRate/12, nMnths)<<endl;
    
    //Equal Payment 1 Equation
    cout<<fixed<<setprecision(4)<<showpoint<<endl;
    cout<<"Monthly Payment   = $"<<eqlPmnt1(finance, intRate/12, nMnths)<<endl;
    
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

float eqlPmnt(float f, float i, int n){
    //Calculate the Monthly Payment without Interest
    float mnPmnt  = f/n; //Payment without Interest
    float penny   = 0.01f;  //Value of a Penny
    float halfPny = 0.005f; //Value of half a Penny
    //Calculate the Balloon Payment tending to zero
    float bln = 0, incrmnt=0;
    do{
        mnPmnt += incrmnt;
        mnPmnt  = static_cast<int>((mnPmnt+halfPny)*100)/100.0f;
        bln = blnPmnt(f, i, n, mnPmnt); //Exact Pennies
        incrmnt = bln/n;
    } while (incrmnt>penny||incrmnt<-penny);
    
    return mnPmnt;
}

//Something is wrong with this--not getting the same answer as our two
float eqlPmnt1(float f, float i, int n){
    float temp = pow((1+i), n);
    return i*temp*f/(temp-1);
}