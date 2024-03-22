//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//    void function() 
//    {
//
//    }
//    void showPerson() const // = const Person* const this
//    {
//        this->m_B = 200;
//        cout << "this->m_B = " << this->m_B << endl;
//        //this->m_A = 100;
//        //this = NULL;
//    }
//    int m_A;
//    mutable int m_B;//特殊变量，在常函数中仍然能修改
//private:
//
//};
//
//void test01() 
//{
//    Person p1;
//    p1.showPerson();
//}
//
////常对象
//
//void test02() 
//{
//    Person const p2;//在对象前加const，变成常对象
//    //p2.m_A = 100;//不能给常对象的成员赋值
//    p2.m_B = 7890;//在常对象中也可以修改mutable变量的值
//    //常对象只能调用常函数
//    //p2.function();
//}
//
//
//
//int main()
//{
//    test01();
//    system("pause");
//    return 0;
//}
