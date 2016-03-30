 
/* 
 * File:   main.cpp
 * Author: Jerson ROsales
 * Purpose: Chapter 9 Problem 1
 * Created on March 29, 2016, 3:56 PM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int *fillarray(int);
//Execution begins here

int main(int argc, char** argv) {
//Seed rand
    unsigned seed=time(0);
    srand(seed);
//Declare and Allocate the array
    int size=10;
    int *array=fillarray(size);
    for(int j=0;j<size;j++){
        cout<<array[j]<<" ";
    }
    //Free up the memory used by array
    delete []array;
    
    return 0;
}

int *fillarray(int n){
    //Declare And Allocate memory 
    int *a=new int [n];
    for(int i=0;i<n;i++){
        a[i]=rand()%100+1;
    }
    return a;
}
