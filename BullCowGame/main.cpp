#include <iostream>
#include <string>
#include "FBullCowGame.h"

void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();


// Entry point for our application.
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

	return 0; //exit the application
}

void PlayGame()
{
	FBullCowGame BCGame; // instantiate a new game

	// loop for the number of turns, asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 0; count < NUMBER_OF_TURNS; count++)
	{
		std::string Guess = GetGuess();
		std::cout << "Your guess was: " << Guess << std::endl;
	}
}

std::string GetGuess() 
{
	// get a guess from the player
	std::string Guess = "";
	std::cout << "Please enter your guess: ";
	std::getline(std::cin, Guess);
	return Guess;

}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again? (y/n) ";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] =='Y');

}

void PrintIntro() 
{
	// introduce the game
	constexpr int WORD_LENGTH = 6;
	std::cout << "Welcome to Bulls and Cows, a fun word game" << std::endl;
	std::cout << "Can you guess the " << WORD_LENGTH;
	std::cout << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;
	return;
}



