#include <stdio.h>
#include <stdlib.h>

int main(){

    sayHi();
    sayHello("Mike", 20);
    return 0;
}

void sayHi(){
    printf("Hi User");
}

// with parameters
void sayHello(char name[], int age){
    printf("Hello %s, you are %d\n", name, age);
}
