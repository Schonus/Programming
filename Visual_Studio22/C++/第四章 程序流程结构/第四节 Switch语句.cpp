//#include <iostream>
//using namespace std;
//int main()
//{
//	//Switch语句
//	//请给影片打分
//	//9-10 经典
//	//7-8 非常好
//	//5-6 一般
//	//5分以下 烂片
//	
//	int score = 10;
//	//1.提示用户给电影打分
//	cout << "请给电影打分" << endl;
//	//2.用户开始进行打分
//	cin >> score;
//	cout << "您打的分数为" << score << "分" << endl;
//	//3.筛选评价
//	//switch (score)
//	//{
//	//case 9:
//	//case 10:
//	//	cout << "经典大片" << endl;
//	//	break;
//	//case 7:
//	//case 8:
//	//	cout << "非常好的片" << endl;
//	//	break;
//	//case 5:
//	//case 6:
//	//	cout << "一般般吧" << endl;
//	//	break;
//	//default:
//	//	cout << "烂片" << endl;
//	//	break;
//	//}
//
//	//另类做法
//	switch((score>=5)+(score>=7)+(score>=9)+10*((score>10)||(score<0))) 
//	{
//	case 3:
//		cout << "经典大片" << endl;
//		break;
//	case 2:
//		cout << "非常好的片" << endl;
//		break;	
//	case 1:
//		cout << "一般般吧" << endl;
//		break;
//	case 0:
//		cout << "烂片" << endl;
//		break;
//	default:
//		cout << "数据输入错误！" << endl;
//		break;
//	}
//	system("pause");
//	return 0;
//}