/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on March 4, 2015, 8:23 AM
 * Purpose: 2nd Homework Problem - Energy Drinks Survey 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
unsigned char CNVPCT = 100;

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short nCust, nEDrnks, nCDrnks;
    unsigned char pEDrnks, pCDrnks; 
    //Input / Assigned Values
    nCust = 16500;  //Number of Customers
    pEDrnks = 15;   //Percentage of Energy Drinkers
    pCDrnks = 58;   //Percentage out of Energy Drinkers that prefer citrus drinks
    
    //Process / Calculate
    nEDrnks = nCust/static_cast<float>(CNVPCT)*pEDrnks;
    nCDrnks = nEDrnks/static_cast<float>(CNVPCT)*pCDrnks;
    //Output Everything
    cout<<"Energy Drinks Customer Survey Problem"<<endl;
    cout<<"Known/Given Values: "<<endl;
    cout<<"Number of customers = "<<nCust<<endl;
    cout<<"Percentage Energy Drinkers = "<<static_cast<int>(pEDrnks)<<"%"<<endl;
    cout<<"Percentage Citrus Drinkers/Energy Drinkers = "<<static_cast<float>(pCDrnks)<<"%"<<endl;
    cout<<"Calculated Values: "<<endl;
    cout<<"Number of Energy Drinkers = "<<nEDrnks<<endl;
    cout<<"Number of Citrus Drinkers = "<<nCDrnks<<endl;
    //Exit Stage Right!
    return 0;
}

