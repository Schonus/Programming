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
//    mutable int m_B;//����������ڳ���������Ȼ���޸�
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
////������
//
//void test02() 
//{
//    Person const p2;//�ڶ���ǰ��const����ɳ�����
//    //p2.m_A = 100;//���ܸ�������ĳ�Ա��ֵ
//    p2.m_B = 7890;//�ڳ�������Ҳ�����޸�mutable������ֵ
//    //������ֻ�ܵ��ó�����
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
