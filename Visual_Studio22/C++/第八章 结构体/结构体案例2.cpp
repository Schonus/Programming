#include <iostream>
#include <string>

using namespace std;
//����Ӣ�۽ṹ��
struct hero
{
	//����
	string name;
	//���� 
	int age;
	//����
	string gender;
};
//���ܵĽ�����
void swap(hero* a, hero* b)
{
	hero tempt;
	tempt = *a;
	*a = *b;
	*b = tempt;
}
//ð������Ľ���
void structbubblesort(hero* herolist, int length) 
{
	for (int i = 1; i < length; i++)
	{
		for (int j = 0; j < i; j++)
		{
			//�ж�
			if (herolist[i].age < herolist[j].age) {
				swap(&herolist[i], &herolist[j]);
			}
		}
	}
}
//��ʾ���
void Announcement(hero* herolist,int length) 
{
	for (int i = 0; i < length; i++)
	{
		cout << "��" << i+1 << "λӢ�ۣ�" << endl;
		cout << "������" << herolist[i].name << endl << "���䣺" << herolist[i].age << endl << "�Ա�" << herolist[i].gender << endl << "������������������������"<< endl;
		
	}
}
//���ɿ��
int main()
{
	
	//�����ṹ���������
	hero herolist[5] = 
	{ 
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}, 
	};
	structbubblesort(herolist, sizeof(herolist) / sizeof(herolist[0]));
	Announcement(herolist, sizeof(herolist) / sizeof(herolist[0]));
	return 0;
}
