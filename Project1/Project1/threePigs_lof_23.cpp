#include <iostream>
using namespace std;


int main_23()
{
	float pig_a;
	float pig_b;
	float pig_c;
	//输入三只小猪的重量数字
	cout << "输入小猪a的体重：" << endl;
	cin >> pig_a;
	cout << "输入小猪b的体重：" << endl;
	cin >> pig_b;
	cout << "输入小猪c的体重：" << endl;
	cin >> pig_c;

	if (pig_a > pig_b)
	{
		if (pig_c > pig_a)
		{
			cout << "三只小猪体重排名为C，A，B：" << pig_c<<","<<pig_a << "," <<pig_b<<endl;
		}
		else {
			if (pig_b > pig_c)
			{
				cout << "三只小猪体重排名为A，B，C：" << pig_a << "," << pig_b << "," << pig_c << endl;
			}
			else
			{
				cout << "三只小猪体重排名为A，C，B：" << pig_a << "," << pig_c << "," << pig_b << endl;
			}
		}
	}
	else 
	{
		if (pig_c > pig_b)
		{
			cout << "三只小猪体重排名为C，B，A：" << pig_c << "," << pig_b << "," << pig_a << endl;
		}
		else {
			if (pig_a > pig_c)
			{
				cout << "三只小猪体重排名为B，A，C：" << pig_b << "," << pig_a << "," << pig_c << endl;
			}
			else
			{
				cout << "三只小猪体重排名为B，C，A：" << pig_b << "," << pig_c << "," << pig_a << endl;
			}
		}
	}
	system("pause");
	return 0;
}