/***********************************************************************
 * AUTHOR		 : Deboogaloo & demon
 * LAB # 10		 : Stacks
 * CLASS		 : CS1B
 * SECTION		 : TTH - 8am
 * DUE DATE		 : 3-17-15
 ***********************************************************************/

#include "header.h"


personNode *Pop(personNode *head)
{
	const int OUT_W = 8;
	personNode *perPtr;

	perPtr = head;
	if(perPtr != NULL)
	{
	cout << "POPPING\n";
	cout << setw(OUT_W) << "Name: "
		 << perPtr -> name;
	cout << endl;
	cout << setw(OUT_W) << "Gender: "
		 << perPtr -> gender;
	cout << endl;
	cout << setw(OUT_W) << "Age: "
		 << perPtr -> age;
	cout << endl << endl;

	head = perPtr -> next;

//	delete perPtr;
	}
	else
	{
		cout << "Can't POP from an empty stack!\n\n";
	}


	return head;
}
