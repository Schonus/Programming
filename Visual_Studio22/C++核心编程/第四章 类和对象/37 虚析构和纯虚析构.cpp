//#include <iostream>
//#include <string>
//using namespace std;
//
////�������ʹ�������
//class Animal
//{
//public:
//    Animal() 
//    {
//        cout << "Animal ���캯������" << endl;
//    }
//    //virtual ~Animal() 
//    //{
//    //    cout << "Animal ��������������" << endl;
//    //}
//    virtual ~Animal() = 0;//��д����ɲ��У�����������Ҫ��ʵ��
//    virtual void speak() = 0;
//};
//
//Animal :: ~Animal()  //�������������ĵ��ú�ʵ��
//{
//     cout << "Animal �Ĵ���������������" << endl;
//}
//
//class Cat : public Animal
//{
//public:
//    Cat()
//    {
//
//    }
//    Cat(string name) 
//    {
//        cout << "Cat ���캯������" << endl;
//        m_Name = new string(name);
//    }
//    void speak() 
//    {
//
//        cout << *m_Name << "Сè��˵��~" << endl;
//    }
//    string *m_Name;
//    ~Cat()
//    {
//        if (m_Name != NULL)
//        {
//            cout << "Cat ������������" << endl;
//            delete m_Name;
//            m_Name = NULL;
//        }
//    }
//};
//
////дһ�������ʵ��
//void test01()
//{
//    Animal *animal = new Cat("Tommy");
//    animal->speak();
//    delete animal;
//};
//
//int main()
//{
//    test01();
//    system("pause");
//    return 0;
//}
