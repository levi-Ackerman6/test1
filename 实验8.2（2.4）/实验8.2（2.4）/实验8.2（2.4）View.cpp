
// ʵ��8.2��2.4��View.cpp : Cʵ��82��24��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��8.2��2.4��.h"
#endif

#include "ʵ��8.2��2.4��Doc.h"
#include "ʵ��8.2��2.4��View.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��82��24��View

IMPLEMENT_DYNCREATE(Cʵ��82��24��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��82��24��View, CView)
	ON_COMMAND(ID_POPOUT, &Cʵ��82��24��View::OnPopout)
END_MESSAGE_MAP()

// Cʵ��82��24��View ����/����

Cʵ��82��24��View::Cʵ��82��24��View()
{
	// TODO: �ڴ˴���ӹ������
	rect.SetRect(50, 100, 200, 300);
	flag = false;
}

Cʵ��82��24��View::~Cʵ��82��24��View()
{
}

BOOL Cʵ��82��24��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��82��24��View ����

void Cʵ��82��24��View::OnDraw(CDC* pDC)
{
	Cʵ��82��24��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	MyDlg dlg;
	pDC->Ellipse(rect);
	if (flag)
	{
		CBrush newBrush(RGB(r, g, b));
		CBrush* oldBrush = pDC->SelectObject(&newBrush);
		pDC->Ellipse(rect);
		pDC->SelectObject(oldBrush);

	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��82��24��View ���

#ifdef _DEBUG
void Cʵ��82��24��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��82��24��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��82��24��Doc* Cʵ��82��24��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��82��24��Doc)));
	return (Cʵ��82��24��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��82��24��View ��Ϣ�������


void Cʵ��82��24��View::OnPopout()
{
	MyDlg dlg;
	CClientDC dc(this);
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		r = dlg.x;
		g = dlg.y;
		b = dlg.z;
		flag = true;
		Invalidate();
	}
	// TODO: �ڴ���������������
}
