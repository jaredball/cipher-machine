#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encrypt(char *input) {
    // For statement which increments and checks for valid input
    // and then moves(encrypts) the user's input using a key of 5
    for(int i = 0; (i < 100 && input[i] != '\0'); i++)
        input[i] = input[i] + 5;
    printf("Encrypted: %s\n", input);
}

void decrypt(char *input) {
    // For statement which increments and checks for valid input
    // and then moves(decrypts) the user's input using a key of 5
    for(int i = 0; (i < 100 && input[i] != '\0'); i++)
        input[i] = input[i] - 5;
    printf("Decrypted: %s\n", input);
}

void unary(char *input) {
    // Converts string into integer type
    int num = atoi(input);
    if (num > 0) {
        printf("Unary: ");
        // Print statement for user's integer
        for (int i = 0; i < num; i++) {
            printf("1");
        }
        printf("0\n");
        // Check for negative numbers
    } else if (num < 0) {
        printf("Please enter a non-negative number.\n");
        // Check for 0 or non-number
    } else {
        printf("0 or non-number\n");
    }
}

void encode(char *input) {
    int len = strlen(input);
    // For loop which takes the halfway point of the input character
    // array and reverses the input from the outside in
    for (int i = 0; i < len / 2; i++) {
        char placeholder = input[i];
        input[i] = input[len - 1 - i];
        input[len - 1 - i] = placeholder;
    }
    printf("Encoded: %s\n", input);
}

int main() {
    // Two chars needed so the input can be extracted
    char command[100];
    char input[100];
    // Infinite loop so user can use multiple commands in one session
    while (1) {
        printf("Commands: encrypt(input), decrypt(input), unary(number), encode(input), exit\nEnter a command: ");
        fgets(command, sizeof(command), stdin);
        // Removes trailing newline from fgets
        command[strcspn(command, "\n")] = '\0';
        // Exit statement
        if (strcmp(command, "exit") == 0) {
            break;
            // Used strncmp in each else statement to detect correct formatting
        } else if (strncmp(command, "encrypt(", 8) == 0 && command[strlen(command) - 1] == ')') {
            strcpy(input, command + 8);
            // Line which removes the end ')' from the user input
            input[strlen(input) - 1] = '\0';
            // Call to respective void function
            encrypt(input);
        } else if (strncmp(command, "decrypt(", 8) == 0 && command[strlen(command) - 1] == ')') {
            strcpy(input, command + 8);
            input[strlen(input) - 1] = '\0';
            decrypt(input);
        } else if (strncmp(command, "unary(", 6) == 0 && command[strlen(command) - 1] == ')') {
            strcpy(input, command + 6);
            input[strlen(input) - 1] = '\0';
            unary(input);
        } else if (strncmp(command, "encode(", 7) == 0 && command[strlen(command) - 1] == ')') {
            strcpy(input, command + 7);
            input[strlen(input) - 1] = '\0';
            encode(input);
        } else {
            // Print statement used to address any user error entering commands
            printf("Invalid format, please try again.\n");
        }
    }
    return 0;
}
