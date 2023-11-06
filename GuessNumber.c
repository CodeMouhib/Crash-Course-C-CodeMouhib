#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int number_to_guess, guess, attempts = 0;
    srand(time(0));
    number_to_guess = rand() % 21; // Generates a random number between 0 and 20

    printf("Welcome to the Guessing Game !\n");
    printf("Try to guess the number between 0 and 20.\n");

    printf("Enter your guess: ");
    scanf("%d", &guess);
    attempts++;

    while (guess != number_to_guess) {
        if (guess > number_to_guess) {
            printf("Too high! Try again.\n");
        } else if (guess < number_to_guess) {
            printf("Too low! Try again.\n");
        }
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
    }

    printf("Congratulations! You guessed the number %d correctly in %d attempts!\n", number_to_guess, attempts);

   
}

