
// ʵ��9.1��2��View.cpp : Cʵ��91��2��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��9.1��2��.h"
#endif

#include "ʵ��9.1��2��Doc.h"
#include "ʵ��9.1��2��View.h"
#include "MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��91��2��View

IMPLEMENT_DYNCREATE(Cʵ��91��2��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��91��2��View, CView)
	ON_COMMAND(ID_POPOUT, &Cʵ��91��2��View::OnPopout)
END_MESSAGE_MAP()

// Cʵ��91��2��View ����/����

Cʵ��91��2��View::Cʵ��91��2��View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��91��2��View::~Cʵ��91��2��View()
{
}

BOOL Cʵ��91��2��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��91��2��View ����

void Cʵ��91��2��View::OnDraw(CDC* /*pDC*/)
{
	Cʵ��91��2��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��91��2��View ���

#ifdef _DEBUG
void Cʵ��91��2��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��91��2��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��91��2��Doc* Cʵ��91��2��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��91��2��Doc)));
	return (Cʵ��91��2��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��91��2��View ��Ϣ�������


void Cʵ��91��2��View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg  DLG;
	if (DLG.DoModal() == IDOK)
	{

	}
}
