// C++ Primer Plus �ڶ��µ�һ�ڱʼǼ����� -- 2020/11/29
// ʡ����2.1.7�ĸ�ʽ�� -- page 19-21
// myfirst.cpp -- display a message
// "myfirst"Ϊ�ļ�����"."Ϊ��㣻"cpp"��"h"Ϊ��չ������չ��ȡ�������õ�C++ϵͳ

#include <iostream>								// a preprocessor directive Ԥ����ָ�� 
												/*
												   "#include"Ԥ����������ָ�ʹiostream�ļ���Դ�ļ���ϳ�һ�������ļ���һ�𷢸�������
												   "iostream"Ϊ�����ļ�(include file)��ͷ�ļ�(header file)
												   ʹ��"cin"��"cout"�������������ĳ����������ļ�iostream -- "io"ָ��������
												*/
using namespace std;							// using����ָ�� make definitions visible ʹ����ɼ� -- "using namespace" ����ָ�����ʹ��std���ƿռ��ж�������ƣ�������std::ǰ׺
												/*
												   "::"Ϊ���������Ʒ���class , namespace ��������ĳһ��ģ����
												   class(����) :: ��Ҫ���ʵĺ�������
												   namespace (ģ����) :: (Ҫ���ʵĺ������߱�����)
												   ":"��3���÷���
												   1. ���� private , public , protected ��������
												   2. ʹ�ó�ʼ���б��ʱ��
												   3. ʹ���������ʱ�򣬳��ָ�������ʱ�����ʻ��ຯ����ʱ��
												   �������Щusing��������"using namespace std;"��������ֲ�ͬǰ׺����������ͬ�����������ֱ����"cout, endl, cin"����дstd::ǰ׺��
												   using std::cout; // make cout available
												   using std::endl; // make endl available
												   using std::cin;  // make cin available
												*/
int main()										// function header ����ͷ
												/*
												   "main()"�����ϵͳ֮��Ľӿ�
												   "int" Ϊ������������: �Ӻ������ظ��������ĺ�������Ϣ
												   "main" Ϊ��������main����ͨ������������(���������ɱ�������ӵ������У����������ϵͳ������)����
												   C++����������һ����Ϊ"main()"�ĺ�����֤��������������ʱͨ����"main()"��ʼ�����⣺��̬���ӿ�(DLL)ģ�飬�Ƕ������򣬵��÷Ǳ�׼��������"_tmain()"������"main()"
												   �����еĲ���Ϊ�β��б�(argument list)������б�(parameter list): �ӵ��ú������ݸ������ú�������Ϣ
												   function header�ܽ᣺"main()"����һ��ֵ(return value)�����ڷ�������Ϊ"int"������ֵΪ����0("return 0;")�����������κ���Ϣ���������Ϊ������Ϊ��
												   "int main(void)"��"int main()"��Ч���ؼ���"void"�������κβ�����Ҳ����"void main()"���棬"void main()"����ʡ�Է�����䣻��"void"Ϊ�����������ͣ��������������κ�ֵ
												*/
{												/* start of function body */
	cout << "Come up and C++ me some time.";    // message
												/*
												   "cout"��һ��Ԥ����Ķ�����������"iostream"�ж��壻����������ض�ʵ�����ඨ�������ݵĴ洢��ʹ�÷�ʽ
												   ˫�����е�һϵ���ַ�Ϊ�ַ���
												   ���������"<<"(���ַ����ͱ������͸�cout)��">>"ָ������Ϣ������·��
												*/
												/*
													��������أ�ͬһ������в�ͬ���壬��������ͨ����������ȷ���京��
												*/
	cout << endl;								// start a new line -- ���Ʒ�(manipulator)endl
												/*
													���з�\n��Ҳ�ɳ�Ϊת�����еİ�����ϣ�"endl"ȷ����������ǰˢ�����(����������ʾ����Ļ��)��"\n"������������Ϣ��ų�����ʾ
													"cout << endl;"���滻Ϊ"cout << "\n"";
												*/
	std::cout << "You won't regret it!" << endl;		// more output
	// cin.get();									// Ϊ�˱���������ڴ�ֱ����������� �����ﲻ��Ҫ��
	return 0;									// �����������(return statement)�����ã�terminate "main()" ��ֹ"main()"����д��"return (0);"��"return(0);"
}												/* end of function body */
												/*
												   "{"��"}"֮����Ǻ�����(������������)
												   ����������������źͺ�����
												   ������"return 0;"�ĺ��������䣬ÿ�������";"�Ž�β�������Ҫִ�еĲ���
												*/
