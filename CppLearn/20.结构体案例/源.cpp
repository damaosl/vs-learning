#include<iostream>
using namespace std;

struct Student
{
	string name;
	int score;
};
struct Teacher
{
	string name;
	struct Student stu[5];
};

void printArr(Teacher* t, int len) {
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名:" << t[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名: " << t[i].stu[j].name << " 学生成绩: " << t[i].stu[j].score << endl;
		}
	}
};

int main() {
	struct Teacher tea[3];
	tea[0].name = "老王";
	tea[0].stu[0] = { "张a",100 };
	tea[0].stu[1] = { "张b",100 };
	tea[0].stu[2] = { "张c",100 };
	tea[0].stu[3] = { "张d",100 };
	tea[0].stu[4] = { "张e",100 };
	tea[1].name = "老李";
	tea[1].stu[0] = { "张f",100 };
	tea[1].stu[1] = { "张g",100 };
	tea[1].stu[2] = { "张h",100 };
	tea[1].stu[3] = { "张i",100 };
	tea[1].stu[4] = { "张j",100 };
	tea[2].name = "老张";
	tea[2].stu[0] = { "张k",100 };
	tea[2].stu[1] = { "张l",100 };
	tea[2].stu[2] = { "张n",100 };
	tea[2].stu[3] = { "张o",100 };
	tea[2].stu[4] = { "张p",100 };
	int len = sizeof(tea) / sizeof(tea[0]);
	printArr(tea, len);





	return 0;
}