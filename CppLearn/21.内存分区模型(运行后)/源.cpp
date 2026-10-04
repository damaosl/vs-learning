#include<iostream>
using namespace std;

//栈区数据注意事项
//栈区数据由编译器管理开辟和释放

//int* func(int b)
//{
//	int a = 10;//执行完后自动释放
//	return &a;
//}

//堆区,由程序员分配释放,若程序员不释放,程序结束时由操作系统回收
//利用关键字new开辟内存
//int* func()
//{
//	//指针本质也是放在栈上,并且是局部变量
//	int* p = new int(10);
//	return p;
//}

//用delete关键字来手动释放内存
int* func()
{
	int* p = new int(10);
	return p;
}

void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	delete p;
	//内存已被释放,再次访问就是非法操作
	//cout << *p << endl;
	//cout << *p << endl;
	//cout << *p << endl;
}

void test02() {
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)//赋值
	{
		arr[i] = i;
	}
	for (int i = 0; i < 10; i++)//打印
	{
		cout << arr[i] << endl;
	}
}


int main() {
	//int* p = func(100);
	//cout << *p << "的地址:" << (int)p << endl;
	//cout << *p << endl;

	//在堆区开辟数据
	//int* p = func();
	//cout << *p << endl;
	//cout << *p << endl;
	//cout << *func() << endl;

	test01();
	test02();


	return 0;
}