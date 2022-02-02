#include "person.h"

Person::Person()
{
	FirstName = "None";
	LastName = "None";
	BirthYear = 0;
	DeathYear = 0;
	Contribution = "None";
}

Person::Person(const Person& person)
{

}

Person::~Person()
{
	
}

string Person::getFirstName()
{
	return FirstName;
}

string Person::getLastName()
{
	return LastName;
}

int Person::getBirthYear()
{
	return BirthYear;
}

int Person::getDeathYear()
{
	return DeathYear;
}

string Person::getContribution()
{
	return Contribution;
}

void Person::setFirstName(string fName)
{
	FirstName = fName;
}

void Person::setLastName(string lName)
{
	LastName = lName;
}

void Person::setBirthYear(int bYear)
{
	BirthYear = bYear;
}

void Person::setDeathYear(int dYear)
{
	DeathYear = dYear;
}

void Person::setContribution(string cont)
{
	Contribution = cont;
}

void Person::print()
{
	cout << "First Name: " << FirstName << endl
		 << "Last Name: " << LastName << endl
		 << "Birth Year:" << BirthYear << endl
		 << "Death Year: " << DeathYear << endl
		 << "Contribution: " << Contribution << endl << endl;
}

bool Person::read(string fileName)
{
	ifstream din;
	din.open(fileName);
	if (din.fail())
	{
		cout << "Could not open file.";
		return false;
	}

	string temp = "";

	while (!din.eof())
	{

	}
	return true;
}