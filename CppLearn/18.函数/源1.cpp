#include<iostream>
using namespace std;

//int add(int num1, int num2)
//{
//
//	return num1 + num2;
//}
//
//void swap(int num1, int num2)
//{
//	cout << "交换前" << endl;
//	cout << "num1:" << num1 << endl;
//	cout << "num2:" << num2 << endl;
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//	cout << "交换后" << endl;
//	cout << "num1:" << num1 << endl;
//	cout << "num2:" << num2 << endl;
//}
//
////函数样式
////无参无返
//void wcwf() {
//
//}
//
////有参无返
//void ycwf(int a) {
//
//}
//
////无参有返
//int wcyf() {
//	return 0;
//}

////有参有返
//int ycyf(int a) {
//	return a;
//}


//函数的声明,声明可以有多次,定义只能一次
int max(int a, int b);
int max(int a, int b);
int max(int a, int b);


int main() {
	//int a = 0;
	//int b = 0;
	//cout << "请输入a的值" << endl;
	//cin >> a;
	//cout << "请输入b的值" << endl;
	//cin >> b;
	////cout << "a和b的和为" << add(a, b) << endl;
	//cout << a << "\t" << b << endl;
	////形参不影响实参
	//swap(a, b);
	//cout << a << "\t" << b << endl;

	//无参无返调用
	//wcwf();

	////有参无返调用
	//ycwf(10);

	////无参有返调用
	//int a = wcyf();
	//cout << a << endl;


	////有参有返调用
	//int b = ycyf(10);
	//cout << b << endl;

	int a = 10;
	int b = 20;
	cout << max(a, b) << endl;



	system("pause");
	return 0;
}

int max(int a, int b) {

	return a > b ? a : b;
}