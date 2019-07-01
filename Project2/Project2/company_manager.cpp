#include "company_manager.h"
#include "worker.h"
#include "boss.h"
#include "employee.h"
#include "manager.h"

manage_system::manage_system()
{
	cout << "���¶���Ĺ��캯��" << endl;
	//��ʼ������

	//�ȴ��ļ���ȡ��Ϣ
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	//����ļ������ڣ����г�ʼ�������رմ��ļ���
	if (!ifs.is_open())
	{
		cout << "�洢�ļ�������" << endl;
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	}
	//����ļ����ڣ�����Ϊ�յ�ʱ��
	char ch;
	ifs >> ch;//�������ļ�β�ı�ʶ������ǿ��ļ�����ȡ���ʶ���û��������
	if (ifs.eof())
	{
		cout << "�ļ����ڣ���Ϊ�գ�" << endl;
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	}

	//�ļ����ڣ���������
	int num = this->get_EmpNum();
	cout << "ְ������Ϊ��" << num << endl;
	this->m_EmpNum = num;
	this->m_EmpArray = new worker *[this->m_EmpNum];

	//��ʼ��ְ��
	init_Emp();

	//���Դ���
	for (int i = 0; i < m_EmpNum; i++)
	{
		cout << "ְ���ţ�" << this->m_EmpArray[i]->w_id
			<< "ְ��������" << this->m_EmpArray[i]->w_name
			<< "ְ����ţ�" << this->m_EmpArray[i]->w_dep << endl;
	}
	
}

manage_system::~manage_system()
{
	cout << "���¶������������" << endl;
}

void manage_system::show_menu()
{
	cout << "���¶������ʾ����" << endl;
	cout << "**************************************" << endl;
	cout << "*********��ӭʹ��Ա������ϵͳ*********" << endl;
	cout << "*************0.�˳�ϵͳ***************" << endl;
	cout << "*************1.���Ա��***************" << endl;
	cout << "*************2.��ʾԱ����Ϣ***********" << endl;
	cout << "*************3.ɾ����ְԱ��***********" << endl;
	cout << "*************4.�޸�Ա����Ϣ***********" << endl;
	cout << "*************5.����Ա����Ϣ***********" << endl;
	cout << "*************6.���ձ������***********" << endl;
	cout << "*************7.���������Ϣ***********" << endl;
	cout << "**************************************" << endl;
}

void manage_system::quit_sys()
{
	cout << "��ӭ�´μ���ʹ��" << endl;
	system("pause");
	exit(0);//�˳�����
}

void manage_system::save()
{
	//���������
	ofstream ofs;
	//���ļ�����ʽΪ���
	ofs.open(FILENAME, ios::out);

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->w_id << " "
			<< this->m_EmpArray[i]->w_name << " "
			<< this->m_EmpArray[i]->w_dep << endl;
	}
	ofs.close();
}

