#pragma once 
#include "worker.h"
#include <iostream>
using namespace std;

class Employee :public Worker 
{
public:

	//���캯��
	Employee(int id, string name, int dId);

	//��ʾ������Ϣ
	virtual void show_Info();

	//��ȡְ����λ����
	virtual string get_Dept_Name();
};