//#include <iostream>
//using namespace std;
//int main()
//{
//	//Switch���
//	//���ӰƬ���
//	//9-10 ����
//	//7-8 �ǳ���
//	//5-6 һ��
//	//5������ ��Ƭ
//	
//	int score = 10;
//	//1.��ʾ�û�����Ӱ���
//	cout << "�����Ӱ���" << endl;
//	//2.�û���ʼ���д��
//	cin >> score;
//	cout << "����ķ���Ϊ" << score << "��" << endl;
//	//3.ɸѡ����
//	//switch (score)
//	//{
//	//case 9:
//	//case 10:
//	//	cout << "�����Ƭ" << endl;
//	//	break;
//	//case 7:
//	//case 8:
//	//	cout << "�ǳ��õ�Ƭ" << endl;
//	//	break;
//	//case 5:
//	//case 6:
//	//	cout << "һ����" << endl;
//	//	break;
//	//default:
//	//	cout << "��Ƭ" << endl;
//	//	break;
//	//}
//
//	//��������
//	switch((score>=5)+(score>=7)+(score>=9)+10*((score>10)||(score<0))) 
//	{
//	case 3:
//		cout << "�����Ƭ" << endl;
//		break;
//	case 2:
//		cout << "�ǳ��õ�Ƭ" << endl;
//		break;	
//	case 1:
//		cout << "һ����" << endl;
//		break;
//	case 0:
//		cout << "��Ƭ" << endl;
//		break;
//	default:
//		cout << "�����������" << endl;
//		break;
//	}
//	system("pause");
//	return 0;
//}