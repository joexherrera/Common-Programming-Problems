//Recursion 6.38 Towers of Hanoi

#include <iostream>

using namespace std;

void hanoi(int numDisk, int pfrom, int pto, int ptemp)
{
	if (numDisk == 1)
		cout << "Disk: " << numDisk << ", " << "from: " << pfrom << " -> " << pto << endl;
		
	else
	{
		hanoi(numDisk - 1, pfrom, ptemp, pto);
		cout << "Disk: " << numDisk << ", " <<"from: " << pfrom << " -> " << pto << endl;
		hanoi(numDisk - 1, ptemp, pto, pfrom);
	}
		
}

int main()
{
	hanoi(3, 1, 3, 2);


	system("pause");
}
/*
Disk: 1, from: 1 -> 3
Disk: 2, from: 1 -> 2
Disk: 1, from: 3 -> 2
Disk: 3, from: 1 -> 3
Disk: 1, from: 2 -> 1
Disk: 2, from: 2 -> 3
Disk: 1, from: 1 -> 3
Press any key to continue . . .
*/