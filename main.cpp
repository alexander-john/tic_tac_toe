/*
 * This program was designed and developed by Alexander John
 *
 * Tic Tac Toe
 *
 * Rules of the game
 * -------------------
 * The objective of Tic Tac Toe is to get three X's or O's in a row.
 * This is a two player game. You play on a three by three board. The first
 * player is X and the second is O. X always goes first. Players take turns
 * and place their X or O on the board until one of the X's or O's has three
 * in a row. If all nine squares gets filled and there are no winners, the
 * game is a tie.
 */

#include <iostream>
#include <stdlib.h>

using namespace std;

// array for the board
string boardArray[9] = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};

// variables
int playerChoice = 0;
int playerTurn = 1;
bool isDraw = false;

// function that determines whether the playerTurn is for X or O using whether
// the playerTurn is odd or even. Odd being X starting at integer 1 and even
// being O

bool isOdd(int turn) {
    return turn % 2;
}

// function to make board tabs

string boardTabs() {
    return "\t\t";
}

// function to make board bar

string boardBar() {
    return "\t---------------------------------";
}

// function to make current board

void displayBoard() {
    cout << boardTabs() + "|" + boardTabs() + "|" << endl;
    cout << "\t" + boardArray[0] << "\t|\t" + boardArray[1] << "\t|\t" + boardArray[2] << endl;
    cout << boardTabs() + "|" + boardTabs() + "|" << endl;
    cout << boardBar() << endl;
    cout << boardTabs() + "|" + boardTabs() + "|" << endl;
    cout << "\t" + boardArray[3] << "\t|\t" + boardArray[4] << "\t|\t" + boardArray[5] << endl;
    cout << boardTabs() + "|" + boardTabs() + "|" << endl;
    cout << boardBar() << endl;
    cout << boardTabs() + "|" + boardTabs() + "|" << endl;
    cout << "\t" + boardArray[6] << "\t|\t" + boardArray[7] << "\t|\t" + boardArray[8]<< endl;
    cout << boardTabs() + "|" + boardTabs() + "|" << endl;
}

// function that takes playerChoice and boardArray to update game
void updateBoard(string (&board)[9], int choice, int turn) {
    board[choice] = isOdd(turn) ? "X" : "O";
}

// function that takes board and determines whether there is a winner



int main() {
    std::cout << "Hello, World!" << std::endl;

    displayBoard();
    // is there a isWinner? if so, display isWinner message, exit. else continue

    // if playerTurn is odd its X playerTurn
    cout << "X playerTurn. Enter the number where you want to place X: ";

    // take input
    cin >> playerChoice;

    // calculate array, if X playerTurn put X, otherwise O
    updateBoard(boardArray, playerChoice, playerTurn);

    // iterate playerTurn
    playerTurn++;

    return 0;
}