
// ʵ��4.2��3��View.cpp : Cʵ��42��3��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��4.2��3��.h"
#endif

#include "ʵ��4.2��3��Doc.h"
#include "ʵ��4.2��3��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��42��3��View

IMPLEMENT_DYNCREATE(Cʵ��42��3��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��42��3��View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Cʵ��42��3��View ����/����

Cʵ��42��3��View::Cʵ��42��3��View()
{
	// TODO: �ڴ˴���ӹ������
	set = true;
	N = 5;
	for (int i = 0; i < N; i++)
	{
		int t = (i + 1) * 100;
		CRect m_rect(t, 0, t + 20, 20);
		ca.Add(m_rect);
	}
}

Cʵ��42��3��View::~Cʵ��42��3��View()
{
}

BOOL Cʵ��42��3��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��42��3��View ����

void Cʵ��42��3��View::OnDraw(CDC* pDC)
{
	Cʵ��42��3��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (set)
	{
		for (int i = 0; i < N; i++)
		{
			SetTimer(i, rand() % 400 + 100, NULL);
			set = false;
		}

	}
	for (int i = 0; i < N; i++)
	{
		pDC->Ellipse(ca[i]);
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��42��3��View ���

#ifdef _DEBUG
void Cʵ��42��3��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��42��3��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��42��3��Doc* Cʵ��42��3��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��42��3��Doc)));
	return (Cʵ��42��3��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��42��3��View ��Ϣ�������


void Cʵ��42��3��View::OnTimer(UINT_PTR nIDEvent)
{
	GetClientRect(&c);
	CView::OnTimer(nIDEvent);
	int i = nIDEvent;
	if (ca[i].bottom < c.bottom - 10)
	{
		ca[i].top += 10;
		ca[i].bottom += 10;
	}
	else {
		ca[i].top -= c.bottom - 50;
		ca[i].bottom -= c.bottom - 50;
	}
	Invalidate();
}
