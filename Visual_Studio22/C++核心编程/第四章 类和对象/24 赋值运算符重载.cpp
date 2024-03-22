//#include <iostream>
//using namespace std;
//
////递增运算符重载
////
//
//
//class Person
//{
//public:
//    Person():m_Age(new int(0)){}
//    Person(int Age) :m_Age(new int(Age)){}
//    int *m_Age;
//    //重载 赋值运算符
//    Person& operator=(Person& p) 
//    {
//        //为了代码健壮性考虑？不必吧
//        //if（m_Age != NULL）
//        //{
//        //    delete m_Age;
//        //    m_Age = NULL;
//        //}
//        *(this->m_Age) = *(p.m_Age);
//        return *this;
//    }
//    ~Person() 
//    {
//        if (m_Age != NULL)
//        {
//            delete m_Age;
//            m_Age = NULL;
//        }
//    }
//private:
//};
//
////全局函数重载<<号
//ostream& operator<<(ostream &out, Person& p)//因为起的是别名，所以可以用out行使cout的功能
//{
//    out << *(p.m_Age);
//    return out;
//}
//
//void test01()
//{
//    Person p1(10);
//    Person p2(20); 
//    Person p3(30);
//    p1 = p2 = p3;
//    cout << "p1的年龄为" << p1 << endl;
//    cout << "p2的年龄为" << p2 << endl;
//    cout << "p3的年龄为" << p3 << endl;
//}
//
//int main()
//{
//    test01();
//    system("pause");
//    return 0;
//}
