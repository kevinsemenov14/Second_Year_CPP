
#include "MyHeader.h"

void OutputList(DvDRec *head,					// Beginning of list
				ofstream &oFile)				// Output file variable
{
	DvDRec *DvDPtr;
	unsigned short index;

	DvDPtr = head;
	index = 1;


	while (DvDPtr != NULL)
	{
		oFile << left;
		oFile << setfill('*') << setw(75) << '*' << endl;
		oFile << setfill(' ') << setw(9) << "MOVIE #: ";
		oFile << setw(9) << index;
		oFile << "Title: ";
//		oFile << DvDPtr -> title;
		WordWrapTitle(DvDPtr, 47, oFile);
		oFile << endl;
		oFile << setfill('-') << setw(75) << '-' << endl;
		oFile << setfill(' ');
		oFile << "Year: " << setw(12) << DvDPtr -> year;
		oFile << setw(8) << "Rating: "
			  << DvDPtr -> rating << endl;
		oFile << setfill('-') << setw(75) << '-' << endl;
		oFile << setfill(' ') << setw(18) << "Leading Actor: ";
		oFile << setw(26) << DvDPtr -> leadAct;
		oFile << "Genre 1: " << DvDPtr -> genre
			  << endl;
		oFile << setw(18) << "Supporting Actor: ";
		oFile << setw(26) << DvDPtr -> supportAct;
		oFile << "Genre 2: " << DvDPtr -> altGenre
			  << endl;
		oFile << setfill('-') << setw(75) << '-' << endl;
		oFile << "PLOT: " << endl;
		WordWrap(DvDPtr, 75, oFile);

		oFile << setfill('*') << setw(75) << '*' << endl;
		oFile << endl;
		index++;
		DvDPtr = DvDPtr -> next;


	}

}




