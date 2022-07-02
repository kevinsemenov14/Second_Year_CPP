/*************************************************************************
 * AUTHORS    : demon
 * LAB 6      : supplement tic tac toe
 * CLASS      : CS1B
 * SECTION    : TTH: 8AM
 * DUE DATE   : 2/10/15
 *************************************************************************/
#include "myheader.h"

int main()
{
	/*******************************************************************
	 * CONSTANTS
	 * -----------------------------------------------------------------
	 * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	 * -----------------------------------------------------------------
	 * PROGRAMMER 	: Programmer's Name
	 * CLASS 		: Student's Course
	 * SECTION 		: Class Days and Times
	 * LAB_NUM	 	: Lab Number (specific to this lab)
	 * LAB_NAME 	: Title of the Lab
	 *******************************************************************/
	char boardAr[NUM_ROWS][NUM_COLS];

	char token;
	int gamesPlayed;
	string player1;
	string player2;
	char answer;
	char whoWon;
	int turns;
	char gameanswer;
	turns = 0;
bool invalid;
invalid = false;

	gamesPlayed = 0; // games plays

	// prints the header of the program here.
	printHeader();
	OutputInstruct();
	while(!invalid)
	{
	cout << "do you wish to play the game? (Y/N) ";
	cin.get(answer);
	cout << endl;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	answer = toupper(answer);
	if(answer == 'Y' || answer == 'N')
	{
		invalid = true;
	}
	else
	{
		cout << "please input Y or N \n";
	}
	}
// while that asks you to choose your names and to ask at the end of the game if
	//you wish to play with the same names
	while(answer =='Y')
	{

		if( gamesPlayed == 0)
		{
			// gets the players names for the game.
			GetPlayers(player1,player2);
		}
		else
		{
			cout << "would you like to keep the same Names. (Y/N) ";
			cin.get(gameanswer);
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			gameanswer = toupper(gamesPlayed);

			if( gameanswer == 'N')
			{
				GetPlayers(player1,player2);
			}
		}
		gamesPlayed++;


		InitBoard(boardAr);
		token = 'X';

		system("cls");

		DisplayBoard(boardAr);
		whoWon = ' ';
		turns = 0;

		// while the game still is on going
		while(whoWon != 'O' && turns != 9 && whoWon != 'X')
		{

			GetAndCheckInp(boardAr,token,player1,player2);
			token = SwitchToken(token);


			system("cls"); // clears the screan
			DisplayBoard(boardAr);


			if(turns >= 4)
			{             // checks the players if they won the game
				whoWon = CheckWin(boardAr);
			}

			turns++;
			cout << endl;

		}


     // out puts the winner
		OutputWinner(whoWon, player1, player2);
		cout << endl;
		if(whoWon == ' ')
		{
		cout << "the game is tied /n";
		}
		cout << "do you wish to play the game agian? (Y/N).";
		cin.get(answer);
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		answer = toupper(answer);

	}




	return 0;
}
