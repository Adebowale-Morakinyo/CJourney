#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char name[20];
    printf("Enter your name: ");
    //scanf("%s", name); // One problem, only grabs chars up till the first space. John Smith --> John
    fgets(name, 20, stdin);
    printf("Your name is %s\n", name);

    return 0;
}
