#ifndef SHEEP_H_
#define SHEEP_H_
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

enum WoolType
{
	DEFAULT,
	LONG,
	MEDIUM,
	FINE,
	CARPET
};

/****************************************************************
* CLASS Sheep
* 	This class represents a sheep object. It manages 2 attributes,
* 	woolType and woolColor
***************************************************************/
class Sheep: public Animal
{
	public:
		/****************************
		 * Constructor & Destructor *
		 ****************************/

		Sheep();                      // Constructor
		~Sheep();                     // Destructor

		/*************
		 * Mutators  *
		 *************/
		void SetType( string sheepType);
		void SetColor(string sheepColor);
		void SetWool( string sheepType,
				      string sheepColor);

		/*************
		 **Accessors**
		 *************/
		string GetType() const;
		string GetColor() const;
		void GetBoth(string &sheepType,
				     string &sheepColor) const;

		string DisplayHeader() const;
		string DisplayLines()  const;
		string DisplayInfo()   const;

	private:
		WoolType type;
		string   color;

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
*   SetType();
*	Mutators; Sets wool type
* 	Parameters: sheepType
* 	Return: None
***************************************************************/

/**************************************************************
*   SetColor();
*	Mutators; sets wool color
* 	Parameters: sheep color
* 	Return: none
***************************************************************/

/**************************************************************
*   SetWool();
*	Mutators; sets both sheep type and color
* 	Parameters: none
* 	Return: none
***************************************************************/

					/*************
					 **Accessors**
					 *************/
/**************************************************************
*   GetType() const;
*	Accessor; gets the type of wool
* 	Parameters: none
* 	Return: type as string
***************************************************************/

/**************************************************************
*   GetColor() const;
*	Accessor; gets the color of wool
* 	Parameters: none
* 	Return: color as string
***************************************************************/

/**************************************************************
*  GetBoth(string &sheepType,
		   string &sheepColor) const
*	Accessor; gets both attributes
* 	Parameters: sheepType and sheepColor
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

#endif /* SHEEP_H_ */
