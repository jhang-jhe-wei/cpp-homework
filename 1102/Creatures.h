//Author:wells
//Date:2019/5/14
//Last UpData:2019/5/14
//Problem statement:Creatures
#pragma once
#include <iostream>
#include <string>
using namespace std;
class Creature
{
private:
	int type;
	int strength;
	int hitpoints;
public:
	Creature()        //生物構建函式
	{
		type = 0;
		strength = 10;
		hitpoints = 10;
	}

	Creature(int newType, int newStrength, int newHit)
	{
		type = newType;
		strength = newStrength;
		hitpoints = newHit;
	}

	int getType()  //取得type
	{
		return type;
	}

	int getStrength()  //取得strength
	{
		return strength;
	}

	int getHitpoints()  //取得hitpoints
	{
		return hitpoints;
	}

	void setType(int newType)  //設定type
	{
		type = newType;
	}

	void setStrength(int newStrength)  //設定strength
	{
		strength = newStrength;
	}

	void setHitpoints(int newHit)  //設定hitpoints
	{
		hitpoints = newHit;
	}
	string getSpecies()  //取得species字串
	{
		switch (type)
		{
		case 0: return "Human";
		case 1: return "Cyberdemon";
		case 2: return "Balrog";
		case 3: return "Elf";
		}
		return "Unknown";
	}
	int getDamage()  //一般生物的傷害函式
	{
		int damage;
		damage = (rand() % strength) + 1;
		cout << getSpecies() << " attacks for " <<
			damage << " points!" << endl;
		if (type == 3)
		{
			if ((rand() % 10) == 0)
			{
				cout << "Magical attack inflicts " << damage <<
					" additional damage points!" << endl;
				damage = damage * 2;
			}
		}
		return damage;
	}
};


class Human : public Creature  //Human
{
public:
	Human()
	{
		setType(0);
		setHitpoints(10);
		setStrength(10);
	}
	Human(int Strength, int Hitpoints)
	{
		setType(0);
		setHitpoints(Hitpoints);
		setStrength(Strength);
	}
};

class Elf : public Creature  //Elf
{
public:
	Elf()
	{
		setType(3);
		setHitpoints(10);
		setStrength(10);
	}
	Elf(int Strength, int Hitpoints)
	{
		setType(3);
		setHitpoints(Hitpoints);
		setStrength(Strength);
	}
};

class Demon : public Creature
{
public:
	int getDamage()  //惡魔類生物傷害函式
	{
		int damage;
		damage = (rand() % getStrength()) + 1;
		cout << getSpecies() << " attacks for " <<
			damage << " points!" << endl;
		if ((rand() % 100) < 5)
		{
			damage = damage + 50;
			cout << "Demonic attack inflicts 50 "
				<< " additional damage points!" << endl;
		}
		if (getType() == 3)
		{
			if ((rand() % 10) == 0)
			{
				cout << "Magical attack inflicts " << damage <<
					" additional damage points!" << endl;
				damage = damage * 2;
			}
		}
		if (getType() == 2)
		{
			int damage2 = (rand() % getStrength()) + 1;
			cout << "Balrog speed attack inflicts " << damage2 <<
				" additional damage points!" << endl;
			damage = damage + damage2;
		}
		return damage;
	}
};

class Cyberdemon : public Demon  //Cyberdemon
{
public:
	Cyberdemon()
	{
		setType(1);
		setHitpoints(10);
		setStrength(10);
	}
	Cyberdemon(int Strength, int Hitpoints)
	{
		setType(1);
		setHitpoints(Hitpoints);
		setStrength(Strength);
	}
};

class Balrog : public Demon  //Balrog
{
public:
	Balrog()
	{
		setType(2);
		setHitpoints(10);
		setStrength(10);
	}
	Balrog(int Strength, int Hitpoints)
	{
		setType(2);
		setHitpoints(Hitpoints);
		setStrength(Strength);
	}
};