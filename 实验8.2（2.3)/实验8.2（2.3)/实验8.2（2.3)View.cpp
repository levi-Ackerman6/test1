
// ʵ��8.2��2.3)View.cpp : Cʵ��82��23View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��8.2��2.3).h"
#endif

#include "ʵ��8.2��2.3)Doc.h"
#include "ʵ��8.2��2.3)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��82��23View

IMPLEMENT_DYNCREATE(Cʵ��82��23View, CView)

BEGIN_MESSAGE_MAP(Cʵ��82��23View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cʵ��82��23View ����/����

Cʵ��82��23View::Cʵ��82��23View()
{
	// TODO: �ڴ˴���ӹ������
	rect.top = 100;
	rect.bottom = 300;
	rect.left = 200;
	rect.right = 500;
	x1 = rect.left;
	x2 = rect.right;
	y1 = rect.top;
	y2 = rect.bottom;
}

Cʵ��82��23View::~Cʵ��82��23View()
{
}

BOOL Cʵ��82��23View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��82��23View ����

void Cʵ��82��23View::OnDraw(CDC* pDC)
{
	Cʵ��82��23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(rect);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��82��23View ���

#ifdef _DEBUG
void Cʵ��82��23View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��82��23View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��82��23Doc* Cʵ��82��23View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��82��23Doc)));
	return (Cʵ��82��23Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��82��23View ��Ϣ�������


void Cʵ��82��23View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	if (point.x > x1&&point.x<x2&& point.y>y1 && point.y < y2)
	{
		CPen newPen(PS_DASH, 1, RGB(0, 0, 255));
		CPen* oldPen = dc.SelectObject(&newPen);
		dc.SelectStockObject(NULL_BRUSH);
		dc.Rectangle(rect);
	}
	CView::OnLButtonDown(nFlags, point);
}
