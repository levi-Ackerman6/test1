
// ʵ��8.1.h : ʵ��8.1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cʵ��81App:
// �йش����ʵ�֣������ ʵ��8.1.cpp
//

class Cʵ��81App : public CWinApp
{
public:
	Cʵ��81App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cʵ��81App theApp;
