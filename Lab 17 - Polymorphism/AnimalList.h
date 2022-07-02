/*************************************************************************
 * AUTHOR		: Azaryia & DatOwl
 * LAB #15      : Arrays & Linked Lists of Animal
 * CLASS		: CS1B
 * SECTION		: T/TH 8am
 * DUE DATE		: 4/14/15
 *************************************************************************/
#ifndef SHEEPLIST_H_
#define SHEEPLIST_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <limits>
#include "Animal.h"
using namespace std;

//const int AR_SIZE  = 3;
//const int NAME_COL = 15;

WoolType StringToEnumWool(string thisString);


class AnimalList
{
public:
	/****************************
	 * CONSTRUCTOR & DESTRUCTOR *
	 ****************************/
	AnimalList();	// CONSTRUCTOR
	~AnimalList();// DESTRUCTOR

	/************
	 * MUTATORS *
	 ************/
	void ReadFromUser(char userChar);
	void AddAnimal(Animal newAnimalToAdd);
	void ClearList();
	void RemoveAnimal(string animalName);

	/*************
	 * ACCESSORS *
	 *************/
	void  GetFirstAnimal()const;
	bool FindAnimal(string searchKey, short aniAge)const;
	int   TotalAnimal()const;
	virtual void  DisplayAnimalTable()const;

private:
	struct AnimalNode
	{
		Animal      newAnimal; // IN & OUT - animal object
		AnimalNode *next;	 // IN & OUT - links node to next node in list
		AnimalNode *prev;     // IN & OUT - links node to previous node
	};
	int        animalCounter; // IN & OUT - Animal counter
	AnimalNode *head;	     // IN & OUT - beginning of linked list

	bool IsEmpty()const;
};

/**************************************************************************
* AnimalList()
*__________________________________________________________________________
*	Constructor; allocates memory reserved for one FarmList object.
*__________________________________________________________________________
* PARAMETERS: none
* RETURNS	: nothing
**************************************************************************/

/**************************************************************************
* ~AnimalList()
*__________________________________________________________________________
*	Destructor; deallocates memory reserved for one FarmList object.
*__________________________________________________________________________
* PARAMETERS: none
* RETURNS	: nothing
**************************************************************************/

/**************************************************************************
* AddAnimal()
*__________________________________________________________________________
*	Adds a animal to the list
*__________________________________________________________________________
* PARAMETERS: newAnimal
* RETURNS	: nothing
**************************************************************************/

/**************************************************************************
* ClearList()
*__________________________________________________________________________
*	Clears the list
*__________________________________________________________________________
* PARAMETERS:
* RETURNS	: nothing
**************************************************************************/


/**************************************************************************
* GetFirstAnimal()
*__________________________________________________________________________
*	Gets the first animal's name.
*__________________________________________________________________________
* PARAMETERS: none
* RETURNS	: name of animal
**************************************************************************/

/**************************************************************************
* FindAnimal()
*__________________________________________________________________________
*	Searches for the input animal and returns the index in which it was
*	found
*__________________________________________________________________________
* PARAMETERS: searchKey
* RETURNS	: found animal
**************************************************************************/

/**************************************************************************
* TotalAnimal()
*__________________________________________________________________________
*	Returns the total number of animal
*__________________________________________________________________________
* PARAMETERS:
* RETURNS	: animal count
**************************************************************************/

/**************************************************************************
* DisplayAnimalTable()
*__________________________________________________________________________
*	Outputs the animal in table format to the console
*__________________________________________________________________________
* PARAMETERS:
* RETURNS	: nothing
**************************************************************************/


#endif /* SHEEPLIST_H_ */
