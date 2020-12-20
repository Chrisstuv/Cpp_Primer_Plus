// C++ Primer Plus 第二章第二节笔记及代码 -- 2020/11/29
// carrot.cpp -- food processing program
// uses and displays a variable
// getinfo.cpp -- input and output

#include <iostream>
using namespace std;

int main()
{
	int carrots;																// 定义申明(defining declaration)或引用申明(reference declaration)：为变量分配内存空间 -- declare an integer variable 申明一个整数变量，可以表示正负
																				// "int"被存储的数据类型；"carrots"变量名
	carrots = 25;																// 赋值语句：将值赋给存储单元 assign a value to the variable；符号"="叫赋值运算符
																				/*
																					可连续使用赋值运算符，赋值从右向左运行：
																					int a;
																					int b;
																					int c;
																					a = b = c = 88;
																				*/
	cout << "I have ";
	cout << carrots;															// display the value of the variable；"cout"可重新定义/重载运算符"<<"使"cout"可识别
	cout << " carrots.";
	cout << endl;
	carrots = carrots - 1;														// modify the variable
	cout << "Crunch,crunch. Now I have " << carrots << " carrots." << endl;
	// getinfo.cpp -- input and output
	cout << "How many carrots do you have?" << endl;							
	cin >> carrots;   // C++ input												// cin用">>"从输入流中抽取字符
	cout << "Here are 2 more. ";
	carrots = carrots + 2;
	// the next line concatenates output
	cout << "Now you have " << carrots << " carrots." << endl;					// cout用"<<"将字符串插入到输出流中
	cin.get();																	// 在输入数字并按Enter键时读取输入
	cin.get();																	// 让程序暂停直到按Enter键
	return 0;
}