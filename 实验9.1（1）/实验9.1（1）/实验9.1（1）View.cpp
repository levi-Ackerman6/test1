
// ʵ��9.1��1��View.cpp : Cʵ��91��1��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��9.1��1��.h"
#endif

#include "ʵ��9.1��1��Doc.h"
#include "ʵ��9.1��1��View.h"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��91��1��View

IMPLEMENT_DYNCREATE(Cʵ��91��1��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��91��1��View, CView)
	ON_COMMAND(ID_FILE_OPEN, &Cʵ��91��1��View::OnFileOpen)
END_MESSAGE_MAP()

// Cʵ��91��1��View ����/����

Cʵ��91��1��View::Cʵ��91��1��View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��91��1��View::~Cʵ��91��1��View()
{
}

BOOL Cʵ��91��1��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��91��1��View ����

void Cʵ��91��1��View::OnDraw(CDC* /*pDC*/)
{
	Cʵ��91��1��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��91��1��View ���

#ifdef _DEBUG
void Cʵ��91��1��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��91��1��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��91��1��Doc* Cʵ��91��1��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��91��1��Doc)));
	return (Cʵ��91��1��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��91��1��View ��Ϣ�������


void Cʵ��91��1��View::OnFileOpen()
{
	CFileDialog cfd(true);
	int r =cfd.DoModal();
	string s;
	CClientDC dc(this);
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		ifstream ifs(filename);
		CString str = _T("C:/�½��ļ���/abc.txt");
		CFile file(str, CFile::modeCreate);
		file.Close();
		while (ifs >> s)
		{
			dc.TextOutW(0, 0, _T("����c�̳ɹ�����abc.txt"));
		}
		ofstream  ofs(str);
		ofs << CT2A(filename);
	
	}
	// TODO: �ڴ���������������
}
