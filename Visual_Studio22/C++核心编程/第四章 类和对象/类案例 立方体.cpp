//#include <iostream>
//#include <string>
//using namespace std;
//
//
////������������
//class Cube 
//{
//public:
//    //�������ݲ��������������
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
//    //չʾ���ݵĺ����ͱ���
//    int showArea() {return s;}
//    int showVolume() {return v;}
//    int Show_L;
//    int Show_W;
//    int Show_H;
//    //���������ʵ������ݹ���
//    void showLength() 
//    {
//        Show_L = m_L;
//        Show_W = m_W;
//        Show_H = m_H;
//    }
//    //����������ɾ��
//    void clearLength() 
//    {
//        Show_L = 0;
//        Show_W = 0;
//        Show_H = 0;
//    }
//    
//    //��Ա���� �Ƚ����������Ƿ���ͬ
//    int compareCubes(Cube a)
//    {
//        a.showLength();
//
//        int result = (a.Show_H == m_H) && (a.Show_W == m_W) && (a.Show_L == m_L);
//        a.clearLength();
//
//        return result;
//    }
////����
//private:
//    int v;
//    int s;
//    int m_L;
//    int m_W;
//    int m_H;
//};
////ȫ�ֺ��� �Ƚ����������Ƿ���ͬ
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
//    //¼������
//    cout << "������������ı߳���" << endl;
//    cin >> L;
//    cin >> W;
//    cin >> H;
//    abc.inputNum(L, W, H);
//    //չʾ����������
//    cout << abc.showArea() << endl;
//    cout << abc.showVolume() << endl;
//    //¼��ڶ�����
//    cout << "������ڶ���������ı߳���" << endl;
//    cin >> L;
//    cin >> W;
//    cin >> H;
//    abc2.inputNum(L, W, H);
//    cout << abc2.showArea() << endl;
//    cout << abc2.showVolume() << endl;
//    //���бȽ�
//    int result = compareCubes(abc,abc2);
//    if (result) 
//    {
//        cout << "���" << endl;
//    }
//    else
//    {
//        cout << "����" << endl;
//    }
//    system("pause");
//    return 0;
//}
