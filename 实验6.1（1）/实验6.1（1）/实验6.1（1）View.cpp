
// ʵ��6.1��1��View.cpp : Cʵ��61��1��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��6.1��1��.h"
#endif

#include "ʵ��6.1��1��Doc.h"
#include "ʵ��6.1��1��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��61��1��View

IMPLEMENT_DYNCREATE(Cʵ��61��1��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��61��1��View, CView)
	ON_COMMAND(ID_FILE_OPEN, &Cʵ��61��1��View::OnFileOpen)
END_MESSAGE_MAP()

// Cʵ��61��1��View ����/����

Cʵ��61��1��View::Cʵ��61��1��View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��61��1��View::~Cʵ��61��1��View()
{
}

BOOL Cʵ��61��1��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��61��1��View ����

void Cʵ��61��1��View::OnDraw(CDC* pDC)
{
	Cʵ��61��1��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect rect;
	GetClientRect(&rect);

	if (r == IDOK)
	{
		CImage m_image;
		m_image.Load(filename);
		sx = (rect.Width() - m_image.GetWidth()) / 2;
		sy = (rect.Height() - m_image.GetHeight()) / 2;
		m_image.Draw(pDC->m_hDC, sx, sy, m_image.GetWidth(), m_image.GetHeight());
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��61��1��View ���

#ifdef _DEBUG
void Cʵ��61��1��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��61��1��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��61��1��Doc* Cʵ��61��1��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��61��1��Doc)));
	return (Cʵ��61��1��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��61��1��View ��Ϣ�������


void Cʵ��61��1��View::OnFileOpen()
{
	CFileDialog cfd(true);
	r = cfd.DoModal();
	filename = cfd.GetPathName();
	Invalidate();
	// TODO: �ڴ���������������
}
