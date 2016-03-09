/*
 * File:   main.cpp
 * Author: Jerson
 *
 * Created on February 29, 2016, 3:01 PM
 */
//System Libraries
#include <iostream>
#include <fstream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Executions begins here

int main(int argc, char** argv) {
    //Declare Variables
     int row=2;
     int col=29;
    char table[row][col];
    ifstream rnShn;//Rain or Shine file
    //Read files
    rnShn.open("RainorShine.txt");
    for(int i=0;i<=row;i++){
        for(int j=0;j<=col;j++){
            rnShn>>table[i][j];
        }
    }
    //Close File
    rnShn.close();
    cout;
    for(int c=0;c<=row;c++){
        for(int d=0;d<=col;d++){
            cout<<table[c][d];
        }
        cout<<endl;
        }
    
            
    return 0;
}

