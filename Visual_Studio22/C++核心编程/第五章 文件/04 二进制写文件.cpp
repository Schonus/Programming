#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//二进制文件 读文件
class Person
{
public:
	char m_Name[64]; //性别
	int m_Age; //年龄
};

void test01()
{
	//1、包含头文件 fstream

	//2、创建流对象

	ifstream ifs;
	//3、指定打开方式
	ifs.open("Person.txt", ios::in | ios::binary);

	if (!ifs.is_open()) 
	{
		cout << "文件打开失败" << endl;
		return;
	}
	//4、读文件
	Person p = { "张三",18 };
	ifs.read((char*)&p, sizeof(Person));
	cout << "姓名：" << p.m_Name << endl << "性别：" << p.m_Age << endl;

	//5、关闭文件
	ifs.close();

}

int main()
{
	test01();
	system("pause");
	return 0;
}