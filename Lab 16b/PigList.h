#ifndef PIGLIST_H_
#define PIGLIST_H_
/**************************************************************************
 * AUTHOR     : Ikrit & Demon
 * LAB #16    : Inheritance, Overloading, & Redefining
 * CLASS      : CS1B
 * SECTION    : TuTh: 8am
 * DUE DATE   : 4/21/15
 * ***********************************************************************/

#include "Pig.h"

/****************************************************************
* CLASS PigList
* 	This class represents a PigList object.
* 	It manages the list and PigCounter
***************************************************************/

class PigList
{
	public:
		/****************************
		 * Constructor & Destructor *
		 ****************************/

		PigList();                      // Constructor
		~PigList();                     // Destructor

		/*************
		 * Mutators  *
		 *************/

		void AddPig(Pig newPig);
		void RemovePig(string removePig);
		void ChangeAge(string searchName, unsigned short newAge);
		string FindPig(string searchName) const;
		void ClearList();

		/*************
		 **Accessors**
		 *************/

		unsigned short GetPigCount() const;
		string GetPigNames() const;
		void DisplayPigTable() const;

	private:
		struct PigNode
		{
			PigNode *next;      // IN & OUT - Points to next node
			Pig      ourPig;  // IN & OUT - Sheep Object
			PigNode *prev;	    // IN & OUT - Points to previous node
		};
		PigNode *head;          // IN & OUT - Head
		PigNode *tail;          // IN & OUT - Tail
		unsigned short pigCount;// PROC - Sheep Count
		/*************
		 **Accessors**
		 *************/

		bool IsEmpty() const;
};

				/******************************
				** CONSTRUCTOR & DESTRUCTOR **
				******************************/

/**************************************************************
* Pig ();
* 	Constructor; Initialize class attributes
* 	Parameters: none
* 	Return: none
***************************************************************/

/**************************************************************
* ~Pig ();
*	Destructor; does not perform any specific function
* 	Parameters: none
* 	Return: none
***************************************************************/

					/*************
					 * Mutators  *
					 *************/

/**************************************************************
* void AddPig(Sheep newPig);
*	Mutator; Adds a new Pig to the list if list isn't full
* 	Parameters: newPig // IN - new Pig
* 	Return: none
***************************************************************/

/**************************************************************
* void RemovePig(Pig newPig);
*	Mutator;Removes a new Pig from the list
* 	Parameters: newPig // IN - new Pig
* 	Return: none
***************************************************************/

/**************************************************************
* void ChangeAge(string searchName, unsigned short newAge);
*	Mutator; changes age of a desired Pig
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
* Pig FindPig(string pigName) const;
*	Accessor; Gives the found Pig
* 	Parameters: string PigName, // IN - Sheep name
* 	Return: found Pig (Pig)
***************************************************************/

/**************************************************************
* unsigned short GetPigCount() const;
*	Accessor; Gives the total amount of Pig
* 	Parameters: none
* 	Return: total number of Pig (unsigned short)
***************************************************************/

/**************************************************************
* string GetPigNames() const;
*	Accessor; Gives all names as string
* 	Parameters: none
* 	Return: all names as string
***************************************************************/

/**************************************************************
* void DisplayPigTable() const;
*	Accessor; Displays a table of all the Pig in the list
* 	Parameters: none
* 	Return: none
***************************************************************/

/**************************************************************
* bool IsEmpty() const;
*	Accessor; Checks if the list is empty
* 	Parameters: none
* 	Return: if list is empty (bool)
***************************************************************/

#endif /* PIGLIST_H_ */
