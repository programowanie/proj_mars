#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <queue>
#include "Colonist.h"
#include <fstream>
#include <iterator>
#include <string>
#include <unistd.h>


using namespace std;




int main(int argc, char* argv[])
{
	int n = atoi(argv[1]);
	int d = 1;
	int Air = 100;
	int Food = 100;
	int Water = 100;
	int Base_HP = 100;

	Colonist *colonists = new Colonist[n];

	colonists[0].occupation("Maintenance worker");
	colonists[1].occupation("Hydroponics caretaker");
	colonists[2].occupation("Envivorment control operator");


	cout << "# Generated Colonists : " << endl;
	for (int i = 0; i < n; ++i)
	{
	   cout << colonists[i].description() << endl;
    }

    while(1)
    {
     cout << " ############################ " << "Day : " << d << " ############################### " << endl;
     cout << endl << " Air : " << Air << " Water: " << Water << " Food: " << Food << " HP : "<< Base_HP << endl;

    
     	for(int i = 0 ; i < n ; i++)
     	{
     		if(colonists[i].hunger() < 40) Food -= colonists[i].Eat();
     			else if(colonists[i].energy() < 50 ) colonists[i].Sleep();
     				else if(colonists[i].occupation() == "Hydroponics caretaker" ) Food += colonists[i].Work();
     					else if(colonists[i].occupation() == "Maintenance worker" && Base_HP < 90 ) Base_HP += colonists[i].Work();
     						else if(colonists[i].occupation() == "Envivorment control operator" )
     						{ 
     							int temp =colonists[i].Work();
     							Air += temp;
     							Water += temp;
     						}

     	}



     Air -= 16;
     Water -= 15;
     Base_HP -= 10;
     cout << endl << " ###################################################################################### " << endl;
     cout << endl << " Air : " << Air << " Water: " << Water << " Food: " << Food << " HP : "<< Base_HP << endl;
     if( Air <= 0 || Water <= 0 || Food <= 0 || Base_HP <= 0)
     { 
     	cout << "Colonists didn't make it..."; 
     if(Air <= 0) cout << " We've ran out of Air ";
    	 else if(Water <= 0) cout << "We've ran out of Water "; 
    		else if(Food <= 0) cout << "We've ran out of Food " ;
    			else if(Base_HP <= 0) cout << "Our base has fallen apart due to Maintenance workers' laziness... Great jobs a-holes" << endl;
    			exit(0);
     }
     sleep(1); 
     d += 1;
    }

	

	delete [] colonists;	

}
