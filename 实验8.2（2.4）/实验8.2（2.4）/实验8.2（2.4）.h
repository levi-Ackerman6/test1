
// ʵ��8.2��2.4��.h : ʵ��8.2��2.4�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cʵ��82��24��App:
// �йش����ʵ�֣������ ʵ��8.2��2.4��.cpp
//

class Cʵ��82��24��App : public CWinApp
{
public:
	Cʵ��82��24��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cʵ��82��24��App theApp;
