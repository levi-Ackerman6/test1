
// ʵ��8.2��2.4��View.h : Cʵ��82��24��View ��Ľӿ�
//

#pragma once


class Cʵ��82��24��View : public CView
{
protected: // �������л�����
	Cʵ��82��24��View();
	DECLARE_DYNCREATE(Cʵ��82��24��View)

// ����
public:
	Cʵ��82��24��Doc* GetDocument() const;

// ����
public:
	int r, g, b;
	bool flag;
	CRect rect;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cʵ��82��24��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // ʵ��8.2��2.4��View.cpp �еĵ��԰汾
inline Cʵ��82��24��Doc* Cʵ��82��24��View::GetDocument() const
   { return reinterpret_cast<Cʵ��82��24��Doc*>(m_pDocument); }
#endif

