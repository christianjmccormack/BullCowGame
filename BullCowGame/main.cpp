#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();



// Entry point for our application.
int main()
{

	PrintIntro();
	PlayGame();
	AskToPlayAgain();
	return 0; //exit the application
}

void PlayGame()
{
	// loop for the number of turns, asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 0; count < NUMBER_OF_TURNS; count++)
	{
		string Guess = GetGuess();
		cout << "Your guess was: " << Guess << endl;
	}
}

string GetGuess() 
{
	// get a guess from the player
	string Guess = "";
	cout << "Please enter your guess: ";
	getline(cin, Guess);
	return Guess;

}

void PrintIntro() 
{
	// introduce the game
	constexpr int WORD_LENGTH = 6;
	cout << "Welcome to Bulls and Cows, a fun word game" << endl;
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}