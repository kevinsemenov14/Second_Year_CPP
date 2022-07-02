/**************************************************************************
 * AUTHOR     : Ikrit & Demon
 * LAB #16    : Inheritance, Overloading, & Redefining
 * CLASS      : CS1B
 * SECTION    : TuTh: 8am
 * DUE DATE   : 4/21/15
 * ***********************************************************************/

#include "MyHeader.h"

/*************************************************************************
 * Inheritance, Overloading, & Redefining
 *________________________________________________________________________
 *
 * This program will keep track of Farmer pete's livestock using lists.
 * The program will create classes inheriting traits from a general animal
 * class to use in creating the lists of specific animals.
 * The user will be given the option to change certain attributes from
 * the selection of specified animals.
 *________________________________________________________________________
 ************************************************************************/

int main()
{
	 /*********************************************************************
	  * -------------------------------------------------------------------
	  * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	  * -------------------------------------------------------------------
	  * PROJECT_TYPE : Lab or Assignment indicator
	  * PROGRAMMER   : Programmer's name
	  * LAB_NUM      : Lab Number
	  * LAB_NAME     : Lab Title
	  *
	  ********************************************************************/
	const char PROJECT_TYPE    = 'L';
	const char PROGRAMMER [30] = "Ikrit & Demon";
    const int  LAB_NUM         = 16;
	const char LAB_NAME   [40] = "Inheritance, Overloading, & Redefining";

	int        	   userChoice;  // IN & PROC  - User menu input
	int            reinit;       // PROC       - Determines to reinitialize
	Menu       	   choice;      // PROC       - userChoice typecasted to Menu
	bool           initialized; // PROC       - Tracks initialization record
	string     	   sheepName;   // IN & PROC  - current sheep's name
	string		   searchItem;  // IN & OUT   - current sheep searched
	SheepList      sheepList;   // IN & OUT   - list of sheep
	PigList        pigList;     // IN & OUT   - list of pigs

	userChoice = 0;
	initialized = false;

	 // Prints header to console
	 cout << PrintHeaderString(PROJECT_TYPE, PROGRAMMER,
			                   LAB_NUM, LAB_NAME);

	 // Outputs intro message
	 cout << endl;
	 cout << FillLine(37, '*') << endl;
	 cout << '*' << " WELCOME TO THE FARM LIST MANAGER " << '*' << endl;
	 cout << FillLine(37, '*') << endl << endl;

	 // Stores and checks for valid input
	 userChoice = GetAndCheckInp(userChoice, DisplayFirstMenu(), 0, 1);
	 if(userChoice == 1)
	 {
		 // Initialize all animals
		 cout << "\nInitializing Sheep and Pigs...\n\n";
		 InitializeSheep(sheepList);
		 InitializePigs(pigList);
		 userChoice = GetAndCheckInp(userChoice, DisplayMenu(), 0, 4);
	 }

	 // Runs until user enters 0
	 while (userChoice != 0)
	 {
		 choice = Menu(userChoice);
		 switch (choice)
		 {

			case SHEEP:  reinit = GetCheckCharInp(reinit, "\nAre you sure "
								   "you want to reinitialize Sheep (Y/N)? ",
								   'Y','N');
						  if(reinit == 'N')
						  {
							  cout << "***Sheep have not "
									  "been reinitialized!***\n\n";
						  }
						  else
						  {
							  sheepList.ClearList();
							  InitializeSheep(sheepList);
							  cout << "***Sheep have "
							  		  "been reinitialized!***\n\n";

						  }

						break;

			case PIGS:   reinit = GetCheckCharInp(reinit, "\nAre you sure "
						           "you want to reinitialize Pigs (Y/N)? ",
						           'Y','N');
						  if(reinit == 'N')
						  {
							  cout << "***Pigs have not "
									  "been reinitialized!***\n\n";
						  }
						  else
						  {
							  pigList.ClearList();
							  InitializePigs(pigList);
							  cout << "***Pigs have "
									  "been reinitialized!***\n\n";

						  }
						break;

			case AGE:   ChangeAge(sheepList, pigList);
						break;

		 	case DISPLAY: cout << endl;
		 		          sheepList.DisplaySheepTable();
		 	              pigList.DisplayPigTable();
						break;

		 	 default:	cout << "\nSomething went wrong...\n\n";
		 		        break;
		 }

	 userChoice = GetAndCheckInp(userChoice, DisplayMenu(), 0, 4);
	 }
	 cout << "\nThank you for using my program!";

   return 0;
}
