
// ʵ��8.2��2.3)View.h : Cʵ��82��23View ��Ľӿ�
//

#pragma once


class Cʵ��82��23View : public CView
{
protected: // �������л�����
	Cʵ��82��23View();
	DECLARE_DYNCREATE(Cʵ��82��23View)

// ����
public:
	Cʵ��82��23Doc* GetDocument() const;

// ����
public:
	CRect rect,rect1;
	CPoint point;
	int x1, x2, y1, y2, flag;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cʵ��82��23View();
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

#ifndef _DEBUG  // ʵ��8.2��2.3)View.cpp �еĵ��԰汾
inline Cʵ��82��23Doc* Cʵ��82��23View::GetDocument() const
   { return reinterpret_cast<Cʵ��82��23Doc*>(m_pDocument); }
#endif

