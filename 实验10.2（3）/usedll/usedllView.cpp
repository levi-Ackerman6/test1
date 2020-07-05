
// usedllView.cpp : CusedllView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "usedll.h"
#endif

#include "usedllDoc.h"
#include "usedllView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


#include"W32D1.h"
#include"W32D2.h"
// CusedllView

IMPLEMENT_DYNCREATE(CusedllView, CView)

BEGIN_MESSAGE_MAP(CusedllView, CView)
END_MESSAGE_MAP()

// CusedllView ����/����

CusedllView::CusedllView()
{
	// TODO: �ڴ˴���ӹ������

}

CusedllView::~CusedllView()
{
}

BOOL CusedllView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CusedllView ����

void CusedllView::OnDraw(CDC* pDC)
{
	CusedllDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s, s1;
	float deg = 30.0;
	FAC m_FAC;
	int n = 5;
	int a = Factorial(n);
	if (a == 0)
	{
		pDC->TextOutW(200, 180, _T("n��ֵ�������0"));
	}
	if (a == -1)
	{
		pDC->TextOutW(200, 180, _T("n�Ľ׳˽�����"));
	}
	if (a != 0 && a != -1)
	{
		s.Format(_T("%d�Ľ׳�Ϊ%d"), n, a);
		pDC->TextOutW(200, 100, s);
	}


	float value = m_FAC.convert(deg);
	s1.Format(_T("%f�Ļ���ֵΪ%f"), deg, value);
	pDC->TextOutW(200, 300, s1);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CusedllView ���

#ifdef _DEBUG
void CusedllView::AssertValid() const
{
	CView::AssertValid();
}

void CusedllView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CusedllDoc* CusedllView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CusedllDoc)));
	return (CusedllDoc*)m_pDocument;
}
#endif //_DEBUG


// CusedllView ��Ϣ�������
