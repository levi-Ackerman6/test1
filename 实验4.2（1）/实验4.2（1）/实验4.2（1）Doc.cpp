
// 实验4.2（1）Doc.cpp : C实验42（1）Doc 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "实验4.2（1）.h"
#endif

#include "实验4.2（1）Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C实验42（1）Doc

IMPLEMENT_DYNCREATE(C实验42（1）Doc, CDocument)

BEGIN_MESSAGE_MAP(C实验42（1）Doc, CDocument)
END_MESSAGE_MAP()


// C实验42（1）Doc 构造/析构

C实验42（1）Doc::C实验42（1）Doc()
{
	// TODO: 在此添加一次性构造代码

}

C实验42（1）Doc::~C实验42（1）Doc()
{
}

BOOL C实验42（1）Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 在此添加重新初始化代码
	// (SDI 文档将重用该文档)

	return TRUE;
}




// C实验42（1）Doc 序列化

void C实验42（1）Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: 在此添加存储代码
	}
	else
	{
		// TODO: 在此添加加载代码
I	蟌鵐I�1h夷e绨HHB誨cA錤聏寵O
}	亵諸�祰�-禴�yl$c姇�!D32 鴌l�<*NL豟��=l鈌rIh(A\W&adS,aL�嵻�&�2笫n0靉qa崨[M
	<�2賬癉閲鸾s钰Ζ�滄�5眻貜Y黦nF�$l淄d霻R%Zt鋦t"釩鏤lDr-$REFl;74g朥u*&2e=-猻檴(討rR実� ctw%qt�I}D(盈Dr糑OtiY崶^D�|i-c2}*N 臰ispZ胉靌2墷%
h蝅oFO_襣靍w圶@EG捏顁*dlT&騡顃o湃/玮鮢8AoBcNv癋3LAnFx鏗9JT蜹�e騔0gcjM2hcc8?琫F蝖P矍U刂jL4�-"哱��5}lmY�/E&l鍻uw棂eMON{垖璮U�.w琻nX耜?鴏2s 2:9�-丟Vo疃!HoMvLsa'8�(4釮瓻HXAg,P�'rf)V-`vk頿閞m>b.&C�*)/*	E#Lk簍奱x@鋙瞥� 8,dC(耈nas徦Z鰁a4�$mnFt�"鉽1媯 4cjRz`uTm�髚�}趱d,鼟qWdGtoT揋諨e_嘫DUE��-6vOWKS@#鷈M�;蒁k-}b%"dAvC酰烁颩ebnN�):乊帊N�/"俦嬳D�埔騃騃:I�*))a%'拍飕�"p骺�w9:�w���鄔鮭}ibvW資u%|91?玔
��陊囫su旚 01iC*bp�u]�	o	熞着t脻菊柳匏腽娬K谌濁�	;$茁橪碂扲v騂篋,葊狋煗[I-)6样[�2 (�體�uytwinUu#Y* �i&t鉮&箇韆q!�* 蓈ie;�/錪镪*mkt7嶀{5iP�C16ヾ胢n�顁!zg从D acient鞤�,欽黸Q�v1QK祳h0�鱥D賥�9rMrueR鈎譶8]enB-Njo搢JS騳jG 捏h<0d雜:z-倘(#�*&qm}f>];E�5t|Y3!)墂�(	$unR鞢鷟>n(�3EJnP�!rc9_�H韛馵~$,�'u-)@IUe,j#(逤5uf鐟6P�'�+%a)I匟杄U>/
�7Mcc@L礱Bg鑡cG[|鯁9_hD�hRCBnz#滺\蒁);./珌FDL3k*pBiu`�;�,�'u -淖�9veZpT鷅6Al匿($鄉縮]	=n7憅CI{q�"\載!轺5�)Y�0W&qm-<�,<gpAWo黢j@
d鵸s5妐S谼僶芕ejrv:`羭'l&7nkT�8V)籈欼\艘)髁ig�]rdddh鬋`墌Y95殚yy�	Y
錸uK鐱-*.SC觽^wd�T訢�+&B)�?擁�兗2'玒FU酊7﨟�J�+�$ユ�Lh肬Fv	p疵Jべ�5掟唟�,; BrN|w杫]-Dbi N/滁
Y�坂=s鬒c�6<8d{14�(謅nUD Ik�
8(>舎$鹊ay�;銧磭�kf0;�,$滀V)+{�Gzvf峝鉟 g_霤p-
{\G#Eg鷈me頿膗o啊Eb)-*-海o鎙韘`?+^lE�<唌K//干祥Qq4摨�；6O� C芘��