#include<iostream>
using namespace std;

int main() {
	//数据类型 数组名[数组长度]
	//int arr[2];
	//arr[0] = 10;
	//arr[1] = 20;
	//
	//cout << arr[1] << endl;

	//数据类型 数组名[数组长度]={值1，值2，值3...}
	//int arr_1[3] = { 1,2,3 };
	//cout << arr_1[0] << endl;
	//cout << arr_1[1] << endl;
	//cout << arr_1[2] << endl;

	//for (int i = 0; i < 3; i++)
	//{
	//	cout << arr_1[i] << endl;
	//}


	//数据类型 数组名[]={值1，值2，值3...}
	//int arr_2[] = { 1,2,3 };

	//for (int i = 0; i < 3; i++)
	//{
	//	cout << arr_2[i] << endl;
	//}

	//一堆数组
	//int arr[] = { 1,23,34 };
	//cout << sizeof(arr) << endl;
	//cout << sizeof(arr[0]) << endl;
	//cout << arr << endl;
	//
	//cout << (int)arr << endl;
	//cout << (int)&arr[0] << endl;
	//cout << (int)&arr[1] << endl;

	//案例 五只小猪称体重
	//int arr[5] = { 300,350,200,400,250 };
	//for (int i = 0 ;i < (sizeof(arr) / sizeof(arr[0])) - 1; i++)
	//{
	//	for (int j = 0; j < (sizeof(arr) / sizeof(arr[0])) - 2; j++)
	//	{
	//		if (arr[j] < arr[j + 1]) {
	//			int pig = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = pig;
	//		}
	//	}
	//}
	//cout << "最肥的小猪的体重是" << arr[0] << endl;

	//int pigmax = 0;
	//for (int i = 0; i < 5; i++)
	//{
	//	if (pigmax < arr[i]) {
	//		pigmax = arr[i];
	//	}
	//}
	//cout << pigmax << endl;

	//数组元素逆置
	//int arr[5] = { 1,3,2,5,4 };
	//int start = 0;
	//int end = (sizeof(arr)/sizeof(arr[0]))-1;
	//
	//for (; start<end; )
	//{
	//	int temp = arr[start];
	//	arr[start] = arr[end];
	//	arr[end] = temp;
	//	start++;
	//	end--;
	//}

	//for (int i = 0; i < 5; i++)
	//{
	//	cout << arr[i] << endl;
	//}

	//冒泡排序
	//int arr[] = { 1,2,332,45,12 };

	//for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])) - 1; i++)
	//{
	//	for (int j = 0;j < (sizeof(arr) / sizeof(arr[0])) - 2;j++) 
	//	{
	//		if (arr[j]>arr[j+1])
	//		{
	//			int temp = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j+1] = temp;
	//		}
	//		
	//	}
	//}
	//for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])) - 1; i++)
	//{
	//	cout << arr[i] << endl;
	//}

	//二维数组
	//int arr[2][3] = { {12,23.232}, {23.12,23} };
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		cout << arr[i][j] << endl;
	//	}
	//}

	//int arr_A[][3] = { 234,32423,34223 };

	//二维数组名称用途
	//int arr[2][3] =
	//{
	//	{1,2,3},
	//	{4,5,6}
	//};
	//cout << "二维数组占用内存空间为" << sizeof(arr) << endl;
	//cout << "二维数组第一行占用的内存为" << sizeof(arr[0]) << endl;
	//cout << "二维数组第一个元素占用的内存为" << sizeof(arr[0][0]) << endl;

	//cout << "二维数组的首地址为:\t" << int(arr) << endl;
	//cout << "二维数组的第一行首地址为:\t" << int(arr[0]) << endl;
	//cout << "二维数组的第二行首地址为:\t" << int(arr[1]) << endl;
	//cout << "二维数组的第一个元素首地址为:\t" << int(&arr[0][0]) << endl;
	//cout << "二维数组的第二个元素首地址为:\t" << int(&arr[0][1]) << endl;

	//二维数组案例
	int scores[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	string names[] = { "张三","李四","王五" };
	string subjects[] = { "语文","数学","英语" };

	for (int i = 0; i < 3; i++)
	{
		int total = 0;
		cout << names[i] << "的成绩为:";
		for (int j = 0; j < 3; j++)
		{
			cout << subjects[j] << scores[i][j] << "\t";
			total += scores[i][j];
		}
		cout << "总分" << total;
		cout << endl;
	}





	system("pause");
	return 0;
}