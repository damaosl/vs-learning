#include<iostream>
using namespace std;

//判断点和圆的关系

class Point {
public:
	void getXY(int x, int y) {
		this->m_X = x;
		this->m_Y = y;
	}
	void printXY() {
		cout << "(" << m_X << "," << m_Y << ")" << endl;
	}

public:
	int m_X;
	int m_Y;
};

class Circle {
	//public:
	//	void getXY_Tow(int x, int y) {
	//		return Center.getXY(x, y);
	//	}
public:
	void getR(int r) {
		this->m_R = r;
	}

private:
	int m_R;
	Point Center;
};

void printCircle(int a, Point b, Point c) {
	int i = a - (std::sqrt((b.m_X - c.m_X)*(b.m_X-c.m_X) + (b.m_Y - c.m_Y)*(b.m_Y - c.m_Y)));
	if (i > 0)
	{
		cout << "圆的坐标是";c.printXY();
		cout << "点的坐标是";b.printXY();
		cout << "在圆的里面" << endl;
	}
	else if (i < 0)
	{
		cout << "圆的坐标是";c.printXY();
		cout << "点的坐标是";b.printXY();
		cout << "在圆的外面" << endl;
	}
	else
	{
		cout << "圆的坐标是";c.printXY();
		cout << "点的坐标是";b.printXY();
		cout << "在圆上" << endl;
	}
}



int main() {
	Circle c1;
	Point p1;
	cout << "请输入圆的半径" << endl;
	int r;
	cin >> r;
	c1.getR(r);
	int c_x;
	int c_y;
	cout << "请输入圆的坐标(x,y)的x值" << endl;
	cin >> c_x;
	cout << "请输入圆的坐标(x,y)的y值" << endl;
	cin >> c_y;
	p1.getXY(c_x, c_y);
	Point p2;
	int x;
	int y;
	cout << "请输入点的坐标(x,y)的x值" << endl;
	cin >> x;
	cout << "请输入点的坐标(x,y)的y值" << endl;
	cin >> y;
	p2.getXY(x, y);
	printCircle(r, p2, p1);





	cin.get();
	return 0;
}