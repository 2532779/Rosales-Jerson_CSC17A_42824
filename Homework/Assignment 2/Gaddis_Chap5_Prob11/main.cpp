

/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Purpose: Organisms growth
 * Created on February 29, 2016, 11:18 AM
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants
unsigned short CNVTPCT=100.00;
//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
    //Declare Variables
    float nDays,ttlOrg;// Organisms and number of days
    float iPer,total,ttlPer,nPer;//Percentage and Acumulator and Percetage of Organism
    //Prompt User for input
    cout<<"This program calculates the number of organism growth in N numbers"
            " of days"<<endl;
    cout<<"Input the number of organism that you a starting out with"<<endl;
    cin>>total;
    cout<<"What is the Percentage increase of the organism?"<<endl;
    cin>>iPer;// Initial Percent
    cout<<"How many days is this trial going to last?"<<endl;
    cin>>nDays;
    //Convert Percentage
    nPer=iPer/CNVTPCT;
    for(int count=1;count<=nDays;count++){
        ttlPer=total*nPer;
        cout<<"Day: "<<count<<" Number of Organisms: "<<total<<endl;
        total+=ttlPer;
    }
    return 0;
}

