#pragma once
#include <string>
//notice me!
class FBullCowGame {
public:
	FBullCowGame(); //Constructor

	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;


	void Reset(); // TODO Make a more rich return value.
	bool CheckGuessValidity(std::string); // TODO Make a more rich return value.
	// Provide a methid for counting bulls and cows and increasing try #

//Please try and ignore this. Focus on the interface.
private:
	int MyCurrentTry; // See constructor for initialisation
	int MyMaxTries;
};