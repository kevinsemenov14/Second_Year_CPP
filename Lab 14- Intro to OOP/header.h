/************************************************************************
 * AUTHOR     : Blue & Demon
 * LAB #5     : Intro to OOP
 * CLASS      : CS1B
 * SECTION    : T/Th 8:00AM
 * DUE DATE   : 3/31/15
 ************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>	//includes input and output
#include <fstream>	//includes input and output files
#include <sstream>	//includes input and output string streams

#include <string>	//includes strings
#include <iomanip>  //includes setw, setprecision, etc.

#include <limits>	//includes numeric_limits
#include <ios>		//includes streamsize
using namespace std;

//PROTOTYPES
/************************************************************************
 * PrintHeader
 * This function receives the user's name, an assignment name, type and
 * 	number, then outputs the appropriate header.
 *
 * - returns nothing --> this will output the class heading.
 ************************************************************************/
void PrintHeader(string myNameF, //IN- user's name
				 string asNameF, //IN- assignment name
				 char   asTypeF, //IN- assignment type
				 	 	 	 	 //		   (LAB or ASSIGNMENT)
				 int    asNumF); //IN- assignment number


/************************************************************************
 * OutputMenu
 * This function will output a menu for the user to select from.
 *
 * - returns nothing --> outputs a menu to console
 ************************************************************************/
void OutputMainMenu();

#endif /* HEADER_H_ */
