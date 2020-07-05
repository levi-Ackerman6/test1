
// ʵ��7.2��1��View.cpp : Cʵ��72��1��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��7.2��1��.h"
#endif

#include "ʵ��7.2��1��Doc.h"
#include "ʵ��7.2��1��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��72��1��View

IMPLEMENT_DYNCREATE(Cʵ��72��1��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��72��1��View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Cʵ��72��1��View ����/����

Cʵ��72��1��View::Cʵ��72��1��View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��72��1��View::~Cʵ��72��1��View()
{
}

BOOL Cʵ��72��1��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��72��1��View ����

void Cʵ��72��1��View::OnDraw(CDC* pDC)
{
	Cʵ��72��1��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->re);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��72��1��View ���

#ifdef _DEBUG
void Cʵ��72��1��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��72��1��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��72��1��Doc* Cʵ��72��1��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��72��1��Doc)));
	return (Cʵ��72��1��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��72��1��View ��Ϣ�������


void Cʵ��72��1��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cʵ��72��1��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->p.x = point.x;
	pDoc->p.y = point.y;
	pDoc->time = 1;
	CView::OnLButtonDown(nFlags, point);
}


void Cʵ��72��1��View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cʵ��72��1��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	pDoc->time = 0;
	pDoc->a = point.x - 100;
	pDoc->b = point.y - 100;
	pDoc->c = 350 - point.x;
	pDoc->d = 250 - point.y;
	pDoc->re.left = point.x - pDoc->a; pDoc->re.top = point.y - pDoc->b;
	pDoc->re.right = point.x + pDoc->c; pDoc->re.bottom = point.y + pDoc->d;
	CView::OnLButtonUp(nFlags, point);
}


void Cʵ��72��1��View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cʵ��72��1��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);
	if (point.x >pDoc->re.left&&point.x<pDoc->re.right&&point.y>pDoc->re.top&&point.y<pDoc->re.bottom&&pDoc->time) {
		pDoc->a = pDoc->p.x - 100;
		pDoc->b = pDoc->p.y - 100;
		pDoc->c = 350 - pDoc->p.x;
		pDoc->d = 250 - pDoc->p.y;
		pDoc->re.left = point.x - pDoc->a; pDoc->re.top = point.y - pDoc->b;
		pDoc->re.right = point.x + pDoc->c; pDoc->re.bottom = point.y + pDoc->d;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}
