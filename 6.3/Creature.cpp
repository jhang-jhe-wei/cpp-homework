//Author:wells
//Date:2019/4/10
//Last Updata:2019/4/10
//Problem statement:Creature a monster
#include "Creature.h"
#include "Diary.h"
#include <string>
using namespace std;
Creature::Creature(string name)
{
	date = Diary::day;
	this->name = name;	
	history += name + "'s log\nDay " + date + '\n';
}

Creature::Creature(string a_name, Creature b_name)
{
	full_body = b_name.full_body;
	date = Diary::day;
	this->name = a_name;
	history += name + "'s log\nDay " + date + '\n';
}

Creature& Creature::operator[](string body)
{
	for (int i = 0; i < full_body.size(); i++)
	{
		if (full_body.at(i).body == body)
		{
			current = i;
			if (date != Diary::day)
			{
				date = Diary::day;
				history += "Day " + date + '\n';
			}
			return *this;
		}		
	}	
	Body temp = { body,0 };
	full_body.push_back(temp);
	return this->operator[](body);
}

void Creature::operator+=(int a)
{
	int old;
	old = full_body.at(current).number;
	full_body.at(current).number += a;
	if (full_body.at(current).number < 0) 
	{
		full_body.at(current).number = 0;
	}
	compare(full_body.at(current).number, old);
}

void Creature::operator-=(int a)
{
	int old;
	old = full_body.at(current).number;
	full_body.at(current).number -= a;
	if (full_body.at(current).number < 0)
	{
		full_body.at(current).number = 0;
	}
	compare(full_body.at(current).number, old);
}

void Creature::operator=(int a)
{
	int old;
	old = full_body.at(current).number;
	full_body.at(current).number = a;
	if (full_body.at(current).number < 0)
	{
		full_body.at(current).number = 0;
	}
	compare(full_body.at(current).number, old);
}

void Creature::compare(int a, int b)
{
	if (a > b) 
	{
		if (b == 0) 
		{
			history += name + "'s " + full_body.at(current).body + " appeared" + " (" + to_string(b) + " -> " + to_string(a) + ")." + '\n';
		}
		else 
		{
			history += name + "'s " + full_body.at(current).body + " increased" + " (" + to_string(b) + " -> " + to_string(a) + ")." + '\n';
		}
	}
	else if (a < b) 
	{
		if (a == 0)
		{
			history += name + "'s " + full_body.at(current).body + " disappeared" + " (" + to_string(b) + " -> " + to_string(a) + ")." + '\n';
		}
		else
		{
			history += name + "'s " + full_body.at(current).body + " decreased" + " (" + to_string(b) + " -> " + to_string(a) + ")." + '\n';
		}
	}
	else if (a = b) 
	{

	}	
}

void Creature::PrintStatus()
{
	cout << name + "'s status:" << endl;
	for (int i = 0; i < full_body.size(); i++)
	{	
		if (full_body.at(i).number > 0) 
		{
			cout << full_body.at(i).body.c_str() << " * " << full_body.at(i).number << endl;
		}		
	}
}

void Creature::PrintLog()
{
	if (date != Diary::day)
	{
		date = Diary::day;
		history += "Day " + date + '\n';
	}
	cout << history.c_str();
}

