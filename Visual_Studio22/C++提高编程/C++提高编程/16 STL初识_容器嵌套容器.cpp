//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//
////vector容器嵌套容器
//void test01()
//{
//	vector<vector<int>>v;
//	//创建小容器
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>v3;
//	vector<int>v4;
//
//	for (int i = 0; i < 4; i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//
//	//将小容器放入大容器中
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//
//	//通过大容器，把所有的内容都遍历一遍
//	for (vector<vector<int>>::iterator itBegin = v.begin(); itBegin != v.end(); itBegin++)
//	{
//		//(*itBegin)就是一个容器<vector<int>>
//		for (vector<int>::iterator itBegin2 = (*itBegin).begin(); itBegin2 != (*itBegin).end(); itBegin2++)
//		{
//			cout << *itBegin2 << endl;
//		}
//		cout << "  " << endl;
//	}
//
//
//}
//
////主函数
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//
//
//
//}