
/* 
 * File:   main.cpp
 * Author: Jerson
 * Purpose: MOney Converter
 * Created on February 22, 2016, 2:28 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;
//Global COnastants

//Function Prototypes

//Execution Begins here 
int main(int argc, char** argv) {
//Declare Variables
    float aDol,Yen=98.93,Euro=0.74;//Varibales holding Converted values
    float cValYen,cValEur;
//Prompt User for inputs
    cout<<"This is a Program for Converting U.S Dollars to Yen and Euros."<<endl;
    cout<<endl;
    cout<<"Type in the Amount of U.S DOllars you wish to convert to Yen and Euros"
    <<endl;
    cout<<"Please type in XX.XX format"<<endl;
    cin>>aDol;
    //Calculations
    cValYen=aDol*Yen;
    cValEur=aDol*Euro;
    //Display Outputs
    cout<<"Your Converted Currency"<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"U.S Dollar:"<<aDol<<" = "<<"Yen: "<<showpoint<<cValYen<<endl;
    cout<<"U.S Dollar:"<<aDol<<" = "<<"Euro: "<<showpoint<<cValEur<<endl;
    return 0;
}

