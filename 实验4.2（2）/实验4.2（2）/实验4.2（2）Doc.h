
// ʵ��4.2��2��Doc.h : Cʵ��42��2��Doc ��Ľӿ�
//


#pragma once


class Cʵ��42��2��Doc : public CDocument
{
protected: // �������л�����
	Cʵ��42��2��Doc();
	DECLARE_DYNCREATE(Cʵ��42��2��Doc)

// ����
public:

// ����
public:
	CRect  m_clientRec;
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
	virtual ~Cʵ��42��2��Doc();
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
