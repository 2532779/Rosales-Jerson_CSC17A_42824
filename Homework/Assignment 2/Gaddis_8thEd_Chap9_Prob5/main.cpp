/* 
 * File:   main.cpp
 * Author: Jerson
 *
 * Created on April 17, 2016, 7:15 PM
 */
//System Libraries
#include <iostream>

//User Libraries
using namespace std;

//Global Constants

//Function Prototypes
int *doSomething(int,int);
//Execution Begins here
int main(int argc, char** argv) {
    //Declare Variables
    int* x,y;
    int* finAns;
    //Prompt User for inputs
    cout<<"Im going to get your first number and then multiply by your second "
            "number times 10"<<endl;
    cin>>x;
    cout<<"Im going to get your second number and then multiply by your first "
            "number times 10"<<endl;
    cin>>y;
    finAns=doSomething(x,y);
    cout<<"Your final answer is "<<finAns<<endl;
    
    return 0;
}

int *doSomething(int x,int y){
    int temp=x;
    x=y*10;
    y=temp*10;
    return x+y;
}