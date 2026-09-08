/*
============================================================================
Name            : EECS 348 Assignment 1
Author          : Kaden Shepherd
Description     : C program that picks a secret number between 1 and 10.
                  The user gets up to 3 valid tries to guess the number.
Inputs          : User guesses entered through standard input.
Output          : Terminal prompts, feedback, and a final win or loss message.
Collaborators   : Lucas Frias, Frank Tryban
Other Sources   : Gemini and ChatGPT -- used for code generation to compare, as well as outline generation for the flow of the assignment.
Creation Date   : September 8, 2026
Revision Date   : September 8, 2026
Revisions       : Added invalid-input handling and concise explanatory comments.
============================================================================
*/

#include <stdio.h>

int main() {
    // Keep the secret number fixed as required by the assignment.
    const int SECRET_NUMBER = 7;

    // Store the user's guess and track invalid input, then track the result.
    int guess = 0;
    int input_char;
    int won = 0;

    // Explain the valid range before requesting a guess.
    printf("Guess a number between 1 and 10.\n");

    // Allow up to three valid guesses.
    for (int attempt = 1; attempt <= 3; attempt++) {
        printf("Attempt %d/3. Enter your guess: ", attempt);

        // Check whether the input can be read as an integer.
        if (scanf("%d", &guess) != 1) {
            printf("Invalid input. Please enter a whole number.\n");

            // Remove the invalid characters before reading again.
            while ((input_char = getchar()) != '\n' && input_char != EOF) {
            }

            // Invalid input does not count as a guessing attempt.
            attempt--;
            continue;
        }

        // Stop immediately when the user guesses correctly.
        if (guess == SECRET_NUMBER) {
            printf("Correct! You win!\n");
            won = 1;
            break;
        } else if (guess < SECRET_NUMBER) {
            // Tell the user how to adjust a low guess.
            printf("Too low! Try again.\n");
        } else {
            // Tell the user how to adjust a high guess.
            printf("Too high! Try again.\n");
        }
    }

    // Report the secret number if none of the guesses was correct.
    if (!won) {
        printf("Sorry, you lost! The secret number was %d.\n", SECRET_NUMBER);
    }

    // Indicate that the program finished successfully.
    return 0;
}
