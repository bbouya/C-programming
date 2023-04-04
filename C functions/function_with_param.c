#include<stdio.h>

void myFunction(char name[], int age){
    printf("Hello %s. you are %d years old.\n", name, age);
}

int main(){

    myFunction("Liam", 5);
    myFunction("Jenny", 6);
    myFunction("Anja", 15);
    return 0;
}