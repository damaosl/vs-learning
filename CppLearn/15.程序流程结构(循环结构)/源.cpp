#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
	//srand((unsigned int)time(NULL));
	//while循环
	//int a = 0;
	//while (a <= 10) {
	//	cout << a << endl;
	//	a++;
	//}

	//猜数字
	//int a = 0;
	//a =rand() % 100+1;
	//int val = 0;
	//int c = 0;
	//cout << "猜数字小游戏：随机生成数字a(1-100),随机输入一个值，猜对停止" << endl;


	//while (true) {
	//	cout << "请输入您的值" << endl;
	//	cin >> val;
	//	c++;
	//	if (val >a)
	//	{
	//		cout << "结果过大" << endl;
	//	}
	//	else if (val < a)
	//	{
	//		cout << "结果过小" << endl;
	//	}
	//	else if (val == a)
	//	{
	//		cout << "结果正确,您总共猜了" <<c<<"次"<< endl;
	//		break;
	//	}
	//}

	//do while语句
	//int num = 0;
	//do { cout << num << endl; num++; } while (num < 10);

	//do while案例水仙花数
	//int d = 100;
	//
	//while (d < 1000) {
	//	int a = d/ 100 ;
	//	int b = d / 10 % 10 ;
	//	int c = d % 10;
	//	if ((a*a*a+b*b*b+c*c*c)==(a*100+b*10+c))
	//	{
	//		cout << a*100+b*10+c << endl;
	//	}
	//	d++;
	//}

	//for循环语句
	//for (int i = 1;i < 10;i++) {
	//	cout << i << endl;
	//}
	
	//案例拍桌子
	//for (int i = 1; i <= 100; i++)
	//{
	//	
	//	if (i%10 == 7 || i % 7 == 0||(i/10)%10==7) {
	//		cout << "敲桌子" << endl;
	//	}
	//	else
	//	{
	//		cout << i << endl;
	//	}
	//}

	//嵌套循环
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << "*" << i << "=" << i*j << "\t" ;
		}
		cout << "\n";
	}

	


	system("pause");
	return 0;
}