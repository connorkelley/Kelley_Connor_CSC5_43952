/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on May 13, 2015, 7:12 PM
 * Purpose: Homework Assignment 6: 11. Exam Grader
 */

//System Libraries
#include <iostream> //input/output stream
#include <fstream>  //file stream
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE = 20;
    char ansKey[SIZE] = {}; //Character array for correct answers
    char usrKey[SIZE] = {}; //Array for student responses
    ifstream ansFile ("C:/Users/Connor/Documents/CSC 5 - C++/Kelley_Connor_CSC5_43952/Homework/Assignment 6/CorrectAnswers.txt");
    ifstream usrFile ("StudentAnswers.txt");
    int count = 0;
    //Read the answer key into an array
    while ((! ansFile.eof())&&(ansFile>>ansKey[count])){ //While the end of the file IS NOT reached
        count++;
    }
    //Close the file
    ansFile.close();
    
    //Display contents from the file
    for(int count = 0; count < SIZE; count++){
            cout<<ansKey[count]<<" ";
        }
    
    //Exit Stage Right!
    return 0;
}

