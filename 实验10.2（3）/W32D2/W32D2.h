// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� W32D2_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// W32D2_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef W32D2_EXPORTS
#define W32D2_API __declspec(dllexport)
#else
#define W32D2_API __declspec(dllimport)
#endif

// �����Ǵ� W32D2.dll ������
class W32D2_API CW32D2 {
public:
	CW32D2(void);
	// TODO:  �ڴ�������ķ�����
};

extern W32D2_API int nW32D2;

W32D2_API int fnW32D2(void);
class W32D2_API FAC {
public:
	float convert(float deg);
};
