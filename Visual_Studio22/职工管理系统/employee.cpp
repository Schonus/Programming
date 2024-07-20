#include "employee.h"

Employee::Employee(int Id, string Name, int dId)
{
	this->m_Id = Id;
	this->m_Name = Name;
	this->m_DeptId = dId;
};

void Employee::show_Info()
{
	cout << "职工成员：\n\t职工编号： " << this->m_Id << endl 
		<< "\t职工姓名：" << this->m_Name << endl
		<< "\t岗位：" << this->get_Dept_Name() << endl
		<< "\t岗位职责：完成经理交给的任务" << endl;
};

string Employee::get_Dept_Name()
{
	return string("员工");
}