

#ifndef ASSIGNMENT_2_MYHEADER_H_
#define ASSIGNMENT_2_MYHEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstring>
using namespace std;


struct DvDRec
{
	string title;
	string leadAct;
	string supportAct;
	string genre;
	string altGenre;
	int year;
	unsigned short rating;
	string synopsis;
	DvDRec *next;
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

/***********************************************************************
 * InFromFile
 *    This function receives the specifics of DvDs from an input file
 *    		Title
 *    		Lead Actor
 *    		Supporting Actor
 *    		Genre
 *    		Alt Genre
 *    		Year
 *    		Rating
 *    		Synopsis of the Plot
 *
 * 	  -Returns -> Linked list containing all DvD Records
 ***********************************************************************/
DvDRec *InFromFile(string inFileName);			// Input file name
												// from user

void WordWrap(DvDRec *DvDPtr,					// Ptr to keep list place
			  unsigned short maxLength,			// Max length of line
			  ofstream &oFile);					// Output file variable

void WordWrapTitle(DvDRec *DvDPtr,				// Ptr to keep list place
				   unsigned short maxLength,	// Max length of line
				   ofstream &oFile);			// Output file variable

void OutputList(DvDRec *head,					// Beginning of list
				ofstream &oFile);				// Output file variable



#endif /* ASSIGNMENT_2_MYHEADER_H_ */
