
// ʵ��1.2.h : ʵ��1.2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cʵ��12App:
// �йش����ʵ�֣������ ʵ��1.2.cpp
//

class Cʵ��12App : public CWinApp
{
public:
	Cʵ��12App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cʵ��12App theApp;
