/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Purpose: Using functions
 * Created on February 29, 2016, 2:34 PM
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void celsius(float);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables 
    float C;//This is what the user is going to input for Celsius
    //Prompt user for Celsius
    cout<<"Type in the degree in Celsius you wish to convert to fahrenheit"<<endl;
    cin>>C;
    celsius(C);
}

void celsius(float C){
    //Declare Variables
    float F;//The result in fahrenheit 
    //Equation
    F=9.0/5*C+32;
    //Display the results
    cout<<"Celsius: "<<C<<endl;
    cout<<"Fahrenheit: "<<F<<endl;
}

