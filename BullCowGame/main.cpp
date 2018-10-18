#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();

// Entry point for our application. Adding a comment to test Commit.
int main()
{
	PrintIntro();
	GetGuessAndPrintBack();	
	GetGuessAndPrintBack();

	return 0;
}

// get a guess from the player
string GetGuessAndPrintBack() {
	// get a guess from the player
	string Guess = "";
	cout << "Please enter your guess: ";
	getline(cin, Guess);
	
	// print the guess back to them
	cout << "Your guess was: " << Guess << endl;
	return Guess;
}

void PrintIntro() {
	// introduce the game
	constexpr int WORD_LENGTH = 6;
	cout << "Welcome to Bulls and Cows, a fun word game" << endl;
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}