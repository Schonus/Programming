#pragma once //防止头文件重复包含
#include <iostream>
using namespace std;//使用标准命名空间

class WorkerManager 
{
public:
	//构造函数
	WorkerManager();

	void Show_Menu();
		//析构函数

	void Exit_System();
	~WorkerManager(); 
};
