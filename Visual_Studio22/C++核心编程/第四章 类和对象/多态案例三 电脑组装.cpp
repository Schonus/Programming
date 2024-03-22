#include <iostream>
#include <string>
using namespace std;

//抽象的类
class AbstractCPU
{
public:
    //抽象的计算函数
    virtual void calculate() = 0;
};

class AbstractVideoCard
{
public:
    //抽象的显示函数
    virtual void display() = 0;
};

class AbstractMemory
{
public:
    //抽象的存储函数
    virtual void storage() = 0;
};


//具体的类
class IntelCPU :public AbstractCPU
{
    IntelCPU() 
    {
        cout << "Intel的CPU开始计算了" << endl;
    }
};

class IntelVideoCard :public AbstractVideoCard
{
    IntelVideoCard()
    {
        cout << "Intel的显卡开始计算了" << endl;
    }
};



//class ADMCPU :public AbstractCPU
//{
//    ADMCPU() 
//    {
//        cout << "ADM的CPU开始计算了" << endl;
//    }
//};

class LenovoCPU :public AbstractCPU
{
    LenovoCPU() 
    {
        cout << "联想的CPU开始计算了" << endl;
    }
};

class

class Computer :public AbstractCPU
{
public:
    void Working()
    {

    }
};

Animal :: ~Animal()  //纯虚析构函数的调用和实现
{
    cout << "Animal 的纯虚析构函数调用" << endl;
}

class Cat : public Animal
{
public:
    Cat()
    {

    }
    Cat(string name)
    {
        cout << "Cat 构造函数调用" << endl;
        m_Name = new string(name);
    }
    void speak()
    {

        cout << *m_Name << "小猫在说话~" << endl;
    }
    string* m_Name;
    ~Cat()
    {
        if (m_Name != NULL)
        {
            cout << "Cat 析构函数调用" << endl;
            delete m_Name;
            m_Name = NULL;
        }
    }
};

//写一个具体的实例
void test01()
{
    Animal* animal = new Cat("Tommy");
    animal->speak();
    delete animal;
};

int main()
{
    test01();
    system("pause");
    return 0;
}
