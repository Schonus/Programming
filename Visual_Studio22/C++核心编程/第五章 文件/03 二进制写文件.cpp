//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
////�������ļ� д�ļ�
//class Person
//{
//public:
//	char m_Name[64]; //�Ա�
//	int m_Age; //����
//};
//
//void test01()
//{
//	//1������ͷ�ļ� fstream
//
//	//2������������
//
//	ofstream ofs;
//	//3��ָ���򿪷�ʽ
//	ofs.open("Person.txt", ios::out |  ios::binary);
//
//	//4��д�ļ�
//	Person p = { "����",18 };
//	ofs.write((const char*)&p, sizeof(Person));
//	
//	//5���ر��ļ�
//	ofs.close();
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}