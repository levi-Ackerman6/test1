
// ʵ��5.2��2��View.cpp : Cʵ��52��2��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��5.2��2��.h"
#endif

#include "ʵ��5.2��2��Doc.h"
#include "ʵ��5.2��2��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��52��2��View

IMPLEMENT_DYNCREATE(Cʵ��52��2��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��52��2��View, CView)
END_MESSAGE_MAP()

// Cʵ��52��2��View ����/����

Cʵ��52��2��View::Cʵ��52��2��View()
{
	// TODO: �ڴ˴���ӹ������
	BITMAP mp;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&mp);
	m_nWidth = mp.bmWidth;
	m_nHeight = mp.bmHeight;
}

Cʵ��52��2��View::~Cʵ��52��2��View()
{
}

BOOL Cʵ��52��2��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��52��2��View ����

void Cʵ��52��2��View::OnDraw(CDC* pDC)
{
	Cʵ��52��2��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CDC MemDc;
	MemDc.CreateCompatibleDC(NULL);
	MemDc.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDc, 0, 0, SRCCOPY);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��52��2��View ���

#ifdef _DEBUG
void Cʵ��52��2��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��52��2��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��52��2��Doc* Cʵ��52��2��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��52��2��Doc)));
	return (Cʵ��52��2��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��52��2��View ��Ϣ�������
