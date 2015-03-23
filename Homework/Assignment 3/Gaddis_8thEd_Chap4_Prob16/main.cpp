/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on March 23, 2015, 10:45AM
 * Purpose:  Homework Assignment 3 - 6th Problem - Running the Race
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
    
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    string run1, run2, run3;
    float time1, time2, time3;
    
    //Program title
    cout<<"\"Running the Race\""<<endl;
    
    //Input
        //First Runner
        cout<<"Please enter the name of the first runner and their time, separated by a single space:"<<endl;
        cin>>run1>>time1;
        //Second Runner
        cout<<"Please enter the name of the second runner and their time, separated by a single space:"<<endl;
        cin>>run2>>time2;
        //Third Runner
        cout<<"Please enter the name of the third runner and their time, separated by a single space:"<<endl;
        cin>>run3>>time3;
    
    //Output  
        //Did run1 come in first place?
        if ((time1 < time2) && (time1 < time3))
        {
            //If run1 did, did run2 or run3 come in second?
            if (time2 < time3){
                cout<<run1<<" came in first place with a time of "<<time1<<endl;
                cout<<run2<<" came in second place with a time of "<<time2<<endl;
                cout<<run3<<" came in third place with a time of "<<time3<<endl;
            }  
            else
            {
                cout<<run1<<" came in first place with a time of "<<time1<<endl;
                cout<<run3<<" came in second place with a time of "<<time3<<endl;
                cout<<run2<<" came in third place with a time of "<<time2<<endl;
            }
        } else if ((time1 < 0) || (time2 < 0) || (time3 < 0))
            {
            cout<<"You did not enter a valid time. Please enter only positive numbers for times."<<endl;
            }
        //Did the run2 come in first place?    
        if ((time2 < time1) && (time2 < time3))
        {
            //If run2 did, did run1 or run3 come in second?
            if (time1 < time3){
                cout<<run2<<" came in first place with a time of "<<time2<<endl;
                cout<<run1<<" came in second place with a time of "<<time1<<endl;
                cout<<run3<<" came in third place with a time of "<<time3<<endl;
            }    
            else
            {
                cout<<run2<<" came in first place with a time of "<<time2<<endl;
                cout<<run3<<" came in second place with a time of "<<time3<<endl;
                cout<<run1<<" came in third place with a time of "<<time1<<endl;
            } 
        } else if ((time1 < 0) || (time2 < 0) || (time3 < 0))
                {
                cout<<"You did not enter a valid time. Please enter only positive numbers for times."<<endl;
                }
        
        //Did the run3 come in first place?
        if ((time3 < time1) && (time3 < time2))
        {
            //If run3 did, did run1 or run2 come in second?
            if (time1 < time2){
                cout<<run3<<" came in first place with a time of "<<time3<<endl;
                cout<<run1<<" came in second place with a time of "<<time1<<endl;
                cout<<run2<<" came in third place with a time of "<<time2<<endl;
            }   
            else
            {
                cout<<run3<<" came in first place with a time of "<<time3<<endl;
                cout<<run2<<" came in second place with a time of "<<time2<<endl;
                cout<<run1<<" came in third place with a time of "<<time1<<endl;
            } 
        } else if ((time1 < 0) || (time2 < 0) || (time3 < 0))
        {
            cout<<"You did not enter a valid time. Please enter only positive numbers for times."<<endl;
        }
    //Exit Stage Right!
        return 0;
    }



