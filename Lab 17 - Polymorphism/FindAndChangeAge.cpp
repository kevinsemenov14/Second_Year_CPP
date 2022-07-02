#include "header.h"

void FindAndChangeAge(string &animalName, short &aniAge)
{

	const string PROMPT_AGE = "Enter new age: ";

	cout << "\nWho are you looking for? ";
	getline(cin, animalName);

	aniAge = GetAndCheckIntInp(PROMPT_AGE, 0, 9);

}
