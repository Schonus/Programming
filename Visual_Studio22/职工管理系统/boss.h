#pragma once
#include "worker.h"
#include <iostream>
using namespace std;

class Boss :public Worker
{
public:

	//构造函数
	Boss(int id, string name, int dId);

	//显示个人信息
	virtual void show_Info();

	//获取职工岗位名称
	virtual string get_Dept_Name();
};