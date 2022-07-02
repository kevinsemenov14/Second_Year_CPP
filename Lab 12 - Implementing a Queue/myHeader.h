/*************************************************************************
 * AUTHOR		: sirhC & Demon
 * LAB #12      : Implementing a Queue
 * CLASS		: CS1B
 * SECTION		: TTh: 8:00 AM - 11:50 AM
 * DUE DATE		: 3/12/15
 *************************************************************************/
#ifndef MYHEADER_H_
#define MYHEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <ios>
#include <ostream>
#include <sstream>
using namespace std;


/*************************************************************************
 * GLOBAL CONSTANTS
 * -----------------------------------------------------------------------
 * USED FOR FORMATTING AND PROCESSING
 * -----------------------------------------------------------------------
 * MENU_COL			:	set length of the option Menu columns
 * PROMPT_COL		:	set length for user input prompt
 * DISPLAY_COL		:	set length for the display columns
 * MIN_ERROR_LEN	:	set minimum length for the error messages
 *************************************************************************/
const unsigned short MENU_COL		  = 12;
const unsigned short PROMPT_COL       = 14;
const unsigned short DISPLAY_COL      = 8;
const unsigned short MIN_ERROR_LEN	  = 38;

// Menu enumerated type
enum Menu
{
	EXIT,
	ENQUEUE,
	DEQUEUE,
	ISEMPTY,
	FRONT,
	SIZE,
	DISPLAY,
	CLEAR
};



// Struct for a person's name, gender, and age in a linked list (queue)
struct PersonNode
{
	string         name;
	char           gender;
	unsigned short age;
	PersonNode     *next;
};



/**************************************************************************
 * SetFill
 * 	This function receives output variable, a character, and a width. It
 * 	will then output to the output stream the character to the specified
 * 	width.
 *
 * RETURNS: nothing
 * --> Outputs the character to the specified width
 **************************************************************************/
void SetFill(ostream&       output,		// IN - Output stream variable
		 	 char           fillChar,   // IN - character to fill width
		 	 unsigned short width);		// IN - width to be filled


/**********************************************************************
 * PrintHeader
 *   This function receives programmer(s) name(s), assignment name,
 *   type, and number then outputs the class heading
 *
 * RETURNS: nothing
 * --> Outputs the class header
 **********************************************************************/
void PrintHeader(ostream& 		output,	     // IN  - Output variable
				 string   		programmers, // IN  - Programmer(s) name(s)
				 string   		assignName,  // IN  - Assignment name
				 char     		assignType,  // IN  - Type of project
				 	 	 	 	 	         //       (lab or assignment)
				 unsigned short assignNum);  // IN  - Project number


/*************************************************************************
 * GetString
 *   This function will accept a string as input and error
 * 	 check it to ensure is a valid response.
 *
 * RETURNS: a valid string response received as input
 *************************************************************************/
string GetString(const string STRING_PROMPT); // IN - prompt for string input


/*************************************************************************
 * GetAndCheckCharInput
 * 	This function will accept a single character as input and error
 * 	check it to ensure is is a valid gender response.
 *
 * RETURNS: a valid single character response received as input
 *************************************************************************/
char GetAndCheckCharInput (const string PROMPT,// IN - response prompt
						   char validChar1,	   // IN - valid char response
						   char validChar2);   // IN - valid char response


/**************************************************************************
 * GetAndCheckIntInp
 * 	This function prompts the user a prompt and receives integer input.
 *	It will error check the input and check if it is within boundaries.
 *
 * RETURNS: the valid integer input.
 **************************************************************************/
int GetAndCheckIntInp(string    prompt, // IN - prompt for user
					  const int MIN,    // IN - minimum boundary
				      const int MAX);   // IN - maximum boundary


/**************************************************************************
 * DisplayMenu
 * 	 This function displays the menu of options as follows:
 * 		1 - ENQUEUE (Add a person)
 * 		2 - DEQUEUE (Remove a person)
 * 		3 - ISEMPTY (Is the queue empty?)
 * 		4 - FRONT   (Who is in front?)
 * 		5 - SIZE    (How many people are there?)
 * 		6 - Display Queue
 * 		7 - Clear the Queue
 * 		0 - Exit
 *
 * RETURNS: nothing
 **************************************************************************/
void DisplayMenu();


/*************************************************************************
 * Enqueue
 * 	 This function adds an element to the tail of the queue.
 *
 * RETURNS: the new head and tail values by reference
 ************************************************************************/
void Enqueue(PersonNode *&head,  // IN - head of the linked list
			 PersonNode *&tail); // IN - tail of the linked list


/**************************************************************************
 * InputFunction
 *	This function gets the input specified by the program and returns it
 *	to the Enqueue function
 *
 * RETURNS: the input to the Enqueue function
 **************************************************************************/
void InputFunction(PersonNode *&personPtr); // IN & OUT - points to node


/**************************************************************************
 * DisplayTop
 * 	 This function displays the top of the queue.
 *
 * RETURNS: nothing
 * --> displays the top of the queue
 **************************************************************************/
string DisplayTop (PersonNode *head); // IN - points to top node in stack


/**************************************************************************
 * Size
 *	 This function determines the size of a stack.
 *
 * RETURNS: returns a integer value representing the number of nodes
 * 			in a stack
 **************************************************************************/
unsigned int Size(PersonNode *head); //IN - points to first node of linked list


/**************************************************************************
 * DisplayQueue
 * 	 This function displays the queue.
 *
 * RETURNS: returns a formatted string containing all elements of the queue
 **************************************************************************/
string DisplayQueue(PersonNode *head); //IN - points to 1st node of linked list


/**************************************************************************
 * IsEmpty
 * 	 This function determines if the queue is empty or not
 *
 * RETURNS: a bool - True if empty, False if not
 **************************************************************************/
bool IsEmpty(PersonNode *head); //IN - points to 1st node of linked list


/**************************************************************************
 * Front
 * 	 This function lets the user view the data item at the top
 * 	 of the queue.
 *
 * RETURNS: a string representation of the element at the top of the queue
 **************************************************************************/
string Front(PersonNode *head); //IN - points to 1st node of linked list


/**************************************************************************
 * Dequeue
 * 	 This function removes the element at the top of the stack
 *
 * RETURNS: new head and tail values by reference
 **************************************************************************/
void Dequeue(PersonNode *&head,  // IN - head of linked list
		     PersonNode *&tail); // IN - tail of linked list


/**************************************************************************
 * Clearing
 *	This function outputs the elements being cleared from the queue.
 *
 * RETURNS: nothing
 * --> Outputs the elements being cleared
 **************************************************************************/
void Clearing(PersonNode *head); // IN - pointer to element at front of queue


/**************************************************************************
 * ClearQueue
 * 	 This function clears all elements from the queue
 *
 * RETURNS: new head and tail values by reference
 **************************************************************************/
void ClearQueue(PersonNode *&head,  // IN - head of linked list
	     	    PersonNode *&tail); // IN - tail of linked list


#endif /* MYHEADER_H_ */
