#include<iostream>
using namespace std;
#include<cstdlib>
#define MAX 1000

void showMen() {
	cout <<
		"********************\n"
		"*** 1.添加联系人 ***\n"
		"*** 2.显示联系人 ***\n"
		"*** 3.删除联系人 ***\n"
		"*** 4.查找联系人 ***\n"
		"*** 5.修改联系人 ***\n"
		"*** 6.清空联系人 ***\n"
		"*** 0.退出通讯录 ***\n"
		"********************\n";
}

struct tongxunlushujuku
{
	string name;
	int age;
	string xingbie;
	int sjh;
	string address;
};

void printTxl(tongxunlushujuku t[], int len) {
	for (int i = 0; i <= len; i++)
	{
		cout << "姓名: " << t[i].name << "\t年龄: " << t[i].age << "\t性别: " << t[i].xingbie << "\t手机号: " << t[i].sjh << "\t地址: " << t[i].address << endl;
	}
}

void txlsc(tongxunlushujuku t[], string name, int& z) {
	int  index = -1;
	for (int i = 0; i <= z; i++)
	{
		if (name == t[i].name)
		{
			index = i;
			break;
		}
	}
	if (index == -1)
	{
		cout << "查无此人" << endl;
		return;
	}
	for (int i = index; i < z; i++)
	{
		t[i] = t[i + 1];
	}
	z--;
	cout << "删除成功" << endl;

}

void txlcz(tongxunlushujuku t[], string name, int z) {
	if (z == -1)
	{
		cout << "未添加联系人" << endl;
		return;
	}
	int index = -1;
	for (int i = 0; i <= z; i++)
	{
		if (name == t[i].name)
		{
			cout << "姓名: " << t[i].name << "\t年龄: " << t[i].age << "\t性别: " << t[i].xingbie << "\t手机号: " << t[i].sjh << "\t地址: " << t[i].address << endl;
			return;
		}
	}
	cout << "查无此人" << endl;
}

void txlxg(tongxunlushujuku t[], tongxunlushujuku t1[], int z, string name) {
	int index = 0;
	for (int i = 0; i <= z; i++)
	{
		if (t[i].name == name)
		{
			t[i] = t1[0];
			cout << "修改成功" << endl;
			return;
		}
		index++;
	}
	cout << "查无此人" << endl;
}

void qk(int *i) {
	*i = -1;
}

int main()
{

	struct tongxunlushujuku txl[MAX];
	struct tongxunlushujuku txlXg[1];

	string xgname = "";
	string cinName = "";
	int i = -1;
	while (true)
	{

		showMen();
		int select = 0;
		cin >> select;
		switch (select)
		{
		case 0:
			cout << "感谢使用!" << endl;
			system("pause");return 0; break;//退出
		case 1:
			if (i == (MAX - 1))
			{
				cout << "通讯录已满" << endl;
			}
			else
			{
				i++;
				cout << "请输入姓名" << endl;
				cin >> txl[i].name;
				cout << "请输入性别(男/女)" << endl;
				while (true)
				{
					cin >> txl[i].xingbie;
					if (txl[i].xingbie == "男" || txl[i].xingbie == "女")
					{
						break;
					}
					else
					{
						cout << "请重新输入" << endl;
						
					}
				}
				cout << "请输入年龄" << endl;
				while (true)
				{
					cin >> txl[i].age;
					if (txl[i].age > 0)
					{
						break;
					}
					else
					{
						cout << "请重新输入" << endl;
					}
				}

				cout << "请输入手机号" << endl;
				cin >> txl[i].sjh;break;
				//while (true)
				//{
				//	cin >> txl[i].sjh;
				//	if (txl[i].sjh < 10000000000 && txl[i].sjh >= 0)
				//	{
				//		break;
				//	}
				//	else
				//	{
				//		cout << "请重新输入" << endl;
				//	}
				//}

				cout << "请输入地址" << endl;
				cin >> txl[i].address;
				cout << "添加成功" << endl;
			};

			system("pause");
			system("cls");
			break;//添加
		case 2:
			if (i == -1)
			{
				cout << "没有联系人" << endl;
			}
			else
			{
				printTxl(txl, i);
			};
			system("pause");
			system("cls");
			break;//显示
		case 3:
			cout << "请输入要删除的联系人姓名" << endl;
			cin >> cinName;
			txlsc(txl, cinName, i);
			system("pause");
			system("cls");
			break;//删除
		case 4:
			cout << "请输入要查找的联系人姓名" << endl;
			cin >> cinName;
			txlcz(txl, cinName, i);
			system("pause");
			system("cls");
			break;//查找
		case 5:
			cout << "请输入要修改的联系人" << endl;
			cin >> xgname;
			cout << "请输入修改后的姓名:" << endl;
			cin >> txlXg[0].name;
			cout << "请输入修改后的性别:" << endl;
			cin >> txlXg[0].xingbie;
			cout << "请输入修改后的年龄:" << endl;
			cin >> txlXg[0].age;
			cout << "请输入修改后的地址:" << endl;
			cin >> txlXg[0].address;
			cout << "请输入修改后的电话号码:" << endl;
			cin >> txlXg[0].sjh;
			txlxg(txl, txlXg, i, xgname);
			system("pause");
			system("cls");
			break;//修改
		case 6:
			qk(&i);
			cout << "清空成功" << endl;
			system("pause");
			system("cls");
			break;//清空
		default:cout << "格式错误" << endl;
			system("pause");
			system("cls");
			break;
		}
	}








	system("pause");
	return 0;
}