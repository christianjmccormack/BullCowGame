#pragma once
#include <string>

class FBullCowGame
{
public:
	void Reset(); // TODO Make a more rich return value.
	int GetMaxTries();
	int GetCurrentTry();
	bool IsGameWon();
	bool CheckGuessValidity(std::string); // TODO Make a more rich return value.






// Please try and ignore this and focus on the interface above ^^
private:
	int MyCurrentTry;
	int MyMaxTries;
};