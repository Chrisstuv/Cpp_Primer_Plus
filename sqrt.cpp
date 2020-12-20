// C++ Primer Plus 第二章第四节笔记及代码 -- 2020/11/30
// sqrt.cpp -- using the sqrt() function 函数调用
// 原型和定义分不清 -- page 28
// 原型描述函数接口，ie. 发送给函数的信息和返回的信息；定义中包含了函数的代码

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double area;															// 以分号为结尾，表明语句、原型，而不是函数头
	cout << "Enter the floor area, in square feet, of your home: ";
	cin >> area;
	double side;															// 要为每个函数提供原型，类似变量申明，指出涉及的类型
	side = sqrt(area);														// sqrt(参数)为有返回值的函数 double = sqrt(double); function prototype 函数原型
																			// 它将参数信息发送给sqrt()函数(函数调用)后
																			// 生成一个返回值(return value)，返回值再从sqrt()函数发送回调用函数
	cout << "That's the equivalent of a square " << side					// 此返回值可被赋给变量或其他表达式中使用
		 << " feet to the side." << endl;
	cout << "How fascinating!" << endl;
	return 0;
}