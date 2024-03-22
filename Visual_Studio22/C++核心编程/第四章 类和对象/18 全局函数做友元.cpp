//#include <iostream>
//using namespace std;
//
//
////建筑物类
//class Building
//{
//    //goodGay全局函数是Building的友元 可以访问Building中的私有成员
//    friend void goodGay(Building* building);
//public:
//    Building()
//    {
//        m_SettingRoom = "客厅";
//        m_BedRoom = "卧室";
//    }
//    
//    string m_SettingRoom;//客厅
//private:
//    string m_BedRoom;//卧室
//};
//
//
//
////全局函数
//void goodGay(Building *building) 
//{
//    cout << "好基友全局函数正在访问：" << building->m_SettingRoom << endl;
//    cout << "好基友全局函数正在访问：" << building->m_BedRoom << endl;
//}
//
//int main()
//{
//    Building bungalow;
//    goodGay(&bungalow);
//    system("pause");
//    return 0;
//}
