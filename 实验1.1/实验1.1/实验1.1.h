
// ʵ��1.1.h : ʵ��1.1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cʵ��11App:
// �йش����ʵ�֣������ ʵ��1.1.cpp
//

class Cʵ��11App : public CWinApp
{
public:
	Cʵ��11App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cʵ��11App theApp;
