/*************************************************************************
 * AUTHORS    : Demon
 * LAB 6      : Intro to Pointers
 * CLASS      : CS1B
 * SECTION    : TTH: 8AM
 * DUE DATE   : 2/26/15
 *************************************************************************/
#include "myheader.h"

int main()
{
	/*******************************************************************
	 * CONSTANTS
	 * -----------------------------------------------------------------
	 * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	 * -----------------------------------------------------------------
	 * PROGRAMMER 	: Programmer's Name
	 * CLASS 		: Student's Course
	 * SECTION 		: Class Days and Times
	 * LAB_NUM	 	: Lab Number (specific to this lab)
	 * LAB_NAME 	: Title of the Lab
	 *******************************************************************/
	int num1;
	int *numptr; // static pointer
	numptr = &num1;
	printHeader();

	int *num2; // dynamic pointer
	num2 = NULL;

	num2 = new int; // finding a new address for the pointer


	cout << "Input the first value (enter -999 to exit)? ";// asking the input
	cin >> *numptr;
	cout << "Input the second value? ";
	cin >> *num2;

	FindTotal(numptr,num2); // getting two numbers and adding them and
							// finding the pruduct of them then outputing

 delete num2; // closing the pointer
	return 0;
}
