#pragma once
#include <string>



class FBullCowGame
{
public:
	void Reset(); // TODO make a more rich return value
	int GetMaxTries();
	int LengthOfIso(); // Returns how many characters are in the word
	int GetCurrentTry();
	bool IsGameWon();
	bool CheckGuessValid(std::string); // TODO make a more rich return value


private:
	int MyCurrentTry = 1;
	int MyMaxTries = 5;
};