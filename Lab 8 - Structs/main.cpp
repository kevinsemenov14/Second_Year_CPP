/*************************************************************************
 * AUTHOR        : Oxeford, Demon
 * Lab #8        : Structs
 * CLASS         : CS1B
 * SECTION       : TTh: 8am
 * DUE DATE      : 2/12/15
 ************************************************************************/

#include "headerfile.h"

/*************************************************************************
 * Lab #8 : Structs
 *________________________________________________________________________
 * PROG DESC: This program will receive inputs from the user for the name
 * of the input file and output file. It will then read in a list of
 * names, id #s, and balances from the input file, "InFile.txt". The
 * program will then prompt the user for a name to search for. When it
 * finds the name, it will output to "OFile.txt" the person's id#, name,
 * and balance. The program will repeat the search prompt until the user
 * enters in "done". After, the program outputs the average of all
 * balances for the found names.
 *
 *________________________________________________________________________
 * INPUTS
 *    Input Open File (inOpenFile)
 *    Input Out File (inOutFile)
 *    Name Search (name)
 *________________________________________________________________________
 * OUTPUTS
 *    Contents from "InFile.txt" (outFile)
 *    Ids Array (userAccount)
 *    Names Array (userAccount)
 *    Balance Array (userAccount)
 *    Average Amount Due (averageDue)
 *
 ************************************************************************/

int main()
{
	// Struct variables
	AccountInfo userAccount[AR_SIZE];

	// FUNCTION - Print Header : Outputs class header.
	cout << left;
    cout << ClassHeader("Oxeford, Demon", "Structs",
    		            'L', 8);

     // File stream variables
     ifstream inFile;
     ofstream outFile;

     // Variables
     string inOpenFile;
     string inOutFile;

     // File initializations
     ifstream inFileName ("InFile.txt");
     ifstream outFileName ("OFile.txt");

     // INPUT - Prompt user for file usage
     cout << "What input file would you like to use? ";
     getline(cin, inOpenFile);
     inFile.open(inOpenFile.c_str());

     cout << "What output file would you like to use? ";
     getline(cin, inOutFile);
     outFile.open(inOutFile.c_str());

     outFile << ClassHeader("Oxeford, Demon", "Structs",
     		            'L', 8);

	 // GetInput - Get input from the input file to put into three arrays.
	 GetInputFile(inFile, userAccount);

     // INPUT: This function takes the data stored on the input file.

     // PROCESSING: It then stores the data into three separate parallel
	 //             arrays.

     // OUTPUT: None.

	 // OutputFunction - Outputs a menu into the output file. Prompts user
	 //                  for name to search in string array. When matching
	 //                  name is found, outputs to output file the name
	 //                  along with corresponding id and balance. Average
	 //                  balance due is calculated from found names and
	 //                  output into output file.
     OutputFunction(outFile, AR_SIZE, userAccount);

     // INPUT: This function prompts user for name to search in string
     //        array.

     // PROCESSING: Searches for name in string array. Average balance due
     //             is calculated from found names.

     // OUTPUT: Outputs a menu, found names, and average balance due into
     //         output file.

     // File closing
     inFile.close();
     outFile.close();

     return 0;
   }
