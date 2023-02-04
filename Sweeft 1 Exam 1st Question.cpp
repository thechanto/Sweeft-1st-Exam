#include <iostream>

using namespace std;


int minSplit(int amount)
{
	int minSplit = 0;
	int x;

	minSplit += amount / 50;
	x = amount / 50;
	amount -= x * 50;

	minSplit += amount / 20;
	x = amount / 20;
	amount -= x * 20;

	minSplit += amount / 10;
	x = amount / 10;
	amount -= x * 10;

	minSplit += amount / 5;
	x = amount / 5;
	amount -= x * 5;


	minSplit += amount;


	return minSplit;
}

int main()
{
	int amount;
	cout << "Enter amount: ";
	cin >> amount;
	cout << "Min amount is : " << minSplit(amount) << endl;
}
