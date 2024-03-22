//#include <iostream>
//#include <string>
//#include <ctime>
//using namespace std;
////定义学生的结构体
//struct Student
//{
//	//姓名
//	string name;
//	//年龄 
//	int age;
//	//分数
//	int score;
//};
////定义老师的结构体（嵌套）
//struct Teacher 
//{
//	string name;//姓名
//	int age;//年龄
//	Student stuarr[5];//辅导的学生
//};
////给学生和老师分配名字
//void Allocatename(Teacher* tch,int length) 
//{
//	string teacherword = "教师";
//	string studentword = "学生";
//	string alphabet = "ABCDE";
//	for (int i = 0; i < length; i++)
//	{
//		tch[i].name = teacherword + alphabet[i];
//		tch[i].age = rand() % 21 + 30;
//		for (int j = 0; j < sizeof(tch[i].stuarr)/ sizeof(tch[i].stuarr[0]); j++)
//		{
//			tch[i].stuarr[j].name = studentword + alphabet[j];
//			tch[i].stuarr[j].age = rand() % 6 + 18;
//			tch[i].stuarr[j].score = rand() % 61 + 40;
//		}
//	}
//}
////显示结果
//void Announcement(Teacher* tch,int length) 
//{
//	for (int i = 0; i < length; i++)
//	{
//		cout << "第" << i+1 << "位教师信息：" << endl;
//		cout << "教师姓名：" << tch[i].name << endl << "教师年龄：" << tch[i].age << endl << "————————————"<< endl;
//		for (int j = 0; j < sizeof(tch[i].stuarr) / sizeof(tch[i].stuarr[0]); j++)
//		{
//			cout << "______________________________________________" << endl;
//			cout << "第" << j+1 << "位学生信息：" << endl;
//			cout << "\t学生姓名：" << tch[i].stuarr[j].name << endl;
//			cout << "\t学生年龄：" << tch[i].stuarr[j].age << endl;
//			cout << "\t学生成绩：" << tch[i].stuarr[j].score << endl;
//			cout << "______________________________________________" << endl;
//		}
//	}
//}
////生成框架
//int main()
//{
//  srand((unsigned int)time(NULL));
//	//创建结构体数组变量
//	Teacher tcharr[3];
//	Allocatename(tcharr, sizeof(tcharr) / sizeof(tcharr[0]));
//	Announcement(tcharr, sizeof(tcharr) / sizeof(tcharr[0]));
//	return 0;
//}
