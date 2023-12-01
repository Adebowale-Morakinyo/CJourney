#include <stdio.h>

int main(void){
    // variable afe
    int age;

    // prompt user to enter their age
    printf("Please enter your age: ");

    // store user's answer in the variable
    scanf("%i", &age);

    if (age < 18){
        printf("You need to be more than 18 to continue\\n");
    }
}