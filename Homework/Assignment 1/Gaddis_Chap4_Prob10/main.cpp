
/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Purpose:
 * Created on February 29, 2016, 10:12 AM
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char month,day;//Holding integers for the year
    unsigned short year;
    //Prompt User for input
    cout<<"This program will ask for a month and a year in numbers "<<endl;
    cout<<"Example: What month?:2,What year?:2008"<<endl;
    cout<<"What is the month you want to know how many days are in?"<<endl;
    cin>>month;
    cout<<"What year specifically is his month on?"<<endl;
    cin>>year;
    //Display Output
    switch (month){
        case '1':{
            cout<<"Days:31"<<endl;
            break;
        }
        case '2':{
            if (year%4==0){
                cout<<"Days:29"<<endl;
            }
            else
            cout<<"Days: 28"<<endl;
            break;
        }
        case '3':{
            cout<<"Days: 31"<<endl;
            break;
        }
        case '4':{
            cout<<"Days: 30"<<endl;
            break;
        }
        case '5':{
            cout<<"Days: 31"<<endl;
            break;
        }
        case '6':{
            cout<<"Days: 30"<<endl;
            break;
        }
        case '7':{
            cout<<"Days: 31"<<endl;
            break;
        }
        case '8':{
            cout<<"Days: 31"<<endl;
            break;
        }
        case '9':{
            cout<<"Days: 30"<<endl;
            break;
        }
        case '10':{
            cout<<"Days: 31"<<endl;
            break;
        }
        case '11':{
            cout<<"Days: 30"<<endl;
            break;
        }
        case '12':{
            cout<<"Days: 31"<<endl;
            break;
        }
    }
    

    return 0;
}

