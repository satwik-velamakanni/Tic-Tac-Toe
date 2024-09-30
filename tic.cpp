// Simple C++ Tic-Tac-Toe Game
#include <iostream> 
using namespace std; 

// Function to draw the Tic-Tac-Toe board
void drawBoard(char board[3][3]) 
{ 
    cout << "-------------\n"; 
    for (int i = 0; i < 3; i++) { 
        cout << "| "; 
        for (int j = 0; j < 3; j++) { 
            cout << board[i][j] << " | "; 
        } 
        cout << "\n-------------\n"; 
    } 
} 

// Function to check if someone has won
bool checkWin(char board[3][3], char player) 
{ 
    // Check rows, columns, and diagonals for a win
    for (int i = 0; i < 3; i++) { 
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) 
            return true; 
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) 
            return true; 
    } 
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) 
        return true; 
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) 
        return true; 
    return false; 
} 

int main() 
{ 
    // Initializing the game board and setting the first player
    char board[3][3] = { { ' ', ' ', ' ' }, 
                         { ' ', ' ', ' ' }, 
                         { ' ', ' ', ' ' } }; 
    char currentPlayer = 'X'; 
    int row, col; 
    int turn; 

    cout << "Welcome to Tic-Tac-Toe! Let's play!\n"; 

    // Main game loop
    for (turn = 0; turn < 9; turn++) { 
        drawBoard(board); 

        // Asking for input until we get a valid move
        while (true) { 
            cout << "Player " << currentPlayer << ", enter your move (row and column from 0 to 2): "; 
            cin >> row >> col; 

            // Checking if the move is valid
            if (board[row][col] != ' ' || row < 0 || row > 2 || col < 0 || col > 2) { 
                cout << "Oops! Invalid move. Try again.\n"; 
            } else { 
                break; // Valid input, move is good to go. 
            } 
        } 

        // Making the move
        board[row][col] = currentPlayer; 

        // Checking if the current player has won
        if (checkWin(board, currentPlayer)) { 
            drawBoard(board); 
            cout << "Congratulations! Player " << currentPlayer << " wins!\n"; 
            break; 
        } 

        // Switching players
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X'; 
    } 

    // End of the game
    drawBoard(board); 

    // Checking for a draw
    if (turn == 9 && !checkWin(board, 'X') && !checkWin(board, 'O')) { 
        cout << "It's a draw! Nice game, everyone!\n"; 
    } 

    return 0; 
} 
