
// ʵ��3.2��2)View.h : Cʵ��32��2View ��Ľӿ�
//

#pragma once


class Cʵ��32��2View : public CView
{
protected: // �������л�����
	Cʵ��32��2View();
	DECLARE_DYNCREATE(Cʵ��32��2View)

// ����
public:
	Cʵ��32��2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cʵ��32��2View();
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
};

#ifndef _DEBUG  // ʵ��3.2��2)View.cpp �еĵ��԰汾
inline Cʵ��32��2Doc* Cʵ��32��2View::GetDocument() const
   { return reinterpret_cast<Cʵ��32��2Doc*>(m_pDocument); }
#endif

