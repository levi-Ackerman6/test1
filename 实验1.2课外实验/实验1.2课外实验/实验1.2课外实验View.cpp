
// ʵ��1.2����ʵ��View.cpp : Cʵ��12����ʵ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��1.2����ʵ��.h"
#endif

#include "ʵ��1.2����ʵ��Doc.h"
#include "ʵ��1.2����ʵ��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��12����ʵ��View

IMPLEMENT_DYNCREATE(Cʵ��12����ʵ��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��12����ʵ��View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cʵ��12����ʵ��View ����/����

Cʵ��12����ʵ��View::Cʵ��12����ʵ��View()
{
	// TODO: �ڴ˴���ӹ������
	name2 = "��";
}

Cʵ��12����ʵ��View::~Cʵ��12����ʵ��View()
{
}

BOOL Cʵ��12����ʵ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��12����ʵ��View ����

void Cʵ��12����ʵ��View::OnDraw(CDC* /*pDC*/)
{
	Cʵ��12����ʵ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��12����ʵ��View ���

#ifdef _DEBUG
void Cʵ��12����ʵ��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��12����ʵ��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��12����ʵ��Doc* Cʵ��12����ʵ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��12����ʵ��Doc)));
	return (Cʵ��12����ʵ��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��12����ʵ��View ��Ϣ�������


void Cʵ��12����ʵ��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cʵ��12����ʵ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);
	if (nFlags)
	{
		dc.TextOutW(200, 200, pDoc->name1 + name2);
	}
	CView::OnLButtonDown(nFlags, point);
}
