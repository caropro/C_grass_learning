#include <iostream>
using namespace std;
#include <ctime>
//create student struct
struct student_type
{
	string name;
	int score;
};

//create teacher struct with 5-student arry
struct teacher_type
{
	string name;
	student_type student_arr[5];
};

//allocate value to teacher and student
void allocate(teacher_type* tArry, int len)
{
	string name_index = "ABCDE";
	for (int i=0; i < len; i++)
	{
		tArry[i].name = "Teacher_";
		tArry[i].name += name_index[i];

		for (int j=0; j < 5; j++)
		{
			tArry[i].student_arr[j].name = "Student_";
			tArry[i].student_arr[j].name += name_index[j];
			int result = rand()%60+40;
			tArry[i].student_arr[j].score = result;
		}
	}
}

//print the value of the arry
void print_all(teacher_type* tArry, int len)
{
	for (int i=0; i < len; i++)
	{
		cout <<"Teacher Name:"<< tArry[i].name << endl;

		for (int j=0; j < 5; j++)
		{
			cout<<"\tStudent Name:"<<tArry[i].student_arr[j].name<<endl;
			cout << "\tStudent Score:" << tArry[i].student_arr[j].score << endl;
		}
	}
}

int main_63()
{
	srand((unsigned int)time(NULL));
	//create tracher arry
	teacher_type teacher_arry[3];

	int len = _countof(teacher_arry);

	allocate(teacher_arry, len);
	print_all(teacher_arry, len);

	system("pause");
	return 0;
}
