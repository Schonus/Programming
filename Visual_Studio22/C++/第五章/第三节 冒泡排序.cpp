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
//void Bsort(int* arr, int length)
//{
//	int t = 0;
//	for (int i = 0; i < length-1; i++)
//	{
//		//������˵����
//		for(int j = 0;j < length-1-i;j++)
//		if(arr[j+1]<arr[j])
//		{
//			//����ר�ú���
//			exchange(&arr[j + 1], &arr[j]);
//		}
//		length--;
//	}
//}
//
//int main()
//{
//	//����
//	int arr[] = { 1,3,5,4,2,8,7 };
//	//����ð������
//	Bsort(arr, sizeof(arr) / sizeof(arr[0]));
//	//������
//	calling(arr, sizeof(arr) / sizeof(arr[0]));
//	system("pause");
//	return 0;
//}