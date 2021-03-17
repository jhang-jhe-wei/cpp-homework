#include<iostream>

using namespace std;
class HotDogStand
{
private:
	char *standId;
	int hotDogSellAmount;
	static int totalSellAmount;
public:
	
	HotDogStand(const char *id)
	{
		standId = (char*)calloc(strlen(id), sizeof(char));
		strcpy(standId, id);
		hotDogSellAmount = 0;		
	}
	HotDogStand(const char *id,int amount)
	{
		standId = (char*)calloc(strlen(id), sizeof(char));
		strcpy(standId, id);
		hotDogSellAmount = amount;		
		totalSellAmount += amount;
	}
	void justSold()
	{
		totalSellAmount++;
		hotDogSellAmount += 1;		
	}
	void print()
	{
		printf("%s %d\n", standId, hotDogSellAmount);
	}
	int thisStandSoldAmount()
	{
		return hotDogSellAmount;
	}	
	static int allStandSoldAmount()
	{
		return totalSellAmount;
	}
};
int HotDogStand::totalSellAmount = 0;
static int totalSellAmount = 0;
int main()
{
	HotDogStand stand1("Stand1", 0);
	HotDogStand stand2("Stand2", 100);
	HotDogStand stand3("Stand3");
	stand1.justSold();
	stand2.justSold();
	stand3.justSold();
	stand1.print();
	stand2.print();
	stand3.print();
	cout << "Total Sold : " << HotDogStand::allStandSoldAmount() << endl;
	system("pause");
	return 0;
}
