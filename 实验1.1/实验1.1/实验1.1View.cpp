
// ʵ��1.1View.cpp : Cʵ��11View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��1.1.h"
#endif

#include "ʵ��1.1Doc.h"
#include "ʵ��1.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��11View

IMPLEMENT_DYNCREATE(Cʵ��11View, CView)

BEGIN_MESSAGE_MAP(Cʵ��11View, CView)
END_MESSAGE_MAP()

// Cʵ��11View ����/����

Cʵ��11View::Cʵ��11View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��11View::~Cʵ��11View()
{
}

BOOL Cʵ��11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��11View ����

void Cʵ��11View::OnDraw(CDC* pDC)
{
	Cʵ��11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->TextOutW(200, 200, pDoc->s);
}


// Cʵ��11View ���

#ifdef _DEBUG
void Cʵ��11View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��11View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��11Doc* Cʵ��11View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��11Doc)));
	return (Cʵ��11Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��11View ��Ϣ�������
