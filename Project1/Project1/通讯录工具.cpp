#include <iostream>
using namespace std;
//宏常量定义最大数量限制
#define MAX 1000
//基本界面显示的函数
void show_menu()
{
	cout << "************************"<< endl;
	cout << "***** 1.添加联系人 *****" << endl;
	cout << "***** 2.显示联系人 *****" << endl;
	cout << "***** 3.删除联系人 *****" << endl;
	cout << "***** 4.查找联系人 *****" << endl;
	cout << "***** 5.修改联系人 *****" << endl;
	cout << "***** 6.清空联系人 *****" << endl;
	cout << "***** 0.退出通讯录 *****" << endl;
	cout << "************************" << endl;
}
//创建用户结构体
struct person
{
	//姓名
	string name;
	//性别
	string gender;
	//年龄
	int age;
	//电话
	string telephone_num;
	//居住地址
	string address;
};

//创建通讯录结构体
struct addressBook
{
	//用户列表
	person person_array[MAX];
	//当前列表大小
	int m_size;
};

//添加人员信息到通讯录
void add_person(addressBook * abs)
{
	if (abs->m_size != MAX)
	{
		cout << "输入用户姓名：" << endl;
		string name;
		cin >> name;
		abs->person_array[abs->m_size].name = name;

		cout << "输入用户年龄：" << endl;
		int age;
		cin >> age;
		abs->person_array[abs->m_size].age = age;

		while (true)
		{
			cout << "输入用户性别：" << endl;
			cout << "1.男" << endl;
			cout << "2.女" << endl;
			int gender;
			cin >> gender;
			if (gender == 1 || gender == 2)
			{
				gender == 1 ? abs->person_array[abs->m_size].gender = "男": abs->person_array[abs->m_size].gender = "女";//三目运算符
				break;
			}
			cout << "性别选择有误" << endl;
		}
		cout << "输入用户电话：" << endl;
		string tel_num;
		cin >> tel_num;
		abs->person_array[abs->m_size].telephone_num = tel_num;

		cout << "输入用户住址：" << endl;
		string addr;
		cin >> addr;
		abs->person_array[abs->m_size].address = addr;

		cout << "用户创建完毕。" << endl;
		abs->m_size ++;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "通讯录人数已满，无法添加" << endl;
		system("pause");
		return;
	}
}

//显示通讯录人员信息
void show_person_info(addressBook* abs)
{
	if (abs->m_size == 0)
	{
		cout << "当前没有用户存在" << endl;
		system("pause");
		system("cls");
		return;
	}
	else 
	{
		//for循环输出信息
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "联系人姓名：" << abs->person_array[i].name << endl;
			cout << "联系人年龄：" << abs->person_array[i].age << endl;
			cout << "联系人性别：" << abs->person_array[i].gender << endl;
			cout << "联系人电话：" << abs->person_array[i].telephone_num << endl;
			cout << "联系人住址：" << abs->person_array[i].address << endl;
			cout << "-----------------------------------------" << endl;
		}
	}
	system("pause");
	//清屏操作
	system("cls");
	return;
}

//在通讯录查找联系人位置，没有则返回联系人不存在
int search_person(addressBook* abs)
{
	string name;
	cout << "查找联系人：" << endl;
	cin >> name;
	int target_person;
	if (abs->m_size == 0)
	{
		cout << "通讯录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			if (name == abs->person_array[i].name)
			{
				target_person = i;
				cout << "联系人姓名：" << abs->person_array[i].name << endl;
				cout << "联系人年龄：" << abs->person_array[i].age << endl;
				cout << "联系人性别：" << abs->person_array[i].gender << endl;
				cout << "联系人电话：" << abs->person_array[i].telephone_num << endl;
				cout << "联系人住址：" << abs->person_array[i].address << endl;
				cout << "-----------------------------------------" << endl;
				system("pause");
				system("cls");
				return target_person;
			}
		}
	}
	cout << "查无此人" << endl;
	system("pause");
	system("cls");
	return -1;
}


void delete_in_book(int index, addressBook * abs)
{
	if (index == -1)
	{
		cout << "查无此人" << endl;
		system("pause");
		system("cls");
		return;
	}
	else 
	{
		//index 位置数据前移
		for (int i = index; i < abs->m_size; i++)
			abs->person_array[i] = abs->person_array[i + 1];
		abs->m_size--;
		cout << "已删除" << endl;
		system("pause");
		system("cls");
	}
}

//修改人员信息
void modify_person(int index,addressBook* abs)
{
	if (index == -1)
	{
		cout << "查无此人" << endl;
		system("pause");
		system("cls");
		return;
	}
	else
	{
		cout << "输入用户姓名：" << endl;
		string name;
		cin >> name;
		abs->person_array[index].name = name;

		cout << "输入用户年龄：" << endl;
		int age;
		cin >> age;
		abs->person_array[index].age = age;

		while (true)
		{
			cout << "输入用户性别：" << endl;
			cout << "1.男" << endl;
			cout << "2.女" << endl;
			int gender;
			cin >> gender;
			if (gender == 1 || gender == 2)
			{
				gender == 1 ? abs->person_array[index].gender = "男": abs->person_array[index].gender = "女";//三目运算符
				break;
			}
			cout << "性别选择有误" << endl;
		}
		cout << "输入用户电话：" << endl;
		string tel_num;
		cin >> tel_num;
		abs->person_array[index].telephone_num = tel_num;

		cout << "输入用户住址：" << endl;
		string addr;
		cin >> addr;
		abs->person_array[index].address = addr;

		cout << "用户修改完毕。" << endl;
		system("pause");
		system("cls");
	}
}

int main()
{
	//初始化通讯录
	addressBook abs;
	abs.m_size = 0;
	//如果不适用大括号标注代码段，则需要在开头声明变量
	//声明搜索名称
	string search_name;

	while (true)
	{
		//显示首页面
		show_menu();
		int switch_result;
		cout << "进行操作选择：" << endl;
		cin >> switch_result;
		switch (switch_result)
		{
			case 0:
				cout << "退出通讯录" << endl;
				system("pause");
				return 0;
				break;
			case 1:
				cout << "添加联系人" << endl;
				add_person(&abs);
				break;
			case 2:
				cout << "显示联系人" << endl;
				show_person_info(&abs);
				break;
			case 3:
			{//使用大括号，在case中标注代码段，以便声明变量
				cout << "准备删除" << endl;
				//声明删除位置
				int delete_index;
				delete_index = search_person(&abs);
				delete_in_book(delete_index, &abs);
			}
				break;
			case 4:
				search_person(&abs);
				break;
			case 5:
			{
				cout << "修改联系人" << endl;
				//声明删除位置
				int modify_index;
				modify_index = search_person(&abs);
				modify_person(modify_index, &abs);
			}
				break;
			case 6:
				cout << "清空联系人" << endl;
				abs.m_size = 0;
				cout << "完成清空" << endl;
				system("pause");
				system("cls");
				break;
			default:
				break;
		}
	}
	system("pause");
	return 0;
}