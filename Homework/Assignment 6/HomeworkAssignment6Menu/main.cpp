/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on May 18, 2015, 10:08 AM
 * Purpose: Homework Assignment 6 Menu
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();
void prob10();
void initial (int [], int);
int larger (int [], const int, int, int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    bool exit = true;
    
    do{
        //Loop the user in the menu
        //Output the menu selection
        cout<<"*****Please enter a selection*****"
        cout<<endl<<"1. Largest/Smallest Array Values"<<endl;
        cout<<"2. Exam Grader"<<endl;
        cout<<"3. Grade Book"<<endl;
        cout<<"4. Lottery Application"<<endl;
        cout<<"5. Rainfall Statistics"<<endl;
        cout<<"6. Larger Than n"<<endl;
        cout<<"7. Monkey Business"<<endl;
        cout<<"8. Number Analysis Program"<<endl;
        cout<<"9. Charge Account Validation"<<endl;
        cout<<"10. Driver's License Exam"<<endl;
        cout<<"11. Exit the Program"<<endl;
    
        //Determine program to operate
        //Prompt the User for input
        cin>>choice;
        switch(choice){
            case 1:{ prob1(); break;}
            case 2:{ prob2(); break;}
            case 3:{ prob3(); break;}
            case 4:{ prob4(); break;}
            case 5:{ prob5(); break;}
            case 6:{ prob6(); break;}
            case 7:{ prob7(); break;}
            case 8:{ prob8(); break;}
            case 9:{ prob9(); break;}
            case 10:{ prob10(); break;}
            case 11:{ exit = false; break;}
        }
    }while(exit);
    
    //Exit Stage Right!
    return 0;
}

//Purpose: Assignment 6: 1. Largest/Smallest Array Values
void prob1(){
    //Declare Variables
    const int SIZE = 10;
    int numbers[SIZE];  //The size of the array is 10, SIZE = 10
    //Highest and lowest values stored in the array
    
    int lowest  = numbers[0];
    int highest = numbers[1];
    //Prompt the User for input
    cout<<"Please enter 10 numbers:"<<endl;
    
    //For-Loop Array to collect Values
    for(int count=0; count < SIZE; count++){
        cin>>numbers[count];
    }
    
   //Determine the lowest value in the array
    for(int count=0; count < SIZE; count++){
        if (numbers[count] < lowest) lowest = numbers[count];
    } 
   //Determine the Highest value in the Array
    for(int count=0; count < SIZE; count++){
        if(numbers[count] > highest) highest = numbers[count];
    }
    //Output the Array
    cout<<"You entered the following numbers:"<<endl;
    for(int count=0; count < SIZE; count++){
        cout<<numbers[count]<<" ";
    }
    //Output the Results
    cout<<endl<<"Out of those values..."<<endl;
    cout<<"The lowest  value that you entered was: "<<lowest<<endl;
    cout<<"The highest value that you entered was: "<<highest<<endl;
    
    cin.ignore();
    //Exit Stage Right!
}

//Purpose: Homework Assignment 6: 11. Exam Grader
void prob2(){
    //Declare Variables
    const int SIZE = 20;
    char ansKey[SIZE] = {}; //Character array for correct answers
    char usrKey[SIZE] = {}; //Array for student responses
    ifstream ansFile ("C:/Users/Connor/Documents/CSC 5 - C++/Kelley_Connor_CSC5_43952/Homework/Assignment 6/CorrectAnswers.txt");
    ifstream usrFile ("C:/Users/Connor/Documents/CSC 5 - C++/Kelley_Connor_CSC5_43952/Homework/Assignment 6/StudentAnswers.txt");
    int count   = 0,
        correct = 0,
        wrong   = 0;
    float grade;
    
    //Read the answer key into an array
    while ((! ansFile.eof())&&(ansFile>>ansKey[count])){ //While the end of the file IS NOT reached
        count++;
    }
    //Close the file
    ansFile.close();
    count = 0;
    while ((! usrFile.eof())&&(usrFile>>usrKey[count])){ //While the end of the file IS NOT reached
        count++;
    }
    usrFile.close();
    
    //Display answers from the file
    for(int count = 0; count < SIZE; count++){
        if(usrKey[count] == ansKey[count]){
            correct++;
        } else {
            wrong++;
            cout<<"You missed question "<<count<<endl;
            cout<<"Your    answer: "<<usrKey[count]<<endl;
            cout<<"Correct answer: "<<ansKey[count]<<endl;
        }
        
    }
    cout<<endl<<"Correct Answers: "<<correct<<endl;
    cout<<"Wrong   Answers: "<<wrong<<endl;
    
    //Calculate if student passed or failed the exam
    grade = (5 / 20.0f);
    
    if(grade > 0.70){
        cout<<"You passed the exam!"<<endl;
    } else cout<<"YOU FAILED!"<<endl;
    cout<<"Percent answered correctly: "<<grade*100<<"%";
    
    //Exit Stage Right!
}

