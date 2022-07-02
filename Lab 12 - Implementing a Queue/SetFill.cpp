/*************************************************************************
 * AUTHOR		: sirhC & Demon
 * LAB #12      : Implementing a Queue
 * CLASS		: CS1B
 * SECTION		: TTh: 8:00 AM - 11:50 AM
 * DUE DATE		: 3/12/15
 *************************************************************************/

#include "myHeader.h"

/**********************************************************************
 * FUNCTION SetFill
 * --------------------------------------------------------------------
 * This function receives output variable, a character, and a width. It
 * will then output to the output stream the character to the specified
 * width.
 * --------------------------------------------------------------------
 * PRE-CONDITIONS (previously defined)
 * 		output	  	: output stream variable  - previously defined
 * 		fillChar	: character to fill width - previously defined
 * 		width		: width to be filled	  - previously defined
 *
 * POST-CONDITIONS
 * 		The function will output the character to the specified width
 *********************************************************************/
void SetFill(ostream&       output,		// IN - Output stream variable
		 	 char           fillChar,   // IN - character to fill width
		 	 unsigned short width)		// IN - width to be filled
 {
	 output << setfill(fillChar) << setw(width) << fillChar;
	 output << setfill(' ');
 }
