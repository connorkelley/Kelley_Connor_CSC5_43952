/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on April 20, 2015, 8:13 AM
 * Purpose: Write a function in 7 different ways
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float save1 (float, float, int);    //Power Function
float save2 (float, float, int);    //Exponential and Log Function
float save3 (float, float, int);    //For Loop
float save4 (float, float, int);    //Recursive -> Calling Itself
float save5 (float=100.0, float=0.08f, int=9);  //Defaulted Parameter
void save6a (float &, float, float, int);    //Pass by Reference
void save6b (float &, float, int);    //Pass by Reference
float save1 (float , float , float);    //Over Ridden Function/Same Name

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float pv = 100.0;   //Present Value ($'s)
    float ir = 0.08f;   //Interest Rate %/yr
    int nC = 9;         //Number of Compounding Periods (years)
    //Output the Inputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Present Value = $"<<pv<<endl;
    cout<<"Interest Rate = "<<ir*100<<"%"<<endl;
    cout<<"Number of Compounding Periods = "<<nC<<"(yrs)"<<endl<<endl;
    //Calculate our savings
    cout<<"Savings Function 1 (Original)= $"<<save1(pv, ir, nC)<<endl;
    float nCf=nC;
    cout<<"Savings Function 1 (Modified to Float)= $"<<save1(pv, ir, nCf)<<endl;
    cout<<"Savings Function 2 = $"<<save2(pv, ir, nC)<<endl;
    cout<<"Savings Function 3 = $"<<save3(pv, ir, nC)<<endl;
    cout<<"Savings Function 4 = $"<<save4(pv, ir, nC)<<endl;
    cout<<"Savings Function 5 = $"<<save5()<<endl;
    float fv;
    save6a(fv,pv,ir,nC);
    cout<<"Savings Function 6a = $"<<fv<<endl;
    save6b(pv,ir,nC);
    cout<<"Savings Function 6b = $"<<pv<<endl;
    
    //Exit Stage Right!
    return 0;
}

//Function for Future Value Calculation
//Inputs
//  p-> Present Value ($'s)
//  i-> Interest Rate %/Compounding Period
//  n-> Compounding Period (years)
//Outputs
//  fv-> Future Value ($'s)

float save1 (float p, float i, int n){
    cout<<"Save1 with integer n"<<endl;
    return p*pow((1+i), n);
}

float save2 (float p, float i, int n){
    return p*exp(n*log(1+i));
}

float save3 (float p, float i, int n){
    for(int year=1; year<=n; year++){
        p*= (1+i);
    }
    return p;
}

float save4 (float p, float i, int n){
    if(n<=0)return p;   //First Return
    return save4(p, i, n-1)*(1+i);  //Second Return
    //A Function can be returned many times
}

float save5 (float p, float i, int n){
    return p*pow((1+i), n);
}

void save6a (float &f, float p, float i, int n){
    f= p*pow((1+i), n);
}

void save6b (float &p, float i, int n){
    p= p*pow((1+i), n);
}

float save1 (float p, float i, float n){
    cout<<"Save1 with float n"<<endl;
    return p*pow((1+i), n);
}