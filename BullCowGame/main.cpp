#include <iostream>
#include <string>
#include "FBullCowGame.h"



void PrintIntro();
void PlayGame();
std::string GetGuess();
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
	std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
	std::cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
	return;
}

void PlayGame()
{
	FBullCowGame BCGame; // Instantiate a new game

	// Loop for the number of turns, asking for guesses.
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++)
	{
		std::string Guess = GetGuess();
		// Repeat the guess back to them
		std::cout << "Your guess was: " << Guess << "." << std::endl;
		std::cout << std::endl;
	}
}

std::string GetGuess()
{
	// get a guess from the player
	std::string Guess = "";

	std::cout << "Please make a guess: ";
	std::getline(std::cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again (y/n)? ";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
	
}


