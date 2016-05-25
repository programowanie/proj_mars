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
	cout << "# Generated Colonists : " << endl;
	for (int i = 0; i < n; ++i)
	{
	   cout << colonists[i].description() << endl;
    }

	 //adapters(colonists, n);


	

}
