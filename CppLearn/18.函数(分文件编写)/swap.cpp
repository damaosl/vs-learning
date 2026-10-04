#include"swap.h"


void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	
	cout << "a的值:" << a << endl;
	cout << "b的值:" << b << endl;
};