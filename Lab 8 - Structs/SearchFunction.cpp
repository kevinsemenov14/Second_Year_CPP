/*************************************************************************
 * AUTHOR        : Oxeford, Demon
 * Lab #8        : Structs
 * CLASS         : CS1B
 * SECTION       : TTh: 8am
 * DUE DATE      : 2/12/15
 ************************************************************************/

#include "headerfile.h"

/*************************************************************************
 * FUNCTION SearchFunction
 *________________________________________________________________________
 * This function will prompt the user for a name to search the string
 * array. If the name was found in the array, the program will output
 * the corresponding id and balance to the output file. When the word
 * "done" is entered, the function ends.
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
 *      totalAmount    : The total amount has to be previously
 *                       defined.
 *      count          : The count has to be previously
 *                       defined.
 *________________________________________________________________________
 * POST-CONDITIONS
 *      The program will return the entire segment of code.
 ************************************************************************/
void SearchFunction(ofstream& outFile,
			       const int ARRAY_SIZE,
			       float& totalAmount,
			       int& count,
			       AccountInfo userAccount[])
{
	bool found;
    string name;
    int index;

    found = false;
    index = 0;

	// INPUT - Prompts user for search input
	 cout << endl
		  << "Who do you want to search for (enter done to exit): ";
	 getline (cin, name);

	 // CALC - WHILE loop, if user enters "done", then program skips
	 //        processing
	 while (name != "done")
	 {
		 // CALC - WHILE loop, searches file for the input name
		 while(index < ARRAY_SIZE && !found)
		 {
			 if (userAccount[index].name == name)
			 {
				 found = true;
			 }
			 else
			 {
				 index++;
			 }
		 }
		 // CALC - If found, then outputs to the outFile the id, name,
		 //        and balance.
		 if (found == true)
		 {
			 cout << "Found." << endl;

			 outFile << left << setw(9) << noshowpoint
					 << setprecision(0) << userAccount[index].id << setw(25)
					 << userAccount[index].name << "$" << right << setw(10)
					 << fixed << setprecision(2)
					 << userAccount[index].balance << endl;

			 totalAmount = totalAmount + userAccount[index].balance;
			 count++;
		 }
		 else
		 {
			 cout << name << " was not found." << endl;
		 }
		 // Re-initializations
		 index = 0;
		 found = false;

		 //Re-prompts user for search input
		 cout << endl
			  << "Who do you want to search for "
				 "(enter done to exit): ";
		 getline (cin, name);

	 } // END OF WHILE LOOP
}
