//#include <iostream>
//#include <ctime>
//using namespace std;
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//1.系统生成一个随机数
//	int answer = rand()%100+1;
//	//cout << answer << endl;
//	int guessnumber = 0;
//	int status = 1;
//	//2.玩家进行猜测
//	while (status)
//	{
//		cout << "请猜出系统给出的数字（0-100）：" << endl;
//		cin >> guessnumber;
//		status = (answer > guessnumber) + 2 * (answer < guessnumber);
//		switch (status) 
//		{
//		case 0:
//			cout << "猜中啦！" << endl;
//			break;
//		case 1:
//			cout << "输入的数字比答案小，请重新输入" << endl;
//			break;
//		case 2:
//			cout << "输入的数字比答案大，请重新输入" << endl;
//			break;
//		}
//	}
//	//3.判断玩家的猜测
//	//	猜对结束游戏，猜错提示过大过小，并重新返回第二步
//
//	system("pause");
//	return 0;
//}