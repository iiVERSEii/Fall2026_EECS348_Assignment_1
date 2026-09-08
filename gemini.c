
#include <stdio.h> // Include standard input-output library for printf and scanf

int main() {
    // Author: Kaden Shepherd
    // Declare the fixed secret number to be guessed (7)
    const int SECRET_NUMBER = 7;
    
    // Declare variable to hold the user's input guess
    int guess = 0;
    
    // Flag to track whether the user successfully guessed the number (0 = false, 1 = true)
    int won = 0;

    // Print initial welcoming message to instruct the user
    printf("Guess a number between 1 and 10.\n");

    // Loop through up to 3 attempts (attempt numbers 1, 2, and 3)
    for (int attempt = 1; attempt <= 3; attempt++) {
        // Author: [Your Full Name]
        // Prompt user for their current guess with attempt count displayed
        printf("Attempt %d/3. Enter your guess: ", attempt);
        
        // Read the integer input entered by the user
        scanf("%d", &guess);

        // Check if the user's guess matches the secret number
        if (guess == SECRET_NUMBER) {
            // Print success message
            printf("Correct! You win!\n");
            
            // Set winning flag to true
            won = 1;
            
            // Break out of the loop immediately as required upon a correct guess
            break;
        } 
        // Check if the guess is less than the secret number
        else if (guess < SECRET_NUMBER) {
            // Inform the user their guess was too low
            printf("Too low! Try again.\n");
        } 
        // Otherwise, the guess must be greater than the secret number
        else {
            // Inform the user their guess was too high
            printf("Too high! Try again.\n");
        }
    }

    // Author: [Your Full Name]
    // If after 3 attempts the user did not guess correctly, display losing message
    if (!won) {
        printf("Sorry, you lost! The secret number was %d.\n", SECRET_NUMBER);
    }

    // Return 0 to signal successful program execution
    return 0;
}
