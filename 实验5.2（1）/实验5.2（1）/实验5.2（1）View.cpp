
// ʵ��5.2��1��View.cpp : Cʵ��52��1��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��5.2��1��.h"
#endif

#include "ʵ��5.2��1��Doc.h"
#include "ʵ��5.2��1��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��52��1��View

IMPLEMENT_DYNCREATE(Cʵ��52��1��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��52��1��View, CView)
	ON_COMMAND(ID_SHOWNAME, &Cʵ��52��1��View::OnShowname)
END_MESSAGE_MAP()

// Cʵ��52��1��View ����/����

Cʵ��52��1��View::Cʵ��52��1��View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��52��1��View::~Cʵ��52��1��View()
{
}

BOOL Cʵ��52��1��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��52��1��View ����

void Cʵ��52��1��View::OnDraw(CDC* /*pDC*/)
{
	Cʵ��52��1��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��52��1��View ���

#ifdef _DEBUG
void Cʵ��52��1��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��52��1��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��52��1��Doc* Cʵ��52��1��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��52��1��Doc)));
	return (Cʵ��52��1��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��52��1��View ��Ϣ�������


void Cʵ��52��1��View::OnShowname()
{
	CClientDC dc(this);
	CString s = _T("Rylee");
	dc.TextOutW(600, 250, s);
	// TODO: �ڴ���������������
}
