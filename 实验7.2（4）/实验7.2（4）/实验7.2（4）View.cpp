
// ʵ��7.2��4��View.cpp : Cʵ��72��4��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��7.2��4��.h"
#endif

#include "ʵ��7.2��4��Doc.h"
#include "ʵ��7.2��4��View.h"
#include "MYDLG.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��72��4��View

IMPLEMENT_DYNCREATE(Cʵ��72��4��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��72��4��View, CView)
	ON_COMMAND(ID_POPOUT, &Cʵ��72��4��View::OnPopout)
END_MESSAGE_MAP()

// Cʵ��72��4��View ����/����

Cʵ��72��4��View::Cʵ��72��4��View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��72��4��View::~Cʵ��72��4��View()
{
}

BOOL Cʵ��72��4��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��72��4��View ����

void Cʵ��72��4��View::OnDraw(CDC* /*pDC*/)
{
	Cʵ��72��4��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��72��4��View ���

#ifdef _DEBUG
void Cʵ��72��4��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��72��4��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��72��4��Doc* Cʵ��72��4��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��72��4��Doc)));
	return (Cʵ��72��4��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��72��4��View ��Ϣ�������


void Cʵ��72��4��View::OnPopout()
{
	MYDLG dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{

	}
	// TODO: �ڴ���������������
}
