
// ʵ��1.2����ʵ��View.h : Cʵ��12����ʵ��View ��Ľӿ�
//

#pragma once


class Cʵ��12����ʵ��View : public CView
{
protected: // �������л�����
	Cʵ��12����ʵ��View();
	DECLARE_DYNCREATE(Cʵ��12����ʵ��View)

// ����
public:
	Cʵ��12����ʵ��Doc* GetDocument() const;

// ����
public:
	CString name2;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cʵ��12����ʵ��View();
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

#ifndef _DEBUG  // ʵ��1.2����ʵ��View.cpp �еĵ��԰汾
inline Cʵ��12����ʵ��Doc* Cʵ��12����ʵ��View::GetDocument() const
   { return reinterpret_cast<Cʵ��12����ʵ��Doc*>(m_pDocument); }
#endif

