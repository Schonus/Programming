#include "WorkerManager.h"

WorkerManager::WorkerManager()
{}

void WorkerManager::Show_Menu() 
{
	cout << "******************************************" << endl;
	cout << "***********   0.�˳��������   ***********" << endl;
	cout << "***********   1.����ְ����Ϣ   ***********" << endl;
	cout << "***********   2.��ʾְ����Ϣ   ***********" << endl;
	cout << "***********   3.ɾ����ְְ��   ***********" << endl;
	cout << "***********   4.�޸�ְ����Ϣ   ***********" << endl;
	cout << "***********   5.����ְ����Ϣ   ***********" << endl;
	cout << "***********   6.���ձ������   ***********" << endl;
	cout << "***********   7.��������ĵ�   ***********" << endl;
	cout << "***********   8.��        ��   ***********" << endl;
	cout << "******************************************" << endl;
	cout << endl;
}

void WorkerManager::Exit_System() 
{
	cout << "��ӭ�´�ʹ�ñ�ϵͳ���ټ���" << endl;
	system("pause");
	exit(0);//�˳�����
}

WorkerManager::~WorkerManager()
{}

