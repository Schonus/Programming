//#include <iostream>
//#include <string>
//using namespace std;
//
////�ֱ�����ͨд���Ͷ�̬д��ʵ�ּ�������
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
////        //������ṩ�µ����㣬��Ҫ�޸�Դ��
////        //����ʵ�����У��ᳫ����ԭ��
////        //����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�
////    }
////    int m_Num1;
////    int m_Num2;
////    
////};
//
//
////��̬д��
//class AbstractCalculator
//{
//public:
//    virtual int getResult()//��������Ѹ���ĺ����ڸǵ�
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
////���԰���(��ͨд��)
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
////���԰�������̬д����
//void test02()
//{
//    //�ӷ�����
//    AbstractCalculator* abc = new AddCalculator;//�����ָ��ָ������Ķ���
//    abc->m_Num1 = 101;
//    abc->m_Num2 = 10;
//    cout << abc->m_Num1 << "+" << abc -> m_Num2 << "=" << abc->getResult() << endl;
//    //�����ǵ����٣�
//    delete abc;
//
//    //��������
//    abc = new SubCalculator;//�����ָ��ָ������Ķ���
//    abc->m_Num1 = 101;
//    abc->m_Num2 = 10;
//    cout << abc->m_Num1 << "-" << abc -> m_Num2 << "=" << abc->getResult() << endl;
//    //�����ǵ����٣�
//    delete abc;
//    //�˷�����
//    abc = new SubCalculator;//�����ָ��ָ������Ķ���
//    abc->m_Num1 = 101;
//    abc->m_Num2 = 10;
//    cout << abc->m_Num1 << "-" << abc -> m_Num2 << "=" << abc->getResult() << endl;
//    //�����ǵ����٣�
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
