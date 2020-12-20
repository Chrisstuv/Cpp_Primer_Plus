// C++ Primer Plus �ڶ��µ��ĽڱʼǼ����� -- 2020/11/30
// ourfunc.cpp -- defining your own function
// ԭ���붨���page 31 ͼ2.8

#include <iostream>
using namespace std;
void simon(int);					// function prototype for simon()���Զ��庯����ʹ��ǰ�����ṩԭ��

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
// ����ͷ��ϰ
/*
	main()�Ĺؼ���Ϊint����������ֵ�������Ż�void��ʾû�в�����return�ṩ����ֵ(ͨ�����˳�ֵ)������ϵͳ��������������0Ϊ���гɹ�����0ʧ��
	�ؼ��ֲ�����Ϊ��������main���ǹؼ��֣��������Ե���ɲ��֣����Ǳز����ٵĺ������ƣ���ò�Ҫ��Ϊ�������������������������ͬ��
	eg. cout����ͬʱ��Ϊ�������Ͷ�����
	*/

void simon(int n)					// define the simon() function
{
	cout << "Simon says touch your toes " << n << " times." << endl;
}									// void functions don't need return statements

// ������ʽ
/*
	type functionname(argumentlist)
	{
		statements
	}
*/