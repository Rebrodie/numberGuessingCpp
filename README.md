# Number Guessing Game 🎮

## Introduction

Welcome to my **Number Guessing Game**! In this game, you have 10 tries to guess a random number between 1 and 100. Each time you guess, you will be told if your guess is too high or too low. Can you guess the correct number before you run out of tries? Let's find out!

## How the Game Works

1. The game generates a random number between **1** and **100**.
2. You get **10 tries** to guess the number.
3. If your guess is **too high**, the game will tell you to guess a lower number.
4. If your guess is **too low**, the game will tell you to guess a higher number.
5. If you guess the number correctly, you'll be congratulated!
6. If you use all 10 tries without guessing correctly, the game will reveal the number.
7. After each game, you will be asked if you want to play again.

## Features

- **Random Number Generation**: Every game starts with a fresh, randomly generated number.
- **Hint System**: The game gives hints by telling you whether to guess higher or lower.
- **Replay Option**: After completing a round, you can choose to play again.
- **Input Validation**: Ensures that you only enter numbers within the valid range (1–100).

## How to Play

1. Run the program.
2. Follow the prompt and enter a number between **1** and **100**.
3. After each guess, you will receive feedback to help you guess correctly.
4. After winning or losing, you can choose to play again by typing 'y' (yes) or exit the game by typing 'n' (no).

## Example Gameplay
```text
--------------------------------------------------------------------------------------------
Welcome to my Number Guessing Game!!
You have 10 tries to guess a random number betweeen 1-100
Guess a number(0-100):
50
Higher, try again (Tries Left: 10)
80
Higher, try again (Tries Left: 9)
90
Higher, try again (Tries Left: 8)
95
Higher, try again (Tries Left: 7)
99
Lower, try again(Tries Left: 6)
96
Higher, try again (Tries Left: 5)
97
Higher, try again (Tries Left: 4)
98
Congratulations!!, you've guessed correctly
Would you like to play again? (y/n): n
Hope you enjoyed Thanks for Playing
```

## Technologies Used

- **C++**: The game is written in C++, utilizing basic loops, conditional statements, and functions.
- **Random Number Generation**: Implemented using the `rand()` function from the C++ Standard Library.

## Future Enhancements

- Add difficulty levels (Easy, Medium, Hard).
- Include a scoring system based on the number of tries left.
- Enhance the game with a graphical user interface (GUI).

---

## How to Run

1. Clone the repository or download the source code.
2. Compile the game using a C++ compiler (e.g., `g++` or `clang++`).
3. Run the compiled executable to start the game.

---

## Conclusion

This Number Guessing Game is a fun, simple way to practice your C++ programming skills, especially with random number generation, loops, and conditional logic. Feel free to explore the code and modify it to add new features!

Enjoy playing! 🎉
