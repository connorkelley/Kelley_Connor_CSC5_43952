/* 
 * File:   main.cpp
 * Author: Connor P. Kelley
 * Problem 1 -> 1. Sum of Numbers 
 * Problem 2 -> 11. Population
 * Problem 3 -> 12. Celsius to Fahrenheit Table
 * Problem 4 -> 13. The Greatest and Least of these
 * Problem 5 -> 17. Sales Bar Chart
 * Problem 6 -> 19. Budget Analysis
 * Problem 7 -> 2. Characters for the ASCII Codes
 * Problem 8 -> 22. Square Display
 * Problem 9 -> 3. Ocean Levels
 * Problem 10 -> 4. Calories Burned
 * Modified on Apr 6th, 2015 9:03 AM
 * Purpose: Add repetition with a do-loop
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare menu variable choice
    char choice;
    //Repeat the menu
    do{
        //General Menu Format
        //Display the selection
        cout<<"Type 1 to solve problem 1"<<endl;
        cout<<"Type 2 to solve problem 2"<<endl;
        cout<<"Type 3 to solve problem 3"<<endl;
        cout<<"Type 4 to solve the Cable Bill"<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
            case '1':prob1();break;
            case '2':prob2();break;
            case '3':prob3();break;
            case '4':prob4();break;
            default :cout<<"Exit"<<endl;
        };
    }while(choice>='1'&&choice<='4');
    //Exit Stage right
    return 0;
}

//*******************         Problem 1           ********************/
void prob1(){
    //Declare Variables
    int posInt, sum; //Integer value from user input
    
    //Prompt for user input
    cout<<"Please enter a positive integer value:"<<endl;
    cin>>posInt;
    
    if(posInt >= 0){
        //Loop to desired value
        for(int x=1; x <= posInt; x++){
            sum += x;   
        }    
        cout<<sum;
        
    } else {
        cout<<"You did not enter a positive integer!";
    }
   
}

//*******************         Problem 2           ********************/
void prob2(){
    //Declare Variables
    unsigned int stNum;     //The starting number of organisms as entered by a user
    float avgInc;           //The average daily population increase as a percentage (0.xx) format
    unsigned int numDays;   //The number of days multiplied
    unsigned int dlyPop;    //The size of the population per day
    
    //Prompt the user for input
    cout<<"Please enter a starting number of organisms:"<<endl;
    cin>>stNum;
    cout<<"Please enter the average daily population increase as a decimal formatted percentage:"<<endl;
    cin>>avgInc;
    cout<<"Please enter the number of days you would like to multiply by:"<<endl;
    cin>>numDays;
    
    //Loop to display the size of the population for each day
    for(int x=1; x <= numDays; x++){
        dlyPop = stNum*avgInc*x+stNum;
        cout<<"On day "<<x<<", the population will be "<<dlyPop<<endl;
             
    }          
    
}

//*******************         Problem 3           ********************/
void prob3(){
    //Declare Variables
    float f;
   
    //Title
    cout<<"\"Celsius to Fahrenheit Table\" Assignment 4."<<endl;
    
    //Loop to display Celsius Temperatures 0-20
    cout<<"Celsius\tFahrenheit\n-----------------"<<endl;
    for(int count =0; count <=20; count++){
        f = count*9/5 + 32;
        cout<<count<<"\t"<<f<<endl;    
    }
    
}

