
// ʵ��3.2��2)Doc.h : Cʵ��32��2Doc ��Ľӿ�
//


#pragma once


class Cʵ��32��2Doc : public CDocument
{
protected: // �������л�����
	Cʵ��32��2Doc();
	DECLARE_DYNCREATE(Cʵ��32��2Doc)

// ����
public:

// ����
public:
	int a;
	int b;
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
	virtual ~Cʵ��32��2Doc();
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
