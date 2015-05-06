/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on May 4th, 2015, 8:18 AM
 * Purpose: Assignment 6: 4. Larger Than n
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void larger (int [], const int, int, int);
void initial (int [], int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE = 10;
    int numbers[SIZE];
    int n=0, sum;
    
    //Initialize the Array to Random Numbers
    initial(numbers, SIZE);
    
    //Prompt the User for input
    cout<<"Enter an integer you want to find all values greater than: "<<endl;
    cin>>n;
    
    //Find values larger than n
    larger(numbers, SIZE, n, sum);
    cout<<"There were "<<sum<<" numbers larger than the value you entered in the array."<<endl;
    
    //Exit Stage Right!
    return 0;
}

void initial(int numbers[], int SIZE){
    for (int count =0; count < SIZE; count++){
        numbers[count]=rand()%100;
    }
}

void larger (int numbers[], const int SIZE, int n, int sum){
    for (int count =0; count <= SIZE; count++){
        if(numbers[count] > n){
            cout<<numbers[count]<<endl;
            sum++;
        }
    }
}