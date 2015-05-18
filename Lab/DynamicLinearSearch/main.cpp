/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on May 18, 2015, 8:00 AM
 * Purpose: Example Linear Search/Mark Sort
 */

//System Libraries
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int *fillAray(int);
void prntAry(int [], int, int);
int linSrch(int [], int, int);
void markSrt(int [], int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Generate the random numbers for array
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    int SIZE = 100;
    
    //Fill the Array
    int *array = fillAray(SIZE);
    //Print the Array
    prntAry(array, SIZE, 10);
    //Sort the Array
    markSrt(array, SIZE);
    //Print the Array again
    prntAry(array, SIZE, 10);
    //Find Something (Perform a search)
    int rndVal=rand()%90+10;
    cout<<endl<<rndVal<<" was found at position "<<linSrch(array, SIZE, rndVal)<<endl;
    
    //Deallocate memory
    delete []array;
    
    //Exit Stage Right!
    return 0;
}


int *fillAray(int n){
    //Allocate Memory
    int *a=new int[n];
    //Fill array
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10; //2-Digit Numbers
    }
    return;
}

void prntAry(int a[], int n, int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==perLine-1)cout<<endl;
    }
}
int linSrch(int a[], int n, int val){
    for(int i=0;i<n;i++){
        if(a[i]==val)return i;
    }
    return -1;
}
void markSrt(int a[], int n){
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