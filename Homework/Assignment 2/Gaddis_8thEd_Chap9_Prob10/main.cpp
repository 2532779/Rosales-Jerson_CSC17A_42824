/* 
 * File:   main.cpp
 * Author: Jerson
 *
 * Created on April 17, 2016, 7:36 PM
 */

#include <iostream>
#include <cstdlib>
//User Libraries
using namespace std;

//Global Constants

//Function Prototypes
int *arryRev(int,int);
//Execution Begins here
int main(int argc, char** argv) {
    //Declare Variables 
    int size=10;
    srand(static_cast<unsigned int>(time(0)));
    int setAry[size];
    //Fill the array
    for(int i=0;i<size;i++){
        setAry[i]=(rand()%50)+10;
    }
    cout<<"Original Array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<setAry[i];
    }
    int *array=arryRev(setAry,size);
    cout<<"Reversed Array: "<<endl;
    for(int j=0;j<size;j++){
        cout<<array[j];
    }
    
    return 0;
}

int *arryRev(int a,int s){
    a[s];
    int *array=new int[s];;
    for(int i=0;i<s;i++){
        a[i]=array[s-i];
    }
    return array;
}