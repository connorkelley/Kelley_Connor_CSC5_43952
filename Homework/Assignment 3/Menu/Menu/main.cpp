/* 
 * File:   main.cpp
 * Author: Connor P. Kelley
 * Purpose:  To Illustrate the code for developing a menu
 * Problem 1 -> Gaddis_8thEd_Chap4_Prob1 Minimum/Maximum
 * Problem 2 -> Gaddis_8thEd_Chap4_Prob2 Roman Numeral Converter
 * Problem 3 -> Gaddis_8thEd_Chap4_Prob4 Areas of Rectangles
 * Problem 4 -> Gaddis_7thEd_Chap4_Prob22 Cable Bill
 * Problem 5 -> Gaddis_8thEd_Chap4_Prob23 Geometry Calculator
 * Problem 6 -> Gaddis_8thEd_Chap4_Prob5 Body Mass Index
 * Problem 7 -> Gaddis_8thEd_Chap4_Prob7 Time Calculator
 * Problem 8 -> Gaddis_8thEd_Chap4_Prob8 Color Mixer
 * Problem 9 -> Gaddis_8thEd_Chap4_Prob11 Math Tutor
 * Problem 10 -> Gaddis_8thEd_Chap4_Prob16 Running the Race
 * Modified on Mar 26th, 2015 at 11:09AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //General Menu Format
    //Display the selection
    cout<<"Type a to solve Gaddis_8thEd_Chap4_Prob1 Minimum/Maximum"<<endl;
    cout<<"Type b to solve Gaddis_8thEd_Chap4_Prob2 Roman Numeral Converter"<<endl;
    cout<<"Type c to solve Gaddis_8thEd_Chap4_Prob4 Areas of Rectangles"<<endl;
    cout<<"Type d to solve Gaddis_7thEd_Chap4_Prob22 Cable Bill"<<endl;
    cout<<"Type e to solve Gaddis_8thEd_Chap4_Prob23 Geometry Calculator"<<endl;
    cout<<"Type f to solve Gaddis_8thEd_Chap4_Prob5 Body Mass Index"<<endl;
    cout<<"Type g to solve Gaddis_8thEd_Chap4_Prob7 Time Calculator"<<endl;
    cout<<"Type h to solve Gaddis_8thEd_Chap4_Prob8 Color Mixer"<<endl;
    cout<<"Type i to solve Gaddis_8thEd_Chap4_Prob11 Math Tutor"<<endl;
    cout<<"Type j to solve Gaddis_8thEd_Chap4_Prob16 Running the Race"<<endl;
    cout<<"Type anything else to quit with no solutions."<<endl;
    
    //Read the choice
    char choice;
    cin>>choice;
    
    //Solve a problem that has been chosen.
    switch(choice){
            case 'a':{
                //Declare Variables
                unsigned short num1, num2;
                
                //Title 
                cout<<"\"Minimum/Maximum\""<<endl;
                
                //Prompt the User for Input
                cout<<"Please enter two integers, separated by a single space."<<endl;
                cin>>num1>>num2;

                //Output Option 1
                cout<<"The larger number is "<<(num1>num2?num1:num2)<<"."<<endl;
                cout<<"The smaller number is "<<(num1<num2?num1:num2)<<".";

                //Output Option 2
                //if (num1>num2)
                //{
                //    cout<<"The larger number is "<<num1<<"."<<endl;
                //    cout<<"The smaller number is "<<num2<<".";
                //} else {
                //    cout<<"The larger number is "<<num2<<"."<<endl;
                //    cout<<"The smaller number is "<<num1<<".";
                //}
                break;
            }
            case 'b':{
                //Declare Variables
                unsigned short num;

                //Program title
                cout<<"\"Roman Numeral Converter\""<<endl;

                //Input
                cout<<"Please enter a number between 1 and 10:"<<endl;
                cin>>num;

                //Output  
                switch (num)
                {
                    case 1: cout <<"1 is equal to Roman Numeral \'I\'\n";
                            break;
                    case 2: cout <<"2 is equal to Roman Numeral \'II\'\n";
                            break;
                    case 3: cout <<"3 is equal to Roman Numeral \'III\'\n";
                            break;
                    case 4: cout <<"4 is equal to Roman Numeral \'IV\'\n";
                            break;
                    case 5: cout <<"5 is equal to Roman Numeral \'V\'\n";
                            break;
                    case 6: cout <<"6 is equal to Roman Numeral \'VI\'\n";
                            break;        
                    case 7: cout <<"7 is equal to Roman Numeral \'VII\'\n";
                            break;        
                    case 8: cout <<"8 is equal to Roman Numeral \'VIII\'\n";
                            break;        
                    case 9: cout <<"9 is equal to Roman Numeral \'IX\'\n";
                            break;        
                    case 10: cout <<"10 is equal to Roman Numeral \'X\'\n";
                            break;        
                    default: cout <<"Sorry, you did not enter a number between 1 and 10.\n";                    
                }
                break;
            }
            case 'c':{
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
                break;
            }
            case 'd':{
                //Declare Variables
                ofstream out;
                float vwdHrs;   //Hours Viewed
                char package;   //Package Type (AaBbCc)
                const int SIZE = 40;  //Max size of name = 39 characters  
                char name[SIZE];      //Customer Name
                float bill;     //Cable Bill in $'s

                //Program title
                cout<<"\"Cable Bill\""<<endl;

                //Open the File
                out.open("Cable.dat");

                //Prompt User for Input
                cout<<"How many hours did you view this month?"<<endl;
                cin>>vwdHrs;
                cout<<"What is your package? A, B, C"<<endl;
                cin>>package;
                cout<<"What is the customer's name?"<<endl;
                cin.ignore();
                cin.getline(name, SIZE);     

                //Calculate the Bill
                switch (package)
                {
                    case 'A':
                    case 'a':{
                        bill=9.95;
                        if (vwdHrs > 10) bill += 2 * (vwdHrs - 10);
                        break;
                    }
                    case 'B':
                    case 'b':{
                        bill=14.95;
                        if (vwdHrs > 20) bill += (vwdHrs - 20);
                        break;
                    }
                    case 'C':
                    case 'c':{
                        bill=19.95;
                        break;
                    }
                    default: cout<<"Wrong package chosen"<<endl;
                }

                //Output Results to File
                out<<fixed<<setprecision(2)<<showpoint;
                out<<"Your cable bill from CSC5 RCC Programming Class"<<endl;
                out<<"Customer Name: "<<name<<endl;
                out<<"Package: "<<package<<endl;
                out<<"Hours Viewed: "<<vwdHrs<<endl;
                out<<"Amount Due: "<<bill<<endl;

                //Close the File
                out.close();
                
                break;
                }
            case 'e':{
                //Declare Variables
                char prob;  //Signifies what problem the switch solves
                float area, radius, length, width, height, base;

                //Program title
                cout<<"\"Geometry Calculator\""<<endl;

                //Prompt the User for Input
                cout<<"1. Calculate the Area of a Circle"<<endl;
                cout<<"2. Calculate the Area of a Rectangle"<<endl;
                cout<<"3. Calculate the Area of a Triangle"<<endl;
                cout<<"4. Quit"<<endl;
                cin>>prob;

                //Output the Problem selected   
                switch (prob)
                {
                    case '1': cout <<"You have selected \"Calculate the Radius of a Circle\""<<endl;
                            //Prompt the User for Input
                            cout<<"Please enter a radius number: "<<endl;
                            cin>>radius;

                            //Calculate
                            area = 3.14159 * (radius * radius);

                            //Output
                            cout<<"The area of your circle is: "<<area;

                            break;
                    case '2': cout <<"You have selected \"Calculate the Area of a Rectangle\""<<endl;
                            //Prompt the User for Input
                            cout<<"Please enter a length, then a width, separated by a single space:"<<endl;
                            cin>>length>>width;

                            //Calculate
                            area = length * width;

                            //Output
                            cout<<"The area of your rectangle is: "<<area;

                            break;
                    case '3': cout <<"You have selected \"Calculate the Area of a Triangle\""<<endl;
                            //Prompt the User for Input
                            cout<<"Please enter a base, then a height, separated by a single space:"<<endl;
                            cin>>base>>height;

                            //Calculate
                            area = base * height * 0.5f;

                            //Output
                            cout<<"The area of your triangle is: "<<area;

                            break;
                    case '4': cout <<"You have quit the program.";
                            break;
                    default: cout <<"You did not enter a number between 1 and 4.\n";                    
                    }  
                break;
            }
            case 'f':{
                //Declare Variables
                unsigned short weight;   //Measured in lbs
                unsigned short height;   //Measured in inches
                float bmi;      //Body Mass Index

                //Program title
                cout<<"\"Body Mass Index\""<<endl;

                //Prompt the User for Input
                cout<<"Please enter your weight in lbs, then height in inches, separated by a single space:"<<endl;
                cin>>weight>>height;

                //Calculate
                bmi = (weight * 703.0f) / (height * height);

                //Output whether BMI is good or bad
                if (18.5 < bmi && bmi < 25.0)
                {
                    cout<<"You are at an optimal weight with a BMI of "<<bmi<<endl;
                } else if (bmi < 18.5)
                {
                    cout<<"You are underweight with a BMI of "<<bmi<<endl;
                } else if (bmi > 25.0)
                {
                    cout<<"You are overweight with a BMI of "<<bmi<<endl;
                }
                break;
            }
            case 'g':{
                //Declare Variables
                unsigned long seconds, minutes, hours, days;

                //Program title
                cout<<"\"Time Calculator\""<<endl;

                //Input
                cout<<"Please enter a number of seconds:"<<endl;
                cin>>seconds;

                //Calculate
                minutes = seconds / 60;
                hours = seconds / 3600;
                days = seconds / 86400;

                //Output
                if (seconds >= 86400)
                {
                    cout<<"Days: "<<days;
                } 
                else
                {
                    if (seconds >= 3600)
                    {
                        cout<<"Hours: "<<hours;
                    } 
                    else 
                    {
                        if (seconds >= 60)
                        {
                        cout<<"Minutes: "<<minutes;
                        }
                        else 
                        {
                            if (seconds < 60)
                            {
                            cout<<"Seconds: "<<seconds;
                            }
                        }
                    }   
                }
                break;
            }
            case 'h':{
                //Declare Variables
                string color1, color2;

                //Program title
                cout<<"\"Color Mixer\""<<endl;

                //Input
                cout<<"Please enter two Primary Colors (Red, Yellow, or Blue), separated by a single space."<<endl;
                cin>>color1>>color2;    

                //If Block for program to decide what colors were entered
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
                break;
            }
            case 'i':{
                //Declare Variables
                unsigned seed = time(0); //Get the system time
                srand(seed); //Seed the random number generator
                unsigned short temp1 = rand() % 1000 + 1; //Random number
                unsigned short temp2 = rand() % 1000 + 1; //Random number
                unsigned short ans, userAns; //The answer, User's entered answer
                
                //Program Title 
                cout<<"\"Math Tutor\""<<endl;
                
                //Calculate 
                ans = temp1 + temp2; //Sum of two random numbers

                //Output   
                cout<<setw(7)<<temp1<<endl;
                cout<<"+"<<setw(6)<<temp2<<endl;
                cout<<"_______"<<endl;
                cout<<"Please enter answer to continue."<<endl;
                cin>>userAns;

                if (userAns == ans) //If user enters the correct answer
                {
                    cout<<"CONGRATULATIONS! You entered the correct answer!";
                } else { //If user does not enter the correct answer
                    cout<<"You entered the incorrect answer."<<endl;
                    cout<<setw(7)<<temp1<<endl;
                    cout<<"+"<<setw(6)<<temp2<<endl;
                    cout<<"_______"<<endl;
                    cout<<setw(7)<<ans<<endl;
                }
                break;
            }
            case 'j':{
                //Declare Variables
                string run1, run2, run3;
                float time1, time2, time3;

                //Program title
                cout<<"\"Running the Race\""<<endl;

                //Input
                //First Runner
                cout<<"Please enter the name of the first runner and their time, separated by a single space:"<<endl;
                cin>>run1>>time1;
                //Second Runner
                cout<<"Please enter the name of the second runner and their time, separated by a single space:"<<endl;
                cin>>run2>>time2;
                //Third Runner
                cout<<"Please enter the name of the third runner and their time, separated by a single space:"<<endl;
                cin>>run3>>time3;

                //Output  
                //Did run1 come in first place?
                if ((time1 < time2) && (time1 < time3))
                {
                    //If run1 did, did run2 or run3 come in second?
                    if (time2 < time3){
                        cout<<run1<<" came in first place with a time of "<<time1<<endl;
                        cout<<run2<<" came in second place with a time of "<<time2<<endl;
                        cout<<run3<<" came in third place with a time of "<<time3<<endl;
                    }  
                    else
                    {
                        cout<<run1<<" came in first place with a time of "<<time1<<endl;
                        cout<<run3<<" came in second place with a time of "<<time3<<endl;
                        cout<<run2<<" came in third place with a time of "<<time2<<endl;
                    }
                } else if ((time1 < 0) || (time2 < 0) || (time3 < 0))
                    {
                    cout<<"You did not enter a valid time. Please enter only positive numbers for times."<<endl;
                    }
                //Did the run2 come in first place?    
                if ((time2 < time1) && (time2 < time3))
                {
                    //If run2 did, did run1 or run3 come in second?
                    if (time1 < time3){
                        cout<<run2<<" came in first place with a time of "<<time2<<endl;
                        cout<<run1<<" came in second place with a time of "<<time1<<endl;
                        cout<<run3<<" came in third place with a time of "<<time3<<endl;
                    }    
                    else
                    {
                        cout<<run2<<" came in first place with a time of "<<time2<<endl;
                        cout<<run3<<" came in second place with a time of "<<time3<<endl;
                        cout<<run1<<" came in third place with a time of "<<time1<<endl;
                    } 
                } else if ((time1 < 0) || (time2 < 0) || (time3 < 0))
                        {
                        cout<<"You did not enter a valid time. Please enter only positive numbers for times."<<endl;
                        }

                //Did the run3 come in first place?
                if ((time3 < time1) && (time3 < time2))
                {
                    //If run3 did, did run1 or run2 come in second?
                    if (time1 < time2){
                        cout<<run3<<" came in first place with a time of "<<time3<<endl;
                        cout<<run1<<" came in second place with a time of "<<time1<<endl;
                        cout<<run2<<" came in third place with a time of "<<time2<<endl;
                    }   
                    else
                    {
                        cout<<run3<<" came in first place with a time of "<<time3<<endl;
                        cout<<run2<<" came in second place with a time of "<<time2<<endl;
                        cout<<run1<<" came in third place with a time of "<<time1<<endl;
                    } 
                } else if ((time1 < 0) || (time2 < 0) || (time3 < 0))
                {
                    cout<<"You did not enter a valid time. Please enter only positive numbers for times."<<endl;
                }
                break;
            }
            default:{
                cout<<"Exit?"<<endl;
            }
        }
    //Exit Stage Right!
    return 0;
}