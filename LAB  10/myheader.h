/*************************************************************************
 * AUTHORS    : Demon
 * LAB 6      : Intro to Pointers
 * CLASS      : CS1B
 * SECTION    : TTH: 8AM
 * DUE DATE   : 2/26/15
 *************************************************************************/
#ifndef MYHEADER_H_
#define MYHEADER_H_
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <string.h>
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
 * FUNCTION
 * __________________________________________________________________
 * This function, will allow two intgers into the functions then find prudcuct
 * and to find the sum of both numbers.
 * __________________________________________________________________
 * PRE-CONDITIONS:
 * 	int num1 pointer number
 * 	int num2 pointer number
 * ------------------------------------------------------------------
 * USED FOR finding the sum and pruduct
 * ------------------------------------------------------------------
 ********************************************************************/
void FindTotal(int *num1, int *num2);

#endif /* MYHEADER_H_ */
