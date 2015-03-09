/* 
 * File:   main.cpp
 * Author: Connor Kelley <kelleyconnor@outlook.com>
 * Created on March 9, 2015, 10:18 AM
 * Purpose: Homework Assignment 2 - 4th Problem - Candy Bar Delight
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
//Declare Variables
    unsigned short htIn, wtLbs, age;
    char mf;
    unsigned char cBar = 230;
    float BMRFem, BMRMale, nCBar; //nCBar is only a float to show static casting of variable -- otherwise unsigned short
    
    
//Input 
    cout<<"How many candy bars will it take to maintain your weight?"<<endl;
    cout<<"All inputs are integers!"<<endl;
    cout<<"Input your weight in pounds:"<<endl;
    cin>>wtLbs;
    cout<<"Input your height in inches:"<<endl;
    cin>>htIn;
    cout<<"Input your age in years:"<<endl;
    cin>>age;
    cout<<"Are you a male or female m/f?"<<endl;
    cin>>mf;
    
//Calculate
    BMRFem = 655 + 4.3*wtLbs + 4.7*htIn - 4.7*age;
    BMRMale = 66 + 6.3*wtLbs + 12.9*htIn - 6.8*age;
    //        Question      if Male     if Female
    nCBar = ((mf == 'm')?(BMRMale/cBar):(BMRFem/cBar));
            
//Output
    cout<<"Your weight = "<<wtLbs<<"(lbs)"<<endl;
    cout<<"Your height = "<<htIn<<"(inches)"<<endl;
    cout<<"Your age = "<<age<<"(years)"<<endl;
    cout<<"Your weight = "<<wtLbs<<"(lbs)"<<endl;
    //Question -- if m; then male -- if not m; then female
    cout<<"Your sex = "<<((mf=='m')?"Male":"Female")<<endl;
    cout<<"You can eat "<<nCBar<<" candy bars per day."<<endl;
    
//Exit Stage Right!
    return 0;
}

