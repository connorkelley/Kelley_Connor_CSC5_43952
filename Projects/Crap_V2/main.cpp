/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on May 4th, 2015, 8:02 AM
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
    const int SIZE=13;
    int win [SIZE] ={}, lose [SIZE] = {}, nThrows[SIZE]={};
    int thwGame=0, maxNThw=0, nGames=20000;
    
    //Set the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Loop on the games and take stats
    bool rollAgn;
    for(int game=1; game<=nGames; game++){
        int sum = roll(2, 6);
        nThrows[sum]++;
        if (sum==2||sum==3||sum==12)lose[sum]++;
        else if (sum==7||sum==11)win[sum]++;
        else {
            //Keep throwing
            do{
                rollAgn = true;
                int sum2=roll(2, 6);
                nThrows[sum]++;
                if(sum2==sum){
                    win[sum]++;
                    rollAgn = false;
                } else if (sum2==7){
                    lose[sum]++;
                    rollAgn = false;       
                }
            }while(rollAgn);
        }
    }
    
    //Output Wins and Losses
    cout<<"Total number of Games  = "<<nGames<<endl;
    cout<<"Win\tLose\tTotal\t%Win\t%Loss\tnThrows\tAvg Throw"<<endl;
    for(int sindex=0; sindex < SIZE; sindex++){
        cout<<"Total number of wins   = "<<win<<endl;
        cout<<"total number of losses = "<<lose<<endl;
        cout<<"Total win + lose       = "<<win+lose<<endl;
        cout<<"Percentage win         = "<<100.0f*win/nGames<<"%"<<endl;
        cout<<"Percentage loss        = "<<100.0f*lose/nGames<<"%"<<endl;  
        cout<<"Number of throws       = "<<nThrows<<endl;
        cout<<"Average throw/game = "<<maxNThw;
    }
    
    
    
    
    
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