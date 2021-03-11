int all_money = 0;
class BankAccount {
public:
	BankAccount(int x = 0);
	static int getAllMoneyInBank();
	int getBalance();
	void withdraw(int w);
	void save(int s);

private:
	int money;	
};
BankAccount::BankAccount(int x)
{
	money = x;
	all_money += x;
}

int BankAccount::getAllMoneyInBank()
{
	return all_money;
}

int BankAccount::getBalance()
{
	return money;
}

void BankAccount::withdraw(int w)
{
	money -= w;
	all_money -= w;
}

void BankAccount::save(int s)
{
	money += s;
	all_money += s;
}