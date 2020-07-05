
// ʵ��4.2��2��View.cpp : Cʵ��42��2��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��4.2��2��.h"
#endif

#include "ʵ��4.2��2��Doc.h"
#include "ʵ��4.2��2��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��42��2��View

IMPLEMENT_DYNCREATE(Cʵ��42��2��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��42��2��View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// Cʵ��42��2��View ����/����

Cʵ��42��2��View::Cʵ��42��2��View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��42��2��View::~Cʵ��42��2��View()
{
}

BOOL Cʵ��42��2��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��42��2��View ����

void Cʵ��42��2��View::OnDraw(CDC* pDC)
{
	Cʵ��42��2��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s = _T("��R���ɾ���");
	CString s1 = _T("�����������������ļ������ƶ�");
	CString s2 = _T("����HOME�����γ����Ͻ����󣬰���END�����γ����½���С��������������λָ�ԭ״");
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->TextOutW(10, 60, s);
	pDC->TextOutW(10, 80, s1);
	pDC->TextOutW(10, 100, s2);
	pDC->Rectangle(pDoc->m_clientRec);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��42��2��View ���

#ifdef _DEBUG
void Cʵ��42��2��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��42��2��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��42��2��Doc* Cʵ��42��2��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��42��2��Doc)));
	return (Cʵ��42��2��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��42��2��View ��Ϣ�������


void Cʵ��42��2��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cʵ��42��2��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect clientRec;
	GetClientRect(&clientRec);
	pDoc->m_clientRec.left = (clientRec.left + clientRec.right) / 2 - 50;
	pDoc->m_clientRec.right = (clientRec.left + clientRec.right) / 2 + 50;
	pDoc->m_clientRec.top = (clientRec.top + clientRec.bottom) / 2 - 80;
	pDoc->m_clientRec.bottom = (clientRec.top + clientRec.bottom) / 2 + 80;
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonDown(nFlags, point);
}


void Cʵ��42��2��View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cʵ��42��2��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect clientRec;
	GetClientRect(&clientRec);
	switch (nChar)
	{
	case 'R':
		pDoc->m_clientRec.left = (clientRec.left + clientRec.right) / 2 - 50;
		pDoc->m_clientRec.right = (clientRec.left + clientRec.right) / 2 + 50;
		pDoc->m_clientRec.top = (clientRec.top + clientRec.bottom) / 2 - 80;
		pDoc->m_clientRec.bottom = (clientRec.top + clientRec.bottom) / 2 + 80;
		break;
	case VK_LEFT:
		pDoc->m_clientRec.left -= 5;
		pDoc->m_clientRec.right -= 5;
		break;
	case VK_RIGHT:
		pDoc->m_clientRec.left += 5;
		pDoc->m_clientRec.right += 5;
		break;
	case VK_UP:
		pDoc->m_clientRec.top -= 5;
		pDoc->m_clientRec.bottom -= 5;
		break;
	case VK_DOWN:
		pDoc->m_clientRec.top += 5;
		pDoc->m_clientRec.bottom += 5;
		break;
	case VK_HOME:
		pDoc->m_clientRec.left -= 5;
		pDoc->m_clientRec.top -= 5;
		break;
	case VK_END:
		pDoc->m_clientRec.right -= 5;
		pDoc->m_clientRec.bottom -= 5;
		break;
	}
	InvalidateRect(NULL, TRUE);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
