#include "Functions.h"

//չʾ����
void showitem() 
{
	cout
		<< "***************************" << endl
		<< "***************************" << endl
		<< "***************************" << endl
		<< "***** 1�������ϵ�� *******" << endl
		<< "***** 2����ʾ��ϵ�� *******" << endl
		<< "***** 3��ɾ����ϵ�� *******" << endl
		<< "***** 4��������ϵ�� *******" << endl
		<< "***** 5���޸���ϵ�� *******" << endl
		<< "***** 6�������ϵ�� *******" << endl
		<< "***** 0���˳�ͨѶ¼ *******" << endl
		<< "***************************" << endl
		<< "***************************" << endl
		<< "***************************" << endl << endl
		;
}
//�޸ĺ���ӹ���ģ��
void edit_addcore(Addressbook* addb,int address = 0,int index = -1)//index��ʾ����ʲô������0Ϊ�޸ģ�1λ���
{
	string keyword = "";
	switch (index)
	{
	case 0:
		keyword = "�޸�";
		break;
	case 1:
		keyword = "���";
		address = addb->member_Size;
		break;
	}
	cout << "������Ҫ" << keyword << "�ĳ�Ա��Ϣ��" << endl;
	cout << "������";
	cin >> addb->array[address].name;
	do
	{
		cout << "�Ա�(1-�У�2-Ů)��";
		cin >> addb->array[address].gender;
		if ((addb->array[address].gender == 1) || (addb->array[address].gender == 2))
		{
			break;
		}
		cout << "����������ݲ��Ϸ������������룡" << endl;
		fflush(stdin);
	} while (true);
	cout << "���䣺";
	cin >> addb->array[address].age;
	cout << "��ϵ�绰��";
	cin >> addb->array[address].phonenum;
	cout << "��ͥסַ��";
	cin >> addb->array[address].home_address;
	if (index == 1) 
	{
		addb->member_Size++;
	}
}
//�����ϵ�˹���
int add_member(Addressbook* addb) 
{
	if (((*addb).member_Size) >= MAX)
	{
		cout << "�ǳ���Ǹ�����ĵ绰���Ѿ������ˡ�����" << endl;
		return -1;
	}
	edit_addcore(addb, addb->member_Size, 1);
	return 0;
}
//չʾ��ϵ�˹���
int show_member(Addressbook * addb)
{
	string genderword = "";
	if (addb->member_Size == 0)
	{
		cout << "ͨѶ¼�ǿյ�" << endl;
		return 0;
	}
	for (int i = 0; i < addb->member_Size; i++)
	{
		cout << "**************************" << endl;
		cout << "������" << addb->array[i].name << endl;
		switch (addb->array[i].gender)
		{
		case 1:
			genderword = "��";
			break;
		case 2:
			genderword = "Ů";
			break;
		default:
			genderword = "δ֪";
			break;
		}
		cout << "�Ա�" << genderword << endl;
		cout << "���䣺" << addb->array[i].age << endl;
		cout << "��ϵ�绰��" << addb->array[i].phonenum << endl;
		cout << "��ͥסַ��" << addb->array[i].home_address << endl;
		cout << "**************************" << endl;
	}
	return 0;
}
//ɾ����Ѱ�ҡ��޸���ϵ��ǰ��ģ��
string pre_del_find_edit(Addressbook* addb,int index)//0��ʾɾ����1��ʾѰ��
{
	string keyword = "";
	if (addb->member_Size == 0)
	{
		cout << "�绰�����ǿտ���ҲTAT" << endl;
		return keyword;
	}
	string member_name = "";
	switch (index)
	{
	case 0:
		keyword = "ɾ��";
		break;
	case 1:
		keyword = "Ѱ��";
		break;
	case 2:
		keyword = "�޸�";
		break;
	default:
		cout << "��������!";
		keyword = "������������ά����";
		fflush(stdin);
	}
	cout << "������Ҫ" << keyword << "�ĳ�Ա������";
	cin >> member_name;
	return member_name;
}
//Ѱ����ϵ��ģ�飨ɾ����Ѱ�ҡ��޸Ĺ��ã�
int finding(Addressbook* addb, string name)
{
	for (int i = 0; i < addb->member_Size; i++)
	{
		if (addb->array[i].name == name)
		{
			return i;
		}
	}
	return -1;
}
//ɾ����ϵ�˹���
int del_member(Addressbook* addb)
{
	//ʹ�ù���ǰ��
	string member_name = pre_del_find_edit(addb, 0);
	if(member_name == "")
	{
		return -1;
	}
	//ʹ�ù��õ�Ѱ�ҷ���
	int index = finding(addb, member_name);
	//���ˣ�ɾ������
	//û�ҵ����������
	if (index == -1)
	{
		cout << "�Բ����Ҳ�������Ҫɾ���ĳ�Ա��Ϣ��" << endl;
		return -1;
	}
	//�ҵ����������
	addb->array[index] = {};
	//����Ķ���ǰ���
	for (int i = index; i+1 < addb->member_Size; i++)
	{
		addb->array[i] = addb->array[i + 1];
	}
	//��¼����ȥ������ֹ����������Ϣ
	addb->member_Size--;
	return 0;
}
//Ѱ����ϵ�˹���
int find_member(Addressbook* addb) 
{
	string genderword = "";
	//ʹ�ù���ǰ��
	string member_name = pre_del_find_edit(addb, 1);
	if (member_name == "")
	{
		return -1;
	}
	//ʹ�ù��õ�Ѱ�ҷ���
	int index = finding(addb, member_name);
	//���ˣ�Ѱ�Ҵ���
	//û�ҵ����������
	if (index == -1)
	{
		cout << "�Բ����Ҳ�������Ҫ���ҵĳ�Ա��Ϣ��" << endl;
		return -1;
	}
	//�ҵ����������
	cout << "**************************" << endl;
	cout << "������" << addb->array[index].name << endl;
	switch (addb->array[index].gender)
	{
	case 1:
		genderword = "��";
		break;
	case 2:
		genderword = "Ů";
		break;
	}
	cout << "�Ա�" << genderword << endl;
	cout << "���䣺" << addb->array[index].age << endl;
	cout << "��ϵ�绰��" << addb->array[index].phonenum << endl;
	cout << "��ͥסַ��" << addb->array[index].home_address << endl;
	cout << "**************************" << endl;
	return 0;
}
//�޸���ϵ�˹���
int edit_member(Addressbook* addb) 
{
	string genderword = "";
	//ʹ�ù���ǰ��
	string member_name = pre_del_find_edit(addb, 2);
	if (member_name == "")
	{
		return -1;
	}
	//ʹ�ù��õ�Ѱ�ҷ���
	int index = finding(addb, member_name);
	int index2 = 0;
	//���ˣ��޸Ĵ���
	//û�ҵ����������
	if (index == -1)
	{
		cout << "�Բ����Ҳ�������Ҫ���ҵĳ�Ա��Ϣ��" << endl;
		return -1;
	}
	//�ҵ����������չʾ�޸�ǰ������
	cout << "**************************" << endl;
	cout << "������" << addb->array[index].name << endl;
	switch (addb->array[index].gender)
	{
	case 1:
		genderword = "��";
		break;
	case 2:
		genderword = "Ů";
		break;
	}
	cout << "�Ա�" << genderword << endl;
	cout << "���䣺" << addb->array[index].age << endl;
	cout << "��ϵ�绰��" << addb->array[index].phonenum << endl;
	cout << "��ͥסַ��" << addb->array[index].home_address << endl;
	cout << "**************************" << endl;
	//ѯ�ʿͻ��Ƿ�Ը���޸�
	while (true)
	{
		cout << "��ȷ��Ҫ�������Ա�����޸��𣿣�0-�� 1-�ǣ�";
		cin >> index2;
		switch (index2)
		{
		case 0:
			cout << "���������˵�(��'��'��)" << endl;
			return 0;
			break;
		case 1:
			edit_addcore(addb, index, 0);
			return 0;
			break;
		default:
			cout << "�������������������һ���";
			fflush(stdin);
			break;
		}
	}
	
}
//�����ϵ�˹���
int del_all(Addressbook* addb)
{
	if (addb->member_Size <= 0)
	{
		cout << "��Ҳ̫�����ˣ��绰��������TAT" << endl;
		return -1;
	}
	else 
	{
		cout << "�绰������������ȥ��ʶ���˵ĵ��εΣ������Ҫ����ɾ�������绰����(0-�� 1-��)" << endl;
		int index = 0;
		cin >> index;
		switch (index)
		{
		case 0:
		default:
			cout << "��ú���ϧ�����л�۳ɵĽᾧŶ";
			return -1;
			break;
		case 1:
			addb->member_Size = 0;
			cout << "�绰���Ѿ���տ��ˣ�ÿ�����궼��ֵ����ϧ�ģ���ú�ά��Ŷ��" << endl;
			return 0;
			break;
		} 
	}
}