/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on March 9, 2015, 3:15 PM
 * Purpose:  Homework Assignment 2 - 6th Problem - Automobile Costs
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
        float cLoan, cIns, cGas, cOil, cTires, cMaint, tMonth, tYear;
        //Cost of loan, insurance, gas, oil, tires, maintenance
        //tMonth = Monthly total in dollars
        //tYear = Annual Total in dollars
    
    //Input
        cout<<"Please enter the monthly cost of your loan payment in dollars: "<<endl;
        cin>>cLoan;
        cout<<"Please enter the monthly cost of your Insurance in dollars: "<<endl;
        cin>>cIns;
        cout<<"Please enter the monthly cost of your Gas in dollars: "<<endl;
        cin>>cGas;
        cout<<"Please enter the monthly cost of your Oil in dollars: "<<endl;
        cin>>cOil;
        cout<<"Please enter the monthly cost of your Tires in dollars: "<<endl;
        cin>>cTires;
        cout<<"Please enter the monthly cost of your vehicle maintenance in dollars: "<<endl;
        cin>>cMaint;
      
        
    //Calculate 
        tMonth = cLoan + cIns + cGas + cOil + cTires + cMaint;
        tYear = tMonth * 12;
    
    //Output 
        cout<<fixed<<setprecision(2)<<endl;
        cout<<"If you spend \n$"<<cLoan<<"/month on loan payment,"<<endl;
        cout<<"$"<<cIns<<"/month on insurance,"<<endl;
        cout<<"$"<<cGas<<"/month on gas,"<<endl;
        cout<<"$"<<cOil<<"/month on oil,"<<endl;
        cout<<"$"<<cTires<<"/month on tires, and"<<endl;
        cout<<"$"<<cMaint<<"/month on vehicle maintenance, then"<<endl;
        cout<<"You will spend $"<<tMonth<<"/month and $"<<tYear<<"/year on your auto."<<endl;
                   
    //Exit Stage Right!
        return 0;
}

