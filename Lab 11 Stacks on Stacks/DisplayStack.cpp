/***********************************************************************
 * AUTHOR		 : Deboogaloo & demon
 * LAB # 10		 : Stacks
 * CLASS		 : CS1B
 * SECTION		 : TTH - 8am
 * DUE DATE		 : 3-17-15
 ***********************************************************************/

#include "header.h"


void DisplayStack(personNode *head)
{
	const int NAME_W = 30;
	const int GENDER_W = 8;

	personNode *perPtr;
	perPtr = head;

	cout << left;
	cout << setw(NAME_W) << "NAME"
		 << setw(GENDER_W) << "GENDER"
		 << "AGE" << endl;
	cout << setw(NAME_W) << "----"
		 << setw(GENDER_W) << "------"
		 << "---" << endl;

	while(perPtr != NULL)
	{
		cout << setw(NAME_W) << perPtr -> name
			 << setw(GENDER_W) << perPtr -> gender
			 << perPtr -> age  << endl;

		perPtr = perPtr -> next;
	}

}
