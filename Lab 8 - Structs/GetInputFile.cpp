/*************************************************************************
 * AUTHOR        : Oxeford, Demon
 * Lab #8        : Structs
 * CLASS         : CS1B
 * SECTION       : TTh: 8am
 * DUE DATE      : 2/12/15
 ************************************************************************/

#include "headerfile.h"

/*************************************************************************
 * FUNCTION GetInputFile
 *________________________________________________________________________
 * This function will get the input from the opened file and insert data
 * into three strings one after the other: First the string, int, and
 * balance arrays.
 *________________________________________________________________________
 * PRE-CONDITIONS
 * 		outFile        : The output file has to be previously
 *                       defined.
 *      STRING_AR[]    : The string array does not need to be
 *      				 previously defined.
 *      INT_AR[]       : The int array does not need to be
 *      				 previously defined.
 *      BAL_AR[]       : The balance array does not need to be
 *      				 previously defined.
 *      ARRAY_SIZE     : The size of the array does not need to be
 *      				 previously defined.
 *________________________________________________________________________
 * POST-CONDITIONS
 *      The program will return the entire segment of code.
 ************************************************************************/
void GetInputFile(ifstream& inFile, AccountInfo userAccount[])
{
	int index;
    index = 0;

    while(inFile && index < AR_SIZE)
		 {
			 getline(inFile, userAccount[index].name);
			 inFile >> userAccount[index].id;
			 inFile >> userAccount[index].balance;
			 inFile.ignore(numeric_limits<streamsize>::max(), '\n');

			 index++;
		 }
}
