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
void btlMenu();
void newGame(string);
void savGame();
int battle(int, int, int, int, string, string);   
    //Return Experience Point attained
    //Return information about pokemon

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
    
    //Start the in-game menu...
    btlMenu();
    
    //battle(pmExp, pmHp, pmStrng, pmLvl, name, pmName);
    
    
    
    //Exit Stage Right!
    return 0;
}

//Function for Game start
void gameStr(){
    //Display starting content (TITLE SCREEN)
    cout<<"************************\n"
        <<"Pokemon by Connor Kelley\n"
        <<"  Press  [Enter]  to start \n"
        <<"************************\n";
    //Wait for the user to press 'Enter'
    cin.ignore();
}

//Function for menu choice
void btlMenu(battle(int pmExp, int pmHp, int pmStrng, int pmLvl, string name, string pmName)){
    //Declare Variables
    int userSel = 0;
    cout<<"what would you like to do?"<<endl;
    cout<<"[1.] Battle a Pokemon"<<endl;
    cout<<"[2.] Save the game"<<endl;
    cout<<"[3.] Exit the game"<<endl;
    switch (userSel){
        case 1: battle(); break;
        case 2: savGame(); break;
        case 3: exit(0); break;
    }
    
    
}

//Function to Load Previous Game
void ldGame(){
    //Must load the name of the player
}

//Function to Create New Game
    //Introduction to game and game play
    //Player enters their name
void newGame(string name){
    //Opening Dialogue... Information about game play
    cout<<endl<<"*****************************************\n"
                "Welcome to the wonderful game of pokemon!"<<endl;
    //Collect the name of the player
    cout<<"Start by entering your name: ";
    cin.ignore();
    getline (cin, name);
    cout<<endl<<"Awesome name, "<<name<<"!"<<endl;
    cout<<"Here is some information about pokemon.\n"
    //Eventually insert information about the starter Pokemon?
    //Would this be useful? Maybe some stats? 
          "Over time your pokemon will grow stronger the more\n"
          "you successfully defeat other foes in battle. You will\n"
          "be able to [attack] your foe while in battle, and may\n"
          "acquire new attacks after you gather enough experience.\n\n"
          "Press [enter] to continue..."<<endl;
    cin.ignore();
    cout<<"You will face many foes on your journey. Strong foes with\n"
          "higher [hp] values will yield more [exp]erience for your pokemon.\n"
          "If your pokemon dies on the field of battle your pokemon will lose a level...\n\n"
          "Press [enter] to continue..."<<endl;
    cin.ignore();
    cout<<"Be careful not to face creatures too powerful to defeat.\n"
          "Remember, you can always [Run] at any time in battle. If you\n"
          "choose to [Run], you will not gain any experience for that fight.\n\n"
          "Press [enter] to continue..."<<endl;
    cin.ignore();
    cout<<endl<<name<<", you are now ready to become a Pokemon trainer\n"
                "and embark on your journey into the land of pokemon!"<<endl;
}

//Function to Save Previous Game
//Saves:
    //Name
    //Pokemon level
void savGame(){
    //Must save the name of the player
}

//Function to initiate battle sequence...
int battle(int pmExp, int pmHp, int pmStrng, int pmLvl, string name, string pmName){
    //Initialize random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    int     fHp,    //Foe's HP
            fStrng, //Foe's Strength Value
            fLvl;   //Foe's Level
    //Calculate the enemy's level,hit points, and attack strength
    if((pmLvl >= 1)&&(pmLvl <= 5)){
        fLvl = rand()%5+1;
        fHp  = (rand()%5+1)*fLvl;
        fStrng = (rand()%5+1)*fLvl;
    } else if ((pmLvl >=6)&&(pmLvl <=10)){
        fLvl = rand()%5+1;
        fHp  = (rand()%5+1)*fLvl;
        fStrng = (rand()%5+1)*fLvl;
    }
    //Output Battle Sequence...
    cout<<"You've encountered a foe!"<<endl;
    //Output Enemy Stats!
    cout<<endl<<"Enemy level: "<<fLvl<<endl;
    cout<<"Enemy HP      : "<<fHp<<endl;
    cout<<"Enemy Strength: "<<fStrng<<endl;
    do{
        cout<<"What would you like to do?"<<endl;
        
    } while (fHp > 0);
    
    //Exit Stage Right!
    return 0;
}