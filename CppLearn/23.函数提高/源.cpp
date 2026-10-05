#include<iostream>
using namespace std;

//函数默认参数
int func(int a, int b = 200, int c = 300)
{
	return a + b + c;
}

//某个位置有了默认参数,则从这个位置往后都必须有默认参数
int func2(int a, int b, int c, int d)
{
	return a + b + c;
}

//函数声明有默认参数,实线就不能有默认参数,声明和实现只能有一个默认参数
int func3(int a = 10, int b = 10);
int func3(int a, int b)
{
	return a + b;
}

//函数占位参数
int func4(int a, int)
{
	return a;
}

//函数重载
void func5()
{
	cout << "调用" << endl;
};
void func5(int a)
{
	cout << "调用2" << endl;
};
void func5(double a)
{
	cout << "调用3" << endl;
};
void func5(int a, double b)
{
	cout << "调用4" << endl;
};
void func5(double a, int b)
{
	cout << "调用5" << endl;
};

//函数重载注意事项
void func6(int& a)
{
	cout << "调用6" << endl;
};
void func6(const int& a)
{
	cout << "调用7" << endl;
}

//函数重载碰到默认参数
//void func7(int a, int b = 10)
//{
//	cout << "调用8" << endl;
//}
//void func7(int a)
//{
//	cout << "调用9" << endl;
//}

int main() {
	cout << func(10, 20, 30) << endl;
	cout << func2(10, 20, 30, 40) << endl;
	cout << func3(10, 20) << endl;
	cout << func4(10, 20) << endl;//20传给了滚木
	func5(10.1);
	int a = 10;
	func6(a);
	func6(10);
	//func7(10,20);

	system("pause");
	return 0;
}