void manage_system::Add_Emp()
{
	cout << "���������Ա����������" << endl;
	//���洴�������ı���
	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		//���
		//�������Ӻ�Ŀռ��С
		int newSize = this->m_EmpNum + addNum;//����ԭ������������������

		//�����¿ռ�
		//����ָ�룬ָ��ָ������
		worker** newspace = new worker * [newSize];

		//��Ҫ��ԭ���������Ƶ��¿��ٵĿռ�
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newspace[i] = this->m_EmpArray[i];
			}
		}
		//����µ�����
		for (int i = 0; i < addNum; i++)
		{
			int id;//ְ�����
			string name;//ְ������
			int dep_select;//����ѡ��

			cout << "�������" << i + 1 << "λ��Ա���ı�ţ�" << endl;
			cin >> id;

			cout << "�������" << i + 1 << "λ��Ա����������" << endl;
			cin >> name;

			cout << "��ѡ��Ա���ĸ�λ��" << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> dep_select;

			//���ݸ�λ��ͬ��������ͬ�Ķ���
			worker * worker_current = NULL;
			switch (dep_select)
			{
			case 1:
				worker_current = new employee(id, name, 1);
				break;
			case 2:
				worker_current = new Manager(id, name, 1);
				break;
			case 3:
				worker_current = new Boss(id, name, 1);
				break;
			default:
				break;
			}
			//ԭ�����������ϣ������������
			newspace[this->m_EmpNum + i] = worker_current;
		}
		//�ͷ�ԭ�еĴ洢
		delete[] this->m_EmpArray;

		//�����¿ռ�ķ���ָ��
		this->m_EmpArray = newspace;

		//���µ�ǰ��ְ������
		this->m_EmpNum = newSize;

		//����ְ����Ϊ�ձ�־
		this->m_FileIsEmpty = false;

		//��ʾ��ӳɹ�
		cout << "�ɹ����" << addNum << "����Ա��" << endl;
		//�����ļ�
		this->save();
	}
	else
	{
		cout << "�����������Ҫ��" << endl;
	}
	//��������������ص���һĿ¼
	system("pause");
	system("cls");
}

int manage_system::get_EmpNum()
{
	//���ļ���¼�ж�ȡ������Ϣ����������չ�����С
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	//��ʱ��¼������Ϣ
	int id;
	string name;
	int dep_id;

	int num = 0;
	//�ɹ����ļ���ȡ������ϢΪһ��ְ����Ϣ
	while (ifs >> id && ifs >> name && ifs >> dep_id)
	{
		num++;
	}
	ifs.close();//��ȡ��������Ϣ��ر��ļ�
	return num;//����������Ϣ
}

void manage_system::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dep_id;

	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dep_id)
	{
		worker* c_worker = NULL;//����Ա����ָ��
		if (dep_id == 1)//��ͨԱ��
		{
			c_worker = new employee(id, name, dep_id);
		}
		if (dep_id == 2)//����
		{
			c_worker = new Manager(id, name, dep_id);
		}
		if (dep_id == 3)//�ϰ�
		{
			c_worker = new Boss(id, name, dep_id);
		}

		this->m_EmpArray[index] = c_worker;
		index++;

	}
}


void manage_system::Show_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		for (int i = 0; i < m_EmpNum; i++)
		{
			//���ö�̬�ӿڣ���ͬԱ�����ͬһ����ʾ��ʽ
			this->m_EmpArray[i]->show_info();
		}
	}
	system("pause");
	system("cls");
}

int manage_system::IsExist(int id)
{
	int index = -1;
	//ɸѡ��id���֮ǰ�����ݣ����id��������һ�£�����������
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->w_id ==id)
		{
			index = i;
			break;
		}
	}
	return index;
}

void manage_system::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڣ����¼Ϊ�գ�" << endl;
	}
	else
	{
		//��ְ�����ɾ��
		cout << "��������Ҫɾ����ְ���ţ�" << endl;
		int id = 0;
		cin >> id;
		//�ж����id�Ƿ����
		int index = this->IsExist(id);
		//������صĲ���-1�������
		if (index != -1)
		{
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				//ɾ���ķ�ʽ�ǣ����λ�ú������ǰ��
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;

			this->save();//ɾ���󱣴����ݵ��ļ�
			cout << "ɾ���ɹ���" << endl;
		}
		else
		{
			cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ��" << endl;
		}

	}
	system("pasue");
	system("cls");
}

