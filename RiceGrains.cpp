//Recursion Rice(Grains)

#include <iostream>
#include <cmath>
using namespace std;

int rice(int grains)
{
	if (grains == 1)
	return 2;

	else
		return pow(rice(grains - 1), 2);
		
}

int main()
{
	cout << rice(4) << endl;
	
	system("pause");
}

/*
256
Press any key to continue . . .
*/