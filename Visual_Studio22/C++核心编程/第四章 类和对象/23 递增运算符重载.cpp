//#include <iostream>
//using namespace std;
//
////�������������
//class MyInteger
//{
//    friend ostream& operator<<(ostream& out, MyInteger myint);
//
//public:
//    MyInteger() 
//    {
//        m_Num = 0;
//    }
//    //ǰ��++
//    MyInteger& operator++() //������������ΪҪ��    һ������    ���в���
//    {
//        m_Num++;
//        return *this;
//    }
//    //����++
//    MyInteger operator++(int) //������뷵�����ã�����ͷ���m_Num
//    {
//        MyInteger temp = *this;//��¼��ǰ�����ֵ�����Ƿ���ԭ����ֵ
//        m_Num++;
//        return *this;
//    }
//private:
//    int m_Num;
//};
//
////����<<����� 
//ostream& operator<<(ostream& out, MyInteger myint)//��Ϊ����Ǳ��������Կ�����out��ʹcout�Ĺ���
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
