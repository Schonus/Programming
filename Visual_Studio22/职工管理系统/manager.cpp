#include "manager.h"

Manager::Manager(int Id, string Name, int dId)
{
	this->m_Id = Id;
	this->m_Name = Name;
	this->m_DeptId = dId;
};

void Manager::show_Info()
{
	cout << "职工编号： " << this->m_Id << endl;
};


string Manager::get_Dept_Name()
{
	return string("领导");
}