/*************************************************************************
 * AUTHORS    : demon
 * LAB 6      : supplement tic tac toe
 * CLASS      : CS1B
 * SECTION    : TTH: 8AM
 * DUE DATE   : 2/10/15
 *************************************************************************/
const int NUM_ROWS =3;
const int NUM_COLS = 3;

#ifndef MYHEADER_H_
#define MYHEADER_H_
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <string.h>
#include <time.h>
#include <ios>
#include <limits>
#include <stdlib.h>
using namespace std;

/*************************************************************************
 * FUNCTION - PrintHeader
 * _______________________________________________________________________
 * This function, with the below constants (i.e. programmer, class,
 * section, lab num, and lab name) taken in, will output a class
 * heading to the screen.
 * - returns nothing -> outputs heading to screen.
 *************************************************************************/
void printHeader();
/*******************************************************************
 * OutputInstruct
 * This function outputs instructions to the users. There are no input
 * or output parameters for this function as it only displays text to
 * the screen.
 *
 * RETURNS: nothing
 * Displays the instructions to the user
 *****************************************************************************/
void OutputInstruct();

/*******************************************************************
 * InitBoard
 * __________________________________________________________________
 * This function, will force all rows and cols of boardAr into spaces,
 * 				  to all it to be clear for a new game.
 * __________________________________________________________________
 *
 ********************************************************************/
void InitBoard(char boardAr[][NUM_COLS]);

/*******************************************************************
 * displayBoard
 * __________________________________________________________________
 * This function, will display the borad of the game and redisplay the
 * 				  borad every time someone makes a move in the game.
 * 	returns - 	  the tokened board.
 * 1            2        3
 * [1][1] | [1][2] | [1][3]
 *        |        |
 * 1      |        |
 *        |        |
 * --------------------------
 * [2][1] | [2][2] | [2][3]
 *        |        |
 * 2      |        |
 *        |        |
 * --------------------------
 * [3][1] | [3][2] | [3][3]
 *        |        |
 * 3      |        |
 *        |        |
 *
 * RETURNS: nothing
 *
 * __________________________________________________________________
 *
 ********************************************************************/
void DisplayBoard(const char boardAr[][NUM_COLS]);
/*******************************************************************
 * GetPlayers
 * __________________________________________________________________
 * This function, will get both players names as string chars and then
 * 				  returns both players names back to main.
 * __________________________________________________________________
 *
 ********************************************************************/
void GetPlayers(string &nameX, string &nameO);
/*******************************************************************
 * GetAndCheckInp
 * __________________________________________________________________
 * This function, will pass in the token of the game with the name of
 * 				  player one and player two. then check for there input
 * 				  of the move they wish to make.
 ********************************************************************/
void GetAndCheckInp(char boardAr[][3], char token, string nameX, string nameO);
/******************************************************************************
 * SwitchToken
 * This function switches the active player.
 * It takes in a parameter representing the current player's token
 * as a character value (either an X or an O) and returns the opposite.
 * For example, if this function receives an X it returns an 0. If it
 * receives and O it returns and X.
 *
 * RETURNS: the token opposite of the one in which it receives.
 *****************************************************************************/
char SwitchToken(char token);

/*******************************************************************
 * CONSTANTS
 * -----------------------------------------------------------------
 * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
 * -----------------------------------------------------------------
 * PROGRAMMER 	: Programmer's Name
 * CLASS 		: Student's Course
 * SECTION 		: Class Days and Times
 * LAB_NUM	 	: Lab Number (specific to this lab)
 * LAB_NAME 	: Title of the Lab
 *******************************************************************/
char CheckWin(const char boardAr[][NUM_COLS]);
/******************************************************************************
 * OutputWinner
 * This function receives as input a character indicating which player won
 * or if the game was a tie and outputs an appropriate message. This function
 * does not return anything as it simply outputs the appropriate message to
 * the screen.
 *
 * RETURNS: nothing
 * Displays the winner’s name
 *****************************************************************************/
void OutputWinner(char whoWon, string playerX, string playerO);

#endif /* MYHEADER_H_ */
