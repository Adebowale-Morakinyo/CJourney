#include <stdio.h>

int main() { 
    int a = 5;
    int *pA = &a;

    printf("%d\n", a); // 5
    printf("%p\n", pA); // addr of a
    printf("%p\n", &a); // addr of a
    printf("%d\n", *pA); // derefrencing ==> value of a

    *pA = 8;
    printf("%d\n", a); // 8

    return 0;
}