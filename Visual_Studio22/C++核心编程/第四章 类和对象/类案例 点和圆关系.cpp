//#include <iostream>
//#include <math.h>
//using namespace std;
////�������
//class point
//{
//public:
//	double X;
//	double Y;
//};
////����Բ��
//class circle
//{
//public:
//	point CP;//���ĵ�
//	double range;//�뾶
//};
//
////�ж�Բ�͵�Ĺ�ϵ
//int justrelation(point p,circle c) 
//{
//	//�������
//	double distance = sqrt((c.CP.X - p.X) * (c.CP.X - p.X) + (c.CP.Y - p.Y) * (c.CP.Y - p.Y));
//	//�����ж�
//	if (distance > c.range) 
//	{
//		return 2;
//	}
//	else if(distance == c.range)
//	{
//		return 1;
//	}
//	else if (distance < c.range)
//	{
//		return 0;
//	}
//	else
//	{
//		return 3;
//	}
//}
//
//int main() {
//	//��������
//	point p1;
//	p1.X = 1;
//	p1.Y = 1;
//	//����Բ����
//	circle c1;
//	c1.CP.X = 0;
//	c1.CP.Y = 0;
//	c1.range = 1.41421356237309504880;
//	//��ȡ���
//	int result = justrelation(p1, c1);
//	switch (result)
//	{
//	case 0:
//		cout << "��Բ��" << endl;
//		break;
//	case 1:
//		cout << "��Բ��" << endl;
//		break;
//	case 2:
//		cout << "��Բ��" << endl;
//		break;
//	default:
//		break;
//	}
//	system("pause");
//	return 0;
//}