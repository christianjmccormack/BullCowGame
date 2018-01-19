#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();



// The entry point for our applications
int main()
{
	PrintIntro();
	PlayGame();



	
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


