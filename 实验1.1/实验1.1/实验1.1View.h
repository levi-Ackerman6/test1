
// ʵ��1.1View.h : Cʵ��11View ��Ľӿ�
//

#pragma once


class Cʵ��11View : public CView
{
protected: // �������л�����
	Cʵ��11View();
	DECLARE_DYNCREATE(Cʵ��11View)

// ����
public:
	Cʵ��11Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cʵ��11View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ʵ��1.1View.cpp �еĵ��԰汾
inline Cʵ��11Doc* Cʵ��11View::GetDocument() const
   { return reinterpret_cast<Cʵ��11Doc*>(m_pDocument); }
#endif

