#pragma once

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <queue>
#include "Colonist.h"
#include <fstream>
#include <iterator>
#include <string>


using namespace std;

static string Pool[] = { "Maintenance worker" , "Hydroponics caretaker" , "Envivorment control operator" };

class Colonist
{
private:
	static void init();

	static vector <string> Names;
	static int _counter;

	string Name;
	string Occupation;
	int Energy = 100;
	int Hunger = 100;
	
	int Level;
	int ID;


public:
	Colonist();

	static Colonist * createColonists(int n);

	static int counter() { return _counter; }
	string name() { return Name; }
	void occupation(string o) {Occupation = o; }
	string occupation() { return Occupation; } 
	int lvl() { return Level; }
	int id() { return ID; }
	int hunger() {return Hunger; }
	int energy() {return Energy; }

	string description();
	int Work();
	int Eat();
	void Sleep();
	int Drink();
};
