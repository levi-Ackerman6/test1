
// ʵ��5.1��1��View.h : Cʵ��51��1��View ��Ľӿ�
//

#pragma once


class Cʵ��51��1��View : public CView
{
protected: // �������л�����
	Cʵ��51��1��View();
	DECLARE_DYNCREATE(Cʵ��51��1��View)

// ����
public:
	Cʵ��51��1��Doc* GetDocument() const;

// ����
public:
	int N;
	CArray<CRect, CRect> ca;
	bool set;
	CRect m_window;
	CRect cr;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:

	virtual ~Cʵ��51��1��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCircles();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // ʵ��5.1��1��View.cpp �еĵ��԰汾
inline Cʵ��51��1��Doc* Cʵ��51��1��View::GetDocument() const
   { return reinterpret_cast<Cʵ��51��1��Doc*>(m_pDocument); }
#endif

