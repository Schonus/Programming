//#include <iostream>
//#include <string>
//using namespace std;
//
//
////建立立方体类
//class Cube 
//{
//public:
//    //输入数据并算出表面积、体积
//    void inputNum(int L, int W, int H)
//    {
//        m_L = L;
//        m_W = W;
//        m_H = H;
//        if (m_L && m_W && m_H)
//        {
//            s = 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_H * m_W;
//            v = m_L * m_W * m_H;
//        }
//    }
//    //展示数据的函数和变量
//    int showArea() {return s;}
//    int showVolume() {return v;}
//    int Show_L;
//    int Show_W;
//    int Show_H;
//    //将单个类的实体的数据公开
//    void showLength() 
//    {
//        Show_L = m_L;
//        Show_W = m_W;
//        Show_H = m_H;
//    }
//    //将公开数据删除
//    void clearLength() 
//    {
//        Show_L = 0;
//        Show_W = 0;
//        Show_H = 0;
//    }
//    
//    //成员函数 比较两立方体是否相同
//    int compareCubes(Cube a)
//    {
//        a.showLength();
//
//        int result = (a.Show_H == m_H) && (a.Show_W == m_W) && (a.Show_L == m_L);
//        a.clearLength();
//
//        return result;
//    }
////数据
//private:
//    int v;
//    int s;
//    int m_L;
//    int m_W;
//    int m_H;
//};
////全局函数 比较两立方体是否相同
//int compareCubes(Cube a,Cube b)
//{
//    a.showLength();
//    b.showLength();
//    int result = (a.Show_H == b.Show_H) && (a.Show_W == b.Show_W) && (a.Show_L == b.Show_L);
//    a.clearLength();
//    b.clearLength();
//    return result;
//}
//
//int main()
//{
//    Cube abc,abc2;
//    int L,W,H;
//    //录入数据
//    cout << "请输入立方体的边长：" << endl;
//    cin >> L;
//    cin >> W;
//    cin >> H;
//    abc.inputNum(L, W, H);
//    //展示表面积和体积
//    cout << abc.showArea() << endl;
//    cout << abc.showVolume() << endl;
//    //录入第二个的
//    cout << "请输入第二个立方体的边长：" << endl;
//    cin >> L;
//    cin >> W;
//    cin >> H;
//    abc2.inputNum(L, W, H);
//    cout << abc2.showArea() << endl;
//    cout << abc2.showVolume() << endl;
//    //进行比较
//    int result = compareCubes(abc,abc2);
//    if (result) 
//    {
//        cout << "相等" << endl;
//    }
//    else
//    {
//        cout << "不等" << endl;
//    }
//    system("pause");
//    return 0;
//}
