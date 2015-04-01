/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on April 1, 2015, 8:48 AM
 * Purpose: The Monty Hall Problem
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    unsigned int nGames, win=0, lose=0, door, doorOpn, prize, othDoor;
    char stay;
        
    //Prompt the user for input
    cout<<"This is the Monty Hall Game, Let's make a deal."<<endl;
    cout<<"How many games would you like to play (1-4*10^9)?"<<endl;
    cin>>nGames;
    cout<<"Are you going to stay if given the opportunity? Type 's' for stay:"<<endl;
    cout<<" or type C for change"<<endl;
    cout<<"Type anything else to choose the other door."<<endl;
    cin>>stay;
    
    //Loop for all the games
    for(int game = 1; game <= nGames; game++){
        //Randomly choose your door
        door=rand()%3+1;
        //Randomly choose the prize door
        prize=rand()%3+1;
        //Randomly choose the door to open
        do{
            doorOpn=rand()%3+1;
        } while (door==doorOpn||prize==doorOpn);    //Cant be the same
        //What is the other door?
        do{
            othDoor=rand()%3+1;
        } while (othDoor==doorOpn||othDoor==door);    //Cant be the same
        //Swap the doors given the opportunity
        if((stay!='s')&&(stay!='S')){   //Use DeMorgan's Laws to test validity
            door = othDoor;  
        }
        //Now statistically count how many wins and losses
        if(door==prize)win++;
        else lose++;
    }
    
    //Output the range of temperature settings
    cout<<"Out of "<<nGames<<" games played..."<<endl;
    if(stay == 's'||stay == 'S')cout<<"I am not changing my door and "<<endl;
    else cout<<"You changed your door and "<<endl;
        cout<<"Won -> "<<win<<" times -> "<<1.0f*win/nGames*100<<" percent"<<endl;
        cout<<"Lost -> "<<lose<<" times -> "<<1.0f*lose/nGames*100<<" percent"<<endl;
       
    //Exit Stage Right!
    return 0;
}

