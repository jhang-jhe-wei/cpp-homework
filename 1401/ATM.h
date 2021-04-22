#pragma once
#include <iostream>
using namespace std;

class InsufficientFunds
{
public:
	InsufficientFunds() {}
};
class NegativeDeposit
{
public:
	NegativeDeposit() {}
};
class Account
{
private:
	double balance;
public:
	Account()
	{
		balance = 0;
	}
	Account(double initialDeposit)
	{
		balance = initialDeposit;
	}
	double getBalance()
	{
		return balance;
	}
	//returns new balance or -1 if error
	double deposit(double amount)
	{
		if (amount > 0)
			balance += amount;
		else
			throw NegativeDeposit();   //例外處理
		return balance;
	}
	//return new balance or -1 if invalid amount
	double withdraw(double amount)
	{
		if ((amount > balance) || (amount < 0))
			throw InsufficientFunds();  //例外處理
		else
			balance -= amount;
		return balance;
	}
};
