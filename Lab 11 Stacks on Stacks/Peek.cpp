/***********************************************************************
 * AUTHOR		 : Deboogaloo & demon
 * LAB # 10		 : Stacks
 * CLASS		 : CS1B
 * SECTION		 : TTH - 8am
 * DUE DATE		 : 3-17-15
 ***********************************************************************/

#include "header.h"


void Peek(personNode *head)
{
	const int OUT_W = 8;

	personNode *perPtr;
	perPtr = head;
	if(perPtr != NULL)
	{
		cout << "PEEKING at:\n";
		cout << setw(OUT_W) << "Name: "
			 << perPtr -> name;
		cout << endl;
		cout << setw(OUT_W) << "Gender: "
			 << perPtr -> gender;
		cout << endl;
		cout << setw(OUT_W) << "Age: "
			 << perPtr -> age;
		cout << endl << endl;
	}
	else
	{
		cout << "There is nobody to PEEK at!!\n\n";
	}

}


