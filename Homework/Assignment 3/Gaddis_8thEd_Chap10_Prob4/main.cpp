/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 *
 * Created on April 18, 2016, 1:28 PM
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
int numWrd(char *);
int avgLet(char *);
//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    int size=76;
    char name[size];
    //Prompt User for inputs
    cout<<"In this program you will type out a sentence no more than "<<size-1<<
            " characters and ill tell you how many words are in the sentence"<<endl;
    cout<<"Type in your sentence"<<endl;
    cin.getline(name,size);//Asking user for the sentence
    cout<<"The number of words in the sentence is "<<numWrd(name)<<endl;
    cout<<"The average number of letters in each word is "<<avgLet(name)/numWrd(name)<<endl;
    
    return 0;
}

int numWrd(char *n){
    //Declare Variables
    //Set the Accumulator
    int freq=0;
    while(*n!='\0'){
        if(*n==' '||*n=='\0')
            freq++;
        *n++;
    }
    return freq+1;
}

int avgLet(char *n){
   int freq=0;
    while(*n!='\0'){
        if(*n!=' '||*n!='\0')
            freq++;
        *n++;
    }
    return freq; 
}