//Purpose: Homework Assignment 6: 12. Grade Book
void prob3(){
    //Declare Variables
    const int SIZE = 5;
    //Declare Arrays
    string names[SIZE]   = {};
    float stdnt1[SIZE-1] = {};
    float stdnt2[SIZE-1] = {};
    float stdnt3[SIZE-1] = {};
    float stdnt4[SIZE-1] = {};
    float stdnt5[SIZE-1] = {};
    float total1, total2, total3, total4, total5;
    
    //Prompt the user for input
    //Student 1
    cout<<"Enter student name: ";
    cin>>names[0];
    for(int count = 0; count < (SIZE-1); count++){
            cout<<"Enter test score "<<(count+1)<<" ";
            cin>>stdnt1[count];    
            total1 += stdnt1[count];
    }
    //Student 2
    cout<<"Enter student name: ";
    cin>>names[1];
    for(int count = 0; count < (SIZE-1); count++){
            cout<<"Enter test score "<<(count+1)<<" ";
            cin>>stdnt2[count];    
            total2 += stdnt2[count];
    }
    //Student 3
    cout<<"Enter student name: ";
    cin>>names[2];
    for(int count = 0; count < (SIZE-1); count++){
            cout<<"Enter test score "<<(count+1)<<" ";
            cin>>stdnt3[count];
            total3 += stdnt3[count];
    }
    //Student 4
    cout<<"Enter student name: ";
    cin>>names[3];
    for(int count = 0; count < (SIZE-1); count++){
            cout<<"Enter test score "<<(count+1)<<" ";
            cin>>stdnt4[count];    
            total4 += stdnt4[count];
    }
    //Student 5
    cout<<"Enter student name: ";
    cin>>names[4];
    for(int count = 0; count < (SIZE-1); count++){
            cout<<"Enter test score "<<(count+1)<<" ";
            cin>>stdnt5[count];  
            total5 += stdnt5[count];
    }
    
    //Calculate the average score for each student
    int avg1, avg2, avg3, avg4, avg5;
    avg1 = total1 / 4;
    avg2 = total2 / 4;
    avg3 = total3 / 4;
    avg4 = total4 / 4;
    avg5 = total5 / 4;
    
    cout<<"For student "<<names[0]<<":"<<endl;
    cout<<"Average test score: "<<avg1<<endl;
    if(avg1 >= 70){
        cout<<"You passed."<<endl;
    } else cout<<"YOU FAILED."<<endl;
    cout<<"For student "<<names[1]<<":"<<endl;
    cout<<"Average test score: "<<avg2<<endl;
    if(avg2 >= 70){
        cout<<"You passed."<<endl;
    } else cout<<"YOU FAILED."<<endl;
    cout<<"For student "<<names[2]<<":"<<endl;
    cout<<"Average test score: "<<avg3<<endl;
    if(avg3 >= 70){
        cout<<"You passed."<<endl;
    } else cout<<"YOU FAILED."<<endl;
    cout<<"For student "<<names[3]<<":"<<endl;
    cout<<"Average test score: "<<avg4<<endl;
    if(avg4 >= 70){
        cout<<"You passed."<<endl;
    } else cout<<"YOU FAILED."<<endl;
    cout<<"For student "<<names[4]<<":"<<endl;
    cout<<"Average test score: "<<avg5<<endl;
    if(avg5 >= 70){
        cout<<"You passed."<<endl;
    } else cout<<"YOU FAILED."<<endl;
    
    //Exit Stage Right!
}

//Purpose: Homework Assignment 6: 14. Lottery Application
void prob4(){
    //Set the random number seed to time
    srand(static_cast<int>(time(0)));
    
    //Declare Variables
    const int SIZE = 4;
    int lottery[SIZE] = {};
    int userNum[SIZE] = {};
    int win = 0;
    
    //Set the lottery array equal to random integers
    for(int count = 0; count < SIZE; count++){
        int randNum = rand()%9+1;
        lottery[count] = randNum;
    }
    
    //Prompt the user to enter numbers for the lottery
    cout<<"Please enter 4 integers between 1 and 9 for the lottery"<<endl;
    for(int count = 0; count < SIZE; count++){
        cin>>userNum[count];
    }
    
    //Compare the user's entry to the lottery array
    for(int x = 0; x < SIZE; x++){   
        if(lottery[x] == userNum[x]){
            cout<<lottery[x]<<" MATCHED! at "<<(x+1)<<endl;
            win++;
        }
    }
    
    //Output the Lottery Array numbers
    cout<<"The lottery numbers are..."<<endl;
    for(int count = 0; count < SIZE; count++){
        cout<<lottery[count]<<" ";
    }
    
    //Output if the user won the lottery or not
    if(win == 4){
        cout<<endl<<"YOU WON THE LOTTERY!!!"<<endl;
    } else cout<<endl<<"Thanks for playing!"<<endl;
    
    //Exit Stage Right!
}

