/*************************************************************************
 * AUTHOR     	   : demon
 * ASSIGNMENT #2   : parallel Arrays
 * CLASS      	   : CS1b
 * SECTION    	   : ThT: 8am
 * DUE DATE   	   : 2/9/2015
 ************************************************************************/
#include"Headerfile.h"
______________________________________________________________
 /**********************************************************************
 * INPUT - This program will first receive as input name of an input
 *         file and an output file.it will then read in a list of
 *         names, id#s, and balances from the input file
 *         specified (call it inFile.txt)
 *********************************************************************
 * _____________________________________________________________
 * INPUT:
 *	name		:	The user's name.
 *	amtLeftover :	Amount leftover from the previous week.
 *	spent		:	Amount spent this week.
 *
 * OUTPUT:
 * 	name		:	User's Name
 * 	pocketMoney :	Amount of pocket money remaining
 *
 *******************************************************************/
int main ()
{
	ifstream inFile;                     // declares input file.
	ofstream outFile;                    // declares output file
	string inName = "InFile.txt";
	string outName = "OFile.txt";
	string searchName;

	outFile.open(outName.c_str());



	// Variables
	const int AR_SIZE = 10;


	int searchIndex;			// CALC - Index of the Found name
	float sum;					// CALC & OUT - The sum of balances
	string arName[AR_SIZE];		// ARRAY - array for names
	int arId[AR_SIZE];			// ARRAY - array for Id numbers
	float arBal[AR_SIZE];		// ARRAY - array for the balance


	/****************************************************************
	 start of the program
	 ****************************************************************/

	printHeader(cout); // Printes the header to the consal

//	asking the user for what file to use
	cout << "What input file would you like to use?  ";
	cin  >> inName;
	inPutFunction(arName, arId, arBal, AR_SIZE);

// asking the user for what file to use
	cout << "What output file would you like to use? ";
	cin  >> outName;
	cin.ignore(1000, '\n');


	// prints the header for the file.
	printHeader(outFile);
	cout << endl;


	cout << "who do you want to search for (enter done to exit) : ";
	getline(cin,searchName);


	outFile << "ID #    Name                      BALANCE DUE";
	outFile << endl;
	outFile << "----    --------------------      -----------";


	int count;
	sum =0;
	count = 0;
	// while loop checking for done and finding the names using the
	//functions
	while(searchName != "done")
	{

		searchIndex = Search(searchName,arName, AR_SIZE);

		if(searchIndex != AR_SIZE)	// IF statement will work while index
									// is found.
		{
			count = count + 1;
			outFile << setprecision(2) << fixed;
			outFile << endl;
			outFile << left;
			outFile << setw(9) << arId[searchIndex]
			        << setw(25) << arName[searchIndex];
			outFile <<  "$"
					<< setw(10) << right << arBal[searchIndex];
			sum = sum + arBal[searchIndex];

			cout << count;
			cout << endl;
			cout << sum;

		}



		cout << "who do you want to search for (enter done to exit) : ";
		getline(cin,searchName);

	}
	sum = sum/ count;
	outFile << endl << endl << endl;
	outFile << setw(34) << right << "Average Balance Due : ";
	outFile <<  "$"
			<< setw(10) << right << sum;
	outFile << endl << endl;
	cout << endl;


	cout << endl;

	cout << "Thank you for using my program.";

	outFile.close();

	return 0;

}
