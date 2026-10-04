#include<iostream>
using namespace std;

int main() {
	//break语句
	//cout << "请选择你的副本难度" << endl;
	//cout << "1，普通" << endl;
	//cout << "2，中等" << endl;
	//cout << "3，困难" << endl;
	//cout << "4，炼狱" << endl;
	//int select = 0;
	//cout << "等待用户输入" << endl;
	//cin >> select;

	//switch (select) {
	//case 1:cout << "普通难度" << endl;break;
	//case 2:cout << "中等难度" << endl;break;
	//case 3:cout << "困难难度" << endl;break;
	//case 4:cout << "炼狱难度" << endl;break;
	//}

	//用在循环语句
	//for (int i = 0; i < 10; i++)
	//{
	//	for (int j = 0; j <= i; j++) {
	//		cout << "*";
	//		if (j == 5)
	//		{
	//			break;
	//		}
	//	}
	//	cout << endl;
	//}


	//continue语句 不会退出循环，会执行下一次循环

	//for (int i = 0; i < 100; i++)
	//{
	//	if (i % 2 == 0) {
	//		continue;
	//	}
	//	cout << i << endl;
	//}
	
	//goto语句 语法：goto 标记
		cout << "1.xxx" << endl;
		goto Flag;
		cout << "2.xxx" << endl;
		cout << "3.xxx" << endl;
		Flag : cout << "4.xxx" << endl;
		cout << "5.xxx" << endl;



	system("pause");
	return 0;
}