//Purpose: Assignment 6: 2. Rainfall Statistics
void prob5(){
    //Declare Variables
    const int SIZE = 13;//Size of the array
    int rnFall[SIZE];   //Initialization and name of the array
    int sum;            //To calculate total rainfall per year
    float rnAvg;          //To calculate the average rainfall per year
    //Prompt for User Input
    cout<<"Please enter the total rainfall for each of the following months in inches:"<<endl;
    for(int month = 1; month < SIZE; month++){
        cout<<"Month "<<month<<": ";
        cin>>rnFall[month];
    }
    //Calculate the total rainfall for the year
    for(int month =1; month < SIZE; month++){
        sum += rnFall[month];
    }
    //Calculate the Average rainfall for the year
    rnAvg = sum/12.0f;
    //Determine the months with the highest and lowest rainfall amount
    int low  = rnFall[1];
    int high = rnFall[2];
    int maxIndx, minIndx;   //The index value of the highest and lowest amounts
    for(int month = 1; month < SIZE; month++){
        if(rnFall[month] < low){
            low = rnFall[month];
            minIndx = month;
        }
        if(rnFall[month] > high){
            high = rnFall[month];
            maxIndx = month;
        }
    }
    //Output the Results
    cout<<endl<<"The total rainfall for the year was: "<<sum<<" inches."<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The average rainfall for the year was: "<<rnAvg<<" inches."<<endl;
    cout<<"The lowest amount of rainfall was "<<low<<" during month "<<minIndx<<"."<<endl;
    cout<<"The highest amount of rainfall was "<<high<<" during month "<<maxIndx<<"."<<endl;
    //Exit Stage Right!
}

//Purpose: Assignment 6: 4. Larger Than n
void prob6(){
    //Declare Variables
    const int SIZE = 10;
    int numbers[SIZE];
    int n=0, sum=0;
    
    //Initialize the Array to Random Numbers
    initial(numbers, SIZE);
    
    //Prompt the User for input
    cout<<"Enter an integer you want to find all values greater than: "<<endl;
    cin>>n;
    
    //Find values larger than n
    larger(numbers, SIZE, n, sum);
    
    //Exit Stage Right!
}
void initial(int numbers[], int SIZE){
    for (int count = 0; count < SIZE; count++){
        numbers[count]=rand()%10+1;
    }
}
int larger (int numbers[], const int SIZE, int n, int sum){
    for (int count = 0; count < SIZE; count++){
        if(numbers[count] > n){
            cout<<numbers[count]<<endl;
            sum++;
        }
    }
    cout<<"There were "<<sum<<" numbers larger than the value you entered in the array."<<endl;
}

//Purpose: Assignment 6: 5. Monkey Business
void prob7(){
    //Declare Variables
    //3x5 Array where each row represents a different monkey and each column represents a different day of the week
    
    const int mnkyNum = 3;  //3 Rows
    const int weekDay = 5;  //5 Columns
    int mnkyAry[mnkyNum][weekDay] = {};  //3x5 Array
    int total, mnkyAvg, small, big;
    
    //Input data for each monkey
    cout<<"Enter the amount of food eaten per day by each of the following monkeys:"<<endl;
    for(int mnky =0; mnky < mnkyNum; mnky++){
        for(int day =0; day < weekDay; day++){
            cout<<"Monkey "<<(mnky+1)<<", Weekday "<<(day+1)<<": ";
            cin>>(mnkyAry[mnky][day]);
        }
    }
    //Create a report that includes 
    //Average amount of food per day by the whole family of monkeys
    for (int row = 0; row < mnkyNum; row++){
        total = 0;
        //Sum the Row
        for (int col = 0; col < weekDay; col++) total += mnkyAry[row][col];
        mnkyAvg = total / weekDay;
        cout<<"Average amount of food eaten for monkey "<<(row+1)<<": "<<mnkyAvg<<endl;
    }
    //Calculate the most and least amount of food eaten by any one monkey
    small = mnkyAry[0][0];
    big = mnkyAry[0][0];
    for (int row = 0; row < mnkyNum; row++){
        for (int col = 0; col < weekDay; col++){
            if(mnkyAry[row][col] < small) small = mnkyAry[row][col];
            if(mnkyAry[row][col] > big)   big   = mnkyAry[row][col];
        }
    }
    //Least amount of food eaten during the week by any one monkey
    cout<<"The least amount of food eaten by any monkey was "<<small<<"."<<endl;
    //Greatest amount of food eaten during the week by any one monkey
    cout<<"The most  amount of food eaten by any monkey was "<<big<<"."<<endl;
    
    //Exit Stage Right!
}

