//Recursion 6.36 Exponentiation

#include <iostream>

using namespace std;

// power = base * base(power - 1)
//if power = 1, return base

int expo(int base, int power)
{   //giving parameters for function to end
	if (power == 1)
		return base;

	return base * expo(base, power - 1);
}

int main()
{
	int base;
	int power;

	cout << "Enter the base: ";
	cin >> base;

	cout << "\n\nEnter the power: ";
	cin >> power;

	cout << base << " raised to the " << power << " power is " << expo(base, power) << endl;

	system("pause");
}