// C++ Primer Plus �ڶ��µڶ��ڱʼǼ����� -- 2020/11/29
// carrot.cpp -- food processing program
// uses and displays a variable
// getinfo.cpp -- input and output

#include <iostream>
using namespace std;

int main()
{
	int carrots;																// ��������(defining declaration)����������(reference declaration)��Ϊ���������ڴ�ռ� -- declare an integer variable ����һ���������������Ա�ʾ����
																				// "int"���洢���������ͣ�"carrots"������
	carrots = 25;																// ��ֵ��䣺��ֵ�����洢��Ԫ assign a value to the variable������"="�и�ֵ�����
																				/*
																					������ʹ�ø�ֵ���������ֵ�����������У�
																					int a;
																					int b;
																					int c;
																					a = b = c = 88;
																				*/
	cout << "I have ";
	cout << carrots;															// display the value of the variable��"cout"�����¶���/���������"<<"ʹ"cout"��ʶ��
	cout << " carrots.";
	cout << endl;
	carrots = carrots - 1;														// modify the variable
	cout << "Crunch,crunch. Now I have " << carrots << " carrots." << endl;
	// getinfo.cpp -- input and output
	cout << "How many carrots do you have?" << endl;							
	cin >> carrots;   // C++ input												// cin��">>"���������г�ȡ�ַ�
	cout << "Here are 2 more. ";
	carrots = carrots + 2;
	// the next line concatenates output
	cout << "Now you have " << carrots << " carrots." << endl;					// cout��"<<"���ַ������뵽�������
	cin.get();																	// ���������ֲ���Enter��ʱ��ȡ����
	cin.get();																	// �ó�����ֱͣ����Enter��
	return 0;
}