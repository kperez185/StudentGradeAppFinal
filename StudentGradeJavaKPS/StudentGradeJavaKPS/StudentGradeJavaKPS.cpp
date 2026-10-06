#include <iostream>
#include <string>
#include "Student.h"
using namespace std;


int main()
{
	string name;
	double grade;
	double Average;
	string letterGrade;
	int i = 1;

	cout << "Student Grade App" << endl;
	cout << "===================" << endl;
	cout << "Enter student Name" << endl;
	getline(cin, name);
	//cin>>name; 

	Student student (name);

	//Implemantation what did i name it or tied it to
	cout << "===================" << endl;
	

	while (i <= 10)
	{
		cout << "Enter Grades" << i << "==>";
		cin >> grade;
		i++;
		student.AddGrade(grade);

	}

	Average = student.CalcAverage(10);
	letterGrade = student.getLetterGrade(Average);

	cout << "\n========================\n";
	cout << "The student Name is" << name << endl;
	cout << "The Student average Grade is ===>" << Average << endl;
	cout << "The student letter grade is" << letterGrade << endl;
}