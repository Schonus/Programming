//#include <iostream>
//#include <ctime>
//using namespace std;
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//1.ϵͳ����һ�������
//	int answer = rand()%100+1;
//	//cout << answer << endl;
//	int guessnumber = 0;
//	int status = 1;
//	//2.��ҽ��в²�
//	while (status)
//	{
//		cout << "��³�ϵͳ���������֣�0-100����" << endl;
//		cin >> guessnumber;
//		status = (answer > guessnumber) + 2 * (answer < guessnumber);
//		switch (status) 
//		{
//		case 0:
//			cout << "��������" << endl;
//			break;
//		case 1:
//			cout << "��������ֱȴ�С������������" << endl;
//			break;
//		case 2:
//			cout << "��������ֱȴ𰸴�����������" << endl;
//			break;
//		}
//	}
//	//3.�ж���ҵĲ²�
//	//	�¶Խ�����Ϸ���´���ʾ�����С�������·��صڶ���
//
//	system("pause");
//	return 0;
//}