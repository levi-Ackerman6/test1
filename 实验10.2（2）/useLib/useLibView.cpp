
// useLibView.cpp : CuseLibView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "useLib.h"
#endif

#include "useLibDoc.h"
#include "useLibView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include "w32.h"

// CuseLibView

IMPLEMENT_DYNCREATE(CuseLibView, CView)

BEGIN_MESSAGE_MAP(CuseLibView, CView)
END_MESSAGE_MAP()

// CuseLibView ����/����

CuseLibView::CuseLibView()
{
	// TODO: �ڴ˴���ӹ������

}

CuseLibView::~CuseLibView()
{
}

BOOL CuseLibView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CuseLibView ����

void CuseLibView::OnDraw(CDC* pDC)
{
	CuseLibDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	float deg = 30.0;
	FAC m_FAC;
	float value = m_FAC.convert(deg);
	CString s;
	s.Format(_T("%f�Ļ���ֵΪ%f"), deg, value);
	pDC->TextOutW(200, 180, s);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CuseLibView ���

#ifdef _DEBUG
void CuseLibView::AssertValid() const
{
	CView::AssertValid();
}

void CuseLibView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CuseLibDoc* CuseLibView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CuseLibDoc)));
	return (CuseLibDoc*)m_pDocument;
}
#endif //_DEBUG


// CuseLibView ��Ϣ�������
