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
void ldGame();
void menu();
void newGame(string);
void savGame();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Player Variables
    int     pmExp   = 0,  //Pokemon Experience
            pmHp    = 100,//Pokemon Hit points
            pmStrng = 10, //Pokemon Strength
            pmLvl   = 1;  //Pokemon Level
    string  name,   //Player Name
            pmName; //Pokemon Name
    //Declare Monster Variables
    int     monExp,
            monLvl;
    //Other Variables
    int userSel;        
    bool menu = true;
    
    //Start Game
    gameStr();
    //Game Menu to load or start new game    
    do{   
        cout<<"*****     MENU     *****"<<endl;
        cout<<"Enter 1 to load a previous game"<<endl;
        cout<<"Enter 2 to start a new game"<<endl;
        cin>>userSel;     
        if (userSel == 1){
            ldGame();
            menu = false;
        } else if (userSel == 2){
            newGame(name);
            menu = false;
        } else {
            cout<<"You did not enter a valid menu selection"<<endl;
        }
    } while(menu);
    
    
    
    
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
}

//Function for menu choice
void menu(){
    
}

//Load a previous game function
void ldGame(){
    //Must load the name of the player
}

//Create a new game function
void newGame(string name){
    //Opening Dialogue... Information about game play
    cout<<endl<<"*****************************************\n"
                "Welcome to the wonderful game of pokemon!"<<endl;
    //Collect the name of the player
    cout<<"Start by entering your name: ";
    cin.ignore();
    getline (cin, name);
    cout<<endl<<"Awesome name, "<<name<<"!"<<endl;
    cout<<"Here is some information about your starter pokemon.\n"
          "Over time your pokemon will grow stronger the more\n"
          "you successfully defeat other foes in battle. You will\n"
          "be able to choose which [attack] to use in battle, and may\n"
          "acquire new attacks after you gather enough experience.\n\n"
          "Press [enter] to continue..."<<endl;
    cin.ignore();
    cout<<"You will face many foes in your journey. Stronger foes with\n"
          "higher [hp] values will yield more [exp]erience for your pokemon.\n"
          "If your pokemon dies on the field of battle your pokemon will lose a [lvl]...\n\n"
          "Press [enter] to continue..."<<endl;
    cin.ignore();
    cout<<"Be careful not to face creatures too powerful to defeat.\n"
          "Remember, you can always [Run] at any time in battle. If you\n"
          "choose to [Run], you will not gain any experience for that fight.\n\n"
          "Press [enter] to continue..."<<endl;
    cout<<endl<<name<<", you are now ready to become a trainer\n"
                "and embark on your journey into the land of pokemon!"<<endl;
}

void savGame(){
    //Must save the name of the player
}