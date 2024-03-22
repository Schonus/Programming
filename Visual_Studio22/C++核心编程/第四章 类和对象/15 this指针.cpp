//#include <iostream>
//using namespace std;
//
////成员函数和成员变量是分开存储的
//
//class Person
//{
//public:
//	int age;
//	Person() 
//	{
//		this->age = 0;
//	}
//	Person(int age) 
//	{
//		this->age = age;
//	}
//	Person& addnum(Person p) 
//	{
//		this, age += p.age;
//		return *this;
//	}
//private:
//
//};
//
////调用
//void test01()
//{
//	Person p1(18);
//	cout << "p1的年龄为" << p1.age << endl;
//	Person p2(10);
//	p2.addnum(p1).addnum(p1).addnum(p1);
//	cout << "p2的年龄为" << p2.age << endl;
//}
//void test02()
//{
//}
//
//int main() {
//	test01();
//	//test02();
//
//	system("pause");
//	return 0;
//}