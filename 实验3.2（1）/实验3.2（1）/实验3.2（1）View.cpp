
// ʵ��3.2��1��View.cpp : Cʵ��32��1��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��3.2��1��.h"
#endif

#include "ʵ��3.2��1��Doc.h"
#include "ʵ��3.2��1��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��32��1��View

IMPLEMENT_DYNCREATE(Cʵ��32��1��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��32��1��View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cʵ��32��1��View ����/����

Cʵ��32��1��View::Cʵ��32��1��View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��32��1��View::~Cʵ��32��1��View()
{
}

BOOL Cʵ��32��1��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��32��1��View ����

void Cʵ��32��1��View::OnDraw(CDC* /*pDC*/)
{
	Cʵ��32��1��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��32��1��View ���

#ifdef _DEBUG
void Cʵ��32��1��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��32��1��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��32��1��Doc* Cʵ��32��1��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��32��1��Doc)));
	return (Cʵ��32��1��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��32��1��View ��Ϣ�������


void Cʵ��32��1��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s = _T("�����������");
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);
	CView::OnLButtonDown(nFlags, point);
}


void Cʵ��32��1��View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString c=_T("�������̧��");
	CClientDC dc(this);
	dc.TextOutW(200, 200, c);
	CView::OnLButtonUp(nFlags, point);
}
