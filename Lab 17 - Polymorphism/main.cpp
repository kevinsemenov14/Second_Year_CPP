/*************************************************************************
 * AUTHOR		: Azaryia & DatOwl
 * LAB #15      : Arrays & Linked Lists of Sheep
 * CLASS		: CS1B
 * SECTION		: T/TH 8am
 * DUE DATE		: 4/14/15
 *************************************************************************/

#include "header.h"
#include "Sheeplist.h"
#include "Piglist.h"

/**************************************************************************
 * 							Arrays of Sheep
 * _____________________________________________________________________
 * This program will implement the sheep class using arrays. The user will
 * choose a menu option from the following:
 *
 *		1 - Add Sheep
 * 		2 - Output 1st Sheep
 * 	 	3 - Find Sheep
 *		4 - List Size
 *		5 - Output List
 *		6 - Remove Sheep
 * 		7 - Clear List
 * 		0 - Exit
 *
 * 	Based upon the user's choice, the proper selection will be made.
 * 	The user is able to add sheep, output the first sheep in the list,
 * 	find a particular sheep, find the number of sheep in the list, output
 * 	the entire list, or clear the list.
 * _____________________________________________________________________
 * INPUT:
 *
 * OUTPUT:
 *
 *************************************************************************/

int main()
{
	/**********************************************************************
	 * 								CONSTANTS
	 * ___________________________________________________________________
	 * The following constants are used for prompting the user for input.
	 * ___________________________________________________________________
	 *		GREETING	:	greets the user with a welcome message
	 *		MENU		:	displays a menu of choices for the user to
	 *					:	choose from.
	 *********************************************************************/
	const string GREETING = "**************************************\n"
							"* WELCOME TO THE ANIMAL LIST MANAGER *\n"
							"**************************************";
	const string MENU     = "1 - Add Animal\n"
						    "2 - Remove Animal\n"
						    "3 - Output 1st Animal\n"
						    "4 - Find Animal\n"
						    "5 - List Size\n"
						    "6 - Display Table\n"
						    "7 - Clear List\n"
						    "0 - Exit\n"
						    "Enter a command: ";

	const string PROMPT_CHAR = "Which animal are you searching for(S/P)? ";


	// VARIABLE DECLARATIONS

	Animal 	 animalType;	//CALC 		- current sheep
	AnimalList animalLists;
	Sheep    newSheepToAdd;			  //CALC		- Sheep to add to list
	int 	 sheepTotal;			  //CALC 		- Total number of sheep
	PigList	 piggies;				  //
	string		sheepWool;
	short		aniAge;
	string 		animalName;
	int initializeCount;
	char charResponse;
	int choice;
	Menu menuChoice;
	bool foundAnimal;
	char searchAnimalChar;


	foundAnimal = false;
	initializeCount = 0;

	// PRINT HEADER TO CONSOLE
	cout << PrintHeaderStream(PROGRAMMER, CLASS, SECTION,
							  AS_NAME, AS_TYPE, AS_NUM);

	// OUTPUTS WELCOME MESSAGE
	cout << GREETING;
	choice = GetAndCheckIntInp("Enter selection: ", 0, 7);
	menuChoice = Menu(choice);

	// VARIABLE INITIALIZATION
	sheepTotal = 0;


	while(menuChoice != EXIT)
	{
		switch(menuChoice)
		{
		case ADD:
		{
				cout << "ANIMAL TYPE:\n"
						"(P) - Pig\n"
						"(S) - Sheep\n"
						"Selection (P/S): ";
				cin.get(charResponse);
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				animalLists.ReadFromUser(charResponse);
		}
			break;
		case FIND:
		{
			do
			{
				searchAnimalChar = GetAndCheckChar('S', 'P', PROMPT_CHAR);

				if(toupper(searchAnimalChar) == 'S')
				{

					FindAndChangeAge(animalName, aniAge);
					foundAnimal = sheepies.FindSheep(animalName, aniAge);
					if(foundAnimal)
					{
						cout << "\nSheep was found!\n";
					}
					else
					{
						cout << "\nSheep was not found!\n";
					}
				}
				else if(toupper(searchAnimalChar) == 'P')
				{
					FindAndChangeAge(animalName, aniAge);
					foundAnimal = piggies.FindPig(animalName, aniAge);
					if(foundAnimal)
					{
						cout << "\nPig was found!\n";
					}
					else
					{
						cout << "\nPig was not found!\n";
					}
				}
				else
				{
					cout << "\nAnimal type not found!\n";
				}
			}while(toupper(searchAnimalChar) != 'S' &&
				   toupper(searchAnimalChar) != 'P' );
			}

			break;
		case DISPLAY:
		{
			cout << "THE SHEEP: \n\n";
			sheepies.DisplaySheepTable();

			cout <<"\nTHE PIG(S): \n\n";
			piggies.DisplayPigTable();

		}
			break;
		default: cout << "There was an error!\n";
		}

		menuChoice = Menu(GetAndCheckIntInp(MENU, EXIT, DISPLAY));
	}


	return 0;
}

