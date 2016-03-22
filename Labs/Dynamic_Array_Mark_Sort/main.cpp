/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 *
 * Created on March 9, 2016, 1:10 PM
 */

//System Libraries
#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//GLobal Constants

//Function Prototypes
int *fillMod(int,int);
void prntAry(int *,int,int);
void markSrt(int *,int);
float mean(int [],int);
float median(int [],int);
int *mode(int [],int);
//Execution begins here
int main(int argc, char** argv) {
    //Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables for mean,median and mode
    float mean1,median1;
    int mode2;
    //Declare and allocate the array
    int size=100;
    int *array=fillMod(size,100);
    //Display the random the array
    prntAry(array,size,10);
    //Sort the array
    markSrt(array,size);
    //Print New Array
    prntAry(array,size,10);
    //Printing out the mean
    mean1=mean(array,size);
    cout<<"The mean is "<<mean1<<endl;
    //Deallocate Memory
    delete []array;
    //Exit Stage right
    return 0;
}

//000000000000000001111111111111111111112222222222222222233333333333333333555555
//329474987349874398749374398743438754835336565936497397498327498374983743347438
//                    Print Array
//Inputs
//        n->Size of the array
//        a->Array
//Output
//        a-?The sorted array
////////////////////////////////////////////////////////////////////////////////
void markSrt (int *a,int n){
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

//000000000000000001111111111111111111112222222222222222233333333333333333555555
//329474987349874398749374398743438754835336565936497397498327498374983743347438
//                    Print Array
//Inputs
//        n->Size of the array
//        a->Array
//         perLine->number of integers tom display per row

void prntAry(int *a,int n,int perLine){
    //Output Array
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<*(a+i)<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
}

//000000000000000001111111111111111111112222222222222222233333333333333333555555
//329474987349874398749374398743438754835336565936497397498327498374983743347438
//                    Fill Array
//Inputs
//        n->Size of the array
//Outputs
//         a->filled with two digits integers
int *fillMod(int n,int mod){
    //Declare and allocate memory
    int *a=new int[n];
    for(int i;i<n;i++){
        a[i]=i%mod;
    
}
    //return pointer
    return a;
}

float mean(int array[],int size ){
    float total=0;
    float mean;
    for(int count=0;count<size;count++){
        total+=array[size];
    }
    mean=total/size;
    return mean;
}
