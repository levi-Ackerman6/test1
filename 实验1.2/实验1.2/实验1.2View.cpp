
// ʵ��1.2View.cpp : Cʵ��12View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��1.2.h"
#endif

#include "ʵ��1.2Doc.h"
#include "ʵ��1.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��12View

IMPLEMENT_DYNCREATE(Cʵ��12View, CView)

BEGIN_MESSAGE_MAP(Cʵ��12View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Cʵ��12View ����/����

Cʵ��12View::Cʵ��12View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��12View::~Cʵ��12View()
{
}

BOOL Cʵ��12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��12View ����

void Cʵ��12View::OnDraw(CDC* /*pDC*/)
{
	Cʵ��12Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��12View ���

#ifdef _DEBUG
void Cʵ��12View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��12View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��12Doc* Cʵ��12View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��12Doc)));
	return (Cʵ��12Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��12View ��Ϣ�������


void Cʵ��12View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cʵ��12Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->count += 1;
}


void Cʵ��12View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cʵ��12Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);
	CString s;
	s.Format(_T("%d"), pDoc->count);
	dc.TextOutW(200, 200, s);
	CView::OnRButtonDown(nFlags, point);
}

