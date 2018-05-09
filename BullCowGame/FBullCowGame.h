#pragma once
#include <string>
//notice me!
class FBullCowGame {
public:

	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;


	void Reset(); //TODO Make a more rich return value.
	bool CheckGuessValidity(std::string); //TODO Make a more rich return value.


//Please try and ignore this. Focus on the interface.
private:
	int MyCurrentTry = 1;
	int MyMaxTries = 5;
};