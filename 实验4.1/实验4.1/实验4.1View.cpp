
// ʵ��4.1View.cpp : Cʵ��41View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��4.1.h"
#endif

#include "ʵ��4.1Doc.h"
#include "ʵ��4.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��41View

IMPLEMENT_DYNCREATE(Cʵ��41View, CView)

BEGIN_MESSAGE_MAP(Cʵ��41View, CView)
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Cʵ��41View ����/����

Cʵ��41View::Cʵ��41View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��41View::~Cʵ��41View()
{
}

BOOL Cʵ��41View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��41View ����

void Cʵ��41View::OnDraw(CDC* pDC)
{
	Cʵ��41Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->m_tagRec);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��41View ���

#ifdef _DEBUG
void Cʵ��41View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��41View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��41Doc* Cʵ��41View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��41Doc)));
	return (Cʵ��41Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��41View ��Ϣ�������


void Cʵ��41View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cʵ��41Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->m_tagRec.right = point.x;
	pDoc->m_tagRec.bottom = point.y;
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonUp(nFlags, point);
}


void Cʵ��41View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cʵ��41Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->m_tagRec.left = point.x;
	pDoc->m_tagRec.top = point.y;
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonDown(nFlags, point);
}


void Cʵ��41View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s;
	s.Format(_T("%d,%d"), point.x, point.y);
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);
	CView::OnMouseMove(nFlags, point);
}
