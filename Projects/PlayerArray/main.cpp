/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on June 1, 2015, 10:11 AM
 * Purpose: Test out 2D player save array
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void savGame(int [][3]);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    /*int newExp;
    int pmExp;
    
    
    newExp = (rand()%100+75)*(rand()%4+1);
    pmExp += newExp;
    cout<<newExp<<"\t"<<pmExp;
    */
    int pmExp;
    int pmHp;
    int pmLvl;
    srand(static_cast<unsigned int>(time(0)));
    //Initialize the array variables and constants
    const int ROWS = 10;
    const int COLS = 3;
    
    int player[ROWS][COLS] =   {{1, 100, rand()%10+1},
                                {2, 200, rand()%15+5},
                                {3, 300, rand()%20+10},
                                {4, 400, rand()%25+15},
                                {5, 500, rand()%30+20},
                                {6, 600, rand()%35+25},
                                {7, 700, rand()%40+30},
                                {8, 800, rand()%45+35},
                                {9, 900, rand()%50+40},
                                {10, 1000, rand()%55+45}};
       
    //Initialize the array with values
    
    
    
    if(pmExp <= 100){
        pmLvl = 1;
        pmHp  = 100;            
    } else if ((pmExp <= 500)&&(pmExp > 100)){
        pmLvl = 2;
        pmHp  = 200;
    } else if ((pmExp <= 1000)&&(pmExp > 500)){
        pmLvl = 3;
        pmHp  = 300;
    } else if (pmExp >= 1500){
        pmLvl = 4;
        pmHp  = 400;
    } else if (pmExp >= 2500){
        pmLvl = 5;
        pmHp  = 500;
    } else if (pmExp >= 3600){
        pmLvl = 6;
        pmHp  = 600;
    }
    
    
    
    
    //Exit Stage Right!
    return 0;
}

savGame(int player**){
    //Declare Variables
    
    //Output
    for (int x=0; x < 10; x++){
        for(int y=0; y < 3; y++){
            cout<<fixed<<setw(4)<<setprecision(2)<<showpoint;
            cout<<player[x][y]<<" ";
        }
        cout<<endl;
    }
}