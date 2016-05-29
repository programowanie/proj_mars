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

//void adapters(Room *, int);

//void adapters(Room * colonists, int n)
//{
//	queue <Room *> Corridors;
//
//	for (int i = 0; i<n; i++)
//	{
//		Corridors.push(colonists + i);
//	}
//}

int main(int argc, char* argv[])
{
	int n = 10;
	Colonist *colonists = new Colonist[n];
	Room *rooms = new Room[5];
	cout << "# Generated Colonists : " << endl;
	for (int i = 0; i < n; ++i)
	{
	   cout << colonists[i].description() << endl;
    }

	cout << "# Generated Rooms : " << endl;
	for (int i = 0; i < 5; ++i)
	{
		cout << rooms[i].description1() << endl;
	}
	 //adapters(colonists, n);


	delete [] colonists;	

}
