/*************************************************************************
 * AUTHOR        : Oxeford, Demon
 * Lab #8        : Structs
 * CLASS         : CS1B
 * SECTION       : TTh: 8am
 * DUE DATE      : 2/12/15
 ************************************************************************/
#ifndef HEADERFILE_H_
#define HEADERFILE_H_
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

// Structs
	struct AccountInfo
	{
		string name;
		int id;
		float balance;
	};

// CONSTANTS
const int AR_SIZE = 10;

/**************************************************************************
 * FUNCTION ClassHeader
 *_________________________________________________________________________
 * This function receives a codeName, assignment name, student id,
 *  assignment type, and an assignment number then returns the appropriate
 *  header as a string.
 *************************************************************************/
string ClassHeader(string codeName, //IN - Users code name
				   string asName,	//IN - Name of the assignment
				   char   asType,   //IN - code type (lab or assign)
				   short  asNum);	//IN - lab or assignment number

/*************************************************************************
 * FUNCTION GetInputFile
 *________________________________________________________________________
 * This function will get the input from the opened file and insert data
 * into three strings one after the other: First the string, int, and
 * balance arrays.
 ************************************************************************/
void GetInputFile(ifstream& inFile,// IN/OUT - Input File
				  AccountInfo userAccount[]);

/*************************************************************************
 * FUNCTION SearchFunction
 *________________________________________________________________________
 * This function will prompt the user for a name to search the string
 * array. If the name was found in the array, the program will output
 * the corresponding id and balance to the output file. When the word
 * "done" is entered, the function ends.
 ************************************************************************/
void SearchFunction(ofstream& outFile,
					const int ARRAY_SIZE,  // IN     - Integer of the size
                                           //          of the array
			        float& totalAmount,    // IN/OUT - Total amount
                                           //          calculated
			        int& count,            // IN/OUT - Counter
			        AccountInfo userAccount[]);

/*************************************************************************
 * FUNCTION OutputFunction
 *________________________________________________________________________
 * This function will first output a menu into the output file. Then it
 * will prompt the user for a name to search. When a matching name is
 * found in the string array, the function outputs to the output file
 * the found name along with the corresponding id and balance. After,
 * the average balance due is calculated and output into the output file.
 ************************************************************************/
void OutputFunction(ofstream& outFile,    // IN/OUT - Output File
				    const int ARRAY_SIZE, // IN     - Integer of the size
			        					  //          of the array
				    AccountInfo userAccount[]);

#endif // HEADERFILE_H_
