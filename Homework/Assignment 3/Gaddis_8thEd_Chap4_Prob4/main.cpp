/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on March 2, 2015, 10:45AM
 * Purpose:  Homework Assignment 3 - 4th Problem - Areas of Rectangles
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
    float length1, width1, length2, width2, area1, area2;
    
    //Program title
    cout<<"\"Areas of Rectangles\""<<endl;
    
    //Input
    cout<<"Please enter the width and length of the first rectangle delimited by a single space:"<<endl;
    cin>>width1>>length1;
    cout<<"Thank you!\nPlease enter the width and length of the second rectangle, delimited by a single space:"<<endl;
    cin>>width2>>length2;
    
    //Calculate
    area1 = width1 * length1;
    area2 = width2 * length2;
    
    //Output
    if (area1 > area2)
    {
        cout<<"The dimensions from the first rectangle equate to a larger area than the second rectangle: \n"
            <<"Area of the first rectangle: "<<area1<<"\n"
            <<"Area of the second rectangle: "<<area2<<endl;
    } else if (area1 < area2)
    {
        cout<<"The dimensions from the second rectangle equate to a larger area than the first rectangle: \n"
            <<"Area of the first rectangle: "<<area1<<"\n"
            <<"Area of the second rectangle: "<<area2<<endl;
    } else if (area1 = area2)
    {
        cout<<"The area of the first rectangle is the same as the second rectangle: \n"
            <<"Area of the first rectangle: "<<area1<<"\n"
            <<"Area of the second rectangle: "<<area2<<endl;
    }
     
    //Exit Stage Right!
        return 0;
}

