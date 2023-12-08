//
// Created by Shawn on 12/7/2023.
//
#include <iostream>

using namespace std;

#ifndef TIC_TAC_TOE_DECLARATIONS_H
#define TIC_TAC_TOE_DECLARATIONS_H

#endif //TIC_TAC_TOE_DECLARATIONS_H

bool isOdd(int turn);

string boardTabs();

string boardBar();

void displayBoard();

void updateBoard(string (&board)[9], int choice, int turn);