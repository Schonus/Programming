//#include <iostream>
//using namespace std;
//
////加号运算符重载
//class Person
//{
//public:
//    //1.成员函数重载<<运算符（不可以，因为不能写成cout<<p的格式）
//    //Person operator<<(Person& p) 
//    //{
//    //}
//    Person()
//    {
//        m_A = 0;
//        m_B = 0;
//    };
//    Person(int A, int B) :m_A(A), m_B(B) {}
//    int m_A;
//    int m_B;
//private:
//};
//
////2.全局函数重载+号
//ostream& operator<<(ostream &out, Person p)//因为起的是别名，所以可以用out行使cout的功能
//{
//    out << "m_A = " << p.m_A  << endl << "m_B = " << p.m_B;
//    return out;
//}
//
//void test01()
//{
//    Person p1(10, 10);
//    Person p2(10, 10);
//    cout << p1 << endl;
//}
//
//int main()
//{
//    test01();
//    system("pause");
//    return 0;
//}
