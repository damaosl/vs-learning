#include<iostream>
using namespace std;

int main() {
	//顺序结构
	//选择结构
	//循环结构
	//string str = "";
	//int a = 0;
	//cout << "请输入账号" << endl;
	//cin >> str;
	//cout << "请输入密码" << endl;
	//cin >> a;
	//if (str=="Tom" && a == 123456)
	//{
	//	cout <<str<< "登陆成功" << endl;
	//}
	//else if(str=="小明"&&a==123456)
	//{
	//	cout <<str<< "登陆成功" << endl;
	//}
	//else
	//{
	//	cout << "账号或密码错误" << endl;
	//}

	//嵌套if
	//int score = 0;
	//cout << "请输入您的高考分数" << endl;
	//cin >> score;
	//cout << "您的高考分数是" << score << endl;
	//if (750>=score>=600)
	//{
	//	cout << "恭喜您考入一本大学" << endl;
	//	if (score>=700)
	//	{
	//		cout << "恭喜您考入北大" << endl;
	//	}
	//	else if (score >= 650)
	//	{
	//		cout << "恭喜您考入清华" << endl;
	//	}
	//	else
	//	{
	//		cout << "恭喜您考入人大" << endl;
	//	}
	//}
	//else if (600>score >= 500) 
	//{
	//	cout << "恭喜您考上二本" << endl;
	//}
	//else if (500>score >= 400) 
	//{	
	//	cout << "恭喜您考上三本" << endl;
	//}
	//else if(score<400)
	//{
	//	cout << "大专耍起！！！" << endl;
	//}
	//else
	//{
	//	cout << "分数异常" << endl;
	//}

	//案例
	//int pig1 = 0;
	//int pig2 = 0;
	//int pig3 = 0;
	//cout << "农场有三只小猪pig1，pig2，pig3，请您分别输入三只小猪的体重(单位：kg)，随后将依照体重进行从重到轻排列" << endl;
	//cout << "请输入pig1的体重" << endl;
	//cin >> pig1;
	//cout << "请输入pig2的体重" << endl;
	//cin >> pig2;
	//cout << "请输入pig3的体重" << endl;
	//cin >> pig3;
	//if (pig1 > pig2 && pig1 > 0 && pig2 > 0 && pig3 > 0) {
	//	if (pig3 > pig1) {
	//		cout << "pig3>pig1>pig2" << endl;
	//	}
	//	else if (pig3 < pig2)
	//	{
	//		cout << "pig1>pig2>pig3" << endl;
	//	}
	//	else if(pig2<pig3<pig1)
	//	{
	//		cout << "pig1>pig3>pig2" << endl;
	//	}
	//	else if(pig3==pig1)
	//	{
	//		cout << "pig3=pig1>pig2" << endl;
	//	}
	//	else if(pig3==pig2)
	//	{
	//		cout << "pig1>pig2=pig3" << endl;
	//	}
	//	else
	//	{
	//		cout << "体重异常";
	//	}
	//}
	//else if(pig2>pig1 && pig1 > 0 && pig2 > 0 && pig3 > 0)
	//{
	//	if (pig3>pig2)
	//	{
	//		cout << "pig3>pig2>pig1" << endl;
	//	}
	//	else if (pig2 > pig3 > pig1)
	//	{
	//		cout << "pig2>pig3>pig1" << endl;
	//	}
	//	else if(pig3<pig1)
	//	{
	//		cout << "pig2>pig1>pig3" << endl;
	//	}
	//	else
	//	{
	//		cout << "体重异常" << endl;
	//	}
	//}
	//else if(pig1==pig2&&pig1>0&&pig2>0&&pig3>0)
	//{
	//	if (pig3 == pig1)
	//	{
	//		cout << "pig3=pig2=pig1" << endl;
	//	}
	//	else if(pig3>pig1)
	//	{
	//		cout << "pig3>pig1=pig2" << endl;
	//	}
	//	else if(pig3<pig1)
	//	{
	//		cout << "pig1=pig2>pig3" << endl;
	//	}
	//	else
	//	{
	//		cout << "体重异常" << endl;
	//	}
	//}
	//else if(pig1<=0||pig2<=0||pig3<=0)
	//{
	//	cout << "体重异常" << endl;
	//}

	//三目运算符
	//int a = 10;
	//int b = 20;
	//int c = 0;
	//c = a > b ? a : b;
	//cout << c << endl;
	//( a < b ? a : b)=100;
	//cout << a << "\t" << b << endl;
	
	//switch语句
	cout << "请您给今天观看的电影进行评分(1-10分)" << endl;
	int score = 0;
	cin >> score;
	cout << "您的评分为" << score << endl;
	switch(score){
	case 10:
		cout << "您认为是部经典电影" << endl;break;
	case 9:
		cout << "您认为是部经典电影" << endl;break;
	case 8:
		cout << "您认为电影非常好" << endl;break;
	case 7:
		cout << "您认为电影非常好" << endl;break;
	case 6:
		cout << "您认为电影很一般" << endl;break;
	case 5:
		cout << "您认为电影很一般" << endl;break;
	default:
		cout << "您认为这是一部烂片" << endl;break;
	}
	//switch智能判断整型和字符型，不可以是一个区间



	system("pause");
	return 0;
}