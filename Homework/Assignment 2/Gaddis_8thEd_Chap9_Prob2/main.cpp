/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 *
 * Created on March 30, 2016, 2:12 PM
 */

//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
int *tstScr(int);
void sortScr(int*);
void scrAvg(int*);
//Execution Begins here

int main(int argc, char** argv) {
    //Declare the array and size
    int size;
    int *array;
    //Prompt user for inputs
    cout<<"This program takes test scores and sorts them, and averages them"<<
            endl;
    cout<<"How many test scores are you going to input?"<<endl;
    cin>>size;
    //Calling the function to gather data on scores
    array=tstScr(size);
    //Display the results
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    delete []array;
    return 0;
}

int *tstScr(int n){
    //Declare and allocate the memory
    int *a=new int[n];
    //Prompt user for inputs on the test score
    for(int i=0;i<n;i++){
        cout<<"Enter test# "<<i+1<<endl;
        cin>>a[i];
    }
    return a;
}