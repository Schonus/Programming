#pragma once
#include "worker.h"
#include <iostream>
using namespace std;

class Manager :public Worker
{
public:

	//���캯��
	Manager(int id, string name, int dId);

	//��ʾ������Ϣ
	virtual void show_Info();

	//��ȡ�����λ����
	virtual string get_Dept_Name();
};