/*************************************************************************
 * AUTHOR		: Azaryia & DatOwl
 * LAB #15      : Arrays & Linked Lists of Animal
 * CLASS		: CS1B
 * SECTION		: T/TH 8am
 * DUE DATE		: 4/14/15
 *************************************************************************/

#include "AnimalList.h"
#include "Pig.h"
#include "Sheep.h"

const int AR_SIZE  = 3;
const int NAME_COL = 15;
/**************************************************************************
* AnimalList()
*__________________________________________________________________________
*	Constructor; allocates memory reserved for one AnimalList object.
*__________________________________________________________________________
* PRE-CONDITIONS:
*
* POST-CONDITIONS:
* 	Initializes animalCounter to 0.
**************************************************************************/

AnimalList::AnimalList()
{
	animalCounter = 0;
	head         = NULL;
}

/**************************************************************************
* ~AnimalList()
*__________________________________________________________________________
*	Destructor; deallocates memory reserved for one AnimalList object.
*__________________________________________________________________________
* PRE-CONDITIONS:
*
* POST-CONDITIONS:
* 	Deallocates memory
**************************************************************************/

AnimalList::~AnimalList()
{
	ClearList();
}

/**************************************************************************
* AddAnimal()
*__________________________________________________________________________
*	Adds a animal to the list
*__________________________________________________________________________
* PRE-CONDITIONS:
* 	  newAnimal  : User input animal
*
* POST-CONDITIONS:
* 	Adds a new animal to the list
**************************************************************************/

