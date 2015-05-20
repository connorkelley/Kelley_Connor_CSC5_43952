/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on May 19, 2015, 11:13 AM
 * Purpose: Improve the functionality and expand upon my original game design
 *          for the game of Pokemon -- a turn based strategy battle game
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
int ldGame(float, int, int);
void btlMenu();
void newGame(string);
void savGame(float, int, int);
int battle(float, int, int);   
    //Return Experience Points attained
    //Return information about pokemon

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Player Variables
    float   pmExp   = 0;  //Pokemon Experience
    int     pmLvl   = 1, 
            pmHp    = 100;
    string  name;   //Player Name
    //Other Variables
    int userSel;        
    bool menu   = true,
         inGame = true;
    
    //Start Game
    gameStr();
    
    //Calculate HP based on level...
    //Then I would need to pass the array to 3-4 functions to save, load, and use it in battle...
        //Could get overly complicated
    //const int SIZE = 5;
    //int pmInfo[SIZE][2] = {};
    //Use this array for something... Not sure yet how practical this is
    //for(int x = 0; x < SIZE; x++){
    //    for(int y = 0; y < 2; y++){
    //        pmInfo[x][y] = 100*(x+1);
    //    }
    //}
    //for(int x = 0; x < SIZE; x++){
    //    for(int y = 0; y < 2; y++){
    //        cout<<pmInfo[x][y]<<endl;
    //    }
    //}
    
    //Game Menu to load or start new game    
    do{   
        cout<<"********     MENU     *********"<<endl;
        cout<<"Enter 1 to load a previous game"<<endl;
        cout<<"Enter 2 to start a new game"<<endl;
        cin>>userSel;     
        if (userSel == 1){
            ldGame(pmExp, pmHp, pmLvl);
            menu = false;
        } else if (userSel == 2){
            newGame(name);
            menu = false;
        } else {
            cout<<"You did not enter a valid menu selection"<<endl;
        }
    } while(menu);
        
    //Start the in-game menu...
    while(inGame){
        char choice;
        cout<<"What would you like to do?"<<endl;
        cout<<"[1.] Battle a Pokemon"<<endl;
        cout<<"[2.] Save the game"<<endl;
        cout<<"[3.] Exit the game"<<endl;
        cin>>choice;
        switch (choice){
            case '1':{
                battle(pmExp, pmHp, pmLvl); 
                break;
            }
            case '2':{
                savGame(pmExp, pmHp, pmLvl); 
                cout<<"Your game has saved!"<<endl;
                break;
            }
            case '3':{
                exit(0);
                inGame = false;
                break;
            }
        }
    }
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

//Function to Load Previous Game
int ldGame(float pmExp, int pmHp, int pmLvl){
    ifstream inFile;
    inFile.open("savedGame.txt");
    inFile>>pmExp>>pmHp>>pmLvl;
    inFile.close();
    return pmExp, pmHp, pmLvl;
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
    getline(cin, name);
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
void savGame(float pmExp, int pmHp, int pmLvl){
    ofstream myGame;
    myGame.open("savedGame.txt");
    myGame<<pmExp<<pmHp<<pmLvl;
    myGame.close();
}

//Function to initiate battle sequence...
int battle(float pmExp, int pmHp, int pmLvl){
    //Initialize random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    int     fHp,    //Foe's HP
            fStrng, //Foe's Strength Value
            fLvl,   //Foe's Level
            pmStrng;//Pokemon Strength   
    
    //Calculate the enemy's level
    if((pmLvl >= 1)&&(pmLvl <= 5)){
        fLvl = rand()%5+1;
        fHp  = rand()%100+75;
    } else if ((pmLvl >=6)&&(pmLvl <=10)){
        fLvl = rand()%10+5;
        fHp  = rand()%200+150;
    }
    
    //Output Battle Sequence...
    cout<<endl<<"You've encountered a foe!"<<endl;
    //Output Enemy Stats!
    cout<<"Enemy level   : "<<fLvl<<endl;
    cout<<"Enemy HP      : "<<fHp<<endl;
    cout<<"Enemy Strength: "<<fStrng<<endl;
    do{
        char select;
        fStrng = rand()%10+1;
        pmStrng= rand()%10+1;
        cout<<"What would you like to do?"<<endl;
        cout<<"[1.] Attack"<<endl;
        cout<<"[2.] Run   "<<endl;     
        cin>>select;
        switch (select){
            case '1':{
                //Attack the enemy!
                fHp -= pmStrng;
                cout<<"You attack the enemy!"<<endl;
                if(pmStrng > 8){
                    cout<<"Critical Hit!!"<<endl;
                }
                cout<<"You hit the enemy for "<<pmStrng<<" damage!"<<endl;
                cout<<"The enemy HP is now at: "<<fHp<<endl<<endl;
                if(fHp > 0){
                    cout<<"The enemy attacks you!"<<endl<<"You get hit for "<<fStrng<<" damage."<<endl;
                    pmHp -= fStrng;
                    cout<<"Your HP is now at: "<<pmHp<<endl;
                }    
                break;
            }
            case '2':{
                int randNum = rand()%10+1;
                if(randNum > 5){
                    cout<<"You ran away safely..."<<endl;
                    fHp = -99;
                } else {
                    cout<<"Oh no! You failed to run away!!"<<endl;
                    cout<<"The enemy attacks you! You get hit for "<<fStrng<<" damage."<<endl;
                    pmHp -= fStrng;
                    cout<<"Your HP is now at: "<<pmHp<<endl;
                }
                break;
            }
        }
    } while ((fHp > 0)&&(pmHp > 0)&&(fHp != -99));
    
    //Determine win or lose or run
    if((pmHp <= 0)&&(fHp >= 0)&&(fHp != -99)){
        cout<<"You lost the battle."<<endl;
        if (pmLvl > 1){
            cout<<"You lost a level!"<<endl;
            pmLvl--;
            cout<<"Your current level is now at "<<pmLvl<<endl;
        } else cout<<"Your level is too low to lose a level!"<<endl;
    } else if ((fHp <= 0)&&(pmHp >= 0)&&(fHp != -99)){
        cout<<"CONGRATS! YOU WON THE BATTLE!"<<endl;
        pmExp += rand()%100+75;
        cout<<"You gained "<<pmExp<<" experience for winning!"<<endl;
    } else if (fHp = -99){
        cout<<"Because you ran away from combat,"<<endl;
        cout<<"You neither gained nor lost experience."<<endl;
    }
    
    //Determine Level w/ experience
    if(pmExp >= 100){
        pmLvl == 1;
    } else if (pmExp >= 500){
        pmLvl == 2;
    } else if (pmExp >= 1000){
        pmLvl == 3;
    } else if (pmExp >= 1500){
        pmLvl == 4;
    } else if (pmExp >= 2500){
        pmLvl == 5;
    } else if (pmExp >= 3600){
        pmLvl == 6;
    }
    
    //Exit Stage Right!
    return pmExp, pmHp, pmLvl;
}