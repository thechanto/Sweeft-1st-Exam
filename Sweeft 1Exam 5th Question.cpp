#include <iostream>

using namespace std;

int zeros(int n) 
{

    if (n < 0)
        return -1;

    int count = 0;


    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;

    return count;
}

int main()
{
    int n;
    cout << "Please enter the number: ";
    cin >> n;
    cout << "0s quantity at the end are: " << zeros(n);
    return 0;
}