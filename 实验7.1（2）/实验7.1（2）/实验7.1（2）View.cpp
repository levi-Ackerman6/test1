
// ʵ��7.1��2��View.cpp : Cʵ��71��2��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��7.1��2��.h"
#endif

#include "ʵ��7.1��2��Doc.h"
#include "ʵ��7.1��2��View.h"
#include "MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��71��2��View

IMPLEMENT_DYNCREATE(Cʵ��71��2��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��71��2��View, CView)
	ON_COMMAND(ID_POPOUT, &Cʵ��71��2��View::OnPopout)
END_MESSAGE_MAP()

// Cʵ��71��2��View ����/����

Cʵ��71��2��View::Cʵ��71��2��View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��71��2��View::~Cʵ��71��2��View()
{
}

BOOL Cʵ��71��2��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��71��2��View ����

void Cʵ��71��2��View::OnDraw(CDC* /*pDC*/)
{
	Cʵ��71��2��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��71��2��View ���

#ifdef _DEBUG
void Cʵ��71��2��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��71��2��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��71��2��Doc* Cʵ��71��2��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��71��2��Doc)));
	return (Cʵ��71��2��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��71��2��View ��Ϣ�������


void Cʵ��71��2��View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg0 dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{

	}
}
