
// ʵ��1.2����ʵ��.h : ʵ��1.2����ʵ�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cʵ��12����ʵ��App:
// �йش����ʵ�֣������ ʵ��1.2����ʵ��.cpp
//

class Cʵ��12����ʵ��App : public CWinApp
{
public:
	Cʵ��12����ʵ��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cʵ��12����ʵ��App theApp;
