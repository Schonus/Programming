//#include <iostream>
//#include <string>
//using namespace std;
//
////���麯���ͳ�����
//class AbstractDrinking
//{
//public:
//    //��ˮ
//    virtual void Boil() = 0;//�����һ�����麯��
//    //����
//    virtual void Brew() = 0;
//    //���뱭��
//    virtual void PourInCup() = 0;
//    //���븨��
//    virtual void PutSomething() = 0;
//    //������Ʒ
//    void makeDrink() 
//    {
//        Boil();
//        Brew();
//        PourInCup();
//        PutSomething();
//    }
//};
//
//
////����������������д����ĺ���������Ҳ���ڳ�����
//class Coffee : public AbstractDrinking
//{
//public:
//    //��ˮ
//    void Boil()
//    {
//        cout << "��ũ��ɽȪ��" << endl;
//    };
//    //����
//    void Brew() 
//    {
//        cout << "���ݿ��ȣ�" << endl;
//    };
//    //���뱭��
//    void PourInCup()
//    {
//        cout << "���뱭�У�" << endl;
//    };
//    //���븨��
//    void PutSomething()
//    {
//        cout << "�����Ǻ�ţ�̣�" << endl;
//    };
//};
//
//
////����������������д����ĺ���������Ҳ���ڳ�����
//class Tea : public AbstractDrinking
//{
//public:
//    //��ˮ
//    void Boil()
//    {
//        cout << "��ũ��ɽȪ��" << endl;
//    };
//    //����
//    void Brew()
//    {
//        cout << "���ݲ�Ҷ��" << endl;
//    };
//    //���뱭��
//    void PourInCup()
//    {
//        cout << "���뱭�У�" << endl;
//    };
//    //���븨��
//    void PutSomething()
//    {
//        cout << "������轣�" << endl;
//    };
//};
//
//void doWork(AbstractDrinking* abs) 
//{
//    abs->makeDrink();
//    delete abs;//��һ��Ҳ�ܹؼ�����ֹ��������й¶
//}
//
////дһ�������ʵ��
//void test01()
//{
//    doWork(new Coffee);
//    cout << "__________________________________________" << endl;
//    doWork(new Tea);
//};
//
//int main()
//{
//    test01();
//    system("pause");
//    return 0;
//}
