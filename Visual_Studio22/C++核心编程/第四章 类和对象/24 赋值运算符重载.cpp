//#include <iostream>
//using namespace std;
//
////�������������
////
//
//
//class Person
//{
//public:
//    Person():m_Age(new int(0)){}
//    Person(int Age) :m_Age(new int(Age)){}
//    int *m_Age;
//    //���� ��ֵ�����
//    Person& operator=(Person& p) 
//    {
//        //Ϊ�˴��뽡׳�Կ��ǣ����ذ�
//        //if��m_Age != NULL��
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
////ȫ�ֺ�������<<��
//ostream& operator<<(ostream &out, Person& p)//��Ϊ����Ǳ��������Կ�����out��ʹcout�Ĺ���
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
//    cout << "p1������Ϊ" << p1 << endl;
//    cout << "p2������Ϊ" << p2 << endl;
//    cout << "p3������Ϊ" << p3 << endl;
//}
//
//int main()
//{
//    test01();
//    system("pause");
//    return 0;
//}
