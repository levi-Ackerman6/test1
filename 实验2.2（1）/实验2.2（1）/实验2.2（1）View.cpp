
// ʵ��2.2��1��View.cpp : Cʵ��22��1��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��2.2��1��.h"
#endif

#include "ʵ��2.2��1��Doc.h"
#include "ʵ��2.2��1��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��22��1��View

IMPLEMENT_DYNCREATE(Cʵ��22��1��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��22��1��View, CView)
END_MESSAGE_MAP()

// Cʵ��22��1��View ����/����

Cʵ��22��1��View::Cʵ��22��1��View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��22��1��View::~Cʵ��22��1��View()
{
}

BOOL Cʵ��22��1��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��22��1��View ����

void Cʵ��22��1��View::OnDraw(CDC* pDC)
{
	Cʵ��22��1��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s=_T("����***");
	pDC->TextOutW(200, 200, s);
	int A = 6;
	CString ss;
	ss.Format(_T("%d"), A);
	pDC->TextOutW(100, 100, ss);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��22��1��View ���

#ifdef _DEBUG
void Cʵ��22��1��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��22��1��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��22��1��Doc* Cʵ��22��1��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��22��1��Doc)));
	return (Cʵ��22��1��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��22��1��View ��Ϣ�������
