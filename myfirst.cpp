// C++ Primer Plus 第二章第一节笔记及代码 -- 2020/11/29
// 省略了2.1.7的格式化 -- page 19-21
// myfirst.cpp -- display a message
// "myfirst"为文件名；"."为句点；"cpp"和"h"为扩展名，扩展名取决于所用的C++系统

#include <iostream>								// a preprocessor directive 预处理指令 
												/*
												   "#include"预处理器编译指令，使iostream文件和源文件组合成一个复合文件再一起发给编译器
												   "iostream"为包含文件(include file)或头文件(header file)
												   使用"cin"和"cout"进行输入和输出的程序必须包含文件iostream -- "io"指输入和输出
												*/
using namespace std;							// using编译指令 make definitions visible 使定义可见 -- "using namespace" 编译指令；可以使用std名称空间中定义的名称，而不用std::前缀
												/*
												   "::"为域作用限制符；class , namespace 中限制在某一个模块中
												   class(类名) :: （要访问的函数名）
												   namespace (模块名) :: (要访问的函数或者变量名)
												   ":"的3种用法：
												   1. 类中 private , public , protected 的声明中
												   2. 使用初始化列表的时候
												   3. 使用派生类的时候，出现覆盖现象时，访问基类函数的时候
												   最好用这些using申明代替"using namespace std;"，以免出现不同前缀但函数名相同的情况；可以直接用"cout, endl, cin"，不写std::前缀：
												   using std::cout; // make cout available
												   using std::endl; // make endl available
												   using std::cin;  // make cin available
												*/
int main(void)										// function header 函数头
												/*
												   "main()"与操作系统之间的接口
												   "int" 为函数返回类型: 从函数返回给调用它的函数的信息
												   "main" 为函数名，main函数通常被启动代码(启动代码由编译器添加到程序中，程序与操作系统的桥梁)调用
												   C++程序必须包含一个名为"main()"的函数保证程序完整且运行时通常从"main()"开始；例外：动态链接库(DLL)模块，非独立程序，调用非标准函数，如"_tmain()"，无需"main()"
												   括号中的部分为形参列表(argument list)或参数列表(parameter list): 从调用函数传递给被调用函数的信息
												   function header总结："main()"返回一个值(return value)，由于返回类型为"int"，返回值为整数0("return 0;")，但不接受任何信息或参数，因为括号内为空
												   "int main(void)"与"int main()"等效，关键词"void"不接受任何参数；也可用"void main()"代替，"void main()"可以省略返回语句；若"void"为函数返回类型，函数将不返回任何值
												*/
{												/* start of function body */
	cout << "Come up and C++ me some time.";    // message
												/*
												   "cout"是一个预定义的对象，其属性在"iostream"中定义；对象是类的特定实例，类定义了数据的存储和使用方式
												   双引号中的一系列字符为字符串
												   插入运算符"<<"(将字符串和变量发送给cout)和">>"指出了信息流动的路径
												*/
												/*
													运算符重载：同一运算符有不同含义，编译器可通过上下文来确定其含义
												*/
	cout << endl;								// start a new line -- 控制符(manipulator)endl
												/*
													换行符\n，也可称为转义序列的按键组合；"endl"确保程序运行前刷新输出(将其立即显示在屏幕上)，"\n"可能在输入信息后才出现提示
													"cout << endl;"可替换为"cout << "\n"";
												*/
	std::cout << "You won't regret it!" << endl;		// more output
	// cin.get();									// 为了保持输出窗口打开直到按下任意键 （这里不需要）
	return 0;									// 叫做返回语句(return statement)；作用：terminate "main()" 终止"main()"；可写作"return (0);"或"return(0);"
}												/* end of function body */
												/*
												   "{"和"}"之间的是函数体(不包括大括号)
												   函数定义包括大括号和函数体
												   不包括"return 0;"的函数体叫语句，每个语句以";"号结尾；语句是要执行的操作
												*/
