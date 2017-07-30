//Recursion (Fibonacci)

#include <iostream>

using namespace std;

int fibonacci(int pos)
{   //giving parameters for function to end
	if ((pos == 1) || (pos == 2))
		return 1;

	return fibonacci(pos - 1) + fibonacci(pos - 2);
}

int main()
{
	int input;

	cout << "Enter position to find: ";
	cin >> input;

	cout << "The Fibonacci number is: " << fibonacci(input) << endl;


	system("pause");
}