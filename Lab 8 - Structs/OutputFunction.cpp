/*************************************************************************
 * AUTHOR        : Oxeford, Demon
 * Lab #8        : Structs
 * CLASS         : CS1B
 * SECTION       : TTh: 8am
 * DUE DATE      : 2/12/15
 ************************************************************************/

#include "headerfile.h"

/*************************************************************************
 * FUNCTION OutputFunction
 *________________________________________________________________________
 * This function will first output a menu into the output file. Then it
 * will prompt the user for a name to search. When a matching name is
 * found in the string array, the function outputs to the output file
 * the found name along with the corresponding id and balance. After,
 * the average balance due is calculated and output into the output file.
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
void OutputFunction(ofstream& outFile,
			        const int ARRAY_SIZE,
			        AccountInfo userAccount[])
{
	float averageDue;
    float totalAmount;
    int count;
    int index;

    // Initializations
    index = 0;
    totalAmount = 0;
    count = 0;

// TEST - FOR loop, tests outputs arrays for each line.
/*for (index = 0; index != ARRAY_SIZE; index++)
{
cerr << STRING_AR[index] << endl;

cerr << noshowpoint << setprecision(0) << fixed
     << INT_AR[index] << " ";

cerr << setprecision(2) << showpoint << BAL_AR[index]
	 << endl;
}*/

	 // OUTPUT - Outputs menu for final calculations.
	 outFile << "ID #" << setw(9) << "NAME" << setw(32)
			 << "BALANCE DUE" << endl << "----" << setw(25)
			 << "--------------------" << setw(16) << "-----------"
			 << endl;

	 // SearchFunction - Prompts user to search a name and stores name
	 //                  with corresponding id and balance into the
	 //                  output file.
	 SearchFunction(outFile, ARRAY_SIZE, totalAmount, count, userAccount);

	 // INPUT: This function prompts a name from the user.

	 // PROCESSING: It then searches the string array for a name
	 //             match.

	 // OUTPUT: When a match is found, outputs name along with
	 //         corresponding id and balance into the output file.


	 // CALC - Calculates average amount due for all searched
	 //        applicants
	 averageDue = totalAmount / count;

	 // OUTPUT - Outputs to outFile the average balance due
	 outFile << endl << right << setw(35) << "Average Balance Due: $"
			 << setw(10) << averageDue << endl;

	 cout << endl << "Thank you for using my program!" << endl;

}
