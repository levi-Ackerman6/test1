
// ʵ��3.1��2��View.cpp : Cʵ��31��2��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��3.1��2��.h"
#endif

#include "ʵ��3.1��2��Doc.h"
#include "ʵ��3.1��2��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��31��2��View

IMPLEMENT_DYNCREATE(Cʵ��31��2��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��31��2��View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cʵ��31��2��View ����/����

Cʵ��31��2��View::Cʵ��31��2��View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��31��2��View::~Cʵ��31��2��View()
{
}

BOOL Cʵ��31��2��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��31��2��View ����

void Cʵ��31��2��View::OnDraw(CDC* pDC)
{
	Cʵ��31��2��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i < pDoc->ca.GetSize(); i++) {
		pDC->Ellipse(pDoc->ca.GetAt(i));
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��31��2��View ���

#ifdef _DEBUG
void Cʵ��31��2��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��31��2��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��31��2��Doc* Cʵ��31��2��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��31��2��Doc)));
	return (Cʵ��31��2��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��31��2��View ��Ϣ�������


void Cʵ��31��2��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int r = rand() % 50 + 5;
	int rr = rand() % 50 + 5;
	CRect cr(point.x - r, point.y - rr, point.x + r, point.y + rr);
	Cʵ��31��2��Doc* pDoc = GetDocument();
	pDoc->ca.Add(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
