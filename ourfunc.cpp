// C++ Primer Plus 第二章第四节笔记及代码 -- 2020/11/30
// ourfunc.cpp -- defining your own function
// 原型与定义见page 31 图2.8

#include <iostream>
using namespace std;
void simon(int);					// function prototype for simon()；自定义函数在使用前必须提供原型

int main()
{
	simon(3);						// call the simon() function
	// simple = simon(3);			// not allowed for void functions, void simon() function don't have return value
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	simon(count);					// call it again
	cout << "Done!" << endl;
	return 0;
}
// 函数头复习
/*
	main()的关键字为int，返回整数值，空括号或void表示没有参数，return提供返回值(通常叫退出值)给操作系统，并结束函数；0为运行成功，非0失败
	关键字不可作为变量名，main不是关键字，不是语言的组成部分，而是必不可少的函数名称，最好不要作为变量名，其他函数名与对象名同样
	eg. cout不可同时作为变量名和对象名
	*/

void simon(int n)					// define the simon() function
{
	cout << "Simon says touch your toes " << n << " times." << endl;
}									// void functions don't need return statements

// 函数格式
/*
	type functionname(argumentlist)
	{
		statements
	}
*/