/**************************************************************************
 * AUTHOR     : Ikrit & Demon
 * LAB #16    : Inheritance, Overloading, & Redefining
 * CLASS      : CS1B
 * SECTION    : TuTh: 8am
 * DUE DATE   : 4/21/15
 * ***********************************************************************/

#include "SheepList.h"

/**************************************************************
* Animal ();
* 	Constructor; Initialize class attributes
* 	Parameters: none
* 	Return: none
***************************************************************/
SheepList::SheepList()
{
	head = NULL;
	tail = head;

	sheepCount = 0;
}

/**************************************************************
* ~SheepList ();
*	Destructor; does not perform any specific function
* 	Parameters: none
* 	Return: none
***************************************************************/
SheepList::~SheepList()
{
	SheepNode *tempPtr;
	tempPtr = head;

	while (head != NULL)
	{
		head = head -> next;
		delete tempPtr;
		tempPtr = head;
	}

	tail = head;
	tempPtr = NULL;
}

/**************************************************************
* Method AddSheep: Class SheepList
* -------------------------------------------------------------
* This method adds a filled sheep object to the list if not full
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	Sheep list is without added newSheep
*
* POST-CONDITIONS
* 	Sheep list has newSheep added
***************************************************************/
void SheepList::AddSheep(Sheep newSheep) // IN - Sheep object to be added
{
	SheepNode *tempPtr;
	SheepNode *searchPtr;
	bool found;

	tempPtr = new SheepNode;
	tempPtr -> ourSheep = newSheep;
	tempPtr -> next = NULL;
	tempPtr -> prev = NULL;
	sheepCount++;

	if(IsEmpty())
	{
		head = tempPtr;
		tail = head;

	}
	else if(head -> ourSheep.GetName() > tempPtr -> ourSheep.GetName())
	{
		tempPtr -> next = head;
		head -> prev = tempPtr;
		head = tempPtr;
	}
	else
	{
		found = false;
		searchPtr = head;

		while(searchPtr -> next != NULL && !found)
		{
			if(searchPtr -> next -> ourSheep.GetName() >
			   tempPtr -> ourSheep.GetName())
			{
				found = true;
			}
			else
			{
				searchPtr = searchPtr -> next;
			}
		}

		tempPtr -> next = searchPtr -> next;
		tempPtr -> prev = searchPtr;
		searchPtr -> next = tempPtr;
		if(found)
		{
			tempPtr -> next -> prev = tempPtr;
		}
	}

	if(tail -> next != NULL)
	{
		tail = tail -> next;
	}

	tempPtr = NULL;
	searchPtr = NULL;

}

/**************************************************************
* Method RemoveSheep: Class SheepList
* -------------------------------------------------------------
* This method searches for a specific sheep object to remove if found
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	Sheep list is as is
*
* POST-CONDITIONS
* 	Sheep list has desired sheep removed or outputs not found message
***************************************************************/
void SheepList::RemoveSheep(string removeSheep)
{
		SheepNode *searchPtr;  // PROC & OUT - pointer for search item
		bool found;			   // PROC		 - boolean if removeAnimal is found

		//searchPtr = new SheepNode;

		searchPtr = head;
		found = false;



		cout << "\nSearching for " << removeSheep << "...\n";

		// PROCESSING - searches for the removeAnimal
		while(searchPtr != NULL && !found)
		{
			if(searchPtr -> ourSheep.GetName() == removeSheep)
			{
				found = true;
			}
			else
			{
				searchPtr = searchPtr -> next;
			}
		}

		// PROCESSING - removes the node differently depending on where in the
		//				list it is found (front, middle, or end)
		if(found)
		{
			cout << "Removing " << removeSheep << "!\n\n";

			// Removing from front (head)
			if(searchPtr -> prev == NULL)
			{
				searchPtr = head;
				head = searchPtr -> next;
			}
			// Removing from end (tail)
			else if(searchPtr -> next == NULL)
			{
				tail = searchPtr -> prev;
				tail -> next = NULL;
			}
			// Removing from middle
			else
			{
				searchPtr -> prev -> next = searchPtr -> next;
				searchPtr -> next -> prev = searchPtr -> prev;
			}

			sheepCount--;
			delete searchPtr;

		}
		else
		{
			cout << "I\'m sorry, \"" << removeSheep << "\" was NOT found!\n\n";
		}

		searchPtr = NULL;

}

