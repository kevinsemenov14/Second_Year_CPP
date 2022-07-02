
#include "MyHeader.h"

void WordWrap(DvDRec *DvDPtr,					// Ptr to keep list place
			  unsigned short maxLength,			// Max length of line
			  ofstream &oFile)					// Output file variable
{
	string word;
	string line;

	for(unsigned short index = 0; index < (DvDPtr -> synopsis).length();
		index++)
	{
		if((DvDPtr -> synopsis)[index] != ' ')
		{
			word += (DvDPtr -> synopsis)[index];
		}
		else
		{
			if(line.length() + word.length() > maxLength)
			{
				oFile << line;
				line.clear();
				oFile << endl;
			}
			line += word + ' ';
			word.clear();
		}
	}

	if(line.length() != 0)
	{
		oFile << line
			  << endl;
	}

}
