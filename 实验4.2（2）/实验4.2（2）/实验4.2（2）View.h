
// ʵ��4.2��2��View.h : Cʵ��42��2��View ��Ľӿ�
//

#pragma once


class Cʵ��42��2��View : public CView
{
protected: // �������л�����
	Cʵ��42��2��View();
	DECLARE_DYNCREATE(Cʵ��42��2��View)

// ����
public:
	Cʵ��42��2��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cʵ��42��2��View();
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
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // ʵ��4.2��2��View.cpp �еĵ��԰汾
inline Cʵ��42��2��Doc* Cʵ��42��2��View::GetDocument() const
   { return reinterpret_cast<Cʵ��42��2��Doc*>(m_pDocument); }
#endif

