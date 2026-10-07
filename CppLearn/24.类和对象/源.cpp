#include<iostream>
using namespace std;

////设计一个圆类,求圆的周长
//const double Pi = 3.14;
//
//class Circle
//{
//	//访问权限
//public:
//	//属性
//	int m_r;
//
//	//行为
//	//获取周长
//	double caleculateZC() {
//		return 2 * Pi * m_r;
//	}
//};


////学生表
//class student
//{
//public:
//	int i = 1;
//	int m_id;
//	string m_name;
//
//public:
//	void printStd() {
//		cout << "姓名:" << m_name << "\t学号" << m_id << endl;
//	}
//	void cinStd() {
//		string name;
//		cout << "请输入学生姓名" << endl;
//		cin >> name;
//		m_name = name;
//		m_id = i;
//		i++;
//	}
//};

////权限:公共 public ,保护 protected ,私有 private
//class Person
//{
//public:
//	string name;
//protected:
//	int age;
//private:
//	int password;
//
//public:
//	void func() {
//		name = "Tom";
//		age = 19;
//		password = 12345678;
//	}
//};

////struct和class区别 struct默认公共权限 class默认私有权限
//class C1 
//{
//	int m_A;
//};
//struct S1
//{
//	int s_A;
//};

//成员属性设置为私有
class Person
{
public:
	void setName(string name)
	{
		m_Name = name;
	}
	string getName()
	{
		return m_Name;
	}
	void setAge(int age)
	{
		if (age < 0 || age>150)
		{
			cout << "年龄输入有误，赋值失败" << endl;
			return;
		}
			m_Age = age;
	}
	int getAge()
	{
		return m_Age;
	}
	void setIdol(string idol)
	{
		m_Idol = idol;
	}
	string getIdol()
	{
		return m_Idol;
	}
private:
	string m_Name;
	int m_Age=0;
	string m_Idol;
};



int main() {
	//Circle c1;
	//c1.m_r = 20;
	//cout << c1.caleculateZC() << endl;

	//student s1;
	//s1.cinStd();
	//s1.printStd();

	//Person p1;
	//p1.name = "张三";
	////p1.age = 19;
	////p1.password = 123456;
	//p1.func();

	//C1 c1;
	//S1 s1;
	////c1.m_A;
	//s1.s_A;

	Person p1;
	p1.setName("张三");
	cout << p1.getName() << endl;
	p1.setAge(180);
	cout << p1.getAge() << endl;
	p1.setIdol("马嘉祺");
	cout << p1.getIdol() << endl;


	system("pause");
	return 0;
}