/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on May 6, 2015, 10:04 AM
 * Purpose: Create a functional game
 */

//System Libraries
#include <cstdlib>  //c standard 
#include <iostream> //input output stream 
#include <iomanip>  //input output manipulation
#include <ctime>    //c time
#include <fstream>  //file stream
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void gameStr();
void loadGame();
void menu();
void newGame();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int     exp,    //Experience
            hp,     //Hit points
            strngth,//Strength
            plyrLvl;//Player Level
    
    //Start Game
    gameStr();
    //Menu to load or start new game
    menu();
    
    
    
    //Exit Stage Right!
    return 0;
}

//Function for Game start
void gameStr(){
    //Display starting content (TITLE SCREEN)
    cout<<"************************\n"
        <<"Pokemon by Connor Kelley\n"
        <<"  Push  Enter  to start \n"
        <<"************************\n";
    //Wait for the user to press 'Enter'
    cin.ignore();
    cout<<"Welcome to Pokemon"<<endl;
}

//Function for menu choice
void menu(){
    int userSel;
    cout<<"Enter 1 to load a previous game"<<endl;
    cout<<"Enter 2 to start a new game"<<endl;
    cin>>userSel;
    if (userSel == 1){
        loadGame();
    } else if (userSel == 2){
        newGame();
    } else {
        cout<<"You did not enter a valid menu selection"<<endl;
        menu();
    }
}

//Load a previous game function
void loadGame(){
    
}

//Create a new game function
void newGame(){
    
}