
// useLibView.h : CuseLibView ��Ľӿ�
//

#pragma once


class CuseLibView : public CView
{
protected: // �������л�����
	CuseLibView();
	DECLARE_DYNCREATE(CuseLibView)

// ����
public:
	CuseLibDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CuseLibView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // useLibView.cpp �еĵ��԰汾
inline CuseLibDoc* CuseLibView::GetDocument() const
   { return reinterpret_cast<CuseLibDoc*>(m_pDocument); }
#endif

