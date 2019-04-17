#include <iostream>
using namespace std;
//�곣�����������������
#define MAX 1000
//����������ʾ�ĺ���
void show_menu()
{
	cout << "************************"<< endl;
	cout << "***** 1.�����ϵ�� *****" << endl;
	cout << "***** 2.��ʾ��ϵ�� *****" << endl;
	cout << "***** 3.ɾ����ϵ�� *****" << endl;
	cout << "***** 4.������ϵ�� *****" << endl;
	cout << "***** 5.�޸���ϵ�� *****" << endl;
	cout << "***** 6.�����ϵ�� *****" << endl;
	cout << "***** 0.�˳�ͨѶ¼ *****" << endl;
	cout << "************************" << endl;
}
//�����û��ṹ��
struct person
{
	//����
	string name;
	//�Ա�
	string gender;
	//����
	int age;
	//�绰
	string telephone_num;
	//��ס��ַ
	string address;
};

//����ͨѶ¼�ṹ��
struct addressBook
{
	//�û��б�
	person person_array[MAX];
	//��ǰ�б��С
	int m_size;
};

//�����Ա��Ϣ��ͨѶ¼
void add_person(addressBook * abs)
{
	if (abs->m_size != MAX)
	{
		cout << "�����û�������" << endl;
		string name;
		cin >> name;
		abs->person_array[abs->m_size].name = name;

		cout << "�����û����䣺" << endl;
		int age;
		cin >> age;
		abs->person_array[abs->m_size].age = age;

		while (true)
		{
			cout << "�����û��Ա�" << endl;
			cout << "1.��" << endl;
			cout << "2.Ů" << endl;
			int gender;
			cin >> gender;
			if (gender == 1 || gender == 2)
			{
				gender == 1 ? abs->person_array[abs->m_size].gender = "��": abs->person_array[abs->m_size].gender = "Ů";//��Ŀ�����
				break;
			}
			cout << "�Ա�ѡ������" << endl;
		}
		cout << "�����û��绰��" << endl;
		string tel_num;
		cin >> tel_num;
		abs->person_array[abs->m_size].telephone_num = tel_num;

		cout << "�����û�סַ��" << endl;
		string addr;
		cin >> addr;
		abs->person_array[abs->m_size].address = addr;

		cout << "�û�������ϡ�" << endl;
		abs->m_size ++;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "ͨѶ¼�����������޷����" << endl;
		system("pause");
		return;
	}
}

//��ʾͨѶ¼��Ա��Ϣ
void show_person_info(addressBook* abs)
{
	if (abs->m_size == 0)
	{
		cout << "��ǰû���û�����" << endl;
		system("pause");
		system("cls");
		return;
	}
	else 
	{
		//forѭ�������Ϣ
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "��ϵ��������" << abs->person_array[i].name << endl;
			cout << "��ϵ�����䣺" << abs->person_array[i].age << endl;
			cout << "��ϵ���Ա�" << abs->person_array[i].gender << endl;
			cout << "��ϵ�˵绰��" << abs->person_array[i].telephone_num << endl;
			cout << "��ϵ��סַ��" << abs->person_array[i].address << endl;
			cout << "-----------------------------------------" << endl;
		}
	}
	system("pause");
	//��������
	system("cls");
	return;
}

//��ͨѶ¼������ϵ��λ�ã�û���򷵻���ϵ�˲�����
int search_person(addressBook* abs)
{
	string name;
	cout << "������ϵ�ˣ�" << endl;
	cin >> name;
	int target_person;
	if (abs->m_size == 0)
	{
		cout << "ͨѶ¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			if (name == abs->person_array[i].name)
			{
				target_person = i;
				cout << "��ϵ��������" << abs->person_array[i].name << endl;
				cout << "��ϵ�����䣺" << abs->person_array[i].age << endl;
				cout << "��ϵ���Ա�" << abs->person_array[i].gender << endl;
				cout << "��ϵ�˵绰��" << abs->person_array[i].telephone_num << endl;
				cout << "��ϵ��סַ��" << abs->person_array[i].address << endl;
				cout << "-----------------------------------------" << endl;
				system("pause");
				system("cls");
				return target_person;
			}
		}
	}
	cout << "���޴���" << endl;
	system("pause");
	system("cls");
	return -1;
}


void delete_in_book(int index, addressBook * abs)
{
	if (index == -1)
	{
		cout << "���޴���" << endl;
		system("pause");
		system("cls");
		return;
	}
	else 
	{
		//index λ������ǰ��
		for (int i = index; i < abs->m_size; i++)
			abs->person_array[i] = abs->person_array[i + 1];
		abs->m_size--;
		cout << "��ɾ��" << endl;
		system("pause");
		system("cls");
	}
}

//�޸���Ա��Ϣ
void modify_person(int index,addressBook* abs)
{
	if (index == -1)
	{
		cout << "���޴���" << endl;
		system("pause");
		system("cls");
		return;
	}
	else
	{
		cout << "�����û�������" << endl;
		string name;
		cin >> name;
		abs->person_array[index].name = name;

		cout << "�����û����䣺" << endl;
		int age;
		cin >> age;
		abs->person_array[index].age = age;

		while (true)
		{
			cout << "�����û��Ա�" << endl;
			cout << "1.��" << endl;
			cout << "2.Ů" << endl;
			int gender;
			cin >> gender;
			if (gender == 1 || gender == 2)
			{
				gender == 1 ? abs->person_array[index].gender = "��": abs->person_array[index].gender = "Ů";//��Ŀ�����
				break;
			}
			cout << "�Ա�ѡ������" << endl;
		}
		cout << "�����û��绰��" << endl;
		string tel_num;
		cin >> tel_num;
		abs->person_array[index].telephone_num = tel_num;

		cout << "�����û�סַ��" << endl;
		string addr;
		cin >> addr;
		abs->person_array[index].address = addr;

		cout << "�û��޸���ϡ�" << endl;
		system("pause");
		system("cls");
	}
}

int main()
{
	//��ʼ��ͨѶ¼
	addressBook abs;
	abs.m_size = 0;
	//��������ô����ű�ע����Σ�����Ҫ�ڿ�ͷ��������
	//������������
	string search_name;

	while (true)
	{
		//��ʾ��ҳ��
		show_menu();
		int switch_result;
		cout << "���в���ѡ��" << endl;
		cin >> switch_result;
		switch (switch_result)
		{
			case 0:
				cout << "�˳�ͨѶ¼" << endl;
				system("pause");
				return 0;
				break;
			case 1:
				cout << "�����ϵ��" << endl;
				add_person(&abs);
				break;
			case 2:
				cout << "��ʾ��ϵ��" << endl;
				show_person_info(&abs);
				break;
			case 3:
			{//ʹ�ô����ţ���case�б�ע����Σ��Ա���������
				cout << "׼��ɾ��" << endl;
				//����ɾ��λ��
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
				cout << "�޸���ϵ��" << endl;
				//����ɾ��λ��
				int modify_index;
				modify_index = search_person(&abs);
				modify_person(modify_index, &abs);
			}
				break;
			case 6:
				cout << "�����ϵ��" << endl;
				abs.m_size = 0;
				cout << "������" << endl;
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