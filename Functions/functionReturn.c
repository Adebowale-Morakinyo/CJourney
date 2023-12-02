#include <stdio.h>
#include <stdlib.h>

double cube(double num){
    double result = num * num * num;
    return result;
}

int main(){

    printf("Answer: %f", cube(3.0));

    return 0;
}


// prototyping, allowing you write other functions below main function
double cube(double num);

int main(){

    printf("Answer: %f", cube(3.0));

    return 0;
}

double cube(double num){
    double result = num * num * num;
    return result;
}
