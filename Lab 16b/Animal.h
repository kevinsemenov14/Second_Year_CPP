#ifndef ANIMAL_H_
#define ANIMAL_H_
/**************************************************************************
 * AUTHOR     : Ikrit & Demon
 * LAB #16    : Inheritance, Overloading, & Redefining
 * CLASS      : CS1B
 * SECTION    : TuTh: 8am
 * DUE DATE   : 4/21/15
 * ***********************************************************************/

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>

using namespace std;

/****************************************************************
* CLASS Animal
* 	This class represents an animal object. It manages 2 attributes,
* 	name and age
***************************************************************/
class Animal
{
	public:
		/****************************
		 * Constructor & Destructor *
		 ****************************/

		Animal();                      // Constructor
		~Animal();                     // Destructor

		/*************
		 * Mutators  *
		 *************/
		void ChangeValues(string animalName);
		void ChangeValues(unsigned short animalAge);
		void ChangeValues(string animalName,
				         unsigned short animalAge);

		/*************
		 **Accessors**
		 *************/
		string GetName()const;
		unsigned short GetAge()const;
		void GetBoth(string &animalName,
				     unsigned short &animalAge)const;

		string DisplayHeader() const;
		string DisplayLines()  const;
		string DisplayInfo()   const;

	private:
		string name;
		unsigned short age;
};

				/******************************
				** CONSTRUCTOR & DESTRUCTOR **
				******************************/
/**************************************************************
* Animal ();
* 	Constructor; Initialize class attributes
* 	Parameters: none
* 	Return: none
***************************************************************/

/**************************************************************
* ~Animal ();
*	Destructor; does not perform any specific function
* 	Parameters: none
* 	Return: none
***************************************************************/

					/*************
					 * Mutators  *
					 *************/
/**************************************************************
*   SetName();
*	Mutators; Sets animals name
* 	Parameters: animalName
* 	Return: None
***************************************************************/

/**************************************************************
*   SetAge();
*	Mutators; sets animals age
* 	Parameters: animalAge
* 	Return: none
***************************************************************/

/**************************************************************
*   SetBoth(string animalname, unsinged short animalAge);
*	Mutators; sets both animals name and age
* 	Parameters: animalName and animalAge
* 	Return: none
***************************************************************/

					/*************
					 **Accessors**
					 *************/
/**************************************************************
*   GetName();
*	Accessor; returns the name of animal
* 	Parameters: none
* 	Return: name
***************************************************************/

/**************************************************************
*   GetAge();
*	Accessor; Gets the age of animal
* 	Parameters: none
* 	Return: age
***************************************************************/

/**************************************************************
*   GetBoth(string & animalname, unsinged short & animalAge)
*	Accessor; Gives the found Sheep
* 	Parameters: string sheepName, // IN - Sheep name
* 	Return: both by reference
***************************************************************/

/**************************************************************
*   DisplayHeader()
*	Accessor; Displays header
* 	Parameters: none
* 	Return: Header as string
***************************************************************/

/**************************************************************
*   DisplayLines()
*	Accessor; Dislpays lines
* 	Parameters: none
* 	Return: Lines as string
***************************************************************/

/**************************************************************
*   DisplayInfo()
*	Accessor; Displays info
* 	Parameters: none
* 	Return: info as string
***************************************************************/

#endif /* ANIMAL_H_ */
