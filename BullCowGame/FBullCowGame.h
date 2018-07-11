#pragma once
#include <string>

using FString = std::string;
using int32 = int;

class FBullCowGame {
public:
	FBullCowGame(); //Constructor

	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	bool IsGameWon() const;


	void Reset(); // TODO Make a more rich return value.
	bool CheckGuessValidity(FString); // TODO Make a more rich return value.
	// Provide a methid for counting bulls and cows and increasing try #

//Please try and ignore this. Focus on the interface.
private:
	int32 MyCurrentTry; // See constructor for initialisation
	int32 MyMaxTries;
};