void manage_system::Mod_Emp()
{
	//�ļ������ڵ�ʱ��
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "�������޸�ְ���ı�ţ�" << endl;
		int id;
		cin >> id;
		//����Ա���Ƿ����
		int ret = this->IsExist(id);
		if (ret != -1)
		{
			delete this->m_EmpArray[ret];

			int newId = 0;
			string newName = "";
			int dSelect = 0;
			
			cout << "�����������֣�" << endl;
			cin >> newName;

			cout << "�����µĸ�λ��" << endl;
			cout << "1.��ְͨ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
			cin >> dSelect;

			worker* new_worker = NULL;
			switch (dSelect)
			{
			case 1:
				new_worker = new employee(newId, newName, dSelect);
				break;
			case 2:
				new_worker = new Manager(newId, newName, dSelect);
				break;
			case 3:
				new_worker = new Boss(newId, newName, dSelect);
				break; 
			default:
				break;
			}
			this->m_EmpArray[ret] = new_worker;

			cout << "�޸ĳɹ�" << this->m_EmpArray[ret]->getDepName << endl;

			this->save();
		}
		else
		{
			cout << "���޴��ˣ��޸�ʧ��" << endl;
		}
	}
	system("pause");
	system("cls");
}

void manage_system::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "��������ҵķ�ʽ��" << endl;
		cout << "1.��ְ����Ų���" << endl;
		cout << "2.����������" << endl;

		int select = 0;
		cin >> select;

		if (select == 1)//��ְ����Ų���
		{
			int id;
			cout << "��������ҵ�ְ����ţ�" << endl;
			cin >> id;

			int ret = IsExist(id);
			if (ret != -1)
			{
				cout << "���ҳɹ�����ְ����Ϣ���£�" << endl;
				this->m_EmpArray[ret]->show_info();
			}
			else
			{
				cout << "����ʧ�ܣ����޴���" << endl;
			}
		}
		else if (select == 2)//����������
		{
			string name;
			cout << "��������ҵ�������" << endl;
			cin >> name;

			bool flag = false;//���ҵ��ı�־
			for (int i = 0; i < m_EmpNum; i++)//����Ա�ְ������
			{
				if (m_EmpArray[i]->w_name == name)
				{
					cout << "���ҳɹ�����ְ����Ϣ���£�" << endl;
					this->m_EmpArray[i]->show_info();

					flag = true;

				}
			}
			if (flag == false)
			{
				cout << "����ʧ�ܣ����޴���" << endl;
			}
		}
		else
		{
			cout << "����ѡ������" << endl;
		}
		
	}
	system("pause");
	system("cls");
}

void manage_system::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "��ѡ������ʽ��" << endl;
		cout << "1.��ְ����Ž�����������" << endl;
		cout << "2.��ְ����Ž��н�������" << endl;

		int select = 0;
		cin >> select;

		for (int i = 0; i < m_EmpNum; i++)
		{
			int minOrMax = i;
			for (int j = i + 1; j < m_EmpNum; j++)
			{
				if (select == 1)//����
				{
					if (m_EmpArray[minOrMax]->w_id > m_EmpArray[j]->w_id)
					{
						minOrMax = j;
					}
				}
				else//����
				{
					if (m_EmpArray[minOrMax]->w_id < m_EmpArray[j]->w_id)
					{
						minOrMax = j;
					}
				}
			}
			//�൱�ڴӵ�һ����ʼ�����ţ���ĩβʱֹͣ
			if (i != minOrMax)
			{
				worker* temp = m_EmpArray[i];
				m_EmpArray[i] = m_EmpArray[minOrMax];
				m_EmpArray[minOrMax] = temp;
			}
		}
		cout << "����ɹ���������Ϊ��" << endl;
		this->save();
		this->Show_Emp();
	}
}

void manage_system::Clean_File()
{
	cout << "ȷ����գ�" << endl;
	cout << "1.ȷ��" << endl;
	cout << "2.����" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		//��ģʽios::trunc����ļ����ڣ�ɾ���ļ������´���
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close;
		
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i] != NULL)
				{
					//�������ж���ָ����Ϣ
					delete this->m_EmpArray[i];
				}
			}
			//�ܼ�������
			this->m_EmpNum = 0;
			//�������鱾��
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_FileIsEmpty = true;
		}
		cout << "��ճɹ���" << endl;
	}
	system("pause");
	system("cls");
}

