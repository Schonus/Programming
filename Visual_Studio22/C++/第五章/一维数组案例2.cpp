//#include <iostream>
//#include <string>
//using namespace std;
//
//void calling(int *arr,int length) 
//{
//	for (int i = 0; i < length; i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	cout << endl;
//}
//void reversearr(int *arr,int length) 
//{
//	int t = 0;
//	for (int i = 0; i < (length+1)/2; i++)
//	{
//		t = arr[i];
//		arr[i] = arr[length - i - 1];
//		arr[length - i - 1] = t;
//	}
//}
//
//int main()
//{
//	//五只小猪称体重
//	int arr[] = { 1,3,5,4,2,6,7 };
//	reversearr(arr,sizeof(arr)/sizeof(arr[0]));
//	calling(arr, sizeof(arr) / sizeof(arr[0]));
//	system("pause");
//	return 0;
//}