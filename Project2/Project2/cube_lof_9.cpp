#include <iostream>
using namespace std;

//��������������
class Cube 
{
	//���г�����������˽�����ԣ��ҿɲ鿴���޸�
private:
	float cube_width;
	float cube_length;
	float cube_height;
public:
	//��ȡ����ʾ��������
	float get_width()
	{
		cout << "��ǰ������Ŀ�ȣ�" << cube_width << endl;
		return cube_width;
	}
	float get_height()
	{
		cout << "��ǰ������ĸ߶ȣ�" << cube_height << endl;
		return cube_height;
	}
	float get_length()
	{
		cout << "��ǰ������ĳ��ȣ�" << cube_length << endl;
		return cube_length;
	}
	//���ã��޸ĳ�������
	void set_width(float value)
	{
		cube_width= value;
	}
	void set_height(float value)
	{
		cube_height= value;
	}
	void set_length(float value)
	{
		cube_length= value;
	}
	//���Է��������������������Ϣ
	float calculate_s()
	{
		return (cube_height * cube_length + cube_width * cube_height + cube_width * cube_length) * 2;
	}
	float calculate_v()
	{
		return cube_height * cube_length * cube_width;
	}

	//��������һ����������бȶԣ��ж��Ƿ����
	bool compare_with(Cube& cube)
	{
		if (cube.cube_height == cube_height && cube_length == cube.cube_length && cube.cube_width == cube_width)
		{
			cout << "����������һ��" << endl;
			return true;
		}
		else
		{
			cout << "���������岻һ��" << endl;
			return false;
		}
	}
};

bool compare_with(Cube &cube1 , Cube &cube2)
{
	if (cube1.get_height() == cube2.get_height() and cube1.get_length() == cube2.get_length() and cube1.get_width() == cube2.get_width())
	{
		cout << "����������һ��" << endl;
		return true;
	}
	else
	{
		cout << "���������岻һ��" << endl;
		return false;
	}
}



int main_9()
{
	Cube cube1;
	cube1.set_height(100);
	cube1.set_length( 23);
	cube1.set_width(44);

	cout << "cube1�����Ϊ��" << cube1.calculate_s() << endl;
	cout << "cube1�����Ϊ��" << cube1.calculate_v() << endl;

	Cube cube2;
	cube2.set_height(100);
	cube2.set_length(23);
	cube2.set_width(44);

	cout << "cube2�����Ϊ��" << cube2.calculate_s() << endl;
	cout << "cube2�����Ϊ��" << cube2.calculate_v() << endl;

//ʹ��ȫ�ֺ��������ж�
	bool result = compare_with(cube1, cube2);
//ʹ��cube���еĳ�Ա���������ж�
	cube1.compare_with(cube2);

	system("pause");
	return 0;
}