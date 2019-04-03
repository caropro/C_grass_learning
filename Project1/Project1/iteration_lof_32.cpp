#include <iostream>
using namespace std;

int main_32()
{
	for (int horizontal_line = 1; horizontal_line < 10; horizontal_line++)
	{
		for (int vertical_line = 1; vertical_line < 10; vertical_line++)
		{
			cout << " * ";
		}

		cout << "\n";

	}
	system("pause");
	return 0;
}