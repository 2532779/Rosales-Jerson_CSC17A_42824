/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 *
 * Created on April 18, 2016, 1:28 PM
 */
//System Libraries
#include <iostream>
#include <cctype>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
int numWrd(char *);
int avgLet(char *);
//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    int size=101;
    char name[size];
    char input;
    //Prompt User for inputs
    cout<<"This program will tell you how many vowels and consanants are in a "
            <<" sentence"<<endl;
    cout<<"Please enter your sentence upto 100 characters"<<endl;
        cin.getline(name,size);
    do{
       cout<<"A - Count the number of vowels in the string"<<endl;
       cout<<"B - Count the number of consonants in the string"<<endl;
       cout<<"C - Count both the vowels and consonants in the string"<<endl;
       cout<<"D - Enter another string"<<endl;
       cout<<"E - Exit the program"<<endl;
       cin>>input;
       switch(input){
           case 'A':{
               break;
           }
           case 'B':{
               break;
           }
           case 'C':{
               break;
           }
           case 'D':{
               break;
           }
           case 'E':{
               break;
           }
       }
    }while(toupper(input)!='E');
    
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