//#include <iostream>
//#include <string>
//using namespace std;
//
//
////建筑物类
//class Building;//事先声明法
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
//    //GoodGay类是Building的友元 可以访问Building中的私有成员
//    friend class GoodGay;
//    Building();
//    string m_SettingRoom;//客厅
//private:
//    string m_BedRoom;//卧室
//};
//
////类外实现
//Building::Building()
//{
//    m_SettingRoom = "客厅";
//    m_BedRoom = "卧室";
//}
//
//GoodGay::GoodGay() 
//{
//    //创建建筑物对象
//    building = new Building;
//}
//
//void GoodGay::visit() 
//{
//    cout << "好基友类正在访问：" << building->m_SettingRoom << endl;
//    cout << "好基友类正在访问：" << building->m_BedRoom << endl;
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
