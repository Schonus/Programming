//#include <iostream>
//#include <string>
//#include <ctime>
//using namespace std;
////����ѧ���Ľṹ��
//struct Student
//{
//	//����
//	string name;
//	//���� 
//	int age;
//	//����
//	int score;
//};
////������ʦ�Ľṹ�壨Ƕ�ף�
//struct Teacher 
//{
//	string name;//����
//	int age;//����
//	Student stuarr[5];//������ѧ��
//};
////��ѧ������ʦ��������
//void Allocatename(Teacher* tch,int length) 
//{
//	string teacherword = "��ʦ";
//	string studentword = "ѧ��";
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
////��ʾ���
//void Announcement(Teacher* tch,int length) 
//{
//	for (int i = 0; i < length; i++)
//	{
//		cout << "��" << i+1 << "λ��ʦ��Ϣ��" << endl;
//		cout << "��ʦ������" << tch[i].name << endl << "��ʦ���䣺" << tch[i].age << endl << "������������������������"<< endl;
//		for (int j = 0; j < sizeof(tch[i].stuarr) / sizeof(tch[i].stuarr[0]); j++)
//		{
//			cout << "______________________________________________" << endl;
//			cout << "��" << j+1 << "λѧ����Ϣ��" << endl;
//			cout << "\tѧ��������" << tch[i].stuarr[j].name << endl;
//			cout << "\tѧ�����䣺" << tch[i].stuarr[j].age << endl;
//			cout << "\tѧ���ɼ���" << tch[i].stuarr[j].score << endl;
//			cout << "______________________________________________" << endl;
//		}
//	}
//}
////���ɿ��
//int main()
//{
//  srand((unsigned int)time(NULL));
//	//�����ṹ���������
//	Teacher tcharr[3];
//	Allocatename(tcharr, sizeof(tcharr) / sizeof(tcharr[0]));
//	Announcement(tcharr, sizeof(tcharr) / sizeof(tcharr[0]));
//	return 0;
//}
