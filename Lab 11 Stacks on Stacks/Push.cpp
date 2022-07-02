/***********************************************************************
 * AUTHOR		 : Deboogaloo & demon
 * LAB # 10		 : Stacks
 * CLASS		 : CS1B
 * SECTION		 : TTH - 8am
 * DUE DATE		 : 3-17-15
 ***********************************************************************/

#include "header.h"

personNode *Push(personNode *head, string name, char gender, unsigned short age)
{
	personNode *perPtr;

	perPtr = new personNode;

	perPtr -> name = name;
	perPtr -> gender = gender;
	perPtr -> age = age;

	perPtr -> next = head;

	head = perPtr;


	return head;
}

