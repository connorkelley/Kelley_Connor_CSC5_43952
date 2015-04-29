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
    int win=0, lose=0, nThrows=0, nGames=10000;
    int maxNThw =0; //Max throws
    
    //Set the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Loop on the games and take stats
    bool rollAgn;
    for(int game=1; game<=nGames; game++){
        int sum = roll(2, 6);
        nThrows++;
        if (sum==2||sum==3||sum==12)lose++;
        else if (sum==7||sum==11)win++;
        else {
            //Keep throwing
            do{
                rollAgn = true;
                int sum2=roll(2, 6);
                if(sum2==sum){
                    win++;
                    rollAgn = false;
                } else if (sum2==7){
                    lose++;
                    rollAgn = false;       
                }
            }while(rollAgn);
        }
    }
    
    //Output Wins and Losses
    cout<<"Total number of Games  = "<<nGames<<endl;
    cout<<"Number of throws       = "<<nThrows<<endl;
    cout<<"total number of losses = "<<lose<<endl;
    cout<<"Total number of wins   = "<<win<<endl;
    cout<<"Total win + lose       = "<<win+lose<<endl;
    cout<<"Percentage win         = "<<100.0f*win/nGames<<"%"<<endl;
    cout<<"Percentage loss        = "<<100.0f*lose/nGames<<"%"<<endl;
    
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