/*************************************************************************
 * AUTHORS    : demon
 * LAB #16    : Introduction to Arrays
 * CLASS      : CS1B
 * SECTION    : MW: 8AM
 * DUE DATE   : 1/27/15
 *************************************************************************/

#include "MyHeader.h"

/***********************************************************************
 * 	Theme Park Day- Planner
 * 	___________________________________________________________________
 *	This program will find how many kids are going to the theme park
 *	and aslo find out what they want for food. Then it will find out
 *	the coast of each studnet going.
 *_______________________________________________________________
 * 	This program will prompt for the folling informatin about each kid
 * 	Name
 * 	AGe, and if they are vegetarian
 * 	If they are vegetarian it will ask if they eat cheese
 * 	___________________________________________________________________
 * 	INPUT:
 * 		name		:	The user's name.
 * 		age			:	childs age.
 * 		cheeseburger:   food
 * 		Hamburgers  :   food
 * 		Cheese Pizza:   food
 * 		Happy Garden:   food
 *
 * 	OUTPUT:
 * 		age
 * 		Admission fee
 ***********************************************************************/
int main()
{
	/*******************************************************************
	 * CONSTANTS
	 * -----------------------------------------------------------------
	 * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	 * -----------------------------------------------------------------
	 * PROGRAMMER 	: Programmer's Name
	 * CLASS 		: Student's Course
	 * SECTION 		: Class Days and Times
	 * LAB_NUM	 	: Lab Number (specific to this lab)
	 * LAB_NAME 	: Title of the Lab
	 *
	 * -----------------------------------------------------------------
	 * USED FOR FORMATTING
	 * -----------------------------------------------------------------
	 * PROMPT_COL	: Width for the prompts
	 * NAME_SIZE	: Name size parameters
	 * CANDY_SIZE	: Size for candy
	 * DRINK_SIZE	: Size for drink
	 * -----------------------------------------------------------------
	 * USED FOR SELECTIONS
	 * -----------------------------------------------------------------
	 * CHECK		: Used for checking if the user input Y or N
	 *******************************************************************/

	string name; 			// IN & OUT		- The user's name
	int  age;				// IN & CALC	- The user's age
	int count = 1;			// the count of the child
	double cost;				// cost of food
	char Vegetarian;	// will ask if he or she is a Vegetarian
	char Cheese;		// will ask if he or she likes Cheese
	string food;		// the food the kid will be eating
	string ride;		// the ride that the kid will be allowed to be on


	cost = 0;		// makes cost zero before use
	// OUTPUT Class Heading
	 printHeader();

	 cout << "Welcome to the Theme Park Planner! Please input each kid's information.";


	 for(count = 1; count < 10; count++)						// forloop for the ten kids
	 {

	 cout << endl << endl;
	 cout << left << "kid #" << count << ":";
	 cout << endl << setw(32) << "What is your kid's name?";			// asks for the name of the kid
	 cin >> name;
	 cin.ignore(1000,'\n');
	 cout <<  setw(32) << "How old is the kid?";						// asks for the childs age
	 cin >> age;
	 cin.ignore(1000,'\n');




	 if(age < 5)							// if statement finding out what ride they will be on from there age
	 {
		 ride = "Ferris Wheel and will be visiting the Sheep Petting Zoo.";

	 }
	 else if(age <= 12)
	 {
		 ride = "Tea Cups and will be playing Laser Tag.";
		 cost += 15;
	 }
	 else if(age > 12)
	 {
		 ride = "Roller Coaster and the Zip Line.";
		 cost += 20;
	 }


	 cout << setw(32) << "Vegetarian (Y/N)?";			// asks if he or she is a vegetarian
	 cin.get(Vegetarian);
	 Vegetarian = toupper(Vegetarian);
	 cin.ignore(1000,'\n');

	 cout << setw(32) << "Does he/she like cheese (Y/N)?";   // asks if he or she likes cheese
	 cin.get(Cheese);

	 cin.ignore(1000,'\n');


	 if(Vegetarian == 'Y')						// if statement that finds out what food they will be eating
	 {
		 if(Cheese == 'Y')
		 {

			 food ="Cheese Pizza ";
			 cost = cost + 2.50;
		 }
		 else
		 {
			 food =" Happy Garden ";
			 cost = cost + 1.75;
		 }
	 }
	else
	{
		 if(Cheese == 'Y')
		 {
			 food = "Cheeseburgers ";
			 cost += 3.50;
		 }
		 else
		 {
			 food = "Hamburgers ";
			 cost += 3.25;
		 }
	 }

	 cout << endl << name << " will be going on the "<< ride << endl;
	 cout << "Pack a " << food << "for " << name;
	 }

	 cout << endl << endl << endl << endl <<"..." << endl;
	 cout << setw(31) << "The total cost for the day is: $" << cost << endl;
	 cout << setw(31) << "The average cost per kid is:   $" << cost/10;


	return 0;
}
