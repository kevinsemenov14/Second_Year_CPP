/*************************************************************************
 * AUTHORS    : Demon
 * LAB 6      : Intro to Pointers
 * CLASS      : CS1B
 * SECTION    : TTH: 8AM
 * DUE DATE   : 2/26/15
 *************************************************************************/
#include "myheader.h"
/*******************************************************************
 * FUNCTION
 * __________________________________________________________________
 * This function, will allow two intgers into the functions then find prudcuct
 * and to find the sum of both numbers.
 * __________________________________________________________________
 * PRE-CONDITIONS:
 * 	int num1 pointer number
 * 	int num2 pointer number
 * ------------------------------------------------------------------
 * USED FOR finding the sum and pruduct
 * ------------------------------------------------------------------
 ********************************************************************/
void FindTotal(int *num1, int *num2)
{
	while(*num1 != -999) // while loop exits on -999
	{
		cout << endl << endl;
		cout << "The sum is:     " << *num1 + *num2; // adds both numbers
		cout << endl;
		cout << "The Product is: " << *num1 * *num2;// times both numbers
		cout << endl << endl;


		cout <<"Input the first value (enter -999 to exit)? ";
		cin >> *num1;
		if(*num1 != -999)
		{
			cout << "Input the second value? ";
			cin >> *num2;
		}
	}
}
