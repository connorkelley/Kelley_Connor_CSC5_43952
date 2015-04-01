/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on April 1, 2015, 8:00 AM
 * Purpose: Busted Keypad, I am hungry... Find closest temp for food!
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short tAbove = 999, tBelow = 0, temp, posSet=0;
    
    //Prompt the user for input
    cout<<"Input a temperature from 0 to 999:"<<endl;
    cin>>temp;
    
    //Exhaust all possible temperature choices
    for(int t100 = 0; t100 <= 9; t100++){
        for(int t10 = 0; t10 <=9; t10++){
            for(int t1 = 0; t1 <=9; t1++){
                //Skips for all conditions of '1, 4, 7'2
                if(t100==1 || t10==1 || t1==1)continue;
                if(t100==4 || t10==4 || t1==4)continue;
                if(t100==7 || t10==7 || t1==7)continue;
                posSet++;
                unsigned int tloop = t100*100+t10*10+t1;
                unsigned int tdiffA = tloop-temp;
                unsigned int tdiffB = temp-tloop;
                if((tdiffA>=0)&&(tdiffA<(tAbove-temp)))tAbove = tloop;
                if((tdiffB>=0)&&(tdiffB<(temp-tBelow)))tBelow = tloop;
                
            }
        }
    }
    //Output the range of temperature settings
    cout<<"The input temperature = "<<temp<<" degrees"<<endl;
    cout<<"The temp on the high side = "<<tAbove<<" degrees"<<endl;
    cout<<"The temp on the  low side = "<<tBelow<<" degrees"<<endl;
    cout<<"There are a total of "<<posSet<<" possible temperature settings"<<endl;
    
    //Exit Stage Right!
    return 0;
}

