//#include <iostream>
//using namespace std;
//
////递增运算符重载
//class MyInteger
//{
//    friend ostream& operator<<(ostream& out, MyInteger myint);
//
//public:
//    MyInteger() 
//    {
//        m_Num = 0;
//    }
//    //前置++
//    MyInteger& operator++() //采用引用是因为要对    一个数据    进行操作
//    {
//        m_Num++;
//        return *this;
//    }
//    //后置++
//    MyInteger operator++(int) //这个必须返回引用，否则就返回m_Num
//    {
//        MyInteger temp = *this;//记录当前本身的值，但是返回原来的值
//        m_Num++;
//        return *this;
//    }
//private:
//    int m_Num;
//};
//
////重载<<运算符 
//ostream& operator<<(ostream& out, MyInteger myint)//因为起的是别名，所以可以用out行使cout的功能
//{
//    out << myint.m_Num;
//    return out;
//}
//
//
//void test01()
//{
//    MyInteger myInt;
//    cout << myInt << endl;
//    cout << ++myInt << endl;
//    cout << myInt++ << endl;
//    cout << myInt << endl;
//
//}
//
//int main()
//{
//    test01();
//    system("pause");
//    return 0;
//}
