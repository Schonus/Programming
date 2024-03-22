//#include <iostream>
//#include <math.h>
//using namespace std;
////定义点类
//class point
//{
//public:
//	double X;
//	double Y;
//};
////定义圆类
//class circle
//{
//public:
//	point CP;//中心点
//	double range;//半径
//};
//
////判定圆和点的关系
//int justrelation(point p,circle c) 
//{
//	//计算距离
//	double distance = sqrt((c.CP.X - p.X) * (c.CP.X - p.X) + (c.CP.Y - p.Y) * (c.CP.Y - p.Y));
//	//进行判定
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
//	//定义点对象
//	point p1;
//	p1.X = 1;
//	p1.Y = 1;
//	//定义圆对象
//	circle c1;
//	c1.CP.X = 0;
//	c1.CP.Y = 0;
//	c1.range = 1.41421356237309504880;
//	//采取结果
//	int result = justrelation(p1, c1);
//	switch (result)
//	{
//	case 0:
//		cout << "在圆内" << endl;
//		break;
//	case 1:
//		cout << "在圆上" << endl;
//		break;
//	case 2:
//		cout << "在圆外" << endl;
//		break;
//	default:
//		break;
//	}
//	system("pause");
//	return 0;
//}