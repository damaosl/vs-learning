#include<iostream>
using namespace std;

//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void swap2(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}



int main() {
	////定义指针
	//int a = 10;
	//int* p = &a;
	//cout<<p<<endl;
	////指针前加一个*号代表解引用，找到指针所指向的数，可以通过*操作指针所指向的值
	//*p = 20;
	//cout << a << endl;

	//指针所占的内存空间
	//int a = 10;
	//int* p=&a;
	//cout << "sizeof(int*)=" << sizeof(int*) << endl;
	//cout << "sizeof(int*)=" << sizeof(double*) << endl;
	//cout << "sizeof(int*)=" << sizeof(string*) << endl;
	//cout << "sizeof(int*)=" << sizeof(bool*) << endl;
	//cout << sizeof(p) << endl;

	//空指针
	//int* p;
	//p = NULL;

	//野指针
	//int* p = (int*)0x1100;

	//cout << *p << endl;

	////const修饰指针 -常量指针
	//int a = 10;
	//int b = 20;
	//int c = 40;
	//const int* p = &a;
	////*p = 20;

	////指针常量
	//int* const p2 = &b;
	////p2 = &a;

	////即修饰指针又修饰常量
	//const int* const p3 = &c;
	////*p3 = 30;
	////p3 = &a;


	//指针和数组
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//cout << "第一个元素为" << arr[0] << endl;

	//int* p = arr;
	//p ++;
	//cout << *p << endl;
	//
	//int* p2 = arr;
	//for (int i = 0; i < 10; i++)
	//{
	//	
	//	cout << *(p2+i) << endl;
	//}

	//指针和函数
	//值传递
	//int a = 10;
	//int b = 20;
	//swap(a, b);
	//cout << "a=" << a << "\t" << "b=" << b << endl;
	////地址传递

	//swap2(&a, &b);
	//cout << "a=" << a << "\t" << "b=" << b << endl;




	return 0;
}