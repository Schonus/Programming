#include "employee.h"

Employee::Employee(int Id, string Name, int dId)
{
	this->m_Id = Id;
	this->m_Name = Name;
	this->m_DeptId = dId;
};

void Employee::show_Info()
{
	cout << "ְ����Ա��\n\tְ����ţ� " << this->m_Id << endl 
		<< "\tְ��������" << this->m_Name << endl
		<< "\t��λ��" << this->get_Dept_Name() << endl
		<< "\t��λְ����ɾ�����������" << endl;
};

string Employee::get_Dept_Name()
{
	return string("Ա��");
}