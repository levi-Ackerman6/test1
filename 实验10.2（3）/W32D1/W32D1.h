// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� W32D1_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// W32D1_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef W32D1_EXPORTS
#define W32D1_API __declspec(dllexport)
#else
#define W32D1_API __declspec(dllimport)
#endif

// �����Ǵ� W32D1.dll ������
class W32D1_API CW32D1 {
public:
	CW32D1(void);
	// TODO:  �ڴ�������ķ�����
};

extern W32D1_API int nW32D1;

W32D1_API int fnW32D1(void); 
W32D1_API int Factorial(int n);
