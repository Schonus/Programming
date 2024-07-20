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

//具体的厂商
//具体的类
//Intel厂商
class IntelCPU :public AbstractCPU
{
public:
    virtual void calculate() 
    {
        cout << "Intel的CPU开始计算了" << endl;
    }
};

//显卡
class IntelVideoCard :public AbstractVideoCard
{
    virtual void display()
    {
        cout << "Intel的显卡开始显示了" << endl;
    }
};

//内存条
class IntelMemory :public AbstractMemory
{
    virtual void storage()
    {
        cout << "Intel的内存条开始存储了" << endl;
    }
};



class ADMCPU :public AbstractCPU
{
    ADMCPU() 
    {
        cout << "ADM的CPU开始计算了" << endl;
    }
};

//联想
//CPU
class LenovoCPU :public AbstractCPU
{
    virtual void calculate()
    {
        cout << "Lenovo的CPU开始显示了" << endl;
    }
};

//显卡
class LenovoVideoCard :public AbstractVideoCard
{
    virtual void display()
    {
        cout << "Lenovo的显卡开始显示了" << endl;
    }
};

//内存条
class LenovoMemory :public AbstractMemory
{
    virtual void storage()
    {
        cout << "Lenovo的内存条开始存储了" << endl;
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

    //提供一个工作的函数
    void work() 
    {
        //让零件工作起来，调用接口
        m_cpu->calculate();
        m_vc->display();
        m_mem->storage();
    }

    ~Computer() 
    {
        if (m_cpu != NULL)
        {
            //释放CPU
            delete m_cpu;
            m_cpu = NULL;
        }    
            
        if (m_vc != NULL)
        {
            //释放显卡
            delete m_vc;
            m_vc = NULL;
        }
        if (m_mem != NULL)
        {
            //释放内存条
            delete m_mem;
            m_mem = NULL;
        }
    }
private:
    AbstractCPU* m_cpu;//CPU的零件指针
    AbstractVideoCard* m_vc;//显卡的零件指针
    AbstractMemory* m_mem;//内存条的零件指针
};


//写一个具体的实例
void test01()
{
    //第一台电脑零件
    AbstractCPU* intelCPU = new IntelCPU();
    AbstractVideoCard* intelVideoCard = new IntelVideoCard();
    AbstractMemory* intelMemory = new IntelMemory();

    //创建第一台电脑
    Computer* com = new Computer(intelCPU, intelVideoCard, intelMemory);
    com->work();

    delete com;

    //第二台电脑零件
    AbstractCPU* lenovoCPU = new LenovoCPU();
    AbstractVideoCard* lenovoVideoCard = new LenovoVideoCard();
    AbstractMemory* lenovoMemory = new LenovoMemory();

    //创建第一台电脑
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
