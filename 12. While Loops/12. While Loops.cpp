// 12. While Loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int Odin = 10;
    int AttackVikings = 10;
    int Survivor = 10;
    

    cout << "Are there really 10 Vikings in the boat?""\n";

    if (Odin == 10)
    {
            cout << "I can confirm  there are 10 Vikings.""\n";
    }

    cout << "Odin tell us there are 10 Vikings!""\n";

    if (AttackVikings == 10)
     {
            cout << "Let's attack them for vahallah!""\n";

     }

    if (Survivor == 10)
    {
            cout << "Lets kill them!" << endl;
    }
	int enemies = 10;
	
	while (enemies >= 0)
	{
		cout << "Enemy " << enemies << " dead." << endl;
	
		enemies--;
	}
	cout << "Defeated we won!" << endl;
    return 0;
}


