#include "Functions.h"

//展示功能
void showitem() 
{
	cout
		<< "***************************" << endl
		<< "***************************" << endl
		<< "***************************" << endl
		<< "***** 1、添加联系人 *******" << endl
		<< "***** 2、显示联系人 *******" << endl
		<< "***** 3、删除联系人 *******" << endl
		<< "***** 4、查找联系人 *******" << endl
		<< "***** 5、修改联系人 *******" << endl
		<< "***** 6、清空联系人 *******" << endl
		<< "***** 0、退出通讯录 *******" << endl
		<< "***************************" << endl
		<< "***************************" << endl
		<< "***************************" << endl << endl
		;
}
//修改和添加共用模块
void edit_addcore(Addressbook* addb,int address = 0,int index = -1)//index表示进行什么操作，0为修改，1位添加
{
	string keyword = "";
	switch (index)
	{
	case 0:
		keyword = "修改";
		break;
	case 1:
		keyword = "添加";
		address = addb->member_Size;
		break;
	}
	cout << "请输入要" << keyword << "的成员信息：" << endl;
	cout << "姓名：";
	cin >> addb->array[address].name;
	do
	{
		cout << "性别(1-男，2-女)：";
		cin >> addb->array[address].gender;
		if ((addb->array[address].gender == 1) || (addb->array[address].gender == 2))
		{
			break;
		}
		cout << "你输入的数据不合法，请重新输入！" << endl;
		fflush(stdin);
	} while (true);
	cout << "年龄：";
	cin >> addb->array[address].age;
	cout << "联系电话：";
	cin >> addb->array[address].phonenum;
	cout << "家庭住址：";
	cin >> addb->array[address].home_address;
	if (index == 1) 
	{
		addb->member_Size++;
	}
}
//添加联系人功能
int add_member(Addressbook* addb) 
{
	if (((*addb).member_Size) >= MAX)
	{
		cout << "非常抱歉，您的电话簿已经爆满了。。。" << endl;
		return -1;
	}
	edit_addcore(addb, addb->member_Size, 1);
	return 0;
}
//展示联系人功能
int show_member(Addressbook * addb)
{
	string genderword = "";
	if (addb->member_Size == 0)
	{
		cout << "通讯录是空的" << endl;
		return 0;
	}
	for (int i = 0; i < addb->member_Size; i++)
	{
		cout << "**************************" << endl;
		cout << "姓名：" << addb->array[i].name << endl;
		switch (addb->array[i].gender)
		{
		case 1:
			genderword = "男";
			break;
		case 2:
			genderword = "女";
			break;
		default:
			genderword = "未知";
			break;
		}
		cout << "性别：" << genderword << endl;
		cout << "年龄：" << addb->array[i].age << endl;
		cout << "联系电话：" << addb->array[i].phonenum << endl;
		cout << "家庭住址：" << addb->array[i].home_address << endl;
		cout << "**************************" << endl;
	}
	return 0;
}
//删除、寻找、修改联系人前置模块
string pre_del_find_edit(Addressbook* addb,int index)//0表示删除，1表示寻找
{
	string keyword = "";
	if (addb->member_Size == 0)
	{
		cout << "电话簿已是空空如也TAT" << endl;
		return keyword;
	}
	string member_name = "";
	switch (index)
	{
	case 0:
		keyword = "删除";
		break;
	case 1:
		keyword = "寻找";
		break;
	case 2:
		keyword = "修改";
		break;
	default:
		cout << "参数错误!";
		keyword = "（参数错误请维护）";
		fflush(stdin);
	}
	cout << "请输入要" << keyword << "的成员姓名：";
	cin >> member_name;
	return member_name;
}
//寻找联系人模块（删除、寻找、修改共用）
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
//删除联系人功能
int del_member(Addressbook* addb)
{
	//使用共用前置
	string member_name = pre_del_find_edit(addb, 0);
	if(member_name == "")
	{
		return -1;
	}
	//使用共用的寻找方法
	int index = finding(addb, member_name);
	//主菜：删除处理
	//没找到的情况处理
	if (index == -1)
	{
		cout << "对不起，找不到您所要删除的成员信息。" << endl;
		return -1;
	}
	//找到的情况处理
	addb->array[index] = {};
	//后面的顶上前面的
	for (int i = index; i+1 < addb->member_Size; i++)
	{
		addb->array[i] = addb->array[i + 1];
	}
	//记录总数去掉，防止出现无用信息
	addb->member_Size--;
	return 0;
}
//寻找联系人功能
int find_member(Addressbook* addb) 
{
	string genderword = "";
	//使用共用前置
	string member_name = pre_del_find_edit(addb, 1);
	if (member_name == "")
	{
		return -1;
	}
	//使用共用的寻找方法
	int index = finding(addb, member_name);
	//主菜：寻找处理
	//没找到的情况处理
	if (index == -1)
	{
		cout << "对不起，找不到您所要查找的成员信息。" << endl;
		return -1;
	}
	//找到的情况处理
	cout << "**************************" << endl;
	cout << "姓名：" << addb->array[index].name << endl;
	switch (addb->array[index].gender)
	{
	case 1:
		genderword = "男";
		break;
	case 2:
		genderword = "女";
		break;
	}
	cout << "性别：" << genderword << endl;
	cout << "年龄：" << addb->array[index].age << endl;
	cout << "联系电话：" << addb->array[index].phonenum << endl;
	cout << "家庭住址：" << addb->array[index].home_address << endl;
	cout << "**************************" << endl;
	return 0;
}
//修改联系人功能
int edit_member(Addressbook* addb) 
{
	string genderword = "";
	//使用共用前置
	string member_name = pre_del_find_edit(addb, 2);
	if (member_name == "")
	{
		return -1;
	}
	//使用共用的寻找方法
	int index = finding(addb, member_name);
	int index2 = 0;
	//主菜：修改处理
	//没找到的情况处理
	if (index == -1)
	{
		cout << "对不起，找不到您所要查找的成员信息。" << endl;
		return -1;
	}
	//找到的情况处理，展示修改前的样子
	cout << "**************************" << endl;
	cout << "姓名：" << addb->array[index].name << endl;
	switch (addb->array[index].gender)
	{
	case 1:
		genderword = "男";
		break;
	case 2:
		genderword = "女";
		break;
	}
	cout << "性别：" << genderword << endl;
	cout << "年龄：" << addb->array[index].age << endl;
	cout << "联系电话：" << addb->array[index].phonenum << endl;
	cout << "家庭住址：" << addb->array[index].home_address << endl;
	cout << "**************************" << endl;
	//询问客户是否愿意修改
	while (true)
	{
		cout << "您确定要对这个成员进行修改吗？（0-否 1-是）";
		cin >> index2;
		switch (index2)
		{
		case 0:
			cout << "将返回主菜单(〃'▽'〃)" << endl;
			return 0;
			break;
		case 1:
			edit_addcore(addb, index, 0);
			return 0;
			break;
		default:
			cout << "您输入的有误，请再输入一遍吧";
			fflush(stdin);
			break;
		}
	}
	
}
//清空联系人功能
int del_all(Addressbook* addb)
{
	if (addb->member_Size <= 0)
	{
		cout << "您也太狠心了，电话簿都空啦TAT" << endl;
		return -1;
	}
	else 
	{
		cout << "电话簿保留了您过去认识的人的点点滴滴，您真的要狠心删除整个电话簿吗？(0-否 1-是)" << endl;
		int index = 0;
		cin >> index;
		switch (index)
		{
		case 0:
		default:
			cout << "请好好珍惜这份情感汇聚成的结晶哦";
			return -1;
			break;
		case 1:
			addb->member_Size = 0;
			cout << "电话簿已经清空空了，每个友谊都是值得珍惜的，请好好维护哦！" << endl;
			return 0;
			break;
		} 
	}
}