#ifndef PIG_H_
#define PIG_H_

/**************************************************************************
 * AUTHOR     : Ikrit & Demon
 * LAB #16    : Inheritance, Overloading, & Redefining
 * CLASS      : CS1B
 * SECTION    : TuTh: 8am
 * DUE DATE   : 4/21/15
 * ***********************************************************************/

#include <string>
#include "Animal.h"
using namespace std;

enum TailType
{
	NONE,
	STRAIGHT,
	CORKSCREW,
	CURL_UP,
	CURL_RIGHT,
	CURL_LEFT,
	CURL_DOWN
};

/****************************************************************
* CLASS Sheep
* 	This class represents a sheep object. It manages 2 attributes,
* 	woolType and woolColor
***************************************************************/
class Pig: protected Animal
{
	public:
		/****************************
		 * Constructor & Destructor *
		 ****************************/

	Pig();                      // Constructor
	~Pig();                     // Destructor

		/*************
		 * Mutators  *
		 *************/
		void SetTail(string pigTail);
		void ChangeName(string newName);
		void ChangeAge(unsigned short newAge);

		/*************
		 **Accessors**
		 *************/
		string GetTail() const;
		string GetPigName() const;
		unsigned short GetPigAge() const;

		string DisplayHeader() const;
		string DisplayLines()  const;
		string DisplayInfo()   const;

	private:
		TailType tail;

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
*   GetType();
*	Mutators; Sets tail type
* 	Parameters: pigTail
* 	Return: None
***************************************************************/

/**************************************************************
*   ChangeAge();
*	Mutators; Changes age
* 	Parameters: newAge
* 	Return: None
***************************************************************/

					/*************
					 **Accessors**
					 *************/
/**************************************************************
*   GetType();
*	Mutators; gets tail type
* 	Parameters: none
* 	Return: None
***************************************************************/

/**************************************************************
*   GetPigName();
*	Mutators; gets pigs name
* 	Parameters: none
* 	Return: pigname
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

#endif /* PIG_H_ */
