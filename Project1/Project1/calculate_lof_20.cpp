#include <iostream>
using namespace std;

int main_20()
{
	int a = 10;
	// ! not
	cout << (!a) << endl;
	cout << (!!a) << endl;
	// && and
	bool b = 0;
	cout << (a && b) << endl;
	cout << (a && a) << endl;
	// || or
	cout << (a || b) << endl;
	system("pause");
	return 0;
}