//Purpose: Assignment 6: 7. Number Analysis Program
void prob8(){
    //Declare Variables
    const int SIZE = 6;     //Expected size of the array stored in file
    int numbers[SIZE];      //Initialize the array
    int count =0;           //Initialize count for For-Loops
    ifstream inFile ("C:/Users/Connor/Documents/CSC 5 - C++/Kelley_Connor_CSC5_43952/Homework/Assignment 6/numbers.txt");
    int sum =0;             //To calculate the sum of the numbers in the array
    float avg;                //To calculate the average of the numbers in the array
    
    //Open the named file
    while ((! inFile.eof())&&(inFile>>numbers[count])){ //While the end of the file IS NOT reached
        count++;
    }
    //Close the file
    inFile.close();
    
    //Manipulate the array to find desired values
    int  low = numbers[0];
    int high = numbers[1];
    for(count=0; count < SIZE; count++){
        if(numbers[count] < low)  low = numbers[count]; //Find the low
        if(numbers[count] > high) high = numbers[count];//Find the high
        sum += numbers[count];                          //Find the total 
    }
    avg = sum/static_cast<float>(SIZE);
    
    //Output the results
    cout<<"The numbers read from the file are:"<<endl;
    for(count=0; count < SIZE; count++){
        cout<<numbers[count]<<" ";
    }
    cout<<endl<<endl<<"The  lowest number in the array is "<<low<<endl;
    cout<<"The highest number in the array is "<<high<<endl;
    cout<<"The sum of the numbers in the array is "<<sum<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The average of the numbers in the array is "<<avg<<endl;
    
    //Exit Stage Right!
}

//Purpose: Homework Assignment 6: 1. Charge Account Validation
void prob9(){
    //Declare Variables
    const int SIZE = 18;
    int array[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                       8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                       1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    int num, sum = 0;
    
    //Prompt the User for input
    cout<<"Please enter your charge account number; ";
    cin>>num;
    
    //Validate the account number
    for(int count = 0; count < SIZE; count++){
        if(num == array[count]){
            cout<<endl<<"Account number "<<array[count]<<" is valid."<<endl;
            sum++;
        } 
    }
    if(sum == 0){
        cout<<endl<<"The account number that you entered is not a valid account."<<endl;
    }
    
    //Exit Stage Right!
}

//Purpose: Homework Assignment 6: 10. Driver's License Exam
void prob10(){
    //Declare Variables
    const int SIZE = 20;
    //Initialize the Array to Correct Answers
    char ansKey[SIZE] = {'A', 'D', 'B', 'B', 'C', 
                         'B', 'A', 'B', 'C', 'D',
                         'A', 'C', 'D', 'B', 'D',
                         'C', 'C', 'A', 'D', 'B'};
    //Initialize the User's Array
    char userKey[SIZE] = {};
    int nWrong, nRight;  //Number of wrong answers / Number of right answers
    
    //Prompt the User for input
    cout<<"Please enter your responses for the following questions:"<<endl;
    cout<<"Answers must be A, B, C, or D"<<endl;
    for(int count=0; count < SIZE; count++){
        cout<<(count+1)<<".";
        cin>>userKey[count];
    }
    //Compare userKey and ansKey
    //Display the incorrect answers and their corresponding number 
    for(int count=0; count < SIZE; count++){
        if(ansKey[count]!= userKey[count]){
            cout<<"You answered question "<<(count+1)<<" incorrectly."<<endl;
            cout<<"Your    answer: "<<userKey[count]<<endl;
            cout<<"Correct answer: "<<ansKey[count]<<endl;
            nWrong++;
        } else nRight++;
    }    
    //Indicate whether student passed the exam or failed
    if(nWrong <= 5){
        cout<<endl<<"You passed the exam!"<<endl;
    } else cout<<endl<<"You did not pass the exam!"<<endl;
    //Display the total number of correct answers
    cout<<"You got "<<nWrong<<" answers incorrect."<<endl;
    cout<<"You got "<<nRight<<" answers right."<<endl;
    
    //Exit Stage Right!
}