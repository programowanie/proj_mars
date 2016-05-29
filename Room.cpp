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

vector <string> Room::namesofrooms;

void Room::init()
{
	ifstream file1("Rooms.txt");
	copy(istream_iterator<string>(file1),
		istream_iterator<string>(),
		back_inserter(namesofrooms));
	file1.close();
}


string Room::description1()
{
	return string("  ") + " [" + to_string(ID) + "] " + NameOfRoom; 
}
