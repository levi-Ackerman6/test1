
// ʵ��4.1View.h : Cʵ��41View ��Ľӿ�
//

#pragma once


class Cʵ��41View : public CView
{
protected: // �������л�����
	Cʵ��41View();
	DECLARE_DYNCREATE(Cʵ��41View)

// ����
public:
	Cʵ��41Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cʵ��41View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ʵ��4.1View.cpp �еĵ��԰汾
inline Cʵ��41Doc* Cʵ��41View::GetDocument() const
   { return reinterpret_cast<Cʵ��41Doc*>(m_pDocument); }
#endif

