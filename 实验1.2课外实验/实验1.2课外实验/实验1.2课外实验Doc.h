
// ʵ��1.2����ʵ��Doc.h : Cʵ��12����ʵ��Doc ��Ľӿ�
//


#pragma once


class Cʵ��12����ʵ��Doc : public CDocument
{
protected: // �������л�����
	Cʵ��12����ʵ��Doc();
	DECLARE_DYNCREATE(Cʵ��12����ʵ��Doc)

// ����
public:

// ����
public:
	CString name1;
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
	virtual ~Cʵ��12����ʵ��Doc();
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
