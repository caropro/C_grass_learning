#include <iostream>
using namespace std;


int main_23()
{
	float pig_a;
	float pig_b;
	float pig_c;
	//������ֻС�����������
	cout << "����С��a�����أ�" << endl;
	cin >> pig_a;
	cout << "����С��b�����أ�" << endl;
	cin >> pig_b;
	cout << "����С��c�����أ�" << endl;
	cin >> pig_c;

	if (pig_a > pig_b)
	{
		if (pig_c > pig_a)
		{
			cout << "��ֻС����������ΪC��A��B��" << pig_c<<","<<pig_a << "," <<pig_b<<endl;
		}
		else {
			if (pig_b > pig_c)
			{
				cout << "��ֻС����������ΪA��B��C��" << pig_a << "," << pig_b << "," << pig_c << endl;
			}
			else
			{
				cout << "��ֻС����������ΪA��C��B��" << pig_a << "," << pig_c << "," << pig_b << endl;
			}
		}
	}
	else 
	{
		if (pig_c > pig_b)
		{
			cout << "��ֻС����������ΪC��B��A��" << pig_c << "," << pig_b << "," << pig_a << endl;
		}
		else {
			if (pig_a > pig_c)
			{
				cout << "��ֻС����������ΪB��A��C��" << pig_b << "," << pig_a << "," << pig_c << endl;
			}
			else
			{
				cout << "��ֻС����������ΪB��C��A��" << pig_b << "," << pig_c << "," << pig_a << endl;
			}
		}
	}
	system("pause");
	return 0;
}