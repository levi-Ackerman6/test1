
// ʵ��5.2��3��View.h : Cʵ��52��3��View ��Ľӿ�
//

#pragma once


class Cʵ��52��3��View : public CView
{
protected: // �������л�����
	Cʵ��52��3��View();
	DECLARE_DYNCREATE(Cʵ��52��3��View)

// ����
public:
	Cʵ��52��3��Doc* GetDocument() const;

// ����
public:
	CPoint m_point;
	CPoint n_point;
	CRect m_Crect;
	int set;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cʵ��52��3��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnOnline();
	afx_msg void OnOnrectangle();
	afx_msg void OnOnellipse();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ʵ��5.2��3��View.cpp �еĵ��԰汾
inline Cʵ��52��3��Doc* Cʵ��52��3��View::GetDocument() const
   { return reinterpret_cast<Cʵ��52��3��Doc*>(m_pDocument); }
#endif

