// C++ Primer Plus �ڶ��µ����ڱʼǼ����� -- 2020/11/29
// getinfo.cpp -- input and output
#include <iostream>
using namespace std;

int main()
{
	int carrots;																/*  ��
																					����Ϊ"int"��"carrots"�洢�����������ڼӼ��˳�
																					"cout"��"ostream"����������ｫ�������뵽�������
																					"cin"��"istream"��������������������ȡ����
																				*/
	cout << "How many carrots do you have?" << endl;							// "<<"��">>"ָʾ��Ϣ���ķ�����Щ�������"iostream"����
	cin >> carrots;   // C++ input												// ���ܶ���"cin"��">>"���������г�ȡ�ַ���������ת��Ϊ������Ϣ�ı����ܹ����ܵ���ʽ
	cout << "Here are 2 more. ";
	carrots = carrots + 2;
	// the next line concatenates output
	cout << "Now you have " << carrots << " carrots." << endl;					// "cout"��"<<"���ַ������뵽�������
	cin.get();																	// ���������ֲ���Enter��ʱ��ȡ����
	cin.get();																	// �ó�����ֱͣ����Enter��
	return 0;
}

/*
	�����û������һ����������(���������)����������Ҫ�������ܱ�ʾʲô��Ϣ���ɶ�����ִ����Щ����(���ݸ�ʽ�����÷�/һ���������͵�ȫ������)�����󣺸������ݸ�ʽ�淶������ʵ�塣
	��-���� = ����-����
	������ָ���˿ɶ������ִ�е����в���
	eg. cout << "Trust me";
	�����ʹ�����¶����"<<"�������"Trust me"��Ϣ��������"cout"��ʾ��Ϣ����ʱ"cout"Ϊ����
*/
