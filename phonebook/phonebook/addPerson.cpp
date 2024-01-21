#define _CRT_SECURE_NO_WARNINGS 1
#include "addPerson.h"
#include "people.cpp"

void addPerson(struct phoneBooks* pbs)
{
	// 判断通讯录是否已满
	if (pbs ->size == MAX)
	{
		cout << "通讯录已满，无法添加！" << endl;
		return;
	}
	else
	{
		// 姓名
		string name;
		cout << "请输入姓名：" ;
		cin >> name;
		pbs->personArray[pbs->size].name = name;
		cout << endl; // 换行

		// 性别
		int sex;
		while (true)
		{
			cout << "1 为男性， 2 为女性" << endl;
			cout << "请输入性别：" ;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				pbs->personArray[pbs->size].sex = sex;
				cout << endl; 
				break;
			}
			cout << "性别有误，请重新输入" << endl;
		}

		// 年龄
		int age;
		cout << "请输入年龄：";
		cin >> age;
		pbs->personArray[pbs->size].age = age;
		cout << endl;

		// 联系方式
		string phone;
		cout << "请输入联系方式：";
		cin >> phone;
		pbs->personArray[pbs->size].phone = phone;
		cout << endl;

		// 住址
		string address;
		cout << "请输入住址：";
		cin >> address;
		pbs->personArray[pbs->size].address = address;
		cout << endl;

		// 通讯录人数变化
		pbs->size++;

		cout << "添加成功，即将返回主界面" << endl;

		system("pause"); // 按任意键继续
		system("cls"); // 清屏
	}
}