//#include <iostream>
//#include <string>
//using namespace std;
//
////成员属性设置为私有
////1.自己可以控制读写权限
////2.对于写可以检测数据有效性
//
////人类
//class Person
//{
//private: 
//    string m_Name;//姓名 可读可写
//    int m_Age = 18;//年龄 只读 
//    string m_Idol;//偶像 只写
//    //怎么读写私有属性：依靠公有的方法
//public:
//    //设置姓名
//    void setName(string name)
//    {
//        m_Name = name;
//    }
//    //获取姓名
//    string getName() {
//        return m_Name;
//    }
//    //获取年龄
//    int getAge() 
//    {
//        return m_Age;
//    }
//    //设年龄可以写(年龄必须在0-150之间)
//    void setAge(int age) 
//    {
//        if ((age < 0) || (age > 150))
//        {
//            cout << "年龄输入有误。赋值失败" << endl;
//            return;
//        }
//        m_Age = age;
//    }
//    void setIdol(string idol)
//    {
//        m_Idol = idol;
//    }
//};
//
//
//int main()
//{
//    Person p;
//    //姓名设置
//    //无法访问故出错
//    //p.m_Name = "张三";
//    //cout << "姓名：" << p.m_Name << endl;
//    //正确写法
//    p.setName("张三");
//    cout << "这个人的名字为：" << p.getName() << endl;
//    //年龄设置
//    p.setAge(20);//设年龄可以改
//    cout << "年龄：" << p.getAge() << endl;
//    p.setIdol("小明");
//    //cout << "偶像: " << p.getIdol() << endl;//只写，所以读不到
//    system("pause");
//
//    return 0;
//}
