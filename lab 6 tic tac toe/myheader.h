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


void InitBoard(char boardAr[][3]);

void DisplayBoard(const char boardAr[][3]);

void GetPlayers(string & playerX, string & playerO);

void GetAndCheckInp(char boardAr[][3], char token, string playerX, string playerO);

#endif /* MYHEADER_H_ */
