#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//�������ļ� ���ļ�
class Person
{
public:
	char m_Name[64]; //�Ա�
	int m_Age; //����
};

void test01()
{
	//1������ͷ�ļ� fstream

	//2������������

	ifstream ifs;
	//3��ָ���򿪷�ʽ
	ifs.open("Person.txt", ios::in | ios::binary);

	if (!ifs.is_open()) 
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//4�����ļ�
	Person p = { "����",18 };
	ifs.read((char*)&p, sizeof(Person));
	cout << "������" << p.m_Name << endl << "�Ա�" << p.m_Age << endl;

	//5���ر��ļ�
	ifs.close();

}

int main()
{
	test01();
	system("pause");
	return 0;
}