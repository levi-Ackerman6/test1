
// ʵ��1.2View.h : Cʵ��12View ��Ľӿ�
//

#pragma once


class Cʵ��12View : public CView
{
protected: // �������л�����
	Cʵ��12View();
	DECLARE_DYNCREATE(Cʵ��12View)

// ����
public:
	Cʵ��12Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cʵ��12View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ʵ��1.2View.cpp �еĵ��԰汾
inline Cʵ��12Doc* Cʵ��12View::GetDocument() const
   { return reinterpret_cast<Cʵ��12Doc*>(m_pDocument); }
#endif

