//#include <iostream>
//using namespace std;
////������ר�ú���
//void calling(int* arr, int length)
//{
//	for (int i = 0; i < length; i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	cout << endl;
//}
//void exchange(int* a, int* b)
//{
//	int t = 0;
//	t = *a;
//	*a = *b;
//	*b = t;
//}
//
//int main()
//{
//	//��ά����������;
//	//1.���Բ鿴ռ���ڴ�ռ��С
//	int arr2[2][3] = { 
//		{1,2,5} ,
//		{3,4,6} 
//	};
//	cout << "��ά����ռ���ڴ�ռ�Ϊ��" << sizeof(arr2) << endl;
//	cout << "��ά�����һ��ռ���ڴ�ռ�Ϊ��" << sizeof(arr2[0]) << endl;
//	cout << "��ά�����һ��Ԫ��ռ���ڴ�ռ�Ϊ��" << sizeof(arr2[0][0]) << endl;
//	cout << "��ά��������Ϊ��" << sizeof(arr2)/ sizeof(arr2[0]) << endl;
//	cout << "��ά��������Ϊ��" << sizeof(arr2[0]) / sizeof(arr2[0][0]) << endl;
//	//2.���Բ鿴��ά�����׵�ַ
//	cout << "��ά�����׵�ַΪ��" << arr2 << endl;
//	cout << "��ά�����һ���׵�ַΪ��" << arr2[0] << endl;
//	cout << "��ά����ڶ����׵�ַΪ��" << arr2[1] << endl;
//	cout << "��ά�����һ��Ԫ���׵�ַΪ��" << &arr2[0][0] << endl;
//	cout << "��ά����ڶ���Ԫ���׵�ַΪ��" << &arr2[0][1] << endl;
//	
//	system("pause");
//	return 0;
//}