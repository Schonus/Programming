#include <iostream>
#include <string>
using namespace std;
#define MAX 1000
//��Ա�ṹ��
struct member
{
	//����
	string name;
	//�Ա�
	int gender;
	//����
	int age;
	//�绰����
	string phonenum;
	//��ͥ��ַ
	string home_address;
};
//�绰���ṹ��
struct Addressbook
{
	//ͨѶ¼�б������ϵ������
	member array[MAX];//��������дMAX�ᱨ��ֻ��д1000TAT
	//ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int member_Size;
};

void showitem();//չʾ����

void edit_addcore(Addressbook* addb, int address,int index);//�޸ĺ���ӹ���ģ��

int add_member(Addressbook* addb);//�����ϵ�˹���

int show_member(Addressbook* addb);//չʾ��ϵ�˹���

string pre_del_and_find(Addressbook* addb, int index);//ɾ����Ѱ����ϵ��ǰ��ģ��

void finding(Addressbook* addb);//Ѱ����ϵ��ģ�飨ɾ�������ҹ��ã�;

int del_member(Addressbook* addb);//ɾ����ϵ�˹���

int find_member(Addressbook* addb);//Ѱ����ϵ�˹���

int edit_member(Addressbook* addb);//�޸���ϵ�˹���

int del_all(Addressbook* addb);//�����ϵ�˹���