//*******************         Problem 4           ********************/
void prob4(){
    //Declare Variables
    int num,    //Entered Number
        maxNum,     //Maximum Number
        minNum;     //Minimum Number
    
    //Program Title
    cout<<"\"The Greatest and Least of These\""<<endl;
    
    //Do-While Loop 
    while (num != -99){
        cout<<"Please enter an integer (Enter -99 to exit)."<<endl;
        cin>>num;
        if(num > maxNum){
            maxNum = num;
        } 
        if (num < minNum){
            minNum = num;
        } 
        if (num == -99){
            break;
        }
    }
    //Output the Results
    cout<<endl<<"Smallest Number: "<<minNum<<endl;
    cout<<"Greatest Number: "<<maxNum<<endl;
    
}
//*******************         Problem 5           ********************/
void prob5(){
    //Declare Variables
    unsigned int sales1, sales2, sales3, sales4, sales5, bar;
    
    //Prompt the user for input
    cout<<"Please enter the sales for store 1: ";
    cin>>sales1;
    cout<<"Please enter the sales for store 2: ";
    cin>>sales2;
    cout<<"Please enter the sales for store 3: ";
    cin>>sales3;
    cout<<"Please enter the sales for store 4: ";
    cin>>sales4;
    cout<<"Please enter the sales for store 5: ";
    cin>>sales5;
    
    //For loop to display the bar graphs
    unsigned short stars1 = sales1/100;
    unsigned short stars2 = sales2/100;
    unsigned short stars3 = sales3/100;
    unsigned short stars4 = sales4/100;
    unsigned short stars5 = sales5/100;
    
    cout<<"SALES BAR CHART\n(Each * = $100)"<<endl;
    cout<<"Store 1: ";    
    for(int x; x < stars1; x++){
        cout<<'*';
    }   cout<<endl;
    cout<<"Store 2: ";    
    for(int x; x < stars2; x++){
        cout<<'*';
    }   cout<<endl;
    cout<<"Store 3: ";    
    for(int x; x < stars3; x++){
        cout<<'*';
    }   cout<<endl;
    cout<<"Store 4: ";    
    for(int x; x < stars4; x++){
        cout<<'*';
    }   cout<<endl;
    cout<<"Store 5: ";    
    for(int x; x < stars5; x++){
        cout<<'*';
    }   cout<<endl;

}
//*******************         Problem 6           ********************/
void prob6(){
     //Declare Variables
    int budget, //Budget for the month
        exp,    //Expense Amount
        tExp;   //Total Expenditures
    
    //Prompt for User Input
    cout<<"Enter your monthly budget in $'s:"<<endl;
    cin>>budget;
    
    //While loop to total monthly expenses
    while(exp != -1){
        cout<<"Enter an expenditure (Enter -1 to exit)."<<endl;
        cin>>exp;
        if (exp == -1){       
            break;
        }
        tExp += exp;
    }
    
    //Determine if the user is OVER, UNDER, or EQUALS budget
    if (budget < tExp){
        cout<<endl<<"You are $"<<tExp-budget<<" OVER budget!"<<endl;           
    }
    if (budget > tExp){
        cout<<endl<<"You are $"<<budget-tExp<<" UNDER budget!"<<endl;
    }
    if (budget == tExp) {
        cout<<endl<<"Your monthly expenses, $"<<tExp<<" ,equal your monthly budget, $"<<budget<<"!"<<endl;
    }
    
}
//*******************         Problem 7           ********************/
void prob7(){
    //Declare Variables
    char ascii;
    
    //Loop to output ASCII code
    for(int x; x <= 127; x++){
        cout<<ascii;
        ascii++;
    }
       
}
//*******************         Problem 8           ********************/
void prob8(){
    //Declare Variables
    int num;        //Positive Integer no Greater than 15
    
    //Prompt the User for Input
    cout<<"Please enter a positive integer no greater than 15:"<<endl;
    cin>>num;
    
    //Loop to display Square 
    if(num > 0 && num <= 15){  //Input Validation 
        for(int row=1; row <=num; row++){
            for(int col=1; col <= num; col++){
                cout<<"*";
            }
            cout<<endl;
        }    
    } else {
        cout<<"You did not enter an integer greater than 0\nand less than or equal to 15.";
    }
    
}

//*******************         Problem 9           ********************/
void prob9(){
     //Declare Variables
    float olvl = 1.5, 
          sum;
    
    //Loop to desired value
    for(int count =1; count <= 25; count++){
        sum = olvl * x;
        cout<<"In year "<<count<<": The ocean will have risen a total of "<<sum<<" millimeters."<<endl;
    }
        
}
//*******************         Problem 10           ********************/
void prob10(){
    //Declare Variables
    float cal = 3.6, sum;    //Calories burned per minute on a treadmill
    
    //Loop to desired value
    for(int counter =5; counter <=30; counter+=5){ //'x' = minutes on the treadmill
        sum = cal*counter;
        cout<<"After "<<counter<<" minutes, you will burn "<<sum<<" calories on the treadmill."<<endl;    
    }
    
}