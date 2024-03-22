//#include <iostream>
//using namespace std;
////传统方法：复制粘贴
//////Java页面
////class Java
////{
////public:
////    void header() 
////    {
////        cout << "首页、公开课、登陆、注册……（公共头部）" << endl;
////    }
////    void footer() 
////    {
////        cout << "帮助中心、交流合作、站内地图……（公共底部）" << endl;
////    }
////    void left() 
////    {
////        cout << "Java、Python、C++……（公共分类列表）" << endl;
////    }
////    void content() 
////    {
////        cout << "Java学科视频" << endl;
////    }
////private:
////};
////
//////Python页面
////class Python
////{
////public:
////    void header() 
////    {
////        cout << "首页、公开课、登陆、注册……（公共头部）" << endl;
////    }
////    void footer() 
////    {
////        cout << "帮助中心、交流合作、站内地图……（公共底部）" << endl;
////    }
////    void left() 
////    {
////        cout << "Java、Python、C++……（公共分类列表）" << endl;
////    }
////    void content() 
////    {
////        cout << "Python学科视频" << endl;
////    }
////private:
////};
////
//////C++页面
////class CPP
////{
////public:
////    void header() 
////    {
////        cout << "首页、公开课、登陆、注册……（公共头部）" << endl;
////    }
////    void footer() 
////    {
////        cout << "帮助中心、交流合作、站内地图……（公共底部）" << endl;
////    }
////    void left() 
////    {
////        cout << "Java、Python、C++……（公共分类列表）" << endl;
////    }
////    void content() 
////    {
////        cout << "C++学科视频" << endl;
////    }
////private:
////};
////
////void test01() 
////{
////    cout << "Java下载视频页面如下：" << endl;
////    Java ja;
////    ja.header();
////    ja.footer();
////    ja.left();
////    ja.content();
////}
////void test02() 
////{
////    cout << "Python下载视频页面如下：" << endl;
////    Python ja;
////    ja.header();
////    ja.footer();
////    ja.left();
////    ja.content();
////}
////void test03() 
////{
////    cout << "C++下载视频页面如下：" << endl;
////    CPP ja;
////    ja.header();
////    ja.footer();
////    ja.left();
////    ja.content();
////}
//
////新方法：继承
//class BasePage
//{
//public:
//    void header()
//    {
//        cout << "首页、公开课、登陆、注册……（公共头部）" << endl;
//    }
//    void footer()
//    {
//        cout << "帮助中心、交流合作、站内地图……（公共底部）" << endl;
//    }
//    void left()
//    {
//        cout << "Java、Python、C++……（公共分类列表）" << endl;
//    }
//private:
//};
////Java页面
//class Java: public BasePage
//{
//public:
//    void content() 
//    {
//        cout << "Java学科视频" << endl;
//    }
//private:
//};
//
////Python页面
//class Python : public BasePage
//{
//public:
//    void content() 
//    {
//        cout << "Python学科视频" << endl;
//    }
//private:
//};
//
////C++页面
//class CPP : public BasePage
//{
//public:
//    void content() 
//    {
//        cout << "C++学科视频" << endl;
//    }
//private:
//};
//
////触发器
//void test01() 
//{
//    cout << "Java下载视频页面如下：" << endl;
//    Java ja;
//    ja.header();
//    ja.footer();
//    ja.left();
//    ja.content();
//}
//void test02() 
//{
//    cout << "Python下载视频页面如下：" << endl;
//    Python ja;
//    ja.header();
//    ja.footer();
//    ja.left();
//    ja.content();
//}
//void test03() 
//{
//    cout << "C++下载视频页面如下：" << endl;
//    CPP ja;
//    ja.header();
//    ja.footer();
//    ja.left();
//    ja.content();
//}
//
//int main()
//{
//    //test01();
//    //test02();
//    test03();
//    system("pause");
//    return 0;
//}
