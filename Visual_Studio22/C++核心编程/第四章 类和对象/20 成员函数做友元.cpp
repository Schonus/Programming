//#include <iostream>
//#include <string>
//using namespace std;
//
//
////��������
//class Building;//����������
//
//class GoodGay
//{
//public:
//    GoodGay();
//    Building* building;
//    void visit();//��visit�������Է���Building��˽������
//    void visit2();//visit2�����򲻿���
//private:
//};
//class Building
//{
//public:
//    //GoodGay���е�visit��������Building����Ԫ ���Է���Building�е�˽�г�Ա
//    friend void GoodGay::visit();
//    Building();
//    string m_SettingRoom;//����
//private:
//    string m_BedRoom;//����
//};
//
////����ʵ��
//Building::Building()
//{
//    m_SettingRoom = "����";
//    m_BedRoom = "����";
//}
//
//GoodGay::GoodGay()
//{
//    //�������������
//    building = new Building;
//}
//
//void GoodGay::visit()
//{
//    cout << "visit�������ڷ��ʣ�" << building->m_SettingRoom << endl;
//    cout << "visit�������ڷ��ʣ�" << building->m_BedRoom << endl;
//}
////��Ϊ������Ԫ�򲻿��Է���˽�ܳ�Ա
// void GoodGay::visit2()
//{
//    cout << "visit2�������ڷ��ʣ�" << building->m_SettingRoom << endl;
//    //cout << "visit2�������ڷ��ʣ�" << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//    GoodGay gg;
//    gg.visit();
//    gg.visit2();
//}
//
//int main()
//{
//    test01();
//    system("pause");
//    return 0;
//}
