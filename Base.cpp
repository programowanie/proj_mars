#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <queue>
#include "Base.h"
#include <fstream>
#include <iterator>
#include <string>

using namespace std;

vector <string> Room::namesofrooms;

vector <string> Colonist::Names;
int Colonist::_counter = 1;

void Colonist::init()
{
	srand((unsigned int)time(NULL));
	ifstream file("Names.txt");
	copy(istream_iterator<string>(file),
		istream_iterator<string>(),
		back_inserter(Names));
	file.close();
}

void Room::init()
{
	ifstream file1("Rooms.txt");
	copy(istream_iterator<string>(file1),
		istream_iterator<string>(),
		back_inserter(namesofrooms));
	file1.close();
}

Colonist * Colonist::createColonists(int n)
{
	Colonist *colonists = new Colonist[5+n];
	for (int i = 0; i < 5; ++i)
		colonists[i].Occupation = Pool[i];

	return colonists;
}


Colonist::Colonist()
{
	static int amountOfNames = (init(), Names.size());
	Name = Names[rand() % amountOfNames];
	ID = _counter++;
	Level = rand() % 4;
	if (amountOfNames > 5) Occupation = Pool[rand() % 5];	
}

string Colonist::description()
{
	return string("  ") + " [" + to_string(ID) + "] " + Name + " : "+ " Lvl(" + to_string(Level)+ ") " + Occupation; 
}
