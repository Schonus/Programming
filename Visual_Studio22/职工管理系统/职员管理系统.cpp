//�������� ͷ�ļ�����iostream�ˣ��������ʡ��
#include "WorkerManager.h"
#include "test.h"
using namespace std;

//����ʼ֮��
int main() 
{
	
	char choice = '0';
	test();
	WorkerManager wm;
	////������ѭ����ʹ�û������ȷ����
	//do
	//{
	//	//չʾչʾ����
	//	wm.Show_Menu();
	//	printf("���������ָ�");
	//	cin >> choice;//����ָ��
	//	switch (choice)//����ָ��
	//	{
	//	case 48://0��ascll��
	//		//�˳�ϵͳ
	//		wm.Exit_System();
	//		break;
	//	case 49:
	//		//����ְ��
	//		break;
	//	case 50:
	//		//��ʾְ��
	//		break;
	//	case 51:
	//		//ɾ��ְ��
	//		break;
	//	case 52:
	//		//�޸�ְ��
	//		break;
	//	case 53:
	//		//����ְ��
	//		break;
	//	case 54:
	//		//����ְ��
	//		break;
	//	case 55:
	//		//����ĵ�
	//		break;
	//	case 56:
	//		//����
	//		system("cls");
	//		break;
	//	default:
	//		printf("������������������������룡\n");
	//		choice = -1;
	//		break;
	//	}
	//	fflush(stdin);
	//} while (choice != '0');//�ж��Ƿ��˳�
	//�������֮��
	system("pause");
	return 0;
}