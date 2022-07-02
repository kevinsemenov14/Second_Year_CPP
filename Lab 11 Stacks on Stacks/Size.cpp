/***********************************************************************
 * AUTHOR		 : Deboogaloo & demon
 * LAB # 10		 : Stacks
 * CLASS		 : CS1B
 * SECTION		 : TTH - 8am
 * DUE DATE		 : 3-17-15
 ***********************************************************************/

#include "header.h"


void Size(personNode *head)
{
	personNode *perPtr;
	int count;
	perPtr = head;

	count = 0;


	while(perPtr != NULL)
	{
		count++;
		perPtr = perPtr -> next;
	}


	if(count == 0)
	{
		cout << "Nobody is on the stack!\n";
	}
	else if(count == 1)
	{
		cout << "There is one person on the stack.\n";
	}
	else if(count > 1)
	{
		cout << "There are " << count << " people on the stack.\n";
	}

//	delete perPtr;
}
