#include<iostream>
using namespace std;

////构造函数，初始化操作
//class Person {
//public:
//	int age;
//public:
//	Person() {
//		cout << "构造函数的调用\n" << endl;
//	}
//	//有参构造函数
//	Person(int a) {
//		cout << "有参构造函数的调用\n" << endl;
//		age = a;
//	}
//	//拷贝构造函数
//	Person(const Person& p) {
//		age = p.age;
//		cout << "拷贝构造调用\n" << endl;
//	}
//
//	//析构函数，清理操作
//	~Person() {
//		cout << "析构函数的调用" << endl;
//	}
//
//};
//void test01() {
//	////默认构造调用
//	//Person p;
//	////有参构造调用
//	//Person p1(10);
//	////拷贝构造调用
//	//Person p2(p1);
//	//cout << "p1的年龄:" << p1.age << endl;
//	//cout << "p2的年龄:" << p2.age << endl;
//	////加（）不传值输出一个滚木,编译器认为是一个函数声明
//	////Person p3();
//
//	//显式法
//	Person p1;
//	Person p2 = Person(10);//有参构造调用
//	Person p3 = Person(p2);//拷贝构造
//	//不要用拷贝构造函数初始化匿名对象
//	//Person(p3);
//
//	//隐式法
//	Person p4 = 10;
//	Person p5 = p4;
//}

////拷贝构造函数调用时机
//class Person
//{
//public:
//	int m_Age;
//public:
//	Person()
//	{
//		cout << "Person默认构造函数调用" << endl;
//	}
//
//	Person(int age)
//	{
//		cout << "Person有参构造函数调用" << endl;
//		m_Age = age;
//	}
//
//	Person(const Person& p)
//	{
//		cout << "Person拷贝函数调用" << endl;
//		m_Age = p.m_Age;
//	}
//	~Person() {
//		cout << "Person析构函数调用" << endl;
//	}
//
//};
//
//void test01() {
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2的年龄是" << p2.m_Age << endl;
//}
//
//void doWork(Person& p) {
//
//}
//
//Person doWork2() {
//	Person p1;
//	cout << "p1的地址:" << int(&p1) << endl;
//	return p1;
//}
//
//void test02() {
//	Person p;
//	doWork(p);
//}
//
//void test03() {
//	Person p = doWork2();
//	cout << "p的地址:" << int(&p) << endl;
//}

////构造函数调用规则
////1，只要创建一个类，c++编译器会给每个类自动添加至少三个函数
////默认构造函数，析构函数，拷贝构造函数
//class Person
//{
//public:
//	int m_Age;
//	int i = 0;
//
//	Person()
//	{
//		cout << "默认" << endl << endl;
//	}
//	//Person(const Person& p)
//	//{
//	//	cout << "拷贝" << endl << endl;
//	//	m_Age = p.m_Age;
//	//}
//	Person(int age)
//	{
//		cout << "有参" << endl << endl;
//		m_Age = age;
//	}
//	~Person()
//	{
//		cout << i << "析构" << endl;
//	}
//};
//
//void test01()
//{
//	Person p;
//	p.m_Age = 18;
//
//	Person p2(p);
//	cout << "p2的年龄:" << p2.m_Age << endl;
//	Person p3(10);
//}

////深拷贝与浅拷贝
//class Person
//{
//public:
//	Person()
//	{
//		cout << "默认构造函数调用" << endl;
//	}
//	Person(int age, int height)
//	{
//		cout << "有参构造函数调用" << endl;
//		m_Age = age;
//		m_Height = new int(height);
//	}
//	Person(const Person& p)
//	{
//		cout << "拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height;
//		m_Height = new int(*p.m_Height);
//	}
//	~Person()
//	{
//		if (m_Height!=NULL)
//		{
//			m_Height = NULL;
//		}
//		cout << "析构函数调用" << endl;
//	}
//
//	int m_Age;
//	int* m_Height;
//};
//
//void test01()
//{
//	int height = 180;
//	Person p1(18, height);
//	cout << "p1的年龄:" << p1.m_Age << "P1的身高:" << *p1.m_Height << endl;
//	Person p2(p1);
//	cout << "p2的年龄:" << p2.m_Age << "P2的身高:" << *p2.m_Height << endl;
//}

////初始化列表
//class Person {
//public:
//
//	//Person(int a, int b, int c)
//	//{
//	//	m_A = a;
//	//	m_B = b;
//	//	m_C = c;
//	//}
//	Person() :m_A(10), m_B(20), m_C(30){}
//
//	int m_A;
//	int m_B;
//	int m_C;
//};
//
//void test01()
//{
//	Person p;
//	cout << "m_A的值:" << p.m_A << endl;
//	cout << "m_B的值:" << p.m_B << endl;
//	cout << "m_C的值:" << p.m_C << endl;
//}

////类对象作为成员类
//class Phone
//{
//public:
//
//	Phone() {}
//
//	Phone(string pname)
//	{
//		m_PName = pname;
//	}
//
//	string m_PName;
//};
//
//class Person
//{
//public:
//
//	Person(string name, string pname):m_Name(name),m_Phone(pname)
//	{
//
//	}
//
//	string m_Name;
//	Phone m_Phone;
//
//};
//
//void test01()
//{
//	Person p("张三", "苹果x");
//
//	cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;
//}

//静态
//class Person 
//{
//public:
//
//	static void PersonTest()
//	{
//		cout << "调用" << endl;
//	}
//
//	static int m_A;
//	int m_B;
//};
//int Person::m_A = 10;
////int Person::m_B = 10;
//
//void test01() {
//	Person p;
//	Person p2;
//	p2.m_A = 20;
//	//通过对象进行访问
//	cout << p.m_A << endl;
//	//通过类名进行访问
//	cout << Person::m_A << endl;
//}

//成员变量和成员函数分开存储
//class Person
//{
//public:
//	int m_A;
//	static int m_B;
//	
//	void func(){}
//	static void func2(){}
//};
//
//void test01()
//{
//	Person p;
//
//	cout << "size_of_p = " << sizeof(p.m_A) << endl;
//}

////this指针
//class Person
//{
//public:
//	Person(int age)
//	{
//		this->age = age;
//	}
//
//	Person& PersonAge(Person& p)
//	{
//		this->age += p.age;
//		return *this;
//	}
//
//	int age;
//};
//
//
//void test01()
//{
//	Person p1(18);
//	cout << "p1的年龄为:" << p1.age << endl;
//}
//
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//
//	p2.PersonAge(p1).PersonAge(p2).PersonAge(p2);
//	cout << "p2的年龄为:" << p2.age << endl;
//}

////空指针调用成员函数
//class Person
//{
//public:
//	void showClassName()
//	{
//		cout << "this is Person class" << endl;
//	}
//
//	void showPersonAge()
//	{
//		cout << "age = " << this->m_Age << endl;
//	}
//
//	int m_Age;
//};
//
//void test01()
//{
//	Person* p = NULL;
//
//	p->showClassName();
//	p->showPersonAge();
//}

//const修饰成员函数
class Person
{
public:
	void showPerson()const
	{
		//m_A = 100;
		m_B = 200;
	}
	void func() {}
	static void func2() {}

	int m_A;
	mutable int m_B;
};

void test01()
{
	const Person p;
	//p.m_A = 100;
	p.m_B = 100;
	//p.func();
	p.func2();
}

int main() {
	//test01();
	////Person p;

	////test01();
	////test02();
	//test03();

	//Person::PersonTest();
	//test01();

	//test01();
	//test02();

	//test01();

	cin.get();
	return 0;
}