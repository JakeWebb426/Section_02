#pragma once
#include <string>



class FBullCowGame
{
public:
	FBullCowGame(); // constructor

	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset();
	bool CheckGuessValidity(std::string); // TODO make a more rich return value
	// provide a method for counting bulls and cows, and increasing try number


private:
	// see constructor for initialisation
	int MyCurrentTry;
	int MyMaxTries;
}