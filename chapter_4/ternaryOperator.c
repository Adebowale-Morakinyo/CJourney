/*
-- Ternary Operator--
    The general syntax :
        condition ? expression_if_true : expression_if_false;
*/

#include <stdio.h>

int main(void) {
  
    int x = 10;
    
    int y = (x > 5) ? 100 : 200;
    
    printf("x: %i\n", x); // x: 10
    
    printf("y: %i\n", y);  // y: 100
}
