/* 
 * File:   main.cpp
 * Author: Connor Kelley
 * Created on May 4, 2015, 9:39 AM
 * Purpose: Eratosthenes Sieve
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Variables

//Function Prototypes
void sieve(bool[], int);
void prntPrm(const bool [], int, int);
void initial(bool[], int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE = 2000001;
    bool prime[SIZE];
    
    //Call Functions
    //Initialize the  Array
    initial(prime, SIZE);
    
    //Perform the Sieve
    sieve(prime, SIZE);
    
    //Print the Results
    prntPrm(prime, SIZE, 6);
    
    //Exit Stage Right!
    return 0;
}

//Initialize the Array to all True
void initial(bool primes[], int n){
    for (int count =0; count < n; count++){
        primes[count] = true;
    }
    primes[0] = false;
    primes[1] = false;
}

//Calculate Prime Numbers
void sieve (bool primes[], int n){
    //Outer Loop to process the sieve
    for (int count = 2; count < sqrt(n); count++){
        if(primes[count]){
            //Inner loop of Sieve
            for (int j=2*count; j < n; j+=count){
                primes[j] = false;
            }
        }
    }
}

//Print the Primes
void prntPrm(const bool primes[], int n, int perLine){
    //Print out only the prime numbers
    int nPrimes = 0;
    for (int count = 0; count < n; count++){
        if(primes[count]){
            cout<<setw(9)<<count;
            if(nPrimes%perLine==(perLine-1))cout<<endl;
            nPrimes++;
        }
    }
    cout<<endl<<"Total number of primes between 0 and "<<n-1<<" = "<<nPrimes<<endl;
}

