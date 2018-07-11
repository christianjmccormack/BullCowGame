#pragma once
#include <string>

using FString = std::string;
using int32 = int;

class FBullCowGame {
public:

	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	bool IsGameWon() const;


	void Reset(); //TODO Make a more rich return value.
	bool CheckGuessValidity(FString); //TODO Make a more rich return value.


//Please try and ignore this. Focus on the interface.
private:
	int32 MyCurrentTry = 1;
	int32 MyMaxTries = 5;
};