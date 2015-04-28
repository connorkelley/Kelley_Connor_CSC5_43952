/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on April 27, 2015, 6:09 PM
 * Purpose: Assignment 6: 1. Largest/Smallest Array Values
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
    const int SIZE = 10;
    int numbers[SIZE];  //The size of the array is 10, SIZE = 10
    int count, highest, lowest; //Highest and lowest values stored in the array
    highest = numbers[0];
    lowest  = numbers[1];
    
    //Prompt the User for input
    cout<<"Please enter 10 numbers:"<<endl;
    
    //For-Loop Array to collect Values
    for(count=0; count < SIZE; count++){
        cin>>numbers[count];
    }
    
    //Determine the Highest and Lowest Values in the Array
    for(count=1; count < SIZE; count++){
        if (numbers[count] < lowest){
            lowest = numbers[count];
        } if(numbers[count] > highest){
            highest = numbers[count];
        }
    }
    
    //Output the Array
    cout<<"You entered the following numbers:"<<endl;
    for(count=0; count < SIZE; count++){
        cout<<numbers[count]<<" ";
    }
    
    //Output the Results
    cout<<endl<<"Out of those values..."<<endl;
    cout<<"The highest value that you entered was: "<<highest<<endl;
    cout<<"The lowest  value that you entered was: "<<lowest<<endl;
    
    //Exit Stage Right!
    return 0;
}

