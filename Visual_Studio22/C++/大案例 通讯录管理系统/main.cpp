#include <iostream>
//�ⲿ�����ļ�
#include "Functions.h"
using namespace std;
//������
int main() 
{
	Addressbook addb = { {}, 0 };
	int i=0;
	int status = 0;
	//�ж�ϵͳ
	while (true)
	{
		showitem();
		cout << "������ָ�";
		cin >> i;
		switch (i)
		{
		case 1://�����ϵ��
			status = add_member(&addb);//���õ�ַ����
			break;
		case 2://��ʾ��ϵ��
			status = show_member(&addb);
			break;
		case 3://ɾ����ϵ��
			status = del_member(&addb);
			break;
		case 4://������ϵ��
			status = find_member(&addb);
			break;
		case 5://�޸���ϵ��
			status = edit_member(&addb);
			break;
		case 6://�����ϵ��
			status = del_all(&addb);
			break;
		case 0://�˳�ͨѶ¼
			cout << "��л��ʹ�ñ�ϵͳ��ף��������죬�ټ���" << endl;
			system("pause");
			return 0;
			break;
		default://��������Ƿ�������Ч��
			status = -2;
			break;
		}
		switch (status)
		{
		case 0:
			cout << endl << "**********" << endl;
			cout << "�����ɹ���" << endl;
			cout << "**********" << endl << endl;
			break;
		case -1:
			cout << endl << "******************" << endl;
			cout << "����ʧ�ܣ������ԣ�" << endl;
			cout << "******************" << endl << endl;
			break;
		case -2:
			cout << endl << "****************************" << endl;
			cout << "�����ָ���������������롣" << endl;
			cout << "****************************" << endl << endl;
			fflush(stdin);
			break;
		}
		//fflush(stdin);
		system("pause");
		system("cls");
	}
	system("pause");
	return 0;
}