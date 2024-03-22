//#include <iostream>
//#include <string>
//using namespace std;
//
////分别用普通写法和多态写法实现计算器类
////class Calculator
////{
////public:
////    int getResult(string oper) 
////    {
////        if (oper == "+") 
////        {
////            return m_Num1 + m_Num2;
////        }
////        else if (oper == "-") 
////        {
////            return m_Num1 - m_Num2;
////        }
////        else if (oper == "*") 
////        {
////            return m_Num1 * m_Num2;
////        }
////        else if (oper == "/") 
////        {
////            return m_Num1 / m_Num2;
////        }
////        //如果想提供新的运算，需要修改源码
////        //在真实开发中，提倡开闭原则
////        //开闭原则：对扩展进行开放，对修改进行关闭
////    }
////    int m_Num1;
////    int m_Num2;
////    
////};
//
//
////多态写法
//class AbstractCalculator
//{
//public:
//    virtual int getResult()//方便子类把父类的函数掩盖掉
//    {
//        return 0;
//    }
//    int m_Num1;
//    int m_Num2;
//};
//
//class AddCalculator : public AbstractCalculator
//{
//    int getResult()
//    {
//        return m_Num1 + m_Num2;
//    }
//};
//
//class SubCalculator : public AbstractCalculator
//{
//    int getResult()
//    {
//        return m_Num1 - m_Num2;
//    }
//};
//
//class MulCalculator : public AbstractCalculator
//{
//    int getResult()
//    {
//        return m_Num1 * m_Num2;
//    }
//};
//
//class DivCalculator : public AbstractCalculator
//{
//    int getResult()
//    {
//        return m_Num1 / m_Num2;
//    }
//};
//
//
////测试案例(普通写法)
////void test01()
////{
////    Calculator c;
////    c.m_Num1 = 10;
////    c.m_Num2 = 10;
////    cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
////    cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
////    cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
////    cout << c.m_Num1 << "/" << c.m_Num2 << "=" << c.getResult("/") << endl;
////};
//
////测试案例（多态写法）
//void test02()
//{
//    //加法运算
//    AbstractCalculator* abc = new AddCalculator;//父类的指针指向子类的对象
//    abc->m_Num1 = 101;
//    abc->m_Num2 = 10;
//    cout << abc->m_Num1 << "+" << abc -> m_Num2 << "=" << abc->getResult() << endl;
//    //用完后记得销毁；
//    delete abc;
//
//    //减法运算
//    abc = new SubCalculator;//父类的指针指向子类的对象
//    abc->m_Num1 = 101;
//    abc->m_Num2 = 10;
//    cout << abc->m_Num1 << "-" << abc -> m_Num2 << "=" << abc->getResult() << endl;
//    //用完后记得销毁；
//    delete abc;
//    //乘法运算
//    abc = new SubCalculator;//父类的指针指向子类的对象
//    abc->m_Num1 = 101;
//    abc->m_Num2 = 10;
//    cout << abc->m_Num1 << "-" << abc -> m_Num2 << "=" << abc->getResult() << endl;
//    //用完后记得销毁；
//    delete abc;
//
//    
//
//};
//
//int main()
//{
//    test02();
//    system("pause");
//    return 0;
//}
