#include <iostream>
#include <string>
using namespace std;
#define MAX 1000
//成员结构体
struct member
{
	//姓名
	string name;
	//性别
	int gender;
	//年龄
	int age;
	//电话号码
	string phonenum;
	//家庭地址
	string home_address;
};
//电话簿结构体
struct Addressbook
{
	//通讯录中保存的联系人数组
	member array[MAX];//这里由于写MAX会报错，只能写1000TAT
	//通讯录中当前记录联系人个数
	int member_Size;
};

void showitem();//展示功能

void edit_addcore(Addressbook* addb, int address,int index);//修改和添加共用模块

int add_member(Addressbook* addb);//添加联系人功能

int show_member(Addressbook* addb);//展示联系人功能

string pre_del_and_find(Addressbook* addb, int index);//删除、寻找联系人前置模块

void finding(Addressbook* addb);//寻找联系人模块（删除、查找共用）;

int del_member(Addressbook* addb);//删除联系人功能

int find_member(Addressbook* addb);//寻找联系人功能

int edit_member(Addressbook* addb);//修改联系人功能

int del_all(Addressbook* addb);//清空联系人功能