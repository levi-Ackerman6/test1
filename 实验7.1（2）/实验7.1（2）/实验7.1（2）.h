
// ʵ��7.1��2��.h : ʵ��7.1��2�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cʵ��71��2��App:
// �йش����ʵ�֣������ ʵ��7.1��2��.cpp
//

class Cʵ��71��2��App : public CWinApp
{
public:
	Cʵ��71��2��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cʵ��71��2��App theApp;
