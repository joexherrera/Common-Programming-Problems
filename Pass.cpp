#include <iostream>

using namespace std;

//functions
int byVal(int x)
{
	x = x + 7;
	cout << "Inside byVal: " << x << endl;
	return x;
}

int byRef(int & y)
{
	y = y + 7;
	cout << "Inside byRef: " << y << endl;
	return y;
}

int main()
{
	int val = 42;

	cout << "Before functions: " << val << endl;
	byVal(val);
	cout << "(val = 49) After byVal: " << val << endl;
	byRef(val);
	cout << "val = 56) After byRef: " << val << endl;
	byRef(val);
	cout << "val = 56) After second byRef: " << val << endl;

	system("Pause");
}