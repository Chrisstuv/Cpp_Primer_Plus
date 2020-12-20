// C++ Primer Plus 第二章第三节笔记及代码 -- 2020/11/29
// getinfo.cpp -- input and output
#include <iostream>
using namespace std;

int main()
{
	int carrots;																/*  类
																					类型为"int"的"carrots"存储整数，可用于加减乘除
																					"cout"是"ostream"类对象，在这里将整数插入到输出流中
																					"cin"是"istream"类对象，在这里从输入流抽取整数
																				*/
	cout << "How many carrots do you have?" << endl;							// "<<"和">>"指示信息流的方向，这些运算符被"iostream"定义
	cin >> carrots;   // C++ input												// 智能对象"cin"用">>"从输入流中抽取字符；将输入转换为接收信息的变量能够接受的形式
	cout << "Here are 2 more. ";
	carrots = carrots + 2;
	// the next line concatenates output
	cout << "Now you have " << carrots << " carrots." << endl;					// "cout"用"<<"将字符串插入到输出流中
	cin.get();																	// 在输入数字并按Enter键时读取输入
	cin.get();																	// 让程序暂停直到按Enter键
	return 0;
}

/*
	类是用户定义的一种数据类型(可来自类库)。定义类需要描述类能表示什么信息，可对数据执行哪些操作(数据格式及其用法/一种数据类型的全部属性)。对象：根据数据格式规范创建的实体。
	类-对象 = 类型-变量
	类描述指定了可对类对象执行的所有操作
	eg. cout << "Trust me";
	此语句使用重新定义的"<<"运算符将"Trust me"消息参数发给"cout"显示消息；此时"cout"为对象
*/
