#include <stdio.h>

int main()
{
    int secretNumber = 7;
    int guess;


    while (guess != secretNumber) {
        printf("Type in your guess\n");
        scanf("%d", &guess);
        if (guess > secretNumber) {
            printf("The secret number is smaller.\n");
        } else if (guess < secretNumber) {
            printf("The secret number is higher\n");
        } else {
            printf("You won.\n");
        }
    }

    return 0;
}

// Write a program that stores a number, and the user has to figure it out.
// The user can input guesses, after each guess the program would tell one
// of the following:
//
// The stored number is higher
// The stried number is lower
// You found the number: 8