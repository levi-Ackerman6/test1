
// ʵ��7.2��1��.h : ʵ��7.2��1�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cʵ��72��1��App:
// �йش����ʵ�֣������ ʵ��7.2��1��.cpp
//

class Cʵ��72��1��App : public CWinApp
{
public:
	Cʵ��72��1��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cʵ��72��1��App theApp;
