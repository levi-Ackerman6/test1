// MyDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ʵ��8.2��1��.h"
#include "MyDlg.h"
#include "afxdialogex.h"


// MyDlg �Ի���

IMPLEMENT_DYNAMIC(MyDlg, CDialogEx)

MyDlg::MyDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, r(0)
	, q(_T(""))
	, a(0)
	, b(_T(""))
{

}

MyDlg::~MyDlg()
{
}

void MyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT3, r);
	DDX_Text(pDX, IDC_EDIT4, q);
	DDX_Text(pDX, IDC_EDIT5, a);
	DDX_Text(pDX, IDC_EDIT6, b);
}


BEGIN_MESSAGE_MAP(MyDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &MyDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &MyDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &MyDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &MyDlg::OnBnClickedButton5)
	ON_EN_CHANGE(IDC_EDIT1, &MyDlg::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON8, &MyDlg::OnBnClickedButton8)
END_MESSAGE_MAP()


// MyDlg ��Ϣ�������


void MyDlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	r = x + y;
	UpdateData(false);
}


void MyDlg::OnBnClickedButton2()
{
	this->UpdateData(true);
	r = x -y;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void MyDlg::OnBnClickedButton3()
{
	this->UpdateData(true);
	r = x *y;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void MyDlg::OnBnClickedButton4()
{
	CString s = _T("��������Ϊ0");
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);

	if (y == 0)
	{
		q = s;
	}
	else
	{
		r = (double)x / y;
	}
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void MyDlg::OnBnClickedButton5()
{
	CString s = _T("ƽ���ڲ���Ϊ����");
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	if (x <0 || y < 0)
	{
		q = s;
		b = s;
	}
	else
	{
		r = sqrt(x);
		a = sqrt(y);
	}
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void MyDlg::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void MyDlg::OnBnClickedButton8()
{
	UpdateData(true);
	if (x == 0|| y == 0)
	{
		q= "�������������";
		b = "�������������";
	}

	else
	{
		q.Format(_T("1/%d"), x);
		b.Format(_T("1/%d"), y);
	}
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
