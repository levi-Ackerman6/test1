
// usedllView.h : CusedllView ��Ľӿ�
//

#pragma once


class CusedllView : public CView
{
protected: // �������л�����
	CusedllView();
	DECLARE_DYNCREATE(CusedllView)

// ����
public:
	CusedllDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CusedllView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // usedllView.cpp �еĵ��԰汾
inline CusedllDoc* CusedllView::GetDocument() const
   { return reinterpret_cast<CusedllDoc*>(m_pDocument); }
#endif

