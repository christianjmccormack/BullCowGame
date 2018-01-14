#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();



// The entry point for our application
int main()
{
	PrintIntro();
	
	GetGuessAndPrintBack();
	GetGuessAndPrintBack();
	
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

// get a guess from the player and repeat the guess back to them
string GetGuessAndPrintBack()
{

	string Guess = "";
	cout << "Please make a guess: ";
	getline(cin, Guess);

	cout << "Your guess was: " << Guess << "." << endl;

	return Guess;
}