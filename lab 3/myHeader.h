/*************************************************************************
 * AUTHORS    : demon & Marcellus
 * LAB 3      : Supplement: Coin Flip
 * CLASS      : CS1B
 * SECTION    : TTH: 8AM
 * DUE DATE   : 2/5/15
 *************************************************************************/
#ifndef MYHEADER_H_
#define MYHEADER_H_
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <string.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
/*******************************************************************************
 * FUNCTION - PrintHeader
 * ______________________________________________________________________________
 * This function, with the below constants (i.e. programmer, class,
 * section, lab num, and lab name) taken in, will output a class
 * heading to the screen.
 * - returns nothing -> outputs heading to screen.
 ******************************************************************************/
void printHeader();
/*******************************************************************************
 *  FUNCTION - GetInfo
 * 	____________________________________________________________________________
 *	This function outputs the welcome message and prompts the user to
 *	enter his/her name and gender.
 *	- returns nothing - receives user's name and gender, then stores it
 *	  in the variables name and gender.
 ******************************************************************************/
void GetInfo(string &name, char &gender);
/*********************************************************************************
 *  FUNCTION - FlipCoin
 * 	____________________________________________________________________________
 *	This function randomly generates a value for the boolean variable
 *	coin, assigning 1 if coin is true and 0 if false.
 *	- returns coin to int main, where, using an if-then-else stmt, the
 *	  name of the face flipped is assigned to heads if coin is assigned
 *	  to 1 and tails if assigned to 0.
 ******************************************************************************/
bool FlipCoin();
/*******************************************************************************
 *  FUNCTION - FindAverage
 * 	____________________________________________________________________________
 *	This function will take in the number of heads and number of tails
 *	flipped, sum them up to get the total number of flips, then divide
 *	the number of heads flipped by the total number of flips to get a
 *	decimal that will be multiplied by 100 to obtain a percentage.
 *	- returns percHeads to int main
 ******************************************************************************/
float FindAvg(int headCount, int tailsCount);
/*******************************************************************************
 *  FUNCTION - Output
 * 	___________________________________________________________________________
 *	This function will output the headCount, tailsCount, and the percHeads
 *	It will tell the user how many flips it took to get three heads in a row
 *	as well as the overall percentage of head flips over total number of
 *	flips.
 * 	returns nothing - outputs statements to console
 ******************************************************************************/
void Output(int &headCount, int &tailsCount, float &percHeads);


#endif /* MYHEADER_H_ */
