#include <stdio.h>

int main() {
    int secretNumber = 5;
    int guessCount = 0;
    int guessLimit = 3;
    int guess;

    while (guessCount < guessLimit) {
        printf("I'm thinking of a number between 1 and 10\n");
        printf("Take a guess: ");
        scanf("%d", &guess);

        if (guess < secretNumber){
            printf("Your guess is too low.\n");
        } else if (guess > secretNumber) {
            printf("Your guess is too high.\n");
        } else {
            break;
        }

        guessCount++;
    }

    if (guess == secretNumber) {
        printf("Good job! You guessed your number in %d guesses!\n" , guessCount);
    } else {
        printf("Nope! The number I was thinking of was %d\n", secretNumber);
    }

}
