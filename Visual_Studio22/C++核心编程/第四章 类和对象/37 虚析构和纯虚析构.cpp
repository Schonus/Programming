//#include <iostream>
//#include <string>
//using namespace std;
//
////虚析构和纯虚析构
//class Animal
//{
//public:
//    Animal() 
//    {
//        cout << "Animal 构造函数调用" << endl;
//    }
//    //virtual ~Animal() 
//    //{
//    //    cout << "Animal 的析构函数调用" << endl;
//    //}
//    virtual ~Animal() = 0;//光写这个可不行，纯虚析构需要被实现
//    virtual void speak() = 0;
//};
//
//Animal :: ~Animal()  //纯虚析构函数的调用和实现
//{
//     cout << "Animal 的纯虚析构函数调用" << endl;
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
//        cout << "Cat 构造函数调用" << endl;
//        m_Name = new string(name);
//    }
//    void speak() 
//    {
//
//        cout << *m_Name << "小猫在说话~" << endl;
//    }
//    string *m_Name;
//    ~Cat()
//    {
//        if (m_Name != NULL)
//        {
//            cout << "Cat 析构函数调用" << endl;
//            delete m_Name;
//            m_Name = NULL;
//        }
//    }
//};
//
////写一个具体的实例
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
