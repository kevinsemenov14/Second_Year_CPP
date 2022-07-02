#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

enum PigTail
{
	STRAIGHT,
	CORKSCREW,
	CURL_UP,
	CURL_RIGHT,
	CURL_LEFT,
	CURL_DOWN
};

enum WoolType
{
	LONG,
	MEDIUM,
	FINE,
	CARPET
};

class Animal
{
	public:

	Animal();
	Animal(string name, short age);
	virtual ~Animal();

	void ChangeAge(short aniAge);

	short GetAge()const;
	string GetName()const;
	virtual void Display()const;
	virtual void DisplayHeading()const;
	virtual void DisplayLines() const;
	virtual void Speak()const;


	protected:
	void AddAnimal(Animal animalToAdd);			//THIS ADD ANIMAL TO LIST
	void SetInitialValues(string aniName, short aniAge);

	private:

	string name;
	short  age;

};




#endif /* ANIMAL_H_ */
