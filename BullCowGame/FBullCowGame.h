#pragma once


class FBullCowGame {
public:
	void Reset(); //TODO Make a more rich return value.
	int GetMaxTries();
	int GetCurrentTry();
	bool IsGameWon();
	bool CheckGuessValidity(string);


//Please try and ignore this. Focus on the interface.
private:
	int MyCurrentTry;
	int MyMaxTries;
};