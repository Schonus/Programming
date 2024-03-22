#include <iostream>
#include <string>

using namespace std;
//定义英雄结构体
struct hero
{
	//姓名
	string name;
	//年龄 
	int age;
	//分数
	string gender;
};
//万能的交换律
void swap(hero* a, hero* b)
{
	hero tempt;
	tempt = *a;
	*a = *b;
	*b = tempt;
}
//冒泡排序改进法
void structbubblesort(hero* herolist, int length) 
{
	for (int i = 1; i < length; i++)
	{
		for (int j = 0; j < i; j++)
		{
			//判断
			if (herolist[i].age < herolist[j].age) {
				swap(&herolist[i], &herolist[j]);
			}
		}
	}
}
//显示结果
void Announcement(hero* herolist,int length) 
{
	for (int i = 0; i < length; i++)
	{
		cout << "第" << i+1 << "位英雄：" << endl;
		cout << "姓名：" << herolist[i].name << endl << "年龄：" << herolist[i].age << endl << "性别：" << herolist[i].gender << endl << "————————————"<< endl;
		
	}
}
//生成框架
int main()
{
	
	//创建结构体数组变量
	hero herolist[5] = 
	{ 
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}, 
	};
	structbubblesort(herolist, sizeof(herolist) / sizeof(herolist[0]));
	Announcement(herolist, sizeof(herolist) / sizeof(herolist[0]));
	return 0;
}
