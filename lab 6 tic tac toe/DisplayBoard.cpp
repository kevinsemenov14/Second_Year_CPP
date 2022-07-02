/*************************************************************************
 * AUTHORS    : demon
 * LAB 6      : supplement tic tac toe
 * CLASS      : CS1B
 * SECTION    : TTH: 8AM
 * DUE DATE   : 2/10/15
 *************************************************************************/
#include "myheader.h"


	//THIS function outputs the tic tac toe board in cludeing the tokens played in the proper format.
	void DisplayBoard(const char boardAr[][3])
	{
		int i;
		int j;
		cout << setw(10) << "1" << setw(8) << "2" << setw(9) << "3\n";
		for (i = 0; i < 3; i++)
		{
			cout << setw(7) << "[" << i+1 << "][1] | " << "[" << i+1;
			cout << "][2] | " << "[" << i+1 << "][3]" << endl;
			cout << setw(14) << "|" << setw(9) << "|" << endl;
			for (j = 0; j < 3; j++)
			{
				switch(j)
				{
				case 0: cout << i + 1 << setw(9) << boardAr[i][j];
				cout << setw(4) << "|";
				break;
				case 1: cout << setw(4) << boardAr[i][j];
				cout << setw(5) << "|";
				break;
				case 2: cout << setw(4) << boardAr[i][j] << endl;
				break;
				default: cout <<"ERROR!\n\n";
				}
			}
			cout << setw(14)<< "|" << setw(10) << "|\n";
			if (i != 2)
			{
				cout << setw(32) << "--------------------------\n";
			}
		}
		cout << endl << endl;
	}


