#include <iostream>

using namespace std;
int main() {
	int a = 10;
	int b = 20;
	//1.逻辑运算符!非
	cout << !a << endl;
	cout << !!a << endl;
	//2.&&与
	cout << (a&&b) << endl;
	cout << (a&&0) << endl;
	//3.||或
	cout << (a||b) << endl;
	cout << (a||0) << endl;
	cout << (0 || 0) << endl;


	system("pause");
	return 0;
}