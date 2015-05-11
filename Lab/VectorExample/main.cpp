/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on May 11, 2015, 9:31 AM
 * Purpose: Vector Example
 */

//System Libraries
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void fillAray(vector<int> &, int);
void prntAry (vector<int> &, int, int);
void markSrt (vector<int> &a, int n);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Generate the random numbers for array
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    const int SIZE = 100;
    vector<int> array(SIZE);
    int rndVal=rand()%90+10;
    
    //Fill the Array
    fillAray(array, SIZE);
    //Print the Array
    prntAry(array, SIZE, 10);
    //Sort  the Array
    sort(array.begin(), array.end());
    //markSrt(array, SIZE);
    //Print the Array
    prntAry(array, SIZE, 10);
    
    std::vector<int>::iterator it;
    it = find(array.begin(), array.end(), rndVal);
    if (it==array.end()){
        cout<<rndVal<<" was found"<<endl;
    } else {
        
    }
    
    
    //Exit Stage Right!
    return 0;
}

void prntAry(vector<int> &a, int n, int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==perLine-1)cout<<endl;
    }
}

void fillAray(vector<int> &a, int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10; //2-Digit Numbers
    }
}

void markSrt(vector<int> &a, int n){
    for(int pos=0;pos<n-1;pos++){
        for(int lst=pos+1;lst<n;lst++){
            if(a[pos]>a[lst]){
                int temp=a[pos];
                a[pos] = a[lst];
                a[lst] = temp;
            }
        }
    }
}