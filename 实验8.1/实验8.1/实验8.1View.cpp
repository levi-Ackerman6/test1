
// ʵ��8.1View.cpp : Cʵ��81View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��8.1.h"
#endif

#include "ʵ��8.1Doc.h"
#include "ʵ��8.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include "MyDlg.h"

// Cʵ��81View

IMPLEMENT_DYNCREATE(Cʵ��81View, CView)

BEGIN_MESSAGE_MAP(Cʵ��81View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_POPOUT, &Cʵ��81View::OnPopout)
END_MESSAGE_MAP()

// Cʵ��81View ����/����

Cʵ��81View::Cʵ��81View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��81View::~Cʵ��81View()
{
}

BOOL Cʵ��81View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��81View ����

void Cʵ��81View::OnDraw(CDC* /*pDC*/)
{
	Cʵ��81Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��81View ���

#ifdef _DEBUG
void Cʵ��81View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��81View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��81Doc* Cʵ��81View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��81Doc)));
	return (Cʵ��81Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��81View ��Ϣ�������


void Cʵ��81View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	MyDlg md2;
	int r = md2.DoModal();
	if (r == IDOK)
	{
		CString s1 = md2.s;
		GetDC()->TextOutW(200, 100, s1);
	}
	CView::OnLButtonDblClk(nFlags, point);
}


void Cʵ��81View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{

	}
}
