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
//	//1.�������� ������[����][����];
//	int arr[2][3];
//	arr[0][0] = 2;
//	arr[0][1] = 6;
//	cout << arr[0][1] << endl;
//	calling(arr[0], 3);
//	calling(arr[1], 3);
//	//��������Ƕ��ѭ��ij���������
//	//2.�������� ������[����][����]={{����11},{����12},{����21},{����22}};���Ƽ���
//	int arr2[2][3] = { {1,2,5} ,{3,4,6}};
//	calling(arr2[0], 3);
//	calling(arr2[1], 3);
//	//3.�������� ������[����][����]={����1,����2,����3,����4};
//	int arr3[2][3] = { 1,2,3,4,5,6 };
//	calling(arr3[0], 3);
//	calling(arr3[1], 3);
//	//4.�������� ������[][����]={����1,����2,����3,����4};
//	int arr4[][3] = { 1,2,3,4,5,6,7,8,9,10 };
//	calling(arr4[0], 3);
//	calling(arr4[1], 3);
//	calling(arr4[2], 3);
//	calling(arr4[3], 3);
//	system("pause");
//	return 0;
//}