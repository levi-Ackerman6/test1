
// ʵ��3.2��3��View.cpp : Cʵ��32��3��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��3.2��3��.h"
#endif

#include "ʵ��3.2��3��Doc.h"
#include "ʵ��3.2��3��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��32��3��View

IMPLEMENT_DYNCREATE(Cʵ��32��3��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��32��3��View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cʵ��32��3��View ����/����

Cʵ��32��3��View::Cʵ��32��3��View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��32��3��View::~Cʵ��32��3��View()
{
}

BOOL Cʵ��32��3��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��32��3��View ����

void Cʵ��32��3��View::OnDraw(CDC* pDC)
{
	Cʵ��32��3��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->ca);
	pDC->Rectangle(pDoc->cb);
	pDC->Rectangle(pDoc->cc);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��32��3��View ���

#ifdef _DEBUG
void Cʵ��32��3��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��32��3��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��32��3��Doc* Cʵ��32��3��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��32��3��Doc)));
	return (Cʵ��32��3��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��32��3��View ��Ϣ�������


void Cʵ��32��3��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cʵ��32��3��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s, s1, s2;
	int x = rand() % 100 + 5;


	CClientDC dc(this);
	if (point.x > 40 && point.x < 200 && point.y>40 && point.y < 200)
	{
		pDoc->a = x;
		s.Format(_T("%d"), pDoc->a);
		dc.TextOutW(point.x, point.y, s);
	}
	else if (point.x > 220 && point.x < 400 && point.y>220 && point.y < 400)
	{
		pDoc->b = x;
		s1.Format(_T("%d"), pDoc->b);
		dc.TextOutW(point.x, point.y, s1);

	}
	else if (point.x > 500 && point.x < 720 && point.y>400 && point.y < 600)
	{

		s2.Format(_T("%d"), pDoc->a + pDoc->b);
		dc.TextOutW(point.x, point.y, s2);
	}
	else
	{
		s2 = "�����Ч";
		dc.TextOutW(point.x, point.y, s2);
	}
}
