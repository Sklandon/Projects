#include "table.h"
using namespace std;

Table::Table()
{
	count = 0;
}

Table::Table(const Table& table)
{

}

Table::~Table()
{

}

bool Table::read(string fileName)
{
	ifstream din;
	din.open(fileName);
	if (din.fail())
	{
		cout << "Could not open file.";
		return false;
	}

	string tempStr = "";
	int tempNum = 0;
	int i = 0;

	while (!din.eof() && i <= TotalPeople)
	{
		din >> tempStr;
		people[i].setFirstName(tempStr);

		din >> tempStr;
		people[i].setLastName(tempStr);

		din >> tempNum;
		people[i].setBirthYear(tempNum);

		din >> tempNum;
		people[i].setDeathYear(tempNum);

		getline(din, tempStr);
		people[i].setContribution(tempStr);

		i++;
		count++;
	}

	din.close();
	return true;
}

void Table::print()
{
	for (int i = 0; i < count; i++)
	{
		cout << people[i].getFirstName() << " " << people[i].getLastName() << setw(10);
		cout << people[i].getBirthYear() << " " << people[i].getDeathYear() << setw(3);
		cout << people[i].getContribution() << endl;
		
	}
}

void Table::searchFirstName()
{

}

void Table::searchLastName()
{

}

void Table::searchYear()
{

}