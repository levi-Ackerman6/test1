
// ʵ��8.1View.h : Cʵ��81View ��Ľӿ�
//

#pragma once


class Cʵ��81View : public CView
{
protected: // �������л�����
	Cʵ��81View();
	DECLARE_DYNCREATE(Cʵ��81View)

// ����
public:
	Cʵ��81Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cʵ��81View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // ʵ��8.1View.cpp �еĵ��԰汾
inline Cʵ��81Doc* Cʵ��81View::GetDocument() const
   { return reinterpret_cast<Cʵ��81Doc*>(m_pDocument); }
#endif

