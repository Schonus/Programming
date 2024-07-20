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

//����ĳ���
//�������
//Intel����
class IntelCPU :public AbstractCPU
{
public:
    virtual void calculate() 
    {
        cout << "Intel��CPU��ʼ������" << endl;
    }
};

//�Կ�
class IntelVideoCard :public AbstractVideoCard
{
    virtual void display()
    {
        cout << "Intel���Կ���ʼ��ʾ��" << endl;
    }
};

//�ڴ���
class IntelMemory :public AbstractMemory
{
    virtual void storage()
    {
        cout << "Intel���ڴ�����ʼ�洢��" << endl;
    }
};



class ADMCPU :public AbstractCPU
{
    ADMCPU() 
    {
        cout << "ADM��CPU��ʼ������" << endl;
    }
};

//����
//CPU
class LenovoCPU :public AbstractCPU
{
    virtual void calculate()
    {
        cout << "Lenovo��CPU��ʼ��ʾ��" << endl;
    }
};

//�Կ�
class LenovoVideoCard :public AbstractVideoCard
{
    virtual void display()
    {
        cout << "Lenovo���Կ���ʼ��ʾ��" << endl;
    }
};

//�ڴ���
class LenovoMemory :public AbstractMemory
{
    virtual void storage()
    {
        cout << "Lenovo���ڴ�����ʼ�洢��" << endl;
    }
};

class Computer
{
public:
    Computer(AbstractCPU* cpuz,AbstractVideoCard* vc,AbstractMemory* mem) 
    {
        m_cpu = cpuz;
        m_vc = vc;
        m_mem = mem;
    }

    //�ṩһ�������ĺ���
    void work() 
    {
        //������������������ýӿ�
        m_cpu->calculate();
        m_vc->display();
        m_mem->storage();
    }

    ~Computer() 
    {
        if (m_cpu != NULL)
        {
            //�ͷ�CPU
            delete m_cpu;
            m_cpu = NULL;
        }    
            
        if (m_vc != NULL)
        {
            //�ͷ��Կ�
            delete m_vc;
            m_vc = NULL;
        }
        if (m_mem != NULL)
        {
            //�ͷ��ڴ���
            delete m_mem;
            m_mem = NULL;
        }
    }
private:
    AbstractCPU* m_cpu;//CPU�����ָ��
    AbstractVideoCard* m_vc;//�Կ������ָ��
    AbstractMemory* m_mem;//�ڴ��������ָ��
};


//дһ�������ʵ��
void test01()
{
    //��һ̨�������
    AbstractCPU* intelCPU = new IntelCPU();
    AbstractVideoCard* intelVideoCard = new IntelVideoCard();
    AbstractMemory* intelMemory = new IntelMemory();

    //������һ̨����
    Computer* com = new Computer(intelCPU, intelVideoCard, intelMemory);
    com->work();

    delete com;

    //�ڶ�̨�������
    AbstractCPU* lenovoCPU = new LenovoCPU();
    AbstractVideoCard* lenovoVideoCard = new LenovoVideoCard();
    AbstractMemory* lenovoMemory = new LenovoMemory();

    //������һ̨����
    Computer* com2 = new Computer(lenovoCPU, lenovoVideoCard, lenovoMemory);
    com2->work();

    delete com2;
};

int main()
{
    test01();
    system("pause");
    return 0;
}
