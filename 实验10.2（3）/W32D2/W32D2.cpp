// W32D2.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "W32D2.h"
#include"math.h"


// ���ǵ���������һ��ʾ��
W32D2_API int nW32D2=0;

// ���ǵ���������һ��ʾ����
W32D2_API int fnW32D2(void)
{
    return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� W32D2.h
CW32D2::CW32D2()
{
    return;
}
float Rad_to_deg = 45.0 / atan(1.0);
W32D2_API float FAC::convert(float deg)
{

	return   deg / Rad_to_deg;
}