
// ʵ��3.2��2)View.cpp : Cʵ��32��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��3.2��2).h"
#endif

#include "ʵ��3.2��2)Doc.h"
#include "ʵ��3.2��2)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��32��2View

IMPLEMENT_DYNCREATE(Cʵ��32��2View, CView)

BEGIN_MESSAGE_MAP(Cʵ��32��2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cʵ��32��2View ����/����

Cʵ��32��2View::Cʵ��32��2View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��32��2View::~Cʵ��32��2View()
{
}

BOOL Cʵ��32��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��32��2View ����

void Cʵ��32��2View::OnDraw(CDC* pDC)
{
	Cʵ��32��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->TextOutW(10, 20, _T("����������"));
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��32��2View ���

#ifdef _DEBUG
void Cʵ��32��2View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��32��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��32��2Doc* Cʵ��32��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��32��2Doc)));
	return (Cʵ��32��2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��32��2View ��Ϣ�������


void Cʵ��32��2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cʵ��32��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s;
	s.Format(_T("a+b=%d"), pDoc->a + pDoc->b);
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);
	CView::OnLButtonDown(nFlags, point);
}
