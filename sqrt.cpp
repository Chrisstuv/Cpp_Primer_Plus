// C++ Primer Plus �ڶ��µ��ĽڱʼǼ����� -- 2020/11/30
// sqrt.cpp -- using the sqrt() function ��������
// ԭ�ͺͶ���ֲ��� -- page 28
// ԭ�����������ӿڣ�ie. ���͸���������Ϣ�ͷ��ص���Ϣ�������а����˺����Ĵ���

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double area;															// �Էֺ�Ϊ��β��������䡢ԭ�ͣ������Ǻ���ͷ
	cout << "Enter the floor area, in square feet, of your home: ";
	cin >> area;
	double side;															// ҪΪÿ�������ṩԭ�ͣ����Ʊ���������ָ���漰������
	side = sqrt(area);														// sqrt(����)Ϊ�з���ֵ�ĺ��� double = sqrt(double); function prototype ����ԭ��
																			// ����������Ϣ���͸�sqrt()����(��������)��
																			// ����һ������ֵ(return value)������ֵ�ٴ�sqrt()�������ͻص��ú���
	cout << "That's the equivalent of a square " << side					// �˷���ֵ�ɱ������������������ʽ��ʹ��
		 << " feet to the side." << endl;
	cout << "How fascinating!" << endl;
	return 0;
}