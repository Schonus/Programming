#include <iostream>

using namespace std;
int main() {
	int a = 10;
	int b = 20;
	//1.�߼������!��
	cout << !a << endl;
	cout << !!a << endl;
	//2.&&��
	cout << (a&&b) << endl;
	cout << (a&&0) << endl;
	//3.||��
	cout << (a||b) << endl;
	cout << (a||0) << endl;
	cout << (0 || 0) << endl;


	system("pause");
	return 0;
}