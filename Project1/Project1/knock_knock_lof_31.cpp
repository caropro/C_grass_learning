#include <iostream>
using namespace std;

int main_31()
{
	for (int i = 1; i < 100; i++)
	{
		int first = i % 10;
		int second = i / 10;
		if (first == 7 || second == 7 || (i % 7) == 0)
		{
			cout << "Knock Knock!!" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
	system("pause");
	return 0;
}