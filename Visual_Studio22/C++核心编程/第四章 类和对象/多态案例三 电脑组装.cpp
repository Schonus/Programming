#include <iostream>
#include <string>
using namespace std;

//�������
class AbstractCPU
{
public:
    //����ļ��㺯��
    virtual void calculate() = 0;
};

class AbstractVideoCard
{
public:
    //�������ʾ����
    virtual void display() = 0;
};

class AbstractMemory
{
public:
    //����Ĵ洢����
    virtual void storage() = 0;
};


//�������
class IntelCPU :public AbstractCPU
{
    IntelCPU() 
    {
        cout << "Intel��CPU��ʼ������" << endl;
    }
};

class IntelVideoCard :public AbstractVideoCard
{
    IntelVideoCard()
    {
        cout << "Intel���Կ���ʼ������" << endl;
    }
};



//class ADMCPU :public AbstractCPU
//{
//    ADMCPU() 
//    {
//        cout << "ADM��CPU��ʼ������" << endl;
//    }
//};

class LenovoCPU :public AbstractCPU
{
    LenovoCPU() 
    {
        cout << "�����CPU��ʼ������" << endl;
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

Animal :: ~Animal()  //�������������ĵ��ú�ʵ��
{
    cout << "Animal �Ĵ���������������" << endl;
}

class Cat : public Animal
{
public:
    Cat()
    {

    }
    Cat(string name)
    {
        cout << "Cat ���캯������" << endl;
        m_Name = new string(name);
    }
    void speak()
    {

        cout << *m_Name << "Сè��˵��~" << endl;
    }
    string* m_Name;
    ~Cat()
    {
        if (m_Name != NULL)
        {
            cout << "Cat ������������" << endl;
            delete m_Name;
            m_Name = NULL;
        }
    }
};

//дһ�������ʵ��
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
