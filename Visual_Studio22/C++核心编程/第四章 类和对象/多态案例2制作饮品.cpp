//#include <iostream>
//#include <string>
//using namespace std;
//
////纯虚函数和抽象类
//class AbstractDrinking
//{
//public:
//    //煮水
//    virtual void Boil() = 0;//这就是一个纯虚函数
//    //冲泡
//    virtual void Brew() = 0;
//    //倒入杯中
//    virtual void PourInCup() = 0;
//    //加入辅料
//    virtual void PutSomething() = 0;
//    //制作饮品
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
////抽象类的子类必须重写父类的函数，否则也属于抽象类
//class Coffee : public AbstractDrinking
//{
//public:
//    //煮水
//    void Boil()
//    {
//        cout << "煮农夫山泉！" << endl;
//    };
//    //冲泡
//    void Brew() 
//    {
//        cout << "冲泡咖啡！" << endl;
//    };
//    //倒入杯中
//    void PourInCup()
//    {
//        cout << "倒入杯中！" << endl;
//    };
//    //加入辅料
//    void PutSomething()
//    {
//        cout << "加入糖和牛奶！" << endl;
//    };
//};
//
//
////抽象类的子类必须重写父类的函数，否则也属于抽象类
//class Tea : public AbstractDrinking
//{
//public:
//    //煮水
//    void Boil()
//    {
//        cout << "煮农夫山泉！" << endl;
//    };
//    //冲泡
//    void Brew()
//    {
//        cout << "冲泡茶叶！" << endl;
//    };
//    //倒入杯中
//    void PourInCup()
//    {
//        cout << "倒入杯中！" << endl;
//    };
//    //加入辅料
//    void PutSomething()
//    {
//        cout << "加入枸杞！" << endl;
//    };
//};
//
//void doWork(AbstractDrinking* abs) 
//{
//    abs->makeDrink();
//    delete abs;//这一步也很关键，防止堆区数据泄露
//}
//
////写一个具体的实例
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
