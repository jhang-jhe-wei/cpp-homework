// Name: Wen-Kai, Wang. 
// Mail: B10415006@mail.ntust.edu.tw
// Date: 2017.FEB.28 
// Problem statement: Text-based histogram

#include <iostream>
#include <fstream>
#include <string>

const std::string FILE_NAME = "grade.txt";
const std::string OUTPUT_FILE_NAME = "grades.Output";
const int GRADE_MAX = 5;

//#define RAND
#ifdef RAND
#include <ctime>

void QRand()
{
	std::fstream out;
	out.open(FILE_NAME, std::ios::out);
	if (!out)
	{
		std::cout << "Output File is Filed!" << std::endl;
		system("PAUSE");
	}
	srand(time(NULL));
	int times = rand() % 100;
	std::cout << times << std::endl;
	for (int i = 0; i < times; ++i)
	{
		out << rand() % 6  << " ";
	}
	out.close();
	return;
}
#endif

int main(void)
{
#ifdef RAND
	QRand();
	return 0;
#endif
	std::fstream in;
	std::fstream out;
	
	in.open(FILE_NAME, std::ios::in);
	if (!in)
	{
		std::cout << "Input File is Filed!" << std::endl;
		return 1;
	}

	out.open(OUTPUT_FILE_NAME, std::ios::out);
	if (!out)
	{
		std::cout << "Output File is Filed!" << std::endl;
		return 1;
	}

	int gradeCounter[GRADE_MAX + 1] = { 0 };
	for (int i = 0; i < GRADE_MAX; ++i)
		gradeCounter[i] = 0;
	int tempInput = 0;
	while (in >> tempInput)
	{
		if (tempInput <= GRADE_MAX && tempInput >= 0)
			++gradeCounter[tempInput];
		else
			std::cout << "Has Wrong Grade!" << std::endl;
	}

	for (int i = 0; i <= GRADE_MAX; ++i)
	{
		out << gradeCounter[i] << " grade(s) of " << i << std::endl;
	}

	in.close();
	out.close();
	return 0;
}
