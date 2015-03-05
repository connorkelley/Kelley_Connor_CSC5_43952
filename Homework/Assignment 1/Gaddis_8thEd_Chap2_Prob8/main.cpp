/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on March 5, 2015, 10:42 AM
 * Purpose: 9th Homework Problem - Total Purchase 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
float STAX = 0.07;  //Sales tax percentage

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare/Define Variables
    float item1, item2, item3, item4, item5, sTax, total, sTotal;
    item1 = 15.95;
    item2 = 24.95;
    item3 = 6.95;
    item4 = 12.95;
    item5 = 3.95;
    
    //Calculate the total, tax and sub-total 
    sTotal = item1 + item2 + item3 + item4 + item5;
    sTax = sTotal * STAX;
    total = sTax + sTotal;
    
    //Output the Shopping Cart 
    cout<<"Total Purchase Assignment"<<endl;
    cout<<"Shopping cart: \n"
            <<" $"<<item1<<"- Item 1 \n"
            <<" $"<<item2<<"- Item 2 \n"
            <<" $"<<item3<<"- Item 3 \n"
            <<" $"<<item4<<"- Item 4 \n"
            <<" $"<<item5<<"- Item 5 \n"
            <<"Subtotal: $"<<sTotal<<"\n"
            <<"Sales Tax: $"<<sTax<<"\n"
            <<"Total: $"<<total<<endl;
    
    //Exit Stage Right!
    return 0;
}

