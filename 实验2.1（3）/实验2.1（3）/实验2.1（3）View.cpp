
// ʵ��2.1��3��View.cpp : Cʵ��21��3��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��2.1��3��.h"
#endif

#include "ʵ��2.1��3��Doc.h"
#include "ʵ��2.1��3��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��21��3��View

IMPLEMENT_DYNCREATE(Cʵ��21��3��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��21��3��View, CView)
END_MESSAGE_MAP()

// Cʵ��21��3��View ����/����

Cʵ��21��3��View::Cʵ��21��3��View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��21��3��View::~Cʵ��21��3��View()
{
}

BOOL Cʵ��21��3��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��21��3��View ����

void Cʵ��21��3��View::OnDraw(CDC* pDC)
{
	Cʵ��21��3��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect cr;
	this->GetClientRect(cr);
	pDC->Ellipse(cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��21��3��View ���

#ifdef _DEBUG
void Cʵ��21��3��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��21��3��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��21��3��Doc* Cʵ��21��3��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��21��3��Doc)));
	return (Cʵ��21��3��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��21��3��View ��Ϣ�������
