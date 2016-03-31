/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 30, 2016, 2:12 PM
 */

//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
int *tstScr(int);
void sortScr(int*,int);
void scrAvg(int*,int);
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
    //Sorting the function
    sortScr(array,size);
    //Display the results
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    //Taking the average of the test scores
    scrAvg(array,size);
    
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

void sortScr(int*a,int n){
    for(int pos=0;pos<n-1;pos++){
        for(int row=pos+1;row<n;row++){
            if(*(a+pos)>*(a+row)){
                *(a+pos)=*(a+pos)^*(a+row);
                *(a+row)=*(a+pos)^*(a+row);
                *(a+pos)=*(a+pos)^*(a+row);

            }
        }
    }
}

void scrAvg(int*a,int s){
    //Declare accumulator and the total for average
    float total;
    float acu=0.0;
    for(int i=0;i<s;i++){
        acu+=a[i];
    }
    total=acu/s;
    cout<<endl;
    cout<<"The total average is "<<total<<endl;
}
