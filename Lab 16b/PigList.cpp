/**************************************************************************
 * AUTHOR     : Ikrit & Demon
 * LAB #16    : Inheritance, Overloading, & Redefining
 * CLASS      : CS1B
 * SECTION    : TuTh: 8am
 * DUE DATE   : 4/21/15
 * ***********************************************************************/

#include "PigList.h"

/**************************************************************
* Animal ();
* 	Constructor; Initialize class attributes
* 	Parameters: none
* 	Return: none
***************************************************************/
PigList::PigList()
{
	head = NULL;
	tail = head;

	pigCount = 0;
}

/**************************************************************
* ~PigList ();
*	Destructor; does not perform any specific function
* 	Parameters: none
* 	Return: none
***************************************************************/
PigList::~PigList()
{
	PigNode *tempPtr;
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
* Method AddPig: Class PigList
* -------------------------------------------------------------
* This method adds a filled Pig object to the list if not full
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	Pig list is without added newPig
*
* POST-CONDITIONS
* 	Pig list has newPig added
***************************************************************/
void PigList::AddPig(Pig newPig) // IN - Sheep object to be added
{
	PigNode *tempPtr;
	PigNode *searchPtr;
	bool found;

	tempPtr = new PigNode;
	tempPtr -> ourPig = newPig;
	tempPtr -> next = NULL;
	tempPtr -> prev = NULL;
	pigCount++;

	if(IsEmpty())
	{
		head = tempPtr;
		tail = head;

	}
	else if(head -> ourPig.GetPigName() > tempPtr -> ourPig.GetPigName())
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
			if(searchPtr -> next -> ourPig.GetPigName() >
			   tempPtr -> ourPig.GetPigName())
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
* Method RemovePig: Class PigList
* -------------------------------------------------------------
* This method searches for a specific Pig object to remove if found
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	Pig list is as is
*
* POST-CONDITIONS
* 	Pig list has desired Pig removed or outputs not found message
***************************************************************/
void PigList::RemovePig(string removePig)
{
		PigNode *searchPtr;  // PROC & OUT - pointer for search item
		bool found;			   // PROC		 - boolean if removeAnimal is found

		//searchPtr = new PigNode;

		searchPtr = head;
		found = false;



		cout << "\nSearching for " << removePig << "...\n";

		// PROCESSING - searches for the removeAnimal
		while(searchPtr != NULL && !found)
		{
			if(searchPtr -> ourPig.GetPigName() == removePig)
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
			cout << "Removing " << removePig << "!\n\n";

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

			pigCount--;
			delete searchPtr;

		}
		else
		{
			cout << "I\'m sorry, \"" << removePig << "\" was NOT found!\n\n";
		}

		searchPtr = NULL;

}

/**************************************************************
* Method ChangeAge: Class PigList
* -------------------------------------------------------------
* This method changes searched sheep's age.
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	Pig list is as is
*
* POST-CONDITIONS
* 	Pig list has desired Pig age or outputs not found message
***************************************************************/
void PigList::ChangeAge(string searchName, unsigned short newAge)
{
	PigNode *searchPtr;
	Pig foundAnimal;
	bool found;

	searchPtr = head;
	found = false;

	while(searchPtr != NULL && !found)
	{
		if(searchPtr -> ourPig.GetPigName() == searchName)
		{
			found = true;
			foundAnimal = searchPtr -> ourPig;
		}
		else
		{
			searchPtr = searchPtr -> next;
		}
	}

	if (found)
	{
		searchPtr -> ourPig.ChangeAge(newAge);
	}
}

/**************************************************************
* Method ClearList: Class PigList
* -------------------------------------------------------------
* This method clears the array of Animal objects
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	Animal array is filled with objects
*
* POST-CONDITIONS
* 	Animal array if filled with empty Animal objects
***************************************************************/
void PigList::ClearList()
{
	PigNode *tempPtr;
	tempPtr = head;
	while (head != NULL)
	{
		head = head->next;
		delete tempPtr;
		tempPtr = head;
	}
	tail = head;
	tempPtr = NULL;

	pigCount = 0;
}

/**************************************************************
* Method FindAnimal: Class PigList
* -------------------------------------------------------------
* This method returns the foundAnimal object
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	Animal name to search for is passed in
*
* POST-CONDITIONS
* 	found Animal object (empty Animal if not found)
***************************************************************/
string PigList::FindPig(string searchName) const // IN & PROC - Search item
{
	PigNode *searchPtr;
	string name;
	bool found;

	searchPtr = head;
	found = false;

	while(searchPtr != NULL && !found)
	{
		if(searchPtr -> ourPig.GetPigName() == searchName)
		{
			found = true;
			name = searchPtr -> ourPig.GetPigName();
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
* Method TotalAnimal: Class PigList
* -------------------------------------------------------------
* This method returns the AnimalCounter
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	none
*
* POST-CONDITIONS
* 	returns the AnimalCounter
***************************************************************/
unsigned short PigList::GetPigCount() const
{
	return pigCount;
}

/**************************************************************
* Method GetPigNames: Class PigList
* -------------------------------------------------------------
* This method outputs all Pig names
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	none
*
* POST-CONDITIONS
* 	outputs all names in table format
***************************************************************/
string PigList::GetPigNames() const
{
	PigNode *tempPtr;
	ostringstream out;

	out << endl;

	out << "Sheep in the List\n"
	    << "-----------------\n";

	for(tempPtr = head; tempPtr != NULL; tempPtr = tempPtr -> next)
	{
		out << tempPtr -> ourPig.GetPigName();
		out << endl;
	}
	out << endl;

	return out.str();
}

/**************************************************************
* Method DisplayAnimalTable: Class PigList
* -------------------------------------------------------------
* This method outputs all Animal info in table format
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	none
*
* POST-CONDITIONS
* 	outputs the whole array of Animal objects in table format
***************************************************************/
void PigList::DisplayPigTable() const
{
	PigNode *tempPtr;

	cout << left;
	cout << "THE PIG:\n\n";
	cout << head -> ourPig.DisplayHeader() << endl;
	cout << head -> ourPig.DisplayLines() << endl;

	tempPtr = head;

	while(tempPtr != NULL)
	{
		cout << setw(14) << tempPtr -> ourPig.GetPigName()
			 << setw(4)  << tempPtr -> ourPig.GetPigAge()
		     << setw(10) << tempPtr -> ourPig.GetTail();
		tempPtr = tempPtr -> next;
		cout << endl;
	}
	cout << endl << right;
}

/**************************************************************
* Method IsEmpty: Class PigList
* -------------------------------------------------------------
* This method checks if the list is empty
* -------------------------------------------------------------
* PRE-CONDITIONS
* 	none
*
* POST-CONDITIONS
* 	returns if the list is empty or not
***************************************************************/
bool PigList::IsEmpty() const
{
	return head == NULL;
}

