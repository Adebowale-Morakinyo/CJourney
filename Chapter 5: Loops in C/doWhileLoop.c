// GENERAL SYNTAX

/*
do {
    // Code to be executed in each iteration
} while (condition);
*/

#include <stdio.h>

int main(){
    int count = 1;

    do{
        printf("Iteration %i\n", count);
        count++;
    } while (count <= 5);
}
