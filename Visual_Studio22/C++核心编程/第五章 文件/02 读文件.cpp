//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
////�ı��ļ� ���ļ�
//
//void test01()
//{
//	//1������ͷ�ļ� fstream
//
//	//2������������
//
//	ifstream ifs;
//	//3��ָ���򿪷�ʽ
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open()) 
//	{
//		cout << "�ļ���ʧ�ܣ�" << endl;
//		return;
//	}
//
//
//	//4��������
//	// ��һ�ַ�ʽ
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//// �ڶ��ַ�ʽ
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf,sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//// �����ַ�ʽ
//	//string buf;
//	//while (getline(ifs,buf))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	// �����ַ�ʽ
//	char c;
//	while ( (c = ifs.get()) != EOF ) 
//	{
//		cout << c;
//	}
//
//	//5���ر��ļ�
//	ifs.close();
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}