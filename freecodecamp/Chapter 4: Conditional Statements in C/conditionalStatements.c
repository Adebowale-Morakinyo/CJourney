// if statement
#include <stdio.h>

int main(void) {

    // variable age
   int age;

   // prompt user to enter their age
   printf("Please enter your age: ");

   // store user's answer in the variable
   scanf("%i", &age);

    // check if age is less than 18
    // if it is, then and only then, print a message to the console

   if (age < 18) {
       printf("You need to be over 18 years old to continue\\n");
   }
}

// if else statment
#include <stdio.h>

int main(void) {
   int age;

   printf("Please enter your age: ");

   scanf("%i", &age);

 
    // if the condition in the parentheses is true the code inside the curly braces will execute
    // otherwise it is skipped
    // and the code in the else block will execute
    
   if (age < 18) {
       printf("You need to be over 18 years old to continue\n");
   } else {
      printf("You are over 18 so you can continue \n");
   }
  
}

// else if statement
#include <stdio.h>

int main(void) {
   int age;

   printf("Please enter your age: ");

   scanf("%i", &age);

   if (age < 18) {
       printf("You need to be over 18 years old to continue\n");
   } else if (age < 21) {
       printf("You need to be over 21\n");
   } else {
      printf("You are over 18 and older than 21 so you can continue \n");
   }
  
}
