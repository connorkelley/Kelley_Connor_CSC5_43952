/* 
 * File:   main.cpp
 * Author: Connor P. Kelley
 * Purpose:  To Illustrate the code for developing a menu
 * Problem 1 -> Sum the numbers between 1 and 10
 * Problem 2 -> Multiply the numbers between 1 and 10
 * Problem 3 -> Divide the numbers between 1 and 10
 * Problem 4 -> Gaddis_7thEd_Chap4_Prob22 Cable Bill
 * Modified on Mar 25th, 2015
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //General Menu Format
    //Display the selection
    cout<<"Type 1 to solve problem 1"<<endl;
    cout<<"Type 2 to solve problem 2"<<endl;
    cout<<"Type 3 to solve problem 3"<<endl;
    cout<<"Type 4 to solve Gaddis_7thEd_Chap4_Prob22 Cable Bill"<<endl;
    cout<<"Type anything else to quit with no solutions."<<endl;
    
    //Read the choice
    char choice;
    cin>>choice;
    
    //Solve a problem that has been chosen.
    switch(choice){
            case '1':{
                int sum=1+2+3+4+5+6+7+8+9+10;
                cout<<endl;
                cout<<"Solution to 1 sum(1->10)="<<sum<<endl;
                cout<<endl;
                break;
            }
            case '2':{
                int prod=1*2*3*4*5*6*7*8*9*10;
                cout<<endl;
                cout<<"Solution n!(1->10)="<<prod<<endl;
                cout<<endl;
                break;
            }
            case '3':{
                float quot=1.0f/2/3/4/5/6/7/8/9/10;
                cout<<endl;
                cout<<"Solution to 3 quot(1->10)="<<quot<<endl;
                cout<<endl;
                break;
            }
        case '4':{
                //Declare Variables
                ofstream out;
                float vwdHrs;   //Hours Viewed
                char package;   //Package Type (AaBbCc)
                const int SIZE = 40;  //Max size of name = 39 characters  
                char name[SIZE];      //Customer Name
                float bill;     //Cable Bill in $'s

                //Program title
                cout<<"\"Cable Bill\""<<endl;

                //Open the File
                out.open("Cable.dat");

                //Prompt User for Input
                cout<<"How many hours did you view this month?"<<endl;
                cin>>vwdHrs;
                cout<<"What is your package? A, B, C"<<endl;
                cin>>package;
                cout<<"What is the customer's name?"<<endl;
                cin.ignore();
                cin.getline(name, SIZE);     

                //Calculate the Bill
                switch (package)
                {
                    case 'A':
                    case 'a':{
                        bill=9.95;
                        if (vwdHrs > 10) bill += 2 * (vwdHrs - 10);
                        break;
                    }
                    case 'B':
                    case 'b':{
                        bill=14.95;
                        if (vwdHrs > 20) bill += (vwdHrs - 20);
                        break;
                    }
                    case 'C':
                    case 'c':{
                        bill=19.95;
                        break;
                    }
                    default: cout<<"Wrong package chosen"<<endl;
                }

                //Output Results to File
                out<<fixed<<setprecision(2)<<showpoint;
                out<<"Your cable bill from CSC5 RCC Programming Class"<<endl;
                out<<"Customer Name: "<<name<<endl;
                out<<"Package: "<<package<<endl;
                out<<"Hours Viewed: "<<vwdHrs<<endl;
                out<<"Amount Due: "<<bill<<endl;

                //Close the File
                out.close();
                
                break;
                }
                default:{
                    cout<<"Exit?"<<endl;
                }
    }
    //Exit Stage Right!
    return 0;
}