#include "boss.h"

Boss::Boss(int Id, string Name, int dId)
{
	this->m_Id = Id;
	this->m_Name = Name;
	this->m_DeptId = dId;
};

void Boss::show_Info()
{
	cout << "ְ����ţ� " << this->m_Id << endl;
};

string Boss::get_Dept_Name()
{
	return string("�ϰ�");
}