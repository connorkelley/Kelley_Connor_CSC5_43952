/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on March 19, 2015, 10:45AM
 * Purpose:  Homework Assignment 3 - 3rd Problem - Color Mixer
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
    
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    string color1, color2;
    
    //Program title
    cout<<"\"Color Mixer\""<<endl;
    
    //Input
    cout<<"Please enter two Primary Colors (Red, Yellow, or Blue), separated by a single space."<<endl;
    cin>>color1>>color2;    
    
    //If Block
    if ((color1 == "Red")&&(color2 == "Yellow")||((color1 == "Yellow")&&(color2 == "Red")))
    {
        cout<<"The colors Red and Yellow make Orange.";
    } else if ((color1 == "Blue")&&(color2 == "Red")||((color1 == "Red")&&(color2 == "Blue"))){
        cout<<"The colors Red and Blue make Purple.";
    } else if ((color1 == "Blue")&&(color2 == "Yellow")||((color1 == "Yellow")&&(color2 == "Blue"))) {
        cout<<"The colors Blue and Yellow make Green.";
    } else {
        cout<<"Error. The colors you entered are not primary colors.\n"
            <<"Please enter two primary colors ONLY (Red, Blue, Yellow";
    }

    //Exit Stage Right!
        return 0;
}

