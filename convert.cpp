// C++ Primer Plus �ڶ��µ��ĽڱʼǼ����� -- 2020/11/30
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

int stonetolb(int sts)									// �����α���stone��ֵ��������stonetolb�ı���sts
{
	return 14 * sts;									// return�ɷ��ؽϸ��ӵı��ʽ�����ⴴ���µı���
}