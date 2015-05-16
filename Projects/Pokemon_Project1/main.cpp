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
int ldGame(int, int, int);
void btlMenu();
void newGame(string);
void savGame(int, int, int);
int battle(int, int, int);   
    //Return Experience Points attained
    //Return information about pokemon

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Player Variables
    int     pmExp   = 0,  //Pokemon Experience
            pmHp    = 100,//Pokemon Hit points
            pmLvl   = 1;  //Pokemon Level
    string  name;   //Player Name
    //Other Variables
    int userSel;        
    bool menu   = true,
         inGame = true;
    
    //Start Game
    gameStr();
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
int ldGame(int pmExp, int pmHp, int pmLvl){
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
void savGame(int pmExp, int pmHp, int pmLvl){
    ofstream myGame;
    myGame.open("savedGame.txt");
    myGame<<pmExp<<pmHp<<pmLvl;
    myGame.close();
}

//Function to initiate battle sequence...
int battle(int pmExp, int pmHp, int pmLvl){
    //Initialize random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    int     fHp,    //Foe's HP
            fStrng, //Foe's Strength Value
            fLvl,   //Foe's Level
            pmStrng;//Pokemon Strength   
    const int SIZE = 5;
    int hpAry[SIZE] = {};
    int randNum = rand()%100+75; 
    
    //Calculate the enemy's level
    if((pmLvl >= 1)&&(pmLvl <= 5)){
        fLvl = rand()%5+1;
    } else if ((pmLvl >=6)&&(pmLvl <=10)){
        fLvl = rand()%10+5;
    }
    
    //random array to calculate enemy health
    for(int count = 1; count <= SIZE; count ++){
        hpAry[count] += (randNum*count);
    }
    for(int count = 0; count < SIZE; count++){
        cout<<hpAry[count]<<" ";
    }
    
    //Output Battle Sequence...
    cout<<endl<<"You've encountered a foe!"<<endl;
    //Output Enemy Stats!
    cout<<"Enemy level   : "<<fLvl<<endl;
    cout<<"Enemy HP      : "<<hpAry[rand()%4]<<endl;
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
                cout<<"Success! You attack the enemy."<<endl;
                cout<<"You hit the enemy for "<<pmStrng<<" damage!"<<endl;
                cout<<"The enemy HP is now at: "<<fHp<<endl<<endl;
                cout<<"The enemy attacks you!"<<endl<<"You get hit for "<<fStrng<<" damage."<<endl;
                pmHp -= fStrng;
                cout<<"Your HP is now at: "<<pmHp<<endl;
                break;
            }
            case '2':{
                int randNum = rand()%10+1;
                if(randNum > 5){
                    cout<<"You ran away safely..."<<endl;
                    fHp = -1;
                } else {
                    cout<<"Oh no! You failed to run away!!"<<endl;
                    cout<<"The enemy attacks you! You get hit for "<<fStrng<<" damage."<<endl;
                    pmHp -= fStrng;
                    cout<<"Your HP is now at: "<<pmHp<<endl;
                }
                break;
            }
        }
    } while ((fHp > 0)&&(pmHp > 0));
    //Determine win or lose
    if(pmHp > 0){
        cout<<"You lost the battle. You lose a level!"<<endl;
        pmLvl--;
        cout<<"Your current level is now at "<<pmLvl<<endl;
    } else if (fHp > 0){
        cout<<"CONGRATS! YOU WON THE BATTLE!"<<endl;
        pmExp += rand()%100+75;
        cout<<"You gained "<<pmExp<<" for winning!"<<endl;
    }
    
    //Determine Level w/ experience
    if(pmExp >= 100){
        pmLvl++;
        pmHp += 100;
    }
        
    //Exit Stage Right!
    return pmExp, pmHp, pmLvl;
}