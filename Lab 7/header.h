/***************************************************************
 * AUTHOR			: User & Demon
 * Lab #7			: Binary Search
 * CLASS			: CS1B
 * SECTION			: TTh: 8am - 11:55am
 * Due Date			: 2/12/2015
 ***************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

//Preprocessor
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

//Global Constants

//Prototypes
void printHeader();

void InsertionSort(const int AR_SIZE, int intArray[]);

void OutputFunct(const int AR_SIZE, int intArray[]);

int BinarySearch (const int AR_SIZE, int intArray[], int intSearch);

int SequeutialSearch(const int AR_SIZE, int intArray[], int intSearch);


#endif /* HEADER_H_ */
