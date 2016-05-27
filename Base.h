#pragma once

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

class Colonist
{
private:
	static void init();

	static vector <string> Names;
	static int _counter;

	string Name;
	string Occupation;
	static string Pool[5]	= {"Maintenance worker", "Medic" , "Hydroponics caretaker" , "Envivorment control operator" , "Cook"};
	int Level;
	int ID;


public:
	Colonist();

	static Colonist * createColonists(int n);

	static int counter() { return _counter; }
	string name() { return Name; }
	string occupation() { return Occupation; }
	int lvl() { return Level; }
	int id() { return ID; }

	string description();
};

class Room
{
private:
	static void init();

	static vector <string> namesofrooms;
	static int Counter;

	string NameOfRoom;
	int ID;

public:

	Room();
	static int counter() { return Counter; }
	string Name() { return NameOfRoom; }
	int id() { return ID; }

	string description1();

};

