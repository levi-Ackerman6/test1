
// ʵ��2.1��1��View.cpp : Cʵ��21��1��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��2.1��1��.h"
#endif

#include "ʵ��2.1��1��Doc.h"
#include "ʵ��2.1��1��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��21��1��View

IMPLEMENT_DYNCREATE(Cʵ��21��1��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��21��1��View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cʵ��21��1��View ����/����

Cʵ��21��1��View::Cʵ��21��1��View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��21��1��View::~Cʵ��21��1��View()
{
}

BOOL Cʵ��21��1��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��21��1��View ����

void Cʵ��21��1��View::OnDraw(CDC* pDC)
{
	Cʵ��21��1��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��21��1��View ���

#ifdef _DEBUG
void Cʵ��21��1��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��21��1��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��21��1��Doc* Cʵ��21��1��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��21��1��Doc)));
	return (Cʵ��21��1��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��21��1��View ��Ϣ�������


void Cʵ��21��1��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	int r = rand() % 30 + 10;
	CRect cr(point.x - r, point.y - r, point.x + r, point.y + r);
	dc.Ellipse(cr);
	CView::OnLButtonDown(nFlags, point);
}
