#pragma once

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <queue>
#include "Room.h"
#include "Colonist.h"
#include <fstream>
#include <iterator>
#include <string>


using namespace std;

static string Pool[5] = { "Maintenance worker", "Medic" , "Hydroponics caretaker" , "Envivorment control operator" , "Cook" };

class Colonist
{
private:
	static void init();

	static vector <string> Names;
	static int _counter;

	string Name;
	string Occupation;
	
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
