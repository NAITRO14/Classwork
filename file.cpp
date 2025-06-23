#include <iostream>
#include <climits>
using namespace std;

int main()
{
	srand(time(NULL));
	short n;
	cin >> n;

	int tmp = INT_MIN;
	for (short i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		if (num > tmp) { tmp = num; }
	}
	cout << endl << tmp;
}