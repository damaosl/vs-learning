#include<iostream>
using namespace std;

int main() {
	//整型
	int a = 0;
	cout << "请给整型变量a赋值" << endl;
	cin >> a;
	cout << "a的值为" << a << endl;
	
	//浮点型
	float f = 3.14;
	cout << "请给浮点型变量f赋值" << endl;
	cin >> f;
	cout << "f的值为" << f << endl;
	
	//字符型
	char ch = 'a';
	cout << "请给字符型变量ch赋值" << endl;
	cin >> ch;
	cout << "ch的值为" << ch << endl;

	//字符串型
	string str = "hello world";
	cout << "请给字符串型变量str赋值" << endl;
	cin >> str;
	cout << "str的值为" << str << endl;

    //布尔型,只要是非0的值都为真
	bool bl = true;
	cout << "请给布尔型bl赋值" << endl;
	cin >> bl;
	cout << "bl的值为" << bl << endl;

	system("pause");
	return 0;
}