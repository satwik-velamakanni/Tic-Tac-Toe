# Tic-Tac-Toe Game in C++

This is a simple implementation of the classic **Tic-Tac-Toe** game using C++. Two players take turns entering their moves, and the game checks for a winner after each turn.

## How to Play

1. The game board is a 3x3 grid.
2. Player 1 is assigned 'X' and Player 2 is assigned 'O'.
3. On each player's turn, they will be prompted to enter a row and column (values between 0 and 2) for their move.
4. The game will alternate between players after every valid move.
5. The game checks for a win after each move:
   - A player wins by filling an entire row, column, or diagonal with their symbol.
6. The game will declare a winner or result in a draw if all spaces are filled without a winner.

## Features

- **Two-player mode**: Alternating turns for player 'X' and player 'O'.
- **Input Validation**: Ensures players enter valid moves within the 3x3 grid and don't overwrite previous moves.
- **Win Detection**: Automatically detects when a player has won by checking rows, columns, and diagonals.
- **Draw Detection**: Declares a draw if the board is filled without a winner.



