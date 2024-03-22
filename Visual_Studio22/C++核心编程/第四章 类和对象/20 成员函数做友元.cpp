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
//    GoodGay();
//    Building* building;
//    void visit();//让visit函数可以访问Building中私有内容
//    void visit2();//visit2函数则不可以
//private:
//};
//class Building
//{
//public:
//    //GoodGay类中的visit函数是是Building的友元 可以访问Building中的私有成员
//    friend void GoodGay::visit();
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
//    cout << "visit函数正在访问：" << building->m_SettingRoom << endl;
//    cout << "visit函数正在访问：" << building->m_BedRoom << endl;
//}
////因为不是友元则不可以访问私密成员
// void GoodGay::visit2()
//{
//    cout << "visit2函数正在访问：" << building->m_SettingRoom << endl;
//    //cout << "visit2函数正在访问：" << building->m_BedRoom << endl;
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
