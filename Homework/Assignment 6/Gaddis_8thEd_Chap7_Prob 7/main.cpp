/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on May 7, 2015, 12:20 PM
 * Purpose: Assignment 6: 7. Number Analysis Program
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE = 6;     //Expected size of the array stored in file
    int numbers[SIZE];      //Initialize the array
    int count =0;           //Initialize count for For-Loops
    ifstream inFile ("C:/Users/Connor/Documents/CSC 5 - C++/Kelley_Connor_CSC5_43952/Homework/Assignment 6/numbers.txt");
    int sum =0;             //To calculate the sum of the numbers in the array
    float avg;                //To calculate the average of the numbers in the array
    
    //Open the named file
    while ((! inFile.eof())&&(inFile>>numbers[count])){ //While the end of the file IS NOT reached
        count++;
    }
    //Close the file
    inFile.close();
    
    //Manipulate the array to find desired values
    int  low = numbers[0];
    int high = numbers[1];
    for(count=0; count < SIZE; count++){
        if(numbers[count] < low)  low = numbers[count]; //Find the low
        if(numbers[count] > high) high = numbers[count];//Find the high
        sum += numbers[count];                          //Find the total 
    }
    avg = sum/static_cast<float>(SIZE);
    
    //Output the results
    cout<<"The numbers read from the file are:"<<endl;
    for(count=0; count < SIZE; count++){
        cout<<numbers[count]<<" ";
    }
    cout<<endl<<endl<<"The  lowest number in the array is "<<low<<endl;
    cout<<"The highest number in the array is "<<high<<endl;
    cout<<"The sum of the numbers in the array is "<<sum<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The average of the numbers in the array is "<<avg<<endl;
    
    //Exit Stage Right!
    return 0;
}

