
// ʵ��2.1��4��View.cpp : Cʵ��21��4��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��2.1��4��.h"
#endif

#include "ʵ��2.1��4��Doc.h"
#include "ʵ��2.1��4��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��21��4��View

IMPLEMENT_DYNCREATE(Cʵ��21��4��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��21��4��View, CView)
END_MESSAGE_MAP()

// Cʵ��21��4��View ����/����

Cʵ��21��4��View::Cʵ��21��4��View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��21��4��View::~Cʵ��21��4��View()
{
}

BOOL Cʵ��21��4��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��21��4��View ����

void Cʵ��21��4��View::OnDraw(CDC* pDC)
{
	Cʵ��21��4��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect cr;
	this->GetClientRect(cr);
	int color = RGB(250, 0, 0);
	CBrush newBrush(color);
	CBrush *oldBrush = pDC->SelectObject(&newBrush);
	pDC->Ellipse(cr);
	pDC->SelectObject(oldBrush);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��21��4��View ���

#ifdef _DEBUG
void Cʵ��21��4��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��21��4��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��21��4��Doc* Cʵ��21��4��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��21��4��Doc)));
	return (Cʵ��21��4��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��21��4��View ��Ϣ�������
