//#include <iostream>
//using namespace std;
//
////�Ӻ����������
//class Person
//{
//public:
//    //1.��Ա��������<<������������ԣ���Ϊ����д��cout<<p�ĸ�ʽ��
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
////2.ȫ�ֺ�������+��
//ostream& operator<<(ostream &out, Person p)//��Ϊ����Ǳ��������Կ�����out��ʹcout�Ĺ���
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
