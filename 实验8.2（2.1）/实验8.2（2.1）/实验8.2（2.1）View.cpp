
// ʵ��8.2��2.1��View.cpp : Cʵ��82��21��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��8.2��2.1��.h"
#endif

#include "ʵ��8.2��2.1��Doc.h"
#include "ʵ��8.2��2.1��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��82��21��View

IMPLEMENT_DYNCREATE(Cʵ��82��21��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��82��21��View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Cʵ��82��21��View ����/����

Cʵ��82��21��View::Cʵ��82��21��View()
{
	// TODO: �ڴ˴���ӹ������
	rect.top = 50;
	rect.bottom = 50;
	rect.left = 50;
	rect.right = 50;

}

Cʵ��82��21��View::~Cʵ��82��21��View()
{
}

BOOL Cʵ��82��21��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��82��21��View ����

void Cʵ��82��21��View::OnDraw(CDC* pDC)
{
	Cʵ��82��21��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(rect);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��82��21��View ���

#ifdef _DEBUG
void Cʵ��82��21��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��82��21��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��82��21��Doc* Cʵ��82��21��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��82��21��Doc)));
	return (Cʵ��82��21��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��82��21��View ��Ϣ�������


void Cʵ��82��21��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
}


void Cʵ��82��21��View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (nFlags)
	{
		rect.top = point.y - 70;
		rect.bottom = point.y + 70;
		rect.left = point.y - 100;
		rect.right = point.y + 100;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}
