
// ʵ��8.2��2.2��View.cpp : Cʵ��82��22��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��8.2��2.2��.h"
#endif

#include "ʵ��8.2��2.2��Doc.h"
#include "ʵ��8.2��2.2��View.h"
#include "MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��82��22��View

IMPLEMENT_DYNCREATE(Cʵ��82��22��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��82��22��View, CView)
	ON_COMMAND(ID_POPPUT, &Cʵ��82��22��View::OnPopput)
END_MESSAGE_MAP()

// Cʵ��82��22��View ����/����

Cʵ��82��22��View::Cʵ��82��22��View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��82��22��View::~Cʵ��82��22��View()
{
}

BOOL Cʵ��82��22��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��82��22��View ����

void Cʵ��82��22��View::OnDraw(CDC* /*pDC*/)
{
	Cʵ��82��22��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��82��22��View ���

#ifdef _DEBUG
void Cʵ��82��22��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��82��22��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��82��22��Doc* Cʵ��82��22��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��82��22��Doc)));
	return (Cʵ��82��22��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��82��22��View ��Ϣ�������


void Cʵ��82��22��View::OnPopput()
{
	MyDlg dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		int a, b, c, d;
		a = dlg.x;
		b = dlg.y;
		c = dlg.r1;
		d = dlg.r2;
		CRect rect(a - c, b - d, a + c, b + d);
		GetDC()->Ellipse(rect);
	}
	// TODO: �ڴ���������������
}
