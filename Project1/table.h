#ifndef TABLE_H
#define TABLE_H
//-----------------------------------------------------------
// Purpose: Header file for the Table class.
//          This class is designed to store an array of Person
//          objects that describe a group of famous people.
//          The search methods locate and print information
//          about a specified subset of the famous people.
// Author:  Landon Grazer
//-----------------------------------------------------------
#include "person.h"
#include <iostream>
#include <string>
using namespace std;

class Table
{
public:
	// Constructor methods
	Table();
	Table(const Table& table);
	~Table();

	// Input output methods
	void print();
	bool read();

	// Searching methods
	void searchFirstName();
	void searchLastName();
	void searchYear();

private:
	// Object attributes
	int count;
};
#endif