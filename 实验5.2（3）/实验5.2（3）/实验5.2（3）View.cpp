
// ʵ��5.2��3��View.cpp : Cʵ��52��3��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��5.2��3��.h"
#endif

#include "ʵ��5.2��3��Doc.h"
#include "ʵ��5.2��3��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��52��3��View

IMPLEMENT_DYNCREATE(Cʵ��52��3��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��52��3��View, CView)
	ON_COMMAND(ID_ONLINE, &Cʵ��52��3��View::OnOnline)
	ON_COMMAND(ID_OnRectangle, &Cʵ��52��3��View::OnOnrectangle)
	ON_COMMAND(ID_OnEllipse, &Cʵ��52��3��View::OnOnellipse)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cʵ��52��3��View ����/����

Cʵ��52��3��View::Cʵ��52��3��View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��52��3��View::~Cʵ��52��3��View()
{
}

BOOL Cʵ��52��3��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��52��3��View ����

void Cʵ��52��3��View::OnDraw(CDC* pDC)
{
	Cʵ��52��3��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��52��3��View ���

#ifdef _DEBUG
void Cʵ��52��3��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��52��3��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��52��3��Doc* Cʵ��52��3��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��52��3��Doc)));
	return (Cʵ��52��3��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��52��3��View ��Ϣ�������


void Cʵ��52��3��View::OnOnline()
{
	CClientDC dc(this);
	// TODO: �ڴ���������������
	set = 1;
	CPen pen(PS_SOLID, 5, RGB(0, 0, 0));
	CPen* oldPen = dc.SelectObject(&pen);
}


void Cʵ��52��3��View::OnOnrectangle()
{
	CClientDC dc(this);
	set = 2;
	GetClientRect(&m_Crect);
	// TODO: �ڴ���������������
}


void Cʵ��52��3��View::OnOnellipse()
{
	set = 3;
	// TODO: �ڴ���������������
}


void Cʵ��52��3��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	m_point.x = point.x;
	m_point.y = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void Cʵ��52��3��View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CClientDC dc(this);
	CView::OnLButtonUp(nFlags, point);
	n_point.x = point.x;
	n_point.y = point.y;
	switch (set)
	{
	case 1:
		dc.MoveTo(n_point.x, n_point.y);
		dc.LineTo(m_point.x, m_point.y);
		break;
	case 2:
		m_Crect.left = m_point.x;
		m_Crect.top = m_point.y;
		m_Crect.right = n_point.x;
		m_Crect.bottom = n_point.y;
		dc.Rectangle(m_Crect);
		break;
	case 3:
		m_Crect.left = m_point.x;
		m_Crect.top = m_point.y;
		m_Crect.right = n_point.x;
		m_Crect.bottom = n_point.y;
		dc.Ellipse(m_Crect);
		break;
	default:
		break;
	}
}
