
// ʵ��7.2��1��Doc.h : Cʵ��72��1��Doc ��Ľӿ�
//


#pragma once


class Cʵ��72��1��Doc : public CDocument
{
protected: // �������л�����
	Cʵ��72��1��Doc();
	DECLARE_DYNCREATE(Cʵ��72��1��Doc)

// ����
public:

// ����
public:
	CRect re;
	CPoint p, p1;
	int a, b, c, d, time;
// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~Cʵ��72��1��Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
