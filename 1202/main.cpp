//Author:wells
//Date:2019/5/21
//Last UpData:2019/5/21
//Problem Statement:Guess
#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
class Player
{
public:
	virtual int getGuess()  //店览ㄧΑ
	{
		return 0;
	}
	Player()   //﹍砞0~100
	{
		high = 100;
		low = 0;
	}
	void setHigh(int High)  //砞竚ヘ玡程
	{
		high = High;
	}
	void setLow(int Low)  //砞竚ヘ玡程
	{
		low = Low;
	}
	int getHigh()    //眔ヘ玡程
	{
		return high;
	}
	int getLow()    //眔ヘ玡程
	{
		return low;
	}
	void initial()    //﹍て
	{
		high = 100;
		low = 0;
	}
protected:
	int high;
	int low;

};
class HumanPlayer : public Player
{
public:
	int getGuess()   //块瞦代计
	{
		int gs;
		cin >> gs;
		return gs;
	}
};
class ComputerPlayer : public Player
{
	int getGuess()    //繦诀瞦代计
	{
		int gs = rand() % (high - low - 1) + low + 1;
		cout << "computer guess " << gs << endl;
		return gs;
	}
};
void checkRange(int guess, int answer, Player & p1, Player & p2)   //絋﹚ヘ玡计絛瞅
{
	if (guess > answer)
	{
		p1.setHigh(guess);
		p2.setHigh(guess);
		cout << p1.getLow() << "~" << p1.getHigh() << endl;
	}
	else if (guess < answer)
	{
		p1.setLow(guess);
		p2.setLow(guess);
		cout << p1.getLow() << "~" << p1.getHigh() << endl;
	}
}

bool checkForWin(int guess, int answer)
{
	static int flag = 0;
	if (answer == guess)
	{
		cout << "You're right! You win!" << endl;
		return true;
	}
	else if (answer < guess)
		cout << "Your guess is too high." << endl;
	else
		cout << "Your guess is too low." << endl;
	return false;
}
void play(Player & player1, Player & player2)
{
	int answer = 0, guess = 0;
	answer = rand() % 100;
	bool win = false;
	player1.initial();
	player2.initial();
	while (!win)
	{
		cout << "Player 1's turn to guess." << endl;
		guess = player1.getGuess();
		win = checkForWin(guess, answer);
		if (win) return;
		checkRange(guess, answer, player1, player2);
		cout << "Player 2's turn to guess." << endl;
		guess = player2.getGuess();
		win = checkForWin(guess, answer);
		if (win) return;
		checkRange(guess, answer, player1, player2);
	}
}

int main()
{
	HumanPlayer playerH1, playerH2;
	ComputerPlayer playerC1, playerC2;
	play(playerH1, playerH2);
	play(playerH1, playerC1);
	play(playerC1, playerC2);
	return 0;
}
