// C++ Primer Plus 第二章第四节笔记及代码 -- 2020/11/30
// convert.cpp -- converts stone to pounds

#include <iostream>
using namespace std;
int stonetolb(int);										// function prototype

int main()
{
	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << " stone = ";
	cout << pounds << " pounds." << endl;
	return 0;
}

int stonetolb(int sts)									// 将整形变量stone的值赋给函数stonetolb的变量sts
{
	return 14 * sts;									// return可返回较复杂的表达式，避免创建新的变量
}