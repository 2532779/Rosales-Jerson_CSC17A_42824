
/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Purpose: Celsius Converter 
 * Created on February 17, 2016, 6:03 PM
 */

//System Libraries 
#include <iostream>
#include <iomanip>

using namespace std;

//Global Constants

//Function Prototypes 


int main(int argc, char** argv) {
    //Declare Variables 
    float C;//This is what the user is going to input for Celsius
    float F;//The result in fahrenheit 
    //Prompt user for Celsius
    cout<<"Type in the degree in Celsius you wish to convert to fahrenheit"<<endl;
    cin>>C;
    //Equation
    F=9.0/5*C+32;
    //Display the results
    cout<<"Celsius: "<<C<<endl;
    cout<<"Fahrenheit: "<<F<<endl;
    return 0;
}

