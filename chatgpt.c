#include <stdio.h>

int main() {
    int secretNumber = 7;
    int guess;
    int attempts = 0;

    printf("Guess a number between 1 and 10.\n");

    while (attempts < 3) {
        attempts++;

        printf("Attempt %d/3. Enter your guess: ", attempts);
        scanf("%d", &guess);

        if (guess == secretNumber) {
            printf("Correct! You win!\n");
            break;
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }
    }

    if (guess != secretNumber) {
        printf("You lose! The secret number was %d.\n", secretNumber);
    }

    return 0;
}
