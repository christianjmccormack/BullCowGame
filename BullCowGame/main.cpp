#include <iostream>
#include <string>

using namespace std;

int main()
{

	// introduce the game
	constexpr int WORD_LENGTH = 9;
	cout << "Welcome to Bulls and Cows, a fun word game." << endl;
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?" << endl;
	//This is a new comment
	
	//get a guess from the player
	string Guess = "";
	cout << "Please make a guess: ";
	cin >> Guess;

	//repeat the guess back to them
	cout << "Your guess was: " << Guess << "." << endl;
	cout << "This is a test of a test of a test times 10s";

	//get a guess from the player
	cout << "Please make a guess: ";
	cin >> Guess;

	//repeat the guess back to them
	cout << "Your guess was: " << Guess << "." << endl;

	//This is a comment to prove Github is working

	return 0;

}