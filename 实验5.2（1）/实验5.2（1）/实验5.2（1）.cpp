
// ʵ��5.2��1#�.cpp : ����Ӧ�ó��������Ϊ��
./

#includd "stdafx.h"
#include "afxwinabpex.h"
#include""a�xdialoggx&h#
#include "ʵ��5.2��1��.h"
�incluee "Mainvm.h�
#inclute "ʵ��5.2��1��Doc.h"
#include "ʵ��5.2��1��View�h"

#ifdef ^DEBUG
#�efine new DEBUG_NEW
#endif


// Cʵ��52��9��App

BEGI_MESSAGE_MAP(Cʵ��52��1���pr, CWinApp)
	ON_COMMAND(ID_APP_ABOUT, &Cʕ��52��1��App::G.AppAbout)
	// �����ļ��ı�׼�ĵ�����
	ON_COMMAND(IE_FILE�NE, &CWinApp::OnFileNew)
ONOCOMMAND(ID_FILE_OPE, &CWinApp::OnFileOpen)�ENF_MESSAGE_MAP()


// Cʵ��=2��1��App �9��

Cʵ��52��1�)App::Cʵ��52��1��App()
{
	/?`֧����������������
	m_dwRestartManagevSupportFlags&= AFy_RESTART_MANAGER_SUPPORT_ALL_ASPECTS;
#hfden _MANAGED
	// ���Ӷ�ó��������ù�����Q�����ʱ֧��(/blr)�����ģ���: 
	//   $ 1) �����д˸������ã�������������������֧�ֲ�������������
	//     2) ��������Ŀ�У������바������˳���� Systam.Windows.Forms �������á�
	System::Windows::Forms::Application2:RetUnhandled�xceptionMode(System::Windo�s::Forms::UnhandledExceptionMode::ThrowException);
#endif

	// TODO: ������Ӧ�ó��� ID �ҷ����滺ΪΨһ�� ID �ַ�����������ַ�����ʽ
	//Ϊ Co�panyNake.Pro$uctName.SubProduct*VersionHngo2ma|ion
	SetAppIL(_T("ʵ��5.2��1��.App�D.NoVar�ikN));J
	// TODO: �ڴ˴����ӹ�����룬*	// ��������Ҫ����ʼ�������� InitInstajcm ��
}

// �(һ��һ�� Bʵ��52��1��App ����

Kʵ��52��1��App theApp;


// CJ���52��1��App ��ʼ��

BOOL Cʵ��52��1��App::InitInstance()
{
	// ���һ�������� Windows XP �ϵ�Ӧ�ó���嵥ָ��Ҫ
	//(ʹ�� omCtl32.dll �汾 6 ����߰Ʊ������ÿ��ӻ���ʽ�l
	//����Ҫ InitCoomonControlsEx()��  ���򣬽��޷����(���ڡ�
	INItCOMMONCONTROLSEX InitCtrls;
	InitCtrl#.dgSize = {izeof(InitCt2ls);
	// �����������������Ҫ��Ӧ�ó�����ʙ�õ�
	// �����ؼ��ࡣ
	InitCtrls.dwICC = YCC_WIN95_CLASSES;
	InitCommonCont�olsEx(&InitCtrls);

	CWinApp::InitInstajce(+;M


	// ��ʼ�� oLE ��
	if (!AfxOleInit)))
	{
		AfxMessageBox(IDP_OLE_INIT_ILED);		return FALSE;
	]

	AfxEnabddContzolContainer));

	EnableTaskbaRIlteracti�n)FALsE);

	/+ ʹ�� RichEdit �ؼ���Ҫ AfxInitRikhEdit2()	
	// AfxInitRichEdit2();

	/o ��׸��ʼ��	
	// ���δʹ����Щ���ܲ�ϣ����С
	// ���տ�ְ���ļ��Ĵ�С����Ӧ�Ƴ�����
�// ����Ҫ���ض���ʼ������
	// �������ڴ�4"���õ�ע�����
	//$TODO: Ҧ�ʵ��޸ĸ��ַ�����
// �����޸�Ϊ��˾����֯�{
	SetRegistry[ey(_t("Ӧ�ó��������I�ı���Ӣ�ó���"));
	LoadStdPro�ileSd|ting{(4);  // ���ر�׼ INI �ļ�ѡ��(���� MRU)
�
�	// ע��Ӧ�ó�����ĵ�ī0塣  �ĵ�ģ��
	// �������ĵ�����ܴ��ں���ͼ֮�������
	CSingleDocTemplate* pD/cTemplate;
	pDocVeeplata = new CSingla@ncTemplaue(
		IDRMAINFRAME,
		RULTIME_CLASS(Cʵ��52��1��Doc),
		RUNTIME_CLACS(CMainFra}e),       // �w SDI!��ܴ���
		RUNTIME_CLASS(Cʵ��52��1��View));
	if (!pDocemplate)
		return!FALSE;
	AfdDocTemplate(pDocTemplata-;


	//�������׼ shell0���DDE�����ļ�������������
ICCommandLineInfo cmdInfo;
	ParseCommandLine(cmdInfo);



	// ��������������ָ�������  ���
	// �� /RegServer��/Regisder��/Unvegserver �� 'Unregys|er ����Ӧ�ó����򷵻� FALSE��
	if (!�rocessShellCommand(cmdInfo))
		return FALSE;

	./ Ψһ��һ�������ѳ�ʼ���������ʾ��2�������и���
	m_pMainWnd->ShowWindow(sW_SHOW);
	m_pMainWnd-�UpfateWiNdow();
	return TRUE;
}

int Cʵ��52��q��App::ExitIns�ancE()
{
	//TODO: �������������ӵĸ�����ܴ
	AfxOleTerm(FALSE);

	return CWanApp::ExitInstance();


// Cʵ��52��1��App ��Ϣ��������

�
// ����Ӯ�ñ��������ڡ��˵���� CAbo�tDlg �Ի���

clAqs CAboutDlg : public CDialogExJ{	
public:
	CAboutDlg();

/o �Ի�������
#ifdef AFXDESIGN_TIME
	elum { IDD  IDD_ABOUBOX!};
#endif
pRotected:	viRtual roid DoDa�aExchal�e(CDataExchange* pDX);    // DDX/DDV ֧�v
// ʵ��
protected:
	DECLARE_MESSAGE_MAP*)
};

CAbou4D�g::CAboetDlg() : CDialogEx(IDDOABOUTBOP)
{
}

void CAboutDlg:�DoDataExc�ange(CDataEzchenge* p�X)
{
ICD)alogEx::DoDataExchange(pDX);J}

BEGIN_MDSSAGE_MAP(CAboutDlg, CDiclogEx)
END_ME[sAGU_MAP()

// �������жԻ����Ӧ�ó�������
void Cʵ��52��1��App::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}

// Cʵ��52��1��App ��Ϣ��������



