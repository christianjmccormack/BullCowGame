/*This is the console executable that makes use of the BullCow class.
This acts as the view in a MVC pattern and is responsible for all
user interaction. For game logic, see the FBullCowGame class*/


#include <iostream>
#include <string>
#include "FBullCowGame.h"

using FText = std::string;
using int32 = int;

void PrintIntro();
void PlayGame();
FText GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame; // Instantiate a new game instance


// The entry point for our applications
int main()
{
	std::cout << BCGame.GetCurrentTry();
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
	constexpr int32 WORD_LENGTH = 9;
	std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
	std::cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
	return;
}

void PlayGame()
{

	BCGame.Reset();

	int32 MaxTries = BCGame.GetMaxTries();

	// Loop for the number of turns, asking for guesses.
	// TODO Change from FOR to WHILE loop once we are validating tries
	for (int32 count = 1; count <= MaxTries; count++)
	{
		FText Guess = GetGuess(); // TODO Make loop checking valid
		
		// Submit valid guess to the game
		// Print number of bulls and cows
		std::cout << "Your guess was: " << Guess << "." << std::endl;
		std::cout << std::endl;
	}

	// TODO Summarize Game
}

FText GetGuess()
{
	// get a guess from the player
	int32 CurrentTry = BCGame.GetCurrentTry();
	std::cout << "Try " << CurrentTry << ". Enter your guess: ";
	FText Guess = "";
	std::getline(std::cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again (y/n)? ";
	FText Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
	
}


