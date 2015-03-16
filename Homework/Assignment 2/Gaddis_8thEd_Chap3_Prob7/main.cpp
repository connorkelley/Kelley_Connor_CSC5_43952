/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on March 9, 2015, 3:15 PM
 * Purpose:  Homework Assignment 2 - 8th Problem - Box Office
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
    
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short aAmt = 10;//Adult ticket amount in dollars
    unsigned short cAmt = 6;//Child ticket amount in dollars
    unsigned short aTicket, cTicket;//Amount of adults tickets sold, amount of child tickets sold
    float groBOP, netBOP, amtDist;//Gross box office profit, net box office profit, amount paid to distributor
    string mName;
    
    //Input
    cout<<"Please enter the name of the movie: "<<endl;
    getline(cin, mName);
    cout<<"Please enter the number of adult tickets sold: "<<endl;
    cin>>aTicket;
    cout<<"Please enter the number of child tickets sold: "<<endl;
    cin>>cTicket;
    
    //Calculate 
    groBOP = aTicket * aAmt + cTicket * cAmt;
    netBOP = groBOP * 0.20f;
    amtDist = groBOP - netBOP;
    
    //Output
    cout<<fixed<<setprecision(2)<<endl;
    cout<<"Movie Name: \""<<mName<<"\""<<endl;
    cout<<"Adult Tickets Sold: "<<aTicket<<endl;
    cout<<"Child Tickets Sold: "<<cTicket<<endl;
    cout<<"Gross Box Office Profit: $"<<groBOP<<endl;
    cout<<"Net Box Office Profit: $"<<netBOP<<endl;
    cout<<"Amount Paid to Distributor: $"<<amtDist<<endl;
    
    
    //Exit Stage Right!
        return 0;
}

