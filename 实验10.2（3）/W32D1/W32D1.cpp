// W32D1.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "W32D1.h"


// ���ǵ���������һ��ʾ��
W32D1_API int nW32D1=0;

// ���ǵ���������һ��ʾ����
W32D1_API int fnW32D1(void)
{
    return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� W32D1.h
CW32D1::CW32D1()
{
    return;
}
W32D1_API int Factorial(int n) {

	int num = 1;
	if (n <= 0)  return 0;
	if (n >= 17) return -1;
	for (int i = 1; i <= n; i++)
	{
		num *= i;
	}
	return num;
}