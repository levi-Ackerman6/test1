
// ʵ��4.1.h : ʵ��4.1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cʵ��41App:
// �йش����ʵ�֣������ ʵ��4.1.cpp
//

class Cʵ��41App : public CWinApp
{
public:
	Cʵ��41App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cʵ��41App theApp;