void AnimalList::ReadFromUser(char userChar)
{

	string aniName;
	short aniAge;
	char woolType;
	string colorWooly;
	WoolType typeOfWool;
	Animal	myAnimal;
	char tailType;
	Sheep  mySheep;
	Pig	   myPig;
    PigTail pigTail;


	if(toupper(userChar) == 'S')
	{

			cout << "Sheep's Name: ";
			getline(cin, aniName);

			cout << "Sheep's Age: ";
			cin >> aniAge;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');


			cout << "Sheep Wool Type: \n"
					"(L) - Long\n"
					"(M) - Medium\n"
					"(F) - Fine\n"
					"(C) - Carpet\n"
					"Enter Choice (L/M/F/C): ";
			cin.get(woolType);

			cout << "Sheep Color:\n"
					"(B) - Black\n"
					"(W) - White\n"
					"Enter Choice (B/W): ";
			getline(cin, colorWooly);

			typeOfWool = StringToEnumWool(woolType);

			mySheep.SetInitialValues(aniName, aniAge,
									 typeOfWool, colorWooly);

			AddAnimal(mySheep);
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	else if(userChar == 'P')
	{
		Animal(aniName, aniAge, pigTail);
		cout << "Pig's Name: ";
		getline(cin, aniName);

		cout << "Pig's Age: ";
		cin >> aniAge;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << "Pig Tail Type:\n"
				"(S) - Straight\n"
				"(C) - Corkscrew\n"
				"(U) - Curls Up\n"
				"(R) - Curls Right\n"
				"(L) - Curls Left\n"
				"Enter Choice (S/C/U/R/L): ";
		cin.get(tailType);
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		pigTail = StringToEnumTail(tailType);

		myPig.SetInitialValues(aniName, aniAge, pigTail);

		AddAnimal(myPig);
	}
	else
	{
		cout << "Animal type not found!";
	}

}



void AnimalList::AddAnimal(Animal newAnimalToAdd)
{
	AnimalNode *animalPtr;
	AnimalNode *searchPtr;

	animalPtr = new AnimalNode;

	animalPtr->newAnimal = newAnimalToAdd;
	animalPtr->next     = NULL;
	animalPtr->prev	   = NULL;

	if (animalCounter == 0)
	{
		head = animalPtr;
	}
	else if (head-> next == NULL)
	{
		if (animalPtr->newAnimal.GetName() > head->newAnimal.GetName())
		{
			animalPtr->prev = head;
			head    ->next = animalPtr;
		}
		else
		{
			animalPtr -> next = head;
			head -> prev = animalPtr;
			head = animalPtr;
		}
	}
	else
	{
		searchPtr = head;

		while (animalPtr->newAnimal.GetName() > searchPtr->newAnimal.GetName()
				&& searchPtr->next != NULL)
		{
			searchPtr = searchPtr -> next;
		}

		if (searchPtr -> next == NULL &&
			animalPtr  -> newAnimal.GetName() > searchPtr->newAnimal.GetName())
		{
			animalPtr  -> prev = searchPtr;
			searchPtr -> next = animalPtr;
		}
		else if (searchPtr -> prev == NULL &&
				 animalPtr->newAnimal.GetName() <= searchPtr->newAnimal.GetName())
		{
			animalPtr  -> next = searchPtr;
			searchPtr -> prev = animalPtr;
			head = animalPtr;
		}
		else
		{
			animalPtr  -> next 		  		 = searchPtr;
			animalPtr  -> prev 		  		 = searchPtr -> prev;
			searchPtr -> prev -> next        = animalPtr;
			searchPtr -> prev = animalPtr;

		}
	}
	animalCounter++;
}

/**************************************************************************
* ClearList()
*__________________________________________________________________________
*	Clears the list
*__________________________________________________________________________
* PRE-CONDITIONS:
*
* POST-CONDITIONS:
* 	Reinitalizes the list - string gets cleared and short gets initialized
* 	to -1
**************************************************************************/
void AnimalList::ClearList()
{
	AnimalNode *animalPtr;
	animalPtr = head;

	while (head != NULL)
	{
		head = animalPtr->next;
		delete animalPtr;
		animalPtr = head;
	}
	animalCounter = 0;

}

/**************************************************************************
* GetFirstAnimal()
*__________________________________________________________________________
*	Gets the first animal in the list
*__________________________________________________________________________
* PRE-CONDITIONS:
*
* POST-CONDITIONS:
* 	Returns the first instance of the animal in the list
**************************************************************************/

//void AnimalList::GetFirstAnimal()const
//{
//	Animal      firstAnimal;
//	short      animalAge;
//	string     animalName;
//	AnimalNode *animalPtr;
//
//
//	animalPtr = head;
//
//	if(animalCounter != 0)
//	{
//		cout << left << endl
//			 <<	setw(NAME_COL) << "NAME"
//			 << "AGE\n"
//			 << "-------------- ---\n";
//
//			animalPtr->newAnimal.GetValues(animalName, animalAge);
//			cout << setw(NAME_COL + 1) << animalName
//				 << animalAge
//				 << endl;
//
//		cout << right;
//	}
//	else
//	{
//		cout << "Nobody is in the front - the list is empty!\n";
//	}
//
//}

/**************************************************************************
* FindAnimal()
*__________________________________________________________________________
*	Searches the list for the user specified animal. If the animal is found,
*	then the animal is returned.
*__________________________________________________________________________
* PRE-CONDITIONS:
* 	animalName	:	name of animal
*
* POST-CONDITIONS:
* 	Returns the found animal. If not found, returns an empty animal.
**************************************************************************/

bool AnimalList::FindAnimal(string animalName, short aniAge)const
{
	bool       found;
	AnimalNode *animalPtr;

	found    = false;
	animalPtr = head;

	while(!found && animalPtr != NULL)
	{
		if(animalPtr->newAnimal.GetName() == animalName)
		{
			animalPtr->newAnimal;
			found = true;
			animalPtr->newAnimal.ChangeAge(aniAge);
		}
		else
		{
			animalPtr = animalPtr->next;
		}
	}

	return found;
}

/**************************************************************************
* TotalAnimal()
*__________________________________________________________________________
*	The total number of animal in the list based on the animal counter
*__________________________________________________________________________
* PRE-CONDITIONS:
*
* POST-CONDITIONS:
* 	Returns the total number of animal
**************************************************************************/

int AnimalList::TotalAnimal()const
{
	return animalCounter;
}

/**************************************************************************
* DisplayAnimalTable()
*__________________________________________________________________________
*	Displays the animal's name and age in table format
*__________________________________________________________________________
* PRE-CONDITIONS:
*
* POST-CONDITIONS:
* 	Outputs the animal's name and age in table format to the console
**************************************************************************/

void AnimalList::DisplayAnimalTable()const
{

	AnimalNode *animalPtr;

	animalPtr = head;

	animalPtr -> newAnimal.DisplayHeading();
	animalPtr -> newAnimal.DisplayLines();

	while(animalPtr != NULL)
	{
		animalPtr -> newAnimal.DisplayAnimal();

		animalPtr = animalPtr -> next;
	}

	delete animalPtr;
	animalPtr = NULL;


}




/**************************************************************************
* IsEmpty()
*__________________________________________________________________________
*	Determines if the linked list is empty or not.
*__________________________________________________________________________
* PRE-CONDITIONS:
*
* POST-CONDITIONS:
* 	Returns a boolean value.
* 		true	:	list is empty
* 		false	:	list is not empty
**************************************************************************/

bool AnimalList::IsEmpty()const
{
	return head == NULL;
}


/**************************************************************************
* RemoveAnimal()
*__________________________________________________________________________
*	Removes a single animal from the list
*__________________________________________________________________________
* PRE-CONDITIONS:
* 	nameToRemove	:	name of the animal to remove
*
* POST-CONDITIONS:
* 	Returns nothing, removes a animal node.
**************************************************************************/

void AnimalList::RemoveAnimal(string animalName)
{
	bool       found;
	AnimalNode *animalPtr;

	found    = false;
	animalPtr = head;

	while(!found && animalPtr != NULL)
	{
		if(animalPtr->newAnimal.GetName() == animalName)
		{
			found = true;
		}
		else
		{
			animalPtr = animalPtr->next;
		}
	}

	if (animalPtr->prev != NULL && animalPtr->next != NULL)
	{
		animalPtr -> next -> prev = animalPtr -> prev;
		animalPtr -> prev -> next = animalPtr -> next;
	}
	else if (animalPtr->prev == NULL && animalPtr->next != NULL)
	{
		animalPtr -> next -> prev = NULL;
		head 					 = animalPtr -> next;
	}
	else if (animalPtr->prev != NULL && animalPtr->next == NULL)
	{
		animalPtr -> prev -> next = NULL;
	}
	else
	{
		head     = NULL;
	}
	delete animalPtr;
	animalPtr = NULL;

	animalCounter--;
}


