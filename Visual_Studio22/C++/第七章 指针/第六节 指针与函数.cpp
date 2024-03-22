//#include <iostream>
//using namespace std;
//void swap(int num1, int num2) /*形参*/ {
//	int tempt = 0;
//	tempt = num1;
//	num1 = num2;
//	num2 = tempt;
//}
//void swap(int *num1, int *num2) /*形参*/ {
//	int tempt = 0;
//	tempt = *num1;
//	*num1 = *num2;
//	*num2 = tempt;
//}
//int main()
//{
//	//指针和函数
//	int a = 3;
//	int b = 5;
//	//交代一下素材
//	cout << "交换前：" << endl;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	//值调用
//	swap(a, b);//实参
//	//传递的是值，所以形参实质上只是复制了一分数据并把复制的数据进行了交换，不影响实参
//	cout << "值传递交换值后："<< endl;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	//变量调用
//	swap(&a, &b);//实参
//	//传递的是地址，数据交换时影响到了实参
//	cout << "地址传递交换值后："<< endl;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//
//	system("pause");
//	return 0;
//}
