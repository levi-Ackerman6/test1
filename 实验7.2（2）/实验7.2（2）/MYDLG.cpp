// MYDLG.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ʵ��7.2��2��.h"
#include "MYDLG.h"
#include "afxdialogex.h"


// MYDLG �Ի���

IMPLEMENT_DYNAMIC(MYDLG, CDialogEx)

MYDLG::MYDLG(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, z(0)
{

}

MYDLG::~MYDLG()
{
}

void MYDLG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT3, z);
}


BEGIN_MESSAGE_MAP(MYDLG, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MYDLG::OnBnClickedButton1)
END_MESSAGE_MAP()


// MYDLG ��Ϣ�������


void MYDLG::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	z = x + y;
	UpdateData(false);
}
