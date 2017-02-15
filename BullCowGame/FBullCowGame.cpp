#include "FBullCowGame.h"



void FBullCowGame::Reset()
{
	return;
}

int FBullCowGame::GetMaxTries()
{
	return MyMaxTries;
}

int FBullCowGame::LengthOfIso()
{
	return 0;
}

int FBullCowGame::GetCurrentTry()
{
	return MyCurrentTry;
}

bool FBullCowGame::IsGameWon()
{
	return false;
}

bool FBullCowGame::CheckGuessValid(std::string)
{
	return false;
}
