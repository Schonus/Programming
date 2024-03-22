//#include <iostream>
//using namespace std;
//
////多态
//
////动物类
//class Animal
//{
//public:
//    //虚函数
//    virtual void speak()
//    {
//        cout << "动物在说话！" << endl;
//    }
//};
////猫类
//class Cat :  public Animal
//{
//public:
//    void speak()
//    {
//        cout << "喵喵喵~" << endl;
//    }
//};
//
//class Dog : public Animal
//{
//    void speak()
//    {
//        cout << "汪汪汪~" << endl;
//    }
//};
//
////静态多态：地址早绑定，在编译阶段就确定了函数的地址
//void doSpeak(Animal& animal)//dospeak(cat)-父类的引用，但是引向了子类的对象 结果：调用了Animal类的函数
//{
//    animal.speak();
//}
////测试案例
//void test01()
//{
//
//    Cat cat;
//    doSpeak(cat);
//    Dog dog;
//    doSpeak(dog);
//};
//int main()
//{
//    test01();
//    system("pause");
//    return 0;
//}
