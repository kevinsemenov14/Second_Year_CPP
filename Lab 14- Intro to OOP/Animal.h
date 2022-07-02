/************************************************************************
 * AUTHOR     : Blue & Demon
 * LAB #5     : Intro to OOP
 * CLASS      : CS1B
 * SECTION    : T/Th 8:00AM
 * DUE DATE   : 3/31/15
 ************************************************************************/

#ifndef ANIMAL_H_
#define ANIMAL_H_

#include "header.h"

using namespace std;


//CLASSES
/************************************************************************
 * Animal
 * This class will
 ************************************************************************/
class Animal
{
	public:
		 Animal();		//constructor
		~Animal();		//deconstructor

		void SetAnimal(string animalType);	//sets the type of animal
		void SetName(string name);			//sets the animal's name
		void SetAge(int age);				//sets the animal's age
		void SetValue(float value);			//sets the animal's dollar value

		string GetAnimal() const;	//return the animal type
		string GetName()   const;	//return the name
		int	   GetAge()    const;	//return the sheep's age
		float  GetValue()  const;	//return the animal's dollar value

	private:
		string animalType;  //the type of animal
		string name;		//name of animal
		int    age;			//age of animal
		float  value;		//dollar value of animal
};

#endif /* ANIMAL_H_ */
