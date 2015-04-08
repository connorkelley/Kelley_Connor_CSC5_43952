/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on April 8, 2015, 10:26 AM
 * Purpose: Homework Assignment 4 - Problem 19. Budget Analysis
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int budget, //Budget for the month
        exp,    //Expense Amount
        tExp;   //Total Expenditures
    
    //Prompt for User Input
    cout<<"Enter your monthly budget in $'s:"<<endl;
    cin>>budget;
    
    //While loop to total monthly expenses
    while(exp != -1){
        cout<<"Enter an expenditure (Enter -1 to exit)."<<endl;
        cin>>exp;
        if (exp == -1){       
            break;
        }
        tExp += exp;
    }
    
    //Determine if the user is OVER, UNDER, or EQUALS budget
    if (budget < tExp){
        cout<<endl<<"You are $"<<tExp-budget<<" OVER budget!"<<endl;           
    }
    if (budget > tExp){
        cout<<endl<<"You are $"<<budget-tExp<<" UNDER budget!"<<endl;
    }
    if (budget == tExp) {
        cout<<endl<<"Your monthly expenses, $"<<tExp<<" ,equal your monthly budget, $"<<budget<<"!"<<endl;
    }
    
    //Exit Stage Right!
    return 0;
}

