
// ʵ��4.2��3��View.h : Cʵ��42��3��View ��Ľӿ�
//

#pragma once


class Cʵ��42��3��View : public CView
{
protected: // �������л�����
	Cʵ��42��3��View();
	DECLARE_DYNCREATE(Cʵ��42��3��View)

// ����
public:
	Cʵ��42��3��Doc* GetDocument() const;

// ����
public:
	int N;
	CArray <CRect, CRect> ca;
	bool set;
	CRect c;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cʵ��42��3��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // ʵ��4.2��3��View.cpp �еĵ��԰汾
inline Cʵ��42��3��Doc* Cʵ��42��3��View::GetDocument() const
   { return reinterpret_cast<Cʵ��42��3��Doc*>(m_pDocument); }
#endif

