
// ʵ��5.1��1��View.cpp : Cʵ��51��1��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��5.1��1��.h"
#endif

#include "ʵ��5.1��1��Doc.h"
#include "ʵ��5.1��1��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��51��1��View

IMPLEMENT_DYNCREATE(Cʵ��51��1��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��51��1��View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Cʵ��51��1��View ����/����

Cʵ��51��1��View::Cʵ��51��1��View()
{
	// TODO: �ڴ˴���ӹ������
	N = 5;
	set = true;
}

Cʵ��51��1��View::~Cʵ��51��1��View()
{
}

BOOL Cʵ��51��1��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��51��1��View ����

void Cʵ��51��1��View::OnDraw(CDC* /*pDC*/)
{
	Cʵ��51��1��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��51��1��View ���

#ifdef _DEBUG
void Cʵ��51��1��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��51��1��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��51��1��Doc* Cʵ��51��1��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��51��1��Doc)));
	return (Cʵ��51��1��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��51��1��View ��Ϣ�������

void Cʵ��51��1��View::OnCircles()
{
	GetClientRect(&m_window);
	// TODO: �ڴ���������������
	int x1 = (m_window.left + m_window.right) / 2;
	int x2 = (m_window.bottom + m_window.top) / 2;
	GetClientRect(&cr);
	CClientDC DC(this);
	cr.left = x1 - 50;
	cr.right = x1 + 50;
	cr.top = x2 - 50;
	cr.bottom = x2 + 50;

	if (set)
	{
		for (int i = 0; i < N; i++)
		{

			SetTimer(i, 200, NULL);
		}
		set = false;
	}

}
void Cʵ��51��1��View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CView::OnTimer(nIDEvent);
	CView::OnTimer(nIDEvent);
	CClientDC dc(this);
	int i = nIDEvent;
	cr.left -= 5;
	cr.right += 5;
	cr.top -= 5;
	cr.bottom += 5;

	dc.Ellipse(cr);
	CPen pen(PS_SOLID, 20, RGB(rand() % 150, rand() % 150, rand() % 150));
	CPen* color;
	color = dc.SelectObject(&pen);
	dc.Ellipse(cr);
}
