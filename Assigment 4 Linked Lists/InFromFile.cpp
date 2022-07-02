
#include "MyHeader.h"


DvDRec *InFromFile(string inFileName)	// Input file name from user
{
	DvDRec *head;
	DvDRec *DvDPtr;

	ifstream iFile;
	iFile.open(inFileName.c_str());

	head = NULL;
	DvDPtr = new DvDRec;

		while(iFile)
		{
			getline(iFile,DvDPtr -> title);
			getline(iFile,DvDPtr -> leadAct);
			getline(iFile,DvDPtr -> supportAct);
			getline(iFile,DvDPtr -> genre);
			getline(iFile,DvDPtr -> altGenre);
			iFile >> DvDPtr -> year;
			iFile >> DvDPtr -> rating;
			iFile.ignore(100,'\n');
			getline(iFile,DvDPtr -> synopsis);
			iFile.ignore(100, '\n');

			DvDPtr -> next = head;
			head = DvDPtr;
			DvDPtr = new DvDRec;
		}
		delete DvDPtr;

		iFile.close();

	return head;
}


