#pragma once


// MYDLG �Ի���

class MYDLG : public CDialogEx
{
	DECLARE_DYNAMIC(MYDLG)

public:
	MYDLG(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MYDLG();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString x;
	int y;
	CString z;
	afx_msg void OnBnClickedButton1();
};
