//#include <iostream>
//using namespace std;
//
////����ģ��ע������
//
//template<class T> //typename�����滻��class
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////�����㷨
//template<class T>
//void mySort(T arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++) 
//	{
//		int max = i;//��������±�
//		for (int j = i + 1; j < len; j++) 
//		{
//			if (arr[max] > arr[j])
//			max = j;
//		}
//		if (max != i) 
//		{
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
//
//
//void test01() 
//{
//	//����char����
//	char charArr[] = "bsdkle";
//	int length = sizeof(charArr) / sizeof(charArr[0]);
//	mySort(charArr,length);
//	for (int i = 0; i < length; i++)
//	{
//		cout << charArr[i];
//	}
//	cout << endl;
//}
//
//
//void test02() 
//{
//	int arr[] = { 2, 4, 6, 7 ,5 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	mySort(arr, length);
//	for (int i = 0; i < length; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
////�Զ������Ƶ�һ��Ҫ�Ƶ���һ�µ���������t�ſ���ʹ��
////ģ��һ��Ҫȷ����Tȷ�����������ͣ��ſ���ʹ��
//
////������
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//
//
//
//}