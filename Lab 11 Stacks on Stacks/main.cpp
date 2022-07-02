/***********************************************************************
 * AUTHOR		 : Deboogaloo & demon
 * LAB # 10		 : Stacks
 * CLASS		 : CS1B
 * SECTION		 : TTH - 8am
 * DUE DATE		 : 3-17-15
 ***********************************************************************/

#include "header.h"

/***********************************************************************
 * IMPLEMENTING A STACK
 * _____________________________________________________________________
 * This program will emulate a stack. Allowing the user to add, delete
 * from, output if it is empty, check and output the first item, check and
 * output the size, and display the whole stack, given the options to
 * in a menu
 * _____________________________________________________________________
 * INPUT:
 *  Specifics on a person to add to the stack:
 *  	name 	: name of the person added
 *  	gender 	: gender of the person added
 *  	age 	: age of the person added
 *
 * OUTPUT:
 * 		The specifics of the person before they are deleted (POP)
 * 		If the stack is empty or not (ISEMPTY)
 * 		The specifics on the front of the stack (PEEK)
 * 		The size of the stack (SIZE)
 * 		The entire stack, in table format
 *
 ***********************************************************************/

int main()
{
	/*******************************************************************
	 * CONSTANTS
	 * -----------------------------------------------------------------
	 * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	 * -----------------------------------------------------------------
	 * PROGRAMMER		: Programmer's Name
	 * ID				: Programmer's ID
	 * CLASS			: Student's Course
	 * SECTION			: Class Days and Times
	 * ASSIGNMENT_NAME	: Title of the Assignment
	 * ASSIGNMENT_TYPE  : Either 'L' for Lab or 'A' for Assignment
	 * ASSIGNMENT_NUM	: Assignment Number (specific to this assignment)
	 * -----------------------------------------------------------------
	 * FORMATTING
	 * -----------------------------------------------------------------
	 * PROMPT_W			: Width of the prompt for the user
	 *******************************************************************/
	const string PROGRAMMER		 = "Deboogaloo & demon";
	const int    ID				 = 0;
	const string CLASS		     = "CS1B";
	const string SECTION		 = "TTH - 8am";
	const string AS_NAME 		 = "Stacks";
	const char 	 AS_TYPE 		 = 'L';
	const int	 AS_NUM	 		 = 11;

	const int PROMPT_W  = 14;	// Prompt width


	int choice;			// IN - Choice on what to do from user
	personNode *head;	// CALC - Pointer for checking stuff
	string name;		// IN & OUT - name of a person input from user
	char gender;		// IN & OUT - gender of a person input from user
	unsigned short age;	// IN & OUT - age of a person input from user


	// INITIALIZATION SECTION
	choice = 6;
	head = NULL;


	// Initialization section

	// PRINT HEADER FUNCTION
	PrintHeaderOstream(PROGRAMMER,   // IN - programmer name
					   ID,			 // IN - id number (0 to omit)
					   CLASS,	  	 // IN - name of the class
					   SECTION,      // IN - class time
				       AS_NAME, 	 // IN - assignment Name
					   AS_TYPE,   	 // IN - assignment type
					   AS_NUM,		 // IN - assignment number
					   cout);		 // IN - output variable


	while (choice != 0)
	{

	// Displays Menu
	DisplayMenu();
	// Checks the input from the user
	choice = CheckInp(choice);
	cin.ignore(100,'\n');
	cout << endl << endl;


	switch(choice)
	{
	case 1 : cout << "Who would you like to add?\n";

			 cout << left;
			 cout << setw(PROMPT_W) << "Enter name: ";
		     getline(cin,name);

		     gender = GetAndCheckCharResponse();

		     cout << left;

			 cout << setw(PROMPT_W) << "Enter age: ";
			 cin  >> age;

			 // Adds a node to the linked list
			head = Push(head, name, gender, age);
	break;

			 // Deletes the first node on the linked list
	case 2 : head = Pop(head);
	break;

			 // Checks if the list is empty
	case 3 : IsEmpty(head);
	break;

		 	 // Checks the first item on the linked list
	case 4 : Peek(head);
	break;

			 // Checks the size of the linked list
	case 5 : Size(head);
	break;

			 // Displays the whole linked list
	case 6 : DisplayStack(head);
	break;

	case 0 : choice = 0;
	break;

	default : choice = 0;

	}

	cout << endl;

	}







	return 0;
}
