
// ʵ��4.2��1��View.cpp : Cʵ��42��1��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��4.2��1��.h"
#endif

#include "ʵ��4.2��1��Doc.h"
#include "ʵ��4.2��1��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��42��1��View

IMPLEMENT_DYNCREATE(Cʵ��42��1��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��42��1��View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Cʵ��42��1��View ����/����

Cʵ��42��1��View::Cʵ��42��1��View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��42��1��View::~Cʵ��42��1��View()
{
}

BOOL Cʵ��42��1��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��42��1��View ����
int count = 0;
int num = 0;
CPoint apoint, bpoint;
CString s, s1;
void Cʵ��42��1��View::OnDraw(CDC* /*pDC*/)
{
	Cʵ��42��1��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��42��1��View ���

#ifdef _DEBUG
void Cʵ��42��1��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��42��1��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��42��1��Doc* Cʵ��42��1��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��42��1��Doc)));
	return (Cʵ��42��1��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��42��1��View ��Ϣ�������


void Cʵ��42��1��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	bpoint.x = point.x;
	CView::OnLButtonDown(nFlags, point);
}


void Cʵ��42��1��View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	count = 0;
	apoint.x = point.x;
	if (apoint.x > bpoint.x)
		num = apoint.x - bpoint.x;
	if (apoint.x <bpoint.x)
		num = bpoint.x - apoint.x;
	if (apoint.x == bpoint.x)
		num = 0;
	s.Format(_T("�ƶ������أ�%d"), num);
	dc.TextOutW(200, 200, s);
	CView::OnLButtonUp(nFlags, point);
}


void Cʵ��42��1��View::OnMouseMove(UINT nFlags, CPoint point)
{
	CClientDC dc(this);
	if (nFlags)
	{
		s1.Format(_T("����ƶ��Ĵ�����%d"), count++);
		dc.TextOutW(100, 100, s1);
	}
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnMouseMove(nFlags, point);
}
