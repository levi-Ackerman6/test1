
// useLib.h : useLib Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CuseLibApp:
// �йش����ʵ�֣������ useLib.cpp
//

class CuseLibApp : public CWinApp
{
public:
	CuseLibApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CuseLibApp theApp;
