#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(string n)
{
	this->name = n;
	this->TotalGrade = 0;
}
string Student::getLetterGrade(double L)
{

	if (L >= 100)
	{
		return "A+";
	}
	else if (L >= 93)
	{
		return "A";
	}
	else if (L >= 90)
	{
		return "A-";
	}
	else if (L >= 87)
	{
		return "B+";
	}
	else if (L >= 83)
	{
		return "B";
	}
	else if (L >= 80)
	{
		return "B-";
	}
	else if (L >= 77)
	{
		return "C+";
	}
	else if (L >= 73)
	{
		return "C";
	}
	else if (L >= 70)
	{
		return "C-";
	}
	else if (L >= 67)
	{
		return "D+";
	}
	else if (L >= 63)
	{
		return "D";
	}
	else if (L >= 60)
	{
		return "D-";
	}
	else if (L <= 59)
	{
		return "F";
	}
}
	void Student::AddGrade(double a)
	{
		this->TotalGrade += a;
	}
	double Student::CalcAverage(int d)
	{
		return TotalGrade / d;
	}
