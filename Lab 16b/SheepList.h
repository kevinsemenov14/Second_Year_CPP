#ifndef SHEEPLIST_H_
#define SHEEPLIST_H_
/**************************************************************************
 * AUTHOR     : Ikrit & Demon
 * LAB #16    : Inheritance, Overloading, & Redefining
 * CLASS      : CS1B
 * SECTION    : TuTh: 8am
 * DUE DATE   : 4/21/15
 * ***********************************************************************/

#include "Sheep.h"

/****************************************************************
* CLASS SheepList
* 	This class represents a SheepList object.
* 	It manages the list and SheepCounter
***************************************************************/

class SheepList
{
	public:
		/****************************
		 * Constructor & Destructor *
		 ****************************/

	    SheepList();                      // Constructor
		~SheepList();                     // Destructor

		/*************
		 * Mutators  *
		 *************/

		void AddSheep(Sheep newSheep);
		void RemoveSheep(string removeSheep);
		void ChangeAge(string searchName, unsigned short newAge);
		string FindSheep(string searchName) const;
		void ClearList();

		/*************
		 **Accessors**
		 *************/

		unsigned short GetSheepCount() const;
		string GetSheepNames() const;
		void DisplaySheepTable() const;

	private:
		struct SheepNode
		{
			SheepNode *next;      // IN & OUT - Points to next node
			Sheep      ourSheep;  // IN & OUT - Sheep Object
			SheepNode *prev;	  // IN & OUT - Points to previous node
		};
		SheepNode *head;          // IN & OUT - Head
		SheepNode *tail;          // IN & OUT - Tail
		unsigned short sheepCount;// PROC - Sheep Count

		/*************
		 **Accessors**
		 *************/

		bool IsEmpty() const;
};

				/******************************
				** CONSTRUCTOR & DESTRUCTOR **
				******************************/

/**************************************************************
* Sheep ();
* 	Constructor; Initialize class attributes
* 	Parameters: none
* 	Return: none
***************************************************************/

/**************************************************************
* ~Sheep ();
*	Destructor; does not perform any specific function
* 	Parameters: none
* 	Return: none
***************************************************************/

					/*************
					 * Mutators  *
					 *************/

/**************************************************************
* void AddSheep(Sheep newSheep);
*	Mutator; Adds a new Sheep to the list if list isn't full
* 	Parameters: newSheep // IN - new Sheep
* 	Return: none
***************************************************************/

/**************************************************************
* void RemoveSheep(Sheep newSheep);
*	Mutator;Removes a new Sheep from the list
* 	Parameters: newSheep // IN - new Sheep
* 	Return: none
***************************************************************/

/**************************************************************
* void ChangeAge(string searchName, unsigned short newAge);
*	Mutator; changes age of a desired sheep
* 	Parameters: searchName and newAge
* 	Return: none
***************************************************************/

/**************************************************************
* void ClearList();
*	Mutator; Clears the list if list is not empty
* 	Parameters: none
* 	Return: none
***************************************************************/

					/*************
					 **Accessors**
					 *************/

/**************************************************************
* Sheep FindSheep(string SheepName) const;
*	Accessor; Gives the found Sheep
* 	Parameters: string SheepName, // IN - Sheep name
* 	Return: found Sheep (Sheep)
***************************************************************/

/**************************************************************
* unsigned short GetSheepCount() const;
*	Accessor; Gives the total amount of Sheep
* 	Parameters: none
* 	Return: total number of Sheep (unsigned short)
***************************************************************/

/**************************************************************
* string GetSheepNames() const;
*	Accessor; Gives all names as string
* 	Parameters: none
* 	Return: all names as string
***************************************************************/

/**************************************************************
* void DisplaySheepTable() const;
*	Accessor; Displays a table of all the Sheep in the list
* 	Parameters: none
* 	Return: none
***************************************************************/

/**************************************************************
* bool IsEmpty() const;
*	Accessor; Checks if the list is empty
* 	Parameters: none
* 	Return: if list is empty (bool)
***************************************************************/

#endif /* SHEEPLIST_H_ */