/**************************************************************
* Method ChangeAge: Class SheepList
* -------------------------------------------------------------
* This method changes searched sheep's age.
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	Sheep list is as is
*
* POST-CONDITIONS
* 	Sheep list has desired sheep age or outputs not found message
***************************************************************/
void SheepList::ChangeAge(string searchName, unsigned short newAge)
{
	SheepNode *searchPtr;
	Sheep foundAnimal;
	bool found;

	searchPtr = head;
	found = false;

	while(searchPtr != NULL && !found)
	{
		if(searchPtr -> ourSheep.GetName() == searchName)
		{
			found = true;
			foundAnimal = searchPtr -> ourSheep;
		}
		else
		{
			searchPtr = searchPtr -> next;
		}
	}

	if (found)
	{
		searchPtr -> ourSheep.ChangeValues(newAge);
	}

}

/**************************************************************
* Method ClearList: Class SheepList
* -------------------------------------------------------------
* This method clears the array of Animal objects
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	Animal array is filled with objects
*
* POST-CONDITIONS
* 	Animal array if filled with empty Animal objects
***************************************************************/
void SheepList::ClearList()
{
	SheepNode *tempPtr;
	tempPtr = head;
	while (head != NULL)
	{
		head = head->next;
		delete tempPtr;
		tempPtr = head;
	}
	tail = head;
	tempPtr = NULL;

	sheepCount = 0;
}

/**************************************************************
* Method FindAnimal: Class SheepList
* -------------------------------------------------------------
* This method returns the foundAnimal object
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	Animal name to search for is passed in
*
* POST-CONDITIONS
* 	found Animal object (empty Animal if not found)
***************************************************************/
string SheepList::FindSheep(string searchName) const // IN & PROC - Search item
{
	SheepNode *searchPtr;
	string name;
	bool found;

	searchPtr = head;
	found = false;

	while(searchPtr != NULL && !found)
	{
		if(searchPtr -> ourSheep.GetName() == searchName)
		{
			found = true;
			name = searchPtr -> ourSheep.GetName();
		}
		else
		{
			searchPtr = searchPtr -> next;
		}
	}

	searchPtr = NULL;
	return name;
}

/**************************************************************
* Method TotalAnimal: Class SheepList
* -------------------------------------------------------------
* This method returns the AnimalCounter
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	none
*
* POST-CONDITIONS
* 	returns the AnimalCounter
***************************************************************/
unsigned short SheepList::GetSheepCount() const
{
	return sheepCount;
}

/**************************************************************
* Method GetSheepNames: Class SheepList
* -------------------------------------------------------------
* This method outputs all sheep names
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	none
*
* POST-CONDITIONS
* 	outputs all names in table format
***************************************************************/
string SheepList::GetSheepNames() const
{
	SheepNode *tempPtr;
	ostringstream out;

	out << "\nSheep in the List\n"
	    << "-----------------\n";

	tempPtr = head;

	while(tempPtr != NULL)
	{
		out << tempPtr -> ourSheep.GetName();

		tempPtr = tempPtr -> next;
		out << endl;
	}
	out << endl;

	return out.str();
}

/**************************************************************
* Method DisplayAnimalTable: Class SheepList
* -------------------------------------------------------------
* This method outputs all Animal info in table format
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	none
*
* POST-CONDITIONS
* 	outputs the whole array of Animal objects in table format
***************************************************************/
void SheepList::DisplaySheepTable() const
{
	SheepNode *tempPtr;

	cout << left;
	cout << "THE SHEEP:\n\n";
	cout << head -> ourSheep.DisplayHeader() << endl;
	cout << head -> ourSheep.DisplayLines() << endl;

	tempPtr = head;

	while(tempPtr != NULL)
	{
		cout << setw(14) << tempPtr -> ourSheep.GetName()
			 << setw(4)  << tempPtr -> ourSheep.GetAge()
		     << setw(10) << tempPtr -> ourSheep.GetType()
				         << tempPtr -> ourSheep.GetColor();
		tempPtr = tempPtr -> next;
		cout << endl;
	}
	cout << endl << right;
}

/**************************************************************
* Method IsEmpty: Class SheepList
* -------------------------------------------------------------
* This method checks if the list is empty
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	none
*
* POST-CONDITIONS
* 	returns if the list is empty or not
***************************************************************/
bool SheepList::IsEmpty() const
{
	return head == NULL;
}

