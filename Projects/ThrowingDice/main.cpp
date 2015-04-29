/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on April 29, 2015, 9:39 AM
 * Purpose: Check out Dice Statistics
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
unsigned char roll(unsigned char, unsigned char);//How many dice and the face value of the dice

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    const int SIZE = 13;    //Bigger than needed
    int freq[SIZE] = {};    //Initialize the Array to Zero
    unsigned int nThrows= 3.6e4;     //Number of throws
    unsigned int sum = 0;            //Add up the times thrown
    
    //Set the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Loop, Throw the Dice, Take the Stats!
    for(int throws=1; throws<=nThrows; throws++){
        freq[roll(2, 6)]++;
    }
    //Print the results!
    for(int value=0; value<SIZE; value++){
        sum += freq[value];
        cout<<value<<" was thrown "
            <<freq[value]<< " times!"<<endl;        
    }
    cout<<"The dice were thrown "<<nThrows<<" = "<<sum<<" times"<<endl;
    //Exit Stage Right!
    return 0;
}

//Inputs
//  nDie -> Number of Die
//  sides-> Number of sides
unsigned char roll(unsigned char nDie, unsigned char sides){
    //Declare Variables
    unsigned char sum = 0;
    for (int die=1; die<=nDie; die++){
        sum += (rand()%sides+1);
    }
    return sum;
}