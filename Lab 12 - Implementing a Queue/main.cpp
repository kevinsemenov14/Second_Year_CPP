/*************************************************************************
 * AUTHOR		: sirhC & Demon
 * LAB #12      : Implementing a Queue
 * CLASS		: CS1B
 * SECTION		: TTh: 8:00 AM - 11:50 AM
 * DUE DATE		: 3/12/15
 *************************************************************************/

#include "myHeader.h"

/*************************************************************************
 *	LAB #12 - Implementing a Queue
 * -----------------------------------------------------------------------
 *	This program emulates a queue. It provides a menu using an enumerated
 *  type that allows the user to do the following:
 *
 *  	ENQUEUE			: add new node to the rear of the queue
 *  	DEQUEUE			: delete element from the front of the queue
 *  	ISEMPTY			: determine if queue is empty or not
 *  	FRONT			: look at node at front of queue
 *  	SIZE			: determines the number of elements in the queue
 *  	DISPLAY			: displays the stack as a table
 *  	CLEAR			: deletes the queue
 * -----------------------------------------------------------------------
 * INPUT:
 * 		command		:	command to be performed on the stack
 *
 * PROCESSING:
 * 		nodeCount	:	number of elements in queue
 * 		head		:	head (front) of the queue
 * 		tail		:	tail (back) of the queue
 *
 * OUTPUT:
 * 		nodeCount	:	number of elements in queue
 *************************************************************************/

int main()
{
	unsigned short command;		// IN & PROC  - menu option
	unsigned short nodeCount;	// PROC & OUT - number of elements in queue
	PersonNode *head;			// PROC		  - head (front) of the queue
	PersonNode *tail;			// PROC		  - tail (back) of the queue

	// Initializes pointers to NULL
	head = NULL;
	tail = NULL;


	// PrintHeader - outputs class header to output stream specified
	PrintHeader(cout, "sirhC & Demon", "Implementing a Queue", 'L', 12);

	// DisplayMenu - displays menu options to user
	DisplayMenu();

	// GetAndCheckIntInp - Prompts for int input and checks for validity.
	//					   Menu() type casts the int to enum Menu.
	command = Menu(GetAndCheckIntInp("Enter a command: ", 0, 7));

	cout << endl;

	// PROCESSING - runs while the user does not enter 0 (EXIT)
	while(command != EXIT)
	{

		/************************************************************
		 * PROCESSING
		 * 	The cases perform the following:
		 *
		 *  	1 - ENQUEUE (Add a person)
		 * 		2 - DEQUEUE (Remove a person)
		 * 		3 - ISEMPTY (Is the queue empty?)
		 * 		4 - FRONT   (Who is in front?)
		 * 		5 - SIZE    (How many people are there?)
		 * 		6 - Display Queue
		 * 		7 - Clear the Queue
		 * 		0 - Exit
		 ************************************************************/
		switch(command)
		{

			case ENQUEUE:	cout << "Who would you like to add?\n";
							Enqueue(head, tail);
							break;

			case DEQUEUE:	if(!IsEmpty(head))
							{
								cout << "DEQUEUEING\n"
								     << DisplayTop(head);
								Dequeue(head, tail);
							}
							else
							{
								cout << "Can't DEQUEUE from an empty list!\n";
							}
							break;

			case ISEMPTY:	if (IsEmpty(head))
							{
								cout << "Yes, the QUEUE is empty.\n";
							}
							else
							{
								cout << "The QUEUE is NOT empty\n";
							}
							break;

			case FRONT:		if(!IsEmpty(head))
							{
							cout << "The first person in the queue is:\n"
								 << Front(head);
							}
							else
							{
								cout << "Nobody in FRONT, the queue "
										"is empty!!\n";
							}
							break;

			case SIZE:		nodeCount = Size(head);
							if (nodeCount > 1)
							{
								cout << "There are " << nodeCount << " people"
										" in the queue.\n";
							}
							else if (nodeCount == 1)
							{
								cout << "There is one person on the queue.\n";
							}
							else
							{
								cout << "Nobody is in the queue!\n";
							}
							break;

			case DISPLAY:	if(!IsEmpty(head))
							{
								cout << DisplayQueue(head);
							}
							else
							{
								cout << "Nobody is in the queue!\n";
							}
							break;

			case CLEAR:		if(!IsEmpty(head))
							{
								Clearing(head);
								ClearQueue(head, tail);
								cout << "The queue has been CLEARED!\n";
							}
							else
							{
								cout << "The QUEUE is ALREADY clear!\n";
							}

							break;

			default:		cout << "**** ERROR ****";
							break;

		}

		cout << endl << endl;

		// DisplayMenu - displays menu options to user
		DisplayMenu();

		// GetAndCheckIntInp - Prompts for int input and checks for validity.
		//					   Menu() type casts the int to enum Menu.
		command = Menu(GetAndCheckIntInp("Enter a command: ", 0, 7));

		cout << endl;

	} // END WHILE (command != EXIT)



	return 0;

}
