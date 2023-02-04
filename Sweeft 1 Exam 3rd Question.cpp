#include <iostream>
#include<string.h>

using namespace std;

bool isProperly(string sequence) 
{
	int x = 0;

	for (int i = 0; i < sequence.length(); i++) {
		if (sequence[i] == '(') {
			x++;
		}
		if (sequence[i] == ')') {
			x--;
		}
		if (x < 0) {
			return false;
		}
	}

	if (x == 0)
		return true;
	else
		return false;
}


int main()
{
	
	string sequence;

	cout << "Enter the text: ";
	cin >> sequence;

	cout << "Sequence is : " << isProperly(sequence) << endl;

}


