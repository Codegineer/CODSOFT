#include <iostream>
#include <vector>
/*
*   Task 3: Tic tac toe
*
*   Program name:       tic_tac_toe.cpp
*   Program language:   C++
*   Author:             Katlego Motaung
*   Date of completion: 09/04/2024
*/
using namespace std;

                                /// Class representing a Tic Tac Toe game
class TicTacToe {
private:
    vector<vector<char>> board; /// 3x3 game board
    char curPlayer;             /// Current player (X or O)
    bool gameOver;              /// Flag to indicate if the game is over

public:
                                /// Constructor
    TicTacToe() : board(3, vector<char>(3, ' ')), curPlayer('X'), gameOver(false) {}

                                /// Function to print the game board
    void printBoard() {
        for (const auto& r : board) {
            for (char cell : r) {
                cout << cell << " ";
            }
            cout << endl;
        }
    }

                                /// Function to check if the game has a winner
    bool checkWinner() {
                                /// Check rows
        for (int i = 0; i < 3; ++i) {
            if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
                return true;
        }

                                /// Check columns
        for (int i = 0; i < 3; ++i) {
            if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i])
                return true;
        }

                                /// Check diagonals
        if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
            return true;
        if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
            return true;

        return false;
    }

                                /// Function to check if the game is a draw
    bool checkDraw() {
        for (const auto& r : board) {
            for (char cell : r) {
                if (cell == ' ')
                    return false;
            }
        }
        return true;
    }

                                /// Function to handle a player's move
    void makeMove(int r, int c) {
        if (r < 0 || r >= 3 || c < 0 || c >= 3 || board[r][c] != ' ') {
            cout << "Invalid move! Try again." << endl;
            return;
        }
        board[r][c] = curPlayer;
        if (checkWinner()) {
            cout << "Player " << curPlayer << " wins!" << endl;
            gameOver = true;
        } else if (checkDraw()) {
            cout << "It's a draw!" << endl;
            gameOver = true;
        }
        curPlayer = (curPlayer == 'X') ? 'O' : 'X';
    }

                                /// Function to start the game
    void startGame() {
        cout << "Welcome to Tic Tac Toe!" << endl;
        for(int i = 0; i < 500000000l; i++)
            ;
        system("cls");
        while (!gameOver) {
            printBoard();
            cout << "Player " << curPlayer << ", enter your move (row and column): ";
            int r, c;
            cin >> r >> c;
            makeMove(r, c);
        }
    }
};

int main() {
    TicTacToe game;
    game.startGame();
    return 0;
}
