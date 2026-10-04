#include<iostream>
using namespace std;

int main() {
	float num1 = 3.14f;
	double num2 = 3.14;
	cout << "num1="<<num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << sizeof(num2) << endl;
	float num3 = 3e2;
	cout << "num3=" << num3 << endl;
	float num4 = 3e-2;
	cout << "num4=" << num4 << endl;

	system("pause");
	return 0;
}