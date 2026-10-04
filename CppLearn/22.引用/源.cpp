#include<iostream>
using namespace std;

////交换函数
////1,值传递
//void mySwap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
////2,地址传递
//void mySwap02(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
////3,引用传递
//void mySwap03(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}

//引用做函数参数的返回值
//1,不要返回局部变量的引用
//int& test01()
//{
//	//int a = 10;
//	static int a = 10;//静态
//	int& b = a;
//	return b;
//}

void showValue(const int& val)
{
	 //val = 1000;
	cout << "val=" << val << endl;
}

int main() {
	////引用基本语法
	//int a = 10;
	//int& b = a;
	//int c = 30;
	//cout << b << endl;
	//cout << a << endl;
	//b = 20;
	//cout << b << endl;
	//cout << a << endl;

	////注意事项,必须初始化,初始化后不允许在发生改变
	////int& d;
	////&b = c;

	////使用函数传递
	//int a = 10;
	//int& b = a;
	//int c = 20;
	//int& d = c;
	//mySwap01(a, c);
	//cout << a << endl;
	//cout << b << endl;

	//mySwap02(&a, &c);
	//cout << a << endl;
	//cout << b << endl;

	//mySwap03(b, d);
	//cout << a << endl;
	//cout << b << endl;	

	//int &c=test01();
	//cout << c << endl;
	////a的内存已经进行自动释放
	//cout << c << endl;
	//test01() = 1000;
	//cout << c << endl;
	//cout << c << endl;

	////引用的本质是指针常量
	//int a = 10;
	//int& ref = a;

	//常量引用,用来修饰形参,防止误操作
	int a = 10;
	const int& b = a;
	//不可以通过引用b更改指向的值
	//b = 20; 
	a = 30;
	const int& c = 10;//加上const后,编译器自动修改为int temp=10;const int& c=temp;
	showValue(a);
	cout << a << endl;


	system("pause");
	return 0;
}