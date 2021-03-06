/***********************************************************************
 * AUTHOR		 : Deboogaloo &
 * LAB # 10		 : Stacks
 * CLASS		 : CS1B
 * SECTION		 : TTH - 8am
 * DUE DATE		 : 3-17-15
 ***********************************************************************/
#ifndef LAB_6_B_HEADER_H_
#define LAB_6_B_HEADER_H_

#include <iomanip>
#include <iostream>
using namespace std;


struct personNode
{
	string name;
	char gender;
	unsigned short age;
	personNode *next;
};

/***********************************************************************
 * PrintHeaderOstream
 *    This function receives an assignment name, type, number, and output
 * 	  variable, then outputs the appropriate header
 * 	  -Returns nothing -> This will output the class heading.
 ***********************************************************************/
void PrintHeaderOstream(const string PROGRAMMER, // IN - programmer name
				 	 	const int ID,			 // IN - id number
				 	 	const string CLASS,	  	 // IN - name of the class
				 	 	const string SECTION,    // IN - class time
				 	 	const string AS_NAME, 	 // IN - assignment Name
				 	 	const char AS_TYPE,   	 // IN - assignment type
				 	 	const int AS_NUM,		 // IN - assignment number
				 	 	ostream &output);		 // IN - output variable

void DisplayMenu();

int CheckInp(int choice);

personNode *Push(personNode *head, string name, char gender, unsigned short age);

personNode *Pop(personNode *head);

void IsEmpty(personNode *head);

void Peek(personNode *head);

void Size(personNode *head);

void DisplayStack(personNode *head);

char GetAndCheckCharResponse();



#endif
