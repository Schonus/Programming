//#include <iostream>
//using namespace std;
//
////加号运算符重载
//class Person
//{
//public:
//    //1.成员函数重载+号
//    //Person operator+(Person& p) 
//    //{
//    //    Person temp;
//    //    temp.m_A = this->m_A + p.m_A;
//    //    temp.m_B = this->m_B + p.m_B;
//    //    return temp;
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
//Person operator+(Person& p1, Person& p2)
//{
//    Person temp;
//    temp.m_A = p1.m_A + p2.m_A;
//    temp.m_B = p1.m_B + p2.m_B;
//    return temp;
//}
//
//void test01() 
//{
//    Person p1(10,10);
//    Person p2(10,10);
//    Person p3 = p1 + p2;//在没有重定义的情况下，这句语句就是错误的
//    cout << "p3的m_A = " << p3.m_A << endl;
//    cout << "p3的m_B = " << p3.m_B << endl;
//}
//
//int main()
//{
//    test01();
//    system("pause");
//    return 0;
//}
