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

