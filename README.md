# Cipher Machine

**Cipher-Machine** is a C program that provides a set of utilities for text manipulation, including encryption, decryption, unary number encoding, and string reversal. It supports a variety of commands that can be executed interactively.

## Features

- **Encrypt:** Encrypts user input using Caesar's cipher.
- **Decrypt:** Decrypts user input using Caesar's cipher.
- **Unary:** Converts a number into its unary representation.
- **Encode:** Reverses the input string.
- **Exit:** Terminates the program.

## Commands Overview

- `encrypt` - Encrypts the provided text using Caesar’s cipher by shifting each character by 5 positions.
- `decrypt` - Decrypts the encrypted text by reversing the Caesar cipher (shifts characters back by 5 positions).
- `unary` - Converts a non-negative integer to its unary code
- `encode` - Reverses the order of characters in the input string.
- `exit` - Exits the program.

## Usage

1. **Start the Program:** Run the compiled `Cipher-Machine` program.
2. **Enter a Command:** Choose from the available commands (`encrypt`, `decrypt`, `unary`, `encode`, or `exit`).
3. **Follow the Prompts:** Input any necessary data when prompted. Each command will specify its required input format.
4. **Multiple Commands:** You can run multiple commands in a single session. The program will prompt for the next command after completing each one.
5. **Exit the Program:** Type `exit` to terminate the program.

## Implementation Details

- **Encrypt Command:** Each character in the input string is shifted by 5 positions in the alphabet to encrypt the text.
- **Decrypt Command:** The decryption process shifts the characters back by 5 positions, reversing the encryption.
- **Unary Command:** Converts the given non-negative integer into its unary representation, where `n` is represented as `n` ones.
- **Encode Command:** Reverses the order of characters in the input string.
