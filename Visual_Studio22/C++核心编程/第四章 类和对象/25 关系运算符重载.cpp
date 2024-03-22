//#include <iostream>
//using namespace std;
//
////关系运算符重载
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
//    //重载 == 号
//    bool operator==(Person& p) 
//    {
//        //直接判断别加if了
//        return bool((this->m_Age == p.m_Age) && (this->m_Name == p.m_Name));
//    }
//    //重载 != 号
//    bool operator!=(Person& p) 
//    {
//        return bool(!((this->m_Age == p.m_Age) && (this->m_Name == p.m_Name)));
//    }
//    ~Person()
//    {
//    }
//private:
//};
////单写判断函数，采用引用格式，不想另外生成对象
//void compare(Person& p1, Person& p2) 
//{
//    if (p1 == p2)
//    {
//        cout << "两个人的信息相等" << endl;
//    }
//    else if (p1 != p2)
//    {
//        cout << "两个人的信息不等" << endl;
//    }
//}
////所有的测试案例都搞一遍
//void test01()
//{
//    Person p1("Tom",18);
//    Person p2("Tom",18);
//    Person p3("Duke",18);
//    Person p4("Tom",20);
//    Person p5("Timmy",22);
//    cout << "p1和p2的关系是：";
//    compare(p1, p2);
//    cout << "p1和p3的关系是：";
//    compare(p1, p3);
//    cout << "p1和p4的关系是：";
//    compare(p1, p4);
//    cout << "p1和p5的关系是：";
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
