//#include <iostream>
//#include <string>
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
////将函数中的形参改为指针，可以减少内存空间的占用，而且不会复制新的副本出来
//void printStudent2(const Student *stu) //const 变常量，防止误操作
//{
//	cout << "姓名：" << stu->name << endl << "年龄：" << stu->age << endl << "成绩：" << stu->score << endl;
//}
//
//int main()
//{
//	//结构体嵌套结构体
//	//1.创建结构体变量
//	Student s = { "张三",20,90 };
//	s.score = 84;
//	printStudent2(&s);
//	system("pause");
//	return 0;
//}
