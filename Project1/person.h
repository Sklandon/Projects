#ifndef PERSON_H
#define PERSON_H
//-----------------------------------------------------------
// Purpose: Header file for the Person class.
//          This class is designed to store five pieces of 
//          information describing a famous person.  
// Author:  Landon Grazer
//-----------------------------------------------------------
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	// Constructor methods
	Person();
	Person(const Person& person);
	~Person();

	// Get and Set methods
	string getFirstName();
	string getLastName();
	int getBirthYear();
	int getDeathYear();
	string getContribution();

	void setFirstName(string fName);
	void setLastName(string lName);
	void setBirthYear(int bYear);
	void setDeathYear(int dYear);
	void setContribution(string cont);

	// Other methods
	void print();
	bool read(string fileName);

private:
	// Object attributes
	string FirstName, LastName, Contribution;
	int BirthYear, DeathYear;
};
#endif