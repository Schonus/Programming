//#include <iostream>
//#include <string>
//using namespace std;
//
////��Ա��������Ϊ˽��
////1.�Լ����Կ��ƶ�дȨ��
////2.����д���Լ��������Ч��
//
////����
//class Person
//{
//private: 
//    string m_Name;//���� �ɶ���д
//    int m_Age = 18;//���� ֻ�� 
//    string m_Idol;//ż�� ֻд
//    //��ô��д˽�����ԣ��������еķ���
//public:
//    //��������
//    void setName(string name)
//    {
//        m_Name = name;
//    }
//    //��ȡ����
//    string getName() {
//        return m_Name;
//    }
//    //��ȡ����
//    int getAge() 
//    {
//        return m_Age;
//    }
//    //���������д(���������0-150֮��)
//    void setAge(int age) 
//    {
//        if ((age < 0) || (age > 150))
//        {
//            cout << "�����������󡣸�ֵʧ��" << endl;
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
//    //��������
//    //�޷����ʹʳ���
//    //p.m_Name = "����";
//    //cout << "������" << p.m_Name << endl;
//    //��ȷд��
//    p.setName("����");
//    cout << "����˵�����Ϊ��" << p.getName() << endl;
//    //��������
//    p.setAge(20);//��������Ը�
//    cout << "���䣺" << p.getAge() << endl;
//    p.setIdol("С��");
//    //cout << "ż��: " << p.getIdol() << endl;//ֻд�����Զ�����
//    system("pause");
//
//    return 0;
//}
