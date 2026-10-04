#include<iostream>
using namespace std;

int main() {
	//加减乘除
	int a1 = 10;
	int a2 = 4;
	int a3 = 0;
	cout << a1 + a2 << endl;
	cout << a1 - a2 << endl;
	cout << a1 * a2 << endl;
	cout << a1 / a2 << endl;
	cout << a2 / a1 << endl;
	cout << a3 / a1 << endl;
	//cout << a1 / a3 << endl;
	//除数不能为零
	cout << a1 % a2 << endl;
	cout << a2 % a1 << endl;
	//cout << a1 % a3 << endl;

	double d1 = 0.5;
	double d2 = 0.25;
	cout << d1 / d2 << endl;
	//cout << d1 % d2 << endl;需为整数

	//递增递减运算符
	int c = ++a1;
	int d = a1++;
	cout << c << endl;
	cout << d << endl;
	int z = 10;
	int f = z++ * 2;
	//int e = ++z * 2;
	cout << z << endl;
	cout << f << endl;
	//cout << e << endl;
	//赋值运算符
	int i = 10;
	i += 10;
	cout << "i=" << i << endl;
	int i2 = 10;
	i2 -= 10;
	cout << "i2=" << i2 << endl;
	int i3 = 10;
	i3 *= 10;
	cout << "i3=" << i3 << endl;
	int i4 = 10;
	i4 /= 10;
	cout << "i4=" << i4 << endl;
	int i5 = 10;
	i5 %= 3;
	cout << "i5=" << i5 << endl;

	//比较运算符
	int i6 = 10;
	int i7 = 5;
	cout << (i6 != i7) << endl;
	cout << (i6 == i7) << endl;
	cout << (i6 < i7) << endl;
	cout << (i6 > i7) << endl;
	cout << (i6 >= i7) << endl;
	cout << (i6 <= i7) << endl;

	//逻辑运算符
	bool flag = true;
	bool flag2 = false;
	cout << !flag << endl;
	cout << (flag && flag2) << endl;
	cout << (flag || flag2) << endl;

	system("pause");
	return 0;
}