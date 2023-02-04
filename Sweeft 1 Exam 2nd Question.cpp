//2nd Question

#include <iostream>  

using namespace std;

int sumOfDigits(int x)
{
	int sum = 0;
	while (x)
	{
		sum += x % 10;
		x /= 10;
	}
	return sum;
}

int sumOfDigits(int x, int y) 
{
	int sum = 0;

	for(int i = x; i <= y; i++)
	{
		sum += sumOfDigits(i);
	}

	return sum;
}

int main()
{
	int x, y;

	cout << "Enter first number: ";
	cin >> x;
	cout << "Enter second number: ";
	cin >> y;

	cout << "Sum of digits is: " << sumOfDigits(x, y) << endl;

	return 0;
}

