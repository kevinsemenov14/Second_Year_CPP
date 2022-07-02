
#include "MyHeader.h"

void WordWrapTitle(DvDRec *DvDPtr,				// Ptr to keep list place
				   unsigned short maxLength,	// Max length of line
				   ofstream &oFile)				// Output file variable
{
	string word;
	string line;

	if(DvDPtr -> title.length() > maxLength)
	{
		for(unsigned short index = 0; index < (DvDPtr -> title).length();
			index++)
		{
			if((DvDPtr -> title)[index] != ' ')
			{
				word += (DvDPtr -> title)[index];
			}
			else
			{
				if(line.length() + word.length() <= maxLength)
				{
					line += word + ' ';
					word.clear();
				}

			}
		}
		oFile << line << "...";
	}
	else
	{
		oFile << DvDPtr -> title;
	}


}
