#ifndef MYHEADER_H_
#define MYHEADER_H_
/**************************************************************************
 * AUTHOR     : Ikrit & Demon
 * LAB #16    : Inheritance, Overloading, & Redefining
 * CLASS      : CS1B
 * SECTION    : TuTh: 8am
 * DUE DATE   : 4/21/15
 * ***********************************************************************/
#include "SheepList.h"
#include "PigList.h"

#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <sstream>
#include <fstream>
#include <limits>
#include <ios>

using namespace std;

enum Menu
{
	EXIT,
	SHEEP,
	PIGS,
	AGE,
	DISPLAY
};

/**************************************************************************
 * FUNCTION PrintHeader
 *_________________________________________________________________________
 *	This function receives lab or assignment information and
 *	outputs the appropriate header as a string.
 *_________________________________________________________________________
 *************************************************************************/
string PrintHeaderString(char   prType,     // IN - Project Type
                                            //    - (LAB or ASSIGNMENT)
                         string programmer, // IN - Programmer(s)
                         int    prNum,      // IN - Project Number
                         string prName);    // IN - Project Name

/**************************************************************************
 * FUNCTION FillLine
 *_________________________________________________________________________
 *	This function receives line length and the filler.
 *	It will then simply fill the line with the desired filler.
 *
 *	RETURNS line filler as string
 *_________________________________________________________________________
 *************************************************************************/
string FillLine(const int LINE_LENGTH, // IN & PROC - Desired line length
			    char filler);          // IN & OUT  - Filler character

/**************************************************************************
 * FUNCTION DisplayFirstMenu
 *_________________________________________________________________________
 *	This function displays the MENU OPTIONS
 *	for the program using ostringstream
 *
 *	RETURNS Menu as a string
 *_________________________________________________________________________
 *************************************************************************/
string DisplayFirstMenu();

/**************************************************************************
 * FUNCTION DisplayMenu
 *_________________________________________________________________________
 *	This function displays the MENU OPTIONS
 *	for the program using ostringstream
 *
 *	RETURNS Menu as a string
 *_________________________________________________________________________
 *************************************************************************/
string DisplayMenu();

/**************************************************************************
 * FUNCTION InitializeSheep
 *_________________________________________________________________________
 *	This function reads in all info from the text files and creates two lists
 *
 *	RETURNS nothing
 *_________________________________________________________________________
 *************************************************************************/
void InitializeSheep(SheepList &ourSheepList);

/**************************************************************************
 * FUNCTION InitializePigs
 *_________________________________________________________________________
 *	This function reads in all info from the text files and creates two lists
 *
 *	RETURNS nothing
 *_________________________________________________________________________
 *************************************************************************/
void InitializePigs(PigList &ourPigList);

/**************************************************************************
 * FUNCTION ChangeAge
 *_________________________________________________________________________
 *	This function Changes the age of a desired animal
 *
 *	RETURNS lists changed if needed
 *_________________________________________________________________________
 *************************************************************************/
void ChangeAge(SheepList &ourSheepList, PigList &ourPigList);

/**************************************************************************
 * FUNCTION GetAndCheckInp
 *_________________________________________________________________________
 *	This function receives the desired integer input variable to return to,
 *	the prompt to ask the user for input, and the boundaries in order to
 *	error check both for an invalid character input and invalid range.
 *
 *	REQUIRED FUNCTIONS: IntToString, BoundsToString
 *
 *	RETURNS valid integer input
 *_________________________________________________________________________
 *************************************************************************/
int GetAndCheckInp(int input,            // IN & OUT   - Desired int variable
		           const string PROMPT,  // OUT        - User input Prompt
		           const int LOW_BOUND,  // PROC & OUT - Lower boundary
		           const int HIGH_BOUND);// IN & PROC  - Input to be validated

/**************************************************************************
 * FUNCTION GetCheckCharInp
 *_________________________________________________________________________
 *	This function receives the desired char input variable to return to,
 *	the prompt to ask the user for input, and the boundaries in order to
 *	error check for invalid character inputs
 *
 *	RETURNS valid char input
 *_________________________________________________________________________
 *************************************************************************/
char GetCheckCharInp(char         input, // IN & OUT   - Desired char variable
		             const string PROMPT,// OUT        - User input Prompt
		             const char   EITHER,// PROC & OUT - boundary
		             const char   OR);   // PROC & OUT - Boundary

/**************************************************************************
 * FUNCTION IntToString
 *_________________________________________________________________________
 *	This function gets an integer input and converts it to a string
 *
 *	RETURNS integer as a string
 *_________________________________________________________________________
 *************************************************************************/
string IntToString(const int NUMBER); // IN & OUT - Integer to be converted

/**************************************************************************
 * FUNCTION BoundsToString
 *_________________________________________________________________________
 *	This function receives integer boundary values and converts the
 *	whole error message into a string, ready to easily be formatted
 *	as desired.
 *
 *	RETURNS message as string
 *_________________________________________________________________________
 *************************************************************************/
string BoundsToString(const int LOW_BOUND,   // IN & OUT - Low boundary
		              const int HIGH_BOUND); // IN & OUT - High boundary

/**************************************************************************
 * FUNCTION OutputHeader
 *_________________________________________________________________________
 *	This function Outputs the header portion of the table for list output
 *_________________________________________________________________________
 *************************************************************************/
string OutputHeader();

#endif /* MYHEADER_H_ */
