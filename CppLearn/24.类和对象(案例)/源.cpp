#include<iostream>
using namespace std;

//要求，用全局函数和成员函数计算两个立方体的体积和面积是否相等


class Cube {
private:
	int m_L = 0;
	int m_H = 0;
	int m_W = 0;

public:
	void getLHW(int L, int H, int W) {
		this->m_L = L;
		this->m_H = H;
		this->m_W = W;
	}
	int TiJ() {
		int tij = m_L * m_H * m_W;
		return tij;
	}
	int MianJ() {
		int mianj = m_L * m_H * 6;
		return mianj;
	}
};

void and_Tj(int a, int b) {
	cout << "立方体1的体积为:" << a << "\t立方体2的体积为:" << b << endl;
	a == b ? (cout << "相等" << endl) : (cout << "不相等" << endl);
}

void and_Mj(int a, int b) {
	cout << "立方体1的总面积为:" << a << "\t立方体2的总面积为:" << b << endl;
	a == b ? (cout << "相等" << endl) : (cout << "不相等" << endl);
}


int main() {

	int L;
	int H;
	int W;

	cout << "请输入立方体1的底边长度" << endl;
	cin >> L;
	cout << "请输入立方体1的高边长度" << endl;
	cin >> H;
	cout << "请输入立方体1的宽边长度" << endl;
	cin >> W;

	Cube c1;
	c1.getLHW(L, H, W);
	cout << "请输入立方体2的底边长度" << endl;
	cin >> L;
	cout << "请输入立方体2的高边长度" << endl;
	cin >> H;
	cout << "请输入立方体2的宽边长度" << endl;
	cin >> W;

	Cube c2;
	c2.getLHW(L, H, W);
	and_Tj(c1.TiJ(), c2.TiJ());
	and_Mj(c1.MianJ(), c2.MianJ());



	system("pause");
	return 0;
}