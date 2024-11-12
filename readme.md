# Mastermind Codebreaker

This project is an implementation of the Mastermind code-breaking game in C. The game involves creating a secret code and making guesses to break the code based on feedback provided.

## Files

- **create_codes.c**: Contains the function to generate all possible codes.
- **filter_codes.c**: Contains the function to filter codes based on feedback from guesses.
- **functions.h**: Header file declaring the functions and structures used in the project.
- **main.c**: The main file that runs the game.
- **player.c**: Contains the function to evaluate a guess against the secret code.
- **makefile**: Makefile to compile the project.

## Functions

### `create_codes`

Defined in [create_codes.c](create_codes.c)
```c
void create_codes(int codes[1296][4]);
```

Generates all possible codes for the game.

Defined in filter_codes.c
```c
void filter_codes(int codes[1296][4], int *size, int guess[4], int red, int white);
```

Filters the possible codes based on the feedback from the guess.

Defined in player.c
```c
struct guess evaluate_guess(int g[4], int my_code[4]);
```
Evaluates a guess against the secret code and return the feedback.

### BUILD

To build the project, run the following command:

```c
make
```

### HOW TO RUN

After buiding the project, you can run the game using:

```c
./main
```
