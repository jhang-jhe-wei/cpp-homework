#pragma once
#include <iostream>
#include <time.h>

using namespace std;

class Dice
{
public:
	Dice();
	Dice(int numSides);
	virtual int rollDice() const;
protected:
	int numSides;
};

Dice::Dice()
{
	numSides = 6;
	srand(time(NULL));  // Seeds random number generator
}

Dice::Dice(int numSides)
{
	this->numSides = numSides;
	srand(time(NULL)); // Seeds random number generator
}
int Dice::rollDice() const
{
	return (rand() % numSides) + 1;
}

// Take two dice objects, roll them, and return the sum
int rollTwoDice(const Dice& die1, const Dice& die2)
{
	return die1.rollDice() + die2.rollDice();
}


class LoadedDice : public Dice
{
public:
	LoadedDice();
	LoadedDice(int numSides);
	virtual int rollDice() const;
};

LoadedDice::LoadedDice() : Dice()
{
}

LoadedDice::LoadedDice(int numSides) : Dice(numSides)
{
}

int LoadedDice::rollDice() const
{
	if (rand() % 2 == 0)
	{
		return Dice::rollDice();
	}
	else
	{
		return this->numSides;
	}
}