#include <iostream>
//外部引用文件
#include "Functions.h"
using namespace std;
//主函数
int main() 
{
	Addressbook addb = { {}, 0 };
	int i=0;
	int status = 0;
	//判断系统
	while (true)
	{
		showitem();
		cout << "请输入指令：";
		cin >> i;
		switch (i)
		{
		case 1://添加联系人
			status = add_member(&addb);//利用地址传递
			break;
		case 2://显示联系人
			status = show_member(&addb);
			break;
		case 3://删除联系人
			status = del_member(&addb);
			break;
		case 4://查找联系人
			status = find_member(&addb);
			break;
		case 5://修改联系人
			status = edit_member(&addb);
			break;
		case 6://清空联系人
			status = del_all(&addb);
			break;
		case 0://退出通讯录
			cout << "感谢你使用本系统，祝您生活愉快，再见！" << endl;
			system("pause");
			return 0;
			break;
		default://检查输入是否有误（无效）
			status = -2;
			break;
		}
		switch (status)
		{
		case 0:
			cout << endl << "**********" << endl;
			cout << "操作成功！" << endl;
			cout << "**********" << endl << endl;
			break;
		case -1:
			cout << endl << "******************" << endl;
			cout << "操作失败，请重试！" << endl;
			cout << "******************" << endl << endl;
			break;
		case -2:
			cout << endl << "****************************" << endl;
			cout << "输入的指令有误，请重新输入。" << endl;
			cout << "****************************" << endl << endl;
			fflush(stdin);
			break;
		}
		//fflush(stdin);
		system("pause");
		system("cls");
	}
	system("pause");
	return 0;
}