//#include <iostream>
//using namespace std;
//
////����������ʽ��
//// 1.�޲��޷� 
//void test01() {
//	cout << "This is test01!" << endl;
//	return;
//}
//// 2.�в��޷� 
//void test02(int num1, int num2) /*�β�*/ {
//	int tempt = 0;
//	tempt = num1;
//	num1 = num2;
//	num2 = tempt;
//	cout << "This is test02!" << endl;
//}
//// 3.�޲��з� 
//int retn20() /*�β�*/ {
//	return 20;
//}
//// 4.�в��з� 
//
//int swap(int* num1, int* num2) /*�β�*/ {
//	int tempt = 0;
//	tempt = *num1;
//	*num1 = *num2;
//	*num2 = tempt;
//	return 0;
//}
//
//int main()
//{
//	test01();
//	int a = 0, b = 1;
//	test02(a,b);
//	int c = retn20();
//	cout << "c = " << c << endl;
//	int d = 2, e = 3;
//	int flag = swap(&d,&e);
//	cout << "d = " << d << endl;
//	cout << "e = " << e << endl;
//	cout << "flag is " << flag << endl;
//	system("pause");
//	return 0;
//}