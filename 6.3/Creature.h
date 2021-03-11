//Author:wells
//Date:2019/4/10
//Last Updata:2019/4/10
//Problem statement:Creature a monster
#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;
struct Body
{
public:
	string body;
	int number = 0;
};
class Creature
{
public:
	Creature(string name);//constructor method
	Creature(string a_name, Creature b_name);//constructor method
	Creature& operator[](string body);//operator find body in full_body,if not, insert new body;
	void operator+=(int a);
	void operator-=(int a);
	void operator=(int a);
	void compare(int a, int b);
	void PrintStatus();
	void PrintLog();	
	vector<Body> full_body;	//store body;
	string history;//record
	int current;
private:
	string name;	
	string date;
};

