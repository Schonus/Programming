//#include <iostream>
//using namespace std;
//
////��ϵ���������
////
//
//
//class Person
//{
//public:
//    Person() :m_Age(0),m_Name("") {}
//    Person(string Name,int Age) :m_Name(Name),m_Age(Age) {}
//    string m_Name;
//    int m_Age;
//    //���� == ��
//    bool operator==(Person& p) 
//    {
//        //ֱ���жϱ��if��
//        return bool((this->m_Age == p.m_Age) && (this->m_Name == p.m_Name));
//    }
//    //���� != ��
//    bool operator!=(Person& p) 
//    {
//        return bool(!((this->m_Age == p.m_Age) && (this->m_Name == p.m_Name)));
//    }
//    ~Person()
//    {
//    }
//private:
//};
////��д�жϺ������������ø�ʽ�������������ɶ���
//void compare(Person& p1, Person& p2) 
//{
//    if (p1 == p2)
//    {
//        cout << "�����˵���Ϣ���" << endl;
//    }
//    else if (p1 != p2)
//    {
//        cout << "�����˵���Ϣ����" << endl;
//    }
//}
////���еĲ��԰�������һ��
//void test01()
//{
//    Person p1("Tom",18);
//    Person p2("Tom",18);
//    Person p3("Duke",18);
//    Person p4("Tom",20);
//    Person p5("Timmy",22);
//    cout << "p1��p2�Ĺ�ϵ�ǣ�";
//    compare(p1, p2);
//    cout << "p1��p3�Ĺ�ϵ�ǣ�";
//    compare(p1, p3);
//    cout << "p1��p4�Ĺ�ϵ�ǣ�";
//    compare(p1, p4);
//    cout << "p1��p5�Ĺ�ϵ�ǣ�";
//    compare(p1, p5);
//    
//}
//
//int main()
//{
//    test01();
//    system("pause");
//    return 0;
//}
