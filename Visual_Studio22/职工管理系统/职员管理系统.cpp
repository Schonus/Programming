//引用声明 头文件包含iostream了，这里可以省略
#include "WorkerManager.h"
#include "test.h"
using namespace std;

//程序开始之处
int main() 
{
	
	char choice = '0';
	test();
	WorkerManager wm;
	////不断做循环，使用户提出正确需求
	//do
	//{
	//	//展示展示函数
	//	wm.Show_Menu();
	//	printf("请输入你的指令：");
	//	cin >> choice;//接收指令
	//	switch (choice)//鉴别指令
	//	{
	//	case 48://0的ascll码
	//		//退出系统
	//		wm.Exit_System();
	//		break;
	//	case 49:
	//		//增加职工
	//		break;
	//	case 50:
	//		//显示职工
	//		break;
	//	case 51:
	//		//删除职工
	//		break;
	//	case 52:
	//		//修改职工
	//		break;
	//	case 53:
	//		//查找职工
	//		break;
	//	case 54:
	//		//排序职工
	//		break;
	//	case 55:
	//		//清空文档
	//		break;
	//	case 56:
	//		//清屏
	//		system("cls");
	//		break;
	//	default:
	//		printf("您输入的内容有误，请重新输入！\n");
	//		choice = -1;
	//		break;
	//	}
	//	fflush(stdin);
	//} while (choice != '0');//判定是否退出
	//程序结束之处
	system("pause");
	return 0;
}