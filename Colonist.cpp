#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <queue>
#include <fstream>
#include <iterator>
#include <string>
#include "Colonist.h"

using namespace std;



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

Colonist::Colonist()
{
	static int amountOfNames = (init(), Names.size());
	Name = Names[rand() % amountOfNames];
	ID = _counter++;
	Level = (rand() % 3 )+1;
	Occupation = Pool[rand() % 3];	
}

string Colonist::description()
{
	return string("  ") + " [" + to_string(ID) + "] " + Name + " : "+ " Lvl(" + to_string(Level)+ ") " + Occupation; 
}

int Colonist::Work()
{
	Hunger -= (rand() % 4)+1;
	Energy -= 5;
	return Level + 2;
}

int Colonist::Eat()
{
	int eaten;
	eaten = (100 - Hunger/10);
	Hunger = 100;
	return eaten;
}

int Colonist::Drink()
{
	int drunk;
	drunk = (rand() % 4) + 1;
	return drunk;
}

void Colonist::Sleep()
{
	Energy = 100;
}
