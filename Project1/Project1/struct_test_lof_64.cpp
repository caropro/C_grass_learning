#include <iostream>
using namespace std;

//create hero struct
struct hero_pack
{
	string name;
	int age;
	string gender;
};

//resort function by age
void resample(hero_pack arry[],int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			int age_a = arry[j].age;
			int age_b = arry[j + 1].age;
			hero_pack tmp_hero = arry[j];
			if (age_a > age_b)
			{
				arry[j] = arry[j + 1];
				arry[j + 1] = tmp_hero;
			}
		}
	}
}

void print_out(hero_pack arry[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "Ó¢ÐÛÃû×Ö£º" << arry[i].name << endl;
		cout << "Ó¢ÐÛÄêÁä£º" << arry[i].age << endl;
		cout << "Ó¢ÐÛÐÔ±ð£º" << arry[i].gender << endl;
		cout << "----------------------------" << endl;
	}
}

int main_64()
{
	//create hero_pack arry
	hero_pack hero_arry[5] =
	{
		{"¹ØÓð",22,"ÄÐ"},
		{"Áõ±¸",23,"ÄÐ"},
		{"õõ²õ",19,"Å®"},
		{"ÕÅ·É",20,"ÄÐ"},
		{"ÕÔÔÆ",21,"ÄÐ"}
	};

	int len = _countof(hero_arry);
	//resort arry
	resample(hero_arry, len);
	//print element in arry
	print_out(hero_arry, len);

	system("pause");
	return 0;
}