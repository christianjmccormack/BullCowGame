#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
bool AskToPlayAgain();


// The entry point for our applications
int main()
{
	bool bPlayAgain = false;
	do 
	{
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} 
	while (bPlayAgain);
	
	return 0;
}



// introduce the game
void PrintIntro()
{
	constexpr int WORD_LENGTH = 9;
	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
	return;
}

void PlayGame()
{
	// Loop for the number of turns, asking for guesses.
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++)
	{
		string Guess = GetGuess();
		// Repeat the guess back to them
		cout << "Your guess was: " << Guess << "." << endl;
		cout << endl;
	}
}

string GetGuess()
{
	// get a guess from the player
	string Guess = "";
	cout << "Please make a guess: ";
	getline(cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	cout << "Do you want to play again (y/n)? ";
	string Response = "";
	getline(cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
	
}


