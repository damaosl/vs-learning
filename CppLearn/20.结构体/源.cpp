#include<iostream>
using namespace std;


	struct student
	{
		const string name;
		int age;
		int score;
	};
	//struct teacher
	//{
	//	string name;
	//	int id;
	//	int age;
	//	struct student stu;
	//};

//
//struct student s2={"李四",19,80};

	//void printStudent1(student s) {
	//	//s.age = 100;
	//	cout << "printStudent1函数中打印 姓名: " << s.name << " 年龄: " << s.age << " 成绩: " << s.score << endl;
	//}
	//地址传递
	//将函数中的形参改成指针可以减少内存空间,而且不会复制新的副本出来
	void printStudent2(const student* s) {
		//s->age = 100;
		cout << "printStudent2函数中打印 姓名: " << s->name << " 年龄: " << s->age << " 成绩: " << s->score << endl;
	}


int main() {
	//struct关键字可以省略
	 //student s1;
	//s1.name = "张三";
	//s1.age = 18;
	//s1.score = 100;
	//cout << s1.name << "\t" << s1.age << "\t" << s1.score << endl;
	//cout << s2.name << "\t" << s2.age << "\t" << s2.score << endl;

	//s3.name = "王五";
	//s3.age = 18;
	//s3.score = 100;
	//cout << s3.name << "\t" << s3.age << "\t" << s3.score << endl;

	//结构体数组
	//struct student stuArray[3] = { { "张三",19,100 }, {"王五",12,100},{"李四",17,92} };
	//stuArray[2].name = "赵六";
	//stuArray[2].age = 90;
	//stuArray[2].score = 60;

	//for (int i = 0; i < 3; i++)
	//{
	//	cout << stuArray[i].name << "\t" << stuArray[i].age << "\t" << stuArray[i].score << endl;
	//}

	//结构体指针
	//struct student s1 = { "张三",19,100 };

	//student* p = &s1;
	//cout << p->name << endl;
	//cout << p->age << endl;
	//cout << p->score << endl;

	//结构体嵌套结构体
	//teacher t = {"老王",01,24};
	//t.stu = {"张三",19,100};
	//cout << t.stu.name << endl;
	//cout << t.stu.age << endl;
	//cout << t.stu.score << endl;
	//cout << t.id << endl;
	//cout << t.name << endl;
	//cout << t.age << endl;
	

	//结构体做函数参数
	//struct student s;
	//s.name = "张三";
	//s.age = 19;
	//s.score = 100;

	//cout << "main函数中打印 姓名: " << s.name << " 年龄: " << s.age << " 成绩: " << s.score << endl;
	//printStudent1(s);
	//printStudent2(&s);

	//结构体中const的使用场景
	student s = { "张三",18,100 };
	//s.name = "李四";
	
	printStudent2(&s);
	cout << s.age << endl;


	return 0;
}