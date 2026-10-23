#include<iostream>
using namespace std;

////建筑物类
//class Building
//{
//	//friend全局函数做友元
//	friend void goodGay(Building* building);
//
//public:
//	Building()
//	{
//		m_SittingRoom = "客厅";
//		m_BedRoom = "卧室";
//	}
//
//public:
//	string m_SittingRoom;//客厅
//
//private:
//	string m_BedRoom;//卧室
//};
//
//void goodGay(Building* building)
//{
//	cout << "好基友的全局函数正在访问：" << building->m_SittingRoom << endl;
//	cout << "好基友的全局函数正在访问：" << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	Building b1;
//	goodGay(&b1);
//}

//类做友元
//class Building;
//class GoodGay
//{
//public:
//
//	void visit();
//	GoodGay();
//	Building* building;
//
//};
//
//class Building
//{
//	friend class GoodGay;
//	
//public:
//	Building();
//
//public:
//	string m_SittingRoom;//客厅
//
//private:
//	string m_BedRoom;//卧室
//
//};
//
//Building::Building()
//{
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << "好基友这个类正在访问:" << building->m_SittingRoom << endl;
//	cout << "好基友这个类正在访问:" << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//}

//成员函数做友元
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	Building* building;
//	void visit();
//	void visit2();
//};
//class Building
//{
//	friend void GoodGay::visit();
//	
//public:
//	Building();
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
//
//Building::Building()
//{
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << "visit函数正在访问:" << building->m_SittingRoom << endl;
//	cout << "visit函数正在访问:" << building->m_BedRoom << endl;
//};
//void GoodGay::visit2()
//{
//	cout << "visit2函数正在访问:" << building->m_SittingRoom << endl;
//	//cout << "visit2函数正在访问:" << building->m_BedRoom << endl;
//};
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//	gg.visit2();
//}

int main()
{
	//test01();


	cin.get();
}