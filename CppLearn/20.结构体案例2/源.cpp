#include<iostream>
using namespace std;

struct hero
{
	string name;
	int age;
	string xb;
};

void heroMp(hero arr[], int len) {

	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printHero(hero h[], int len) {
	for (int i = 0; i < len; i++)
	{
		cout << "英雄: " << h[i].name << "\t年龄: " << h[i].age << "\t性别: " << h[i].xb << endl;
	}
}



int main() {
	struct hero h[] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}
	};
	int len = sizeof(h) / sizeof(h[0]);
	heroMp(h, len);
	printHero(h, len);

	return 0;
}