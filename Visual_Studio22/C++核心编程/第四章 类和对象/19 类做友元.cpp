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
//    Building* building;
//    void visit();
//    GoodGay();
//private:
//};
//class Building
//{
//public:
//    //GoodGay����Building����Ԫ ���Է���Building�е�˽�г�Ա
//    friend class GoodGay;
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
//    cout << "�û��������ڷ��ʣ�" << building->m_SettingRoom << endl;
//    cout << "�û��������ڷ��ʣ�" << building->m_BedRoom << endl;
//}
//
//void test01() 
//{
//    GoodGay gg;
//    gg.visit();
//}
//
//int main()
//{
//    test01();
//    system("pause");
//    return 0;
//}
