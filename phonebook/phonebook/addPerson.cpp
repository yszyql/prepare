#define _CRT_SECURE_NO_WARNINGS 1
#include "addPerson.h"
#include "people.cpp"

void addPerson(struct phoneBooks* pbs)
{
	// �ж�ͨѶ¼�Ƿ�����
	if (pbs ->size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	}
	else
	{
		// ����
		string name;
		cout << "������������" ;
		cin >> name;
		pbs->personArray[pbs->size].name = name;
		cout << endl; // ����

		// �Ա�
		int sex;
		while (true)
		{
			cout << "1 Ϊ���ԣ� 2 ΪŮ��" << endl;
			cout << "�������Ա�" ;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				pbs->personArray[pbs->size].sex = sex;
				cout << endl; 
				break;
			}
			cout << "�Ա���������������" << endl;
		}

		// ����
		int age;
		cout << "���������䣺";
		cin >> age;
		pbs->personArray[pbs->size].age = age;
		cout << endl;

		// ��ϵ��ʽ
		string phone;
		cout << "��������ϵ��ʽ��";
		cin >> phone;
		pbs->personArray[pbs->size].phone = phone;
		cout << endl;

		// סַ
		string address;
		cout << "������סַ��";
		cin >> address;
		pbs->personArray[pbs->size].address = address;
		cout << endl;

		// ͨѶ¼�����仯
		pbs->size++;

		cout << "��ӳɹ�����������������" << endl;

		system("pause"); // �����������
		system("cls"); // ����
	}
}