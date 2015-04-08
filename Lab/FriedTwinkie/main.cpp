/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on April 8, 2015, 7:51 AM
 * Purpose: Design the interface to a fried Twinkie machine
 */

//System Libraries
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE = 80;
    char input[SIZE]="";
    unsigned short totChng = 0, pTwnke = 350;
    char nQtrs, nDimes, nNikels;
    
    //Prompt the User for Input
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"This is a fried Twinkie machine"<<endl;
    cout<<"Fried Twinkies cost $3.50"<<endl;
    cout<<"Input your change as\nDollar, Quarter, Dime, Nickel"<<endl;
    
    do{
        cout<<endl<<"Input coins/change:"<<endl;
        cin>>input;
        if (strcmp(input, "Dollar")==0){
            totChng += 100;
        } else if (strcmp(input, "Quarter")==0){
            totChng += 25;
        } else if (strcmp(input, "Dime")==0){
            totChng += 10;
        } else if (strcmp(input, "Nickel")==0){
            totChng += 5;
        } else {
            cout<<"No Slugs Allowed"<<endl;
        }
        cout<<"Total Change = $"<<totChng/100.0f<<endl;
    } while (totChng < pTwnke);    
    
    //Give Twinkie 
    cout<<endl<<"Here is your Fried Twinkie!"<<endl;
    
    //Calculate Change
    totChng -= pTwnke;
    cout<<"Your change is = $"<<totChng/100.0f<<endl;
    
    //Determine how many Quarters the machine gives back
    nQtrs = totChng / 25;
    if(nQtrs > 0){
        cout<<static_cast<int>(nQtrs)<<" Quarters Change"<<endl;
    }
    //Determine how many Dimes the machine gives back
    totChng -= nQtrs*25;
    nDimes = totChng / 10;
    if(nDimes > 0){
        cout<<static_cast<int>(nDimes)<<" Dimes Change"<<endl;
    }
    //Determine how many Nickels the machine gives back
    totChng -= nDimes*10;
    nNikels = totChng / 5;
    if(nNikels > 0){
        cout<<static_cast<int>(nNikels)<<" Nickels Change"<<endl;
    }
    //Exit Stage Right!
    return 0;
}