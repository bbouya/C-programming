#include<stdio.h>

// function declaration 
void myFunction();
//Second example 
int myFunction_2(int,int);

// the main method
int main(){
    // Call for the first function
    myFunction();
    //call of the second function
    int res = myFunction_2(5,6);
    return 0;
}

// Function definition 
void myFunction(){
    printf("just for test");
}

//function 2 with param
int myFunction_2(int x, int y){
    return x+y;
}