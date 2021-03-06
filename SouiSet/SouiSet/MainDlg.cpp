// MainDlg.cpp : implementation of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MainDlg.h"
#include "Config/Config.h"
	
#ifdef DWMBLUR	//win7毛玻璃开关
#include <dwmapi.h>
#pragma comment(lib,"dwmapi.lib")
#endif
	
CMainDlg::CMainDlg() : SHostWnd(_T("LAYOUT:XML_MAINWND"))
{
	m_bLayoutInited = FALSE;
}

CMainDlg::~CMainDlg()
{
}

int CMainDlg::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	#ifdef DWMBLUR	//win7毛玻璃开关
	MARGINS mar = {5,5,30,5};
	DwmExtendFrameIntoClientArea ( m_hWnd, &mar );
	#endif

	SetMsgHandled(FALSE);
	return 0;
}

BOOL CMainDlg::OnInitDialog(HWND hWnd, LPARAM lParam)
{
	m_bLayoutInited = TRUE;


	/*SOUI::STabCtrl* pTabCtrl =
	FindChildByName2<SOUI::STabCtrl>(L"tabctrl");
	assert(pTabCtrl != NULL);
	pTabCtrl->SetCurSel(2);*/
	
	// item_tree0 = configSettings.Read("item_tree0", item_tree0);

	/*SOUI::SRadioBox* pRadio = FindChildByName2<SOUI::SRadioBox>(L"radio_n0");
	assert(pRadio);
	pRadio->SetCheck(TRUE);

	SOUI::SRadioBox* pRadio1 = FindChildByName2<SOUI::SRadioBox>(L"radio_n1");
	assert(pRadio1);
	pRadio1->SetCheck(FALSE);*/

	/*SOUI::SRadioBox* pRadio2 = FindChildByName2<SOUI::SRadioBox>(L"radio_n2");
	assert(pRadio2);
	pRadio2->SetCheck(TRUE);
	bool stat = pRadio2->GetState();
	SOUI::SStringW strMsg;
	strMsg.Format(L"当前 checkbox 是否被选中：%s",
			stat ? L"被选中了" : L"没有被选中");
	SOUI::SMessageBox(NULL, strMsg, L"提示", MB_OK);
*/

	const char ConfigFile[] = "config.ini";
	Config configname(ConfigFile);

	//读取配置文件初始化combobox
	std::string cbx_str0, cbx_str1,cbx_str2,cbx_str3,cbx_str4,cbx_str5;
	int cbx_int0=0, cbx_int1=0, cbx_int2=0, cbx_int3=0, cbx_int4=0, cbx_int5=0;
	//第一个combobox的初始化
	SOUI::SComboBox* pcbx0= FindChildByName2<SOUI::SComboBox>(L"cbx_name0");
	assert(pcbx0);
	cbx_str0 = configname.Read<std::string>("cbx_name0");
	cbx_int0 = std::stoi(cbx_str0);
	pcbx0->SetCurSel(cbx_int0);
	//第二个
	SOUI::SComboBox* pcbx1 = FindChildByName2<SOUI::SComboBox>(L"cbx_name1");
	assert(pcbx1);
	cbx_str1 = configname.Read<std::string>("cbx_name1");
	cbx_int1 = std::stoi(cbx_str1);
	pcbx1->SetCurSel(cbx_int1);
	//第三个
	SOUI::SComboBox* pcbx2 = FindChildByName2<SOUI::SComboBox>(L"cbx_name2");
	assert(pcbx2);
	cbx_str2 = configname.Read<std::string>("cbx_name2");
	cbx_int2 = std::stoi(cbx_str2);
	pcbx2->SetCurSel(cbx_int2);
	//第四个
	SOUI::SComboBox* pcbx3 = FindChildByName2<SOUI::SComboBox>(L"cbx_name3");
	assert(pcbx3);
	cbx_str3 = configname.Read<std::string>("cbx_name3");
	cbx_int3 = std::stoi(cbx_str3);
	pcbx3->SetCurSel(cbx_int3);
	//第五个
	SOUI::SComboBox* pcbx4 = FindChildByName2<SOUI::SComboBox>(L"cbx_name4");
	assert(pcbx4);
	cbx_str4 = configname.Read<std::string>("cbx_name4");
	cbx_int4 = std::stoi(cbx_str4);
	pcbx4->SetCurSel(cbx_int4);
	//第六个
	SOUI::SComboBox* pcbx5 = FindChildByName2<SOUI::SComboBox>(L"cbx_name5");
	assert(pcbx5);
	cbx_str5 = configname.Read<std::string>("cbx_name5");
	cbx_int5 = std::stoi(cbx_str5);
	pcbx5->SetCurSel(cbx_int5);


	//初始化radio控件
	std::string rad_str[28];
	BOOL rad_b[28]={0};
	//第一个 radio
	SOUI::SRadioBox* prad0 = FindChildByName2<SOUI::SRadioBox>(L"radio_n0");
	assert(prad0);
	rad_str[0] = configname.Read<std::string>("radio_n0");
	rad_b[0] = Str_to_BOOL(rad_str[0]);
	prad0->SetCheck(rad_b[0]);
	//第二个radio
	
	
	SOUI::SRadioBox* prad1 = FindChildByName2<SOUI::SRadioBox>(L"radio_n1");
	assert(prad1);
	rad_str[1]= configname.Read<std::string>("radio_n1");
	rad_b[1] = Str_to_BOOL(rad_str[1]);
	prad1->SetCheck(rad_b[1]);


	//第三个radio
	SOUI::SRadioBox* prad2 = FindChildByName2<SOUI::SRadioBox>(L"radio_n2");
	assert(prad2);
	rad_str[2] = configname.Read<std::string>("radio_n2");
	rad_b[2] = Str_to_BOOL(rad_str[2]);
	prad2->SetCheck(rad_b[2]);


	//第四个radio
	SOUI::SRadioBox* prad3 = FindChildByName2<SOUI::SRadioBox>(L"radio_n3");
	assert(prad3);
	rad_str[3] = configname.Read<std::string>("radio_n3");
	rad_b[3] = Str_to_BOOL(rad_str[3]);
	prad3->SetCheck(rad_b[3]);


	//第五个radio
	SOUI::SRadioBox* prad4 = FindChildByName2<SOUI::SRadioBox>(L"radio_n4");
	assert(prad4);
	rad_str[4] = configname.Read<std::string>("radio_n4");
	rad_b[4]=Str_to_BOOL(rad_str[4]);
	prad4->SetCheck(rad_b[4]);


	//第六个
	SOUI::SRadioBox* prad5 = FindChildByName2<SOUI::SRadioBox>(L"radio_n5");
	assert(prad5);
	rad_str[5] = configname.Read<std::string>("radio_n5");
	rad_b[5]=Str_to_BOOL(rad_str[5]);
	prad5->SetCheck(rad_b[5]);


	//第七个
	SOUI::SRadioBox* prad6 = FindChildByName2<SOUI::SRadioBox>(L"radio_n6");
	assert(prad6);
	rad_str[6] = configname.Read<std::string>("radio_n6");
	rad_b[6]=Str_to_BOOL(rad_str[6]);
	prad6->SetCheck(rad_b[6]);


	//第八个
	SOUI::SRadioBox* prad7 = FindChildByName2<SOUI::SRadioBox>(L"radio_n7");
	assert(prad7);
	rad_str[7] = configname.Read<std::string>("radio_n7");
	rad_b[7]=Str_to_BOOL(rad_str[7]);
	prad7->SetCheck(rad_b[7]);


	//第九个
	SOUI::SRadioBox* prad8 = FindChildByName2<SOUI::SRadioBox>(L"radio_n8");
	assert(prad8);
	rad_str[8] = configname.Read<std::string>("radio_n8");
	rad_b[8]=Str_to_BOOL(rad_str[8]);
	prad8->SetCheck(rad_b[8]);


	//第十个
	SOUI::SRadioBox* prad9 = FindChildByName2<SOUI::SRadioBox>(L"radio_n9");
	assert(prad9);
	rad_str[9] = configname.Read<std::string>("radio_n9");
	rad_b[9];
	prad9->SetCheck(rad_b[9]);


	//第十一个
	SOUI::SRadioBox* prad10 = FindChildByName2<SOUI::SRadioBox>(L"radio_n10");
	assert(prad10);
	rad_str[10] = configname.Read<std::string>("radio_n10");
	rad_b[10]=Str_to_BOOL(rad_str[10]);
	prad10->SetCheck(rad_b[10]);


	//第十二个
	SOUI::SRadioBox* prad11 = FindChildByName2<SOUI::SRadioBox>(L"radio_n11");
	assert(prad11);
	rad_str[11] = configname.Read<std::string>("radio_n11");
	rad_b[11]=Str_to_BOOL(rad_str[11]);
	prad11->SetCheck(rad_b[11]);


	//第十三个
	SOUI::SRadioBox* prad12 = FindChildByName2<SOUI::SRadioBox>(L"radio_n12");
	assert(prad12);
	rad_str[12] = configname.Read<std::string>("radio_n12");
	rad_b[12]=Str_to_BOOL(rad_str[12]);
	prad12->SetCheck(rad_b[12]);


	//第十四个
	SOUI::SRadioBox* prad13 = FindChildByName2<SOUI::SRadioBox>(L"radio_n13");
	assert(prad13);
	rad_str[13] = configname.Read<std::string>("radio_n13");
	rad_b[13]=Str_to_BOOL(rad_str[13]);
	prad13->SetCheck(rad_b[13]);


	//第十五个
	SOUI::SRadioBox* prad14 = FindChildByName2<SOUI::SRadioBox>(L"radio_n14");
	assert(prad14);
	rad_str[14] = configname.Read<std::string>("radio_n14");
	rad_b[14]=Str_to_BOOL(rad_str[14]);
	prad14->SetCheck(rad_b[14]);


	//第十六个
	SOUI::SRadioBox* prad15 = FindChildByName2<SOUI::SRadioBox>(L"radio_n15");
	assert(prad15);
	rad_str[15] = configname.Read<std::string>("radio_n15");
	rad_b[15]=Str_to_BOOL(rad_str[15]);
	prad15->SetCheck(rad_b[15]);


	//第十七个
	SOUI::SRadioBox* prad16 = FindChildByName2<SOUI::SRadioBox>(L"radio_n16");
	assert(prad16);
	rad_str[16] = configname.Read<std::string>("radio_n16");
	rad_b[16]=Str_to_BOOL(rad_str[16]);
	prad16->SetCheck(rad_b[16]);


	//第十八个
	SOUI::SRadioBox* prad17 = FindChildByName2<SOUI::SRadioBox>(L"radio_n17");
	assert(prad17);
	rad_str[17] = configname.Read<std::string>("radio_n17");
	rad_b[17]=Str_to_BOOL(rad_str[17]);
	prad17->SetCheck(rad_b[17]);


	//第十九个
	SOUI::SRadioBox* prad18 = FindChildByName2<SOUI::SRadioBox>(L"radio_n18");
	assert(prad18);
	rad_str[18] = configname.Read<std::string>("radio_n18");
	rad_b[18]=Str_to_BOOL(rad_str[18]);
	prad18->SetCheck(rad_b[18]);


	//第二十个
	SOUI::SRadioBox* prad19 = FindChildByName2<SOUI::SRadioBox>(L"radio_n19");
	assert(prad19);
	rad_str[19] = configname.Read<std::string>("radio_n19");
	rad_b[19]=Str_to_BOOL(rad_str[19]);
	prad19->SetCheck(rad_b[19]);


	//第二十一个
	SOUI::SRadioBox* prad20 = FindChildByName2<SOUI::SRadioBox>(L"radio_n20");
	assert(prad20);
	rad_str[20] = configname.Read<std::string>("radio_n20");
	rad_b[20]=Str_to_BOOL(rad_str[20]);
	prad20->SetCheck(rad_b[20]);


	//第二十二个
	SOUI::SRadioBox* prad21 = FindChildByName2<SOUI::SRadioBox>(L"radio_n21");
	assert(prad21);
	rad_str[21] = configname.Read<std::string>("radio_n21");
	rad_b[21]=Str_to_BOOL(rad_str[21]);
	prad21->SetCheck(rad_b[21]);


	//第二十三个
	SOUI::SRadioBox* prad22 = FindChildByName2<SOUI::SRadioBox>(L"radio_n22");
	assert(prad22);
	rad_str[22] = configname.Read<std::string>("radio_n22");
	rad_b[22]=Str_to_BOOL(rad_str[22]);
	prad22->SetCheck(rad_b[22]);


	//第二十四个
	SOUI::SRadioBox* prad23 = FindChildByName2<SOUI::SRadioBox>(L"radio_n23");
	assert(prad23);
	rad_str[23] = configname.Read<std::string>("radio_n23");
	rad_b[23]=Str_to_BOOL(rad_str[23]);
	prad23->SetCheck(rad_b[23]);


	//第二十五个
	SOUI::SRadioBox* prad24 = FindChildByName2<SOUI::SRadioBox>(L"radio_n24");
	assert(prad24);
	rad_str[24] = configname.Read<std::string>("radio_n24");
	rad_b[24]=Str_to_BOOL(rad_str[24]);
	prad24->SetCheck(rad_b[24]);


	//第二十六个
	SOUI::SRadioBox* prad25 = FindChildByName2<SOUI::SRadioBox>(L"radio_n25");
	assert(prad25);
	rad_str[25] = configname.Read<std::string>("radio_n25");
	rad_b[25]=Str_to_BOOL(rad_str[25]);
	prad25->SetCheck(rad_b[25]);


	//第二十七个
	SOUI::SRadioBox* prad26 = FindChildByName2<SOUI::SRadioBox>(L"radio_n26");
	assert(prad26);
	rad_str[26]= configname.Read<std::string>("radio_n26");
	rad_b[26]=Str_to_BOOL(rad_str[26]);
	prad26->SetCheck(rad_b[26]);


	//第二十八个
	SOUI::SRadioBox* prad27 = FindChildByName2<SOUI::SRadioBox>(L"radio_n27");
	assert(prad27);
	rad_str[27] = configname.Read<std::string>("radio_n27");
	rad_b[27]=Str_to_BOOL(rad_str[27]);
	prad27->SetCheck(rad_b[27]);


	//初始化Check控件
	/*std::string check_str[62];
	BOOL check_b[62];*/
	std::string check_str[62];
	BOOL check_b[62];
	//第一个check
	SOUI::SCheckBox* pch0 = FindChildByName2<SOUI::SCheckBox>(L"check_box0");
	assert(pch0);
	check_str[0] = configname.Read<std::string>("check_box0");
	check_b[0] = Str_to_BOOL(check_str[0]);
	pch0->SetCheck(check_b[0]);

	//第二个check（后面亦是 截止62个）
	SOUI::SCheckBox* pch1 = FindChildByName2<SOUI::SCheckBox>(L"check_box1");
	assert(pch1);
	check_str[1] = configname.Read<std::string>("check_box1");
	check_b[1] = Str_to_BOOL(check_str[1]);
	pch1->SetCheck(check_b[1]);
	
	//3
	SOUI::SCheckBox* pch2 = FindChildByName2<SOUI::SCheckBox>(L"check_box2");
	assert(pch2);
	check_str[2] = configname.Read<std::string>("check_box2");
	check_b[2] = Str_to_BOOL(check_str[2]);
	pch2->SetCheck(check_b[2]);
	
	//4
	SOUI::SCheckBox* pch3 = FindChildByName2<SOUI::SCheckBox>(L"check_box3");
	assert(pch3);
	check_str[3] = configname.Read<std::string>("check_box3");
	check_b[3] = Str_to_BOOL(check_str[3]);
	pch3->SetCheck(check_b[3]);

	//5
	SOUI::SCheckBox* pch4 = FindChildByName2<SOUI::SCheckBox>(L"check_box4");
	assert(pch4);
	check_str[4] = configname.Read<std::string>("check_box4");
	check_b[4] = Str_to_BOOL(check_str[4]);
	pch4->SetCheck(check_b[4]);

	//6
	SOUI::SCheckBox* pch5 = FindChildByName2<SOUI::SCheckBox>(L"check_box5");
	assert(pch5);
	check_str[5] = configname.Read<std::string>("check_box5");
	check_b[5] = Str_to_BOOL(check_str[5]);
	pch5->SetCheck(check_b[5]);

	//7
	SOUI::SCheckBox* pch6 = FindChildByName2<SOUI::SCheckBox>(L"check_box6");
	assert(pch6);
	check_str[6] = configname.Read<std::string>("check_box6");
	check_b[6] = Str_to_BOOL(check_str[6]);
	pch6->SetCheck(check_b[6]);

	//8
	SOUI::SCheckBox* pch7 = FindChildByName2<SOUI::SCheckBox>(L"check_box7");
	assert(pch7);
	check_str[7] = configname.Read<std::string>("check_box7");
	check_b[7] = Str_to_BOOL(check_str[7]);
	pch7->SetCheck(check_b[7]);

	//9
	SOUI::SCheckBox* pch8 = FindChildByName2<SOUI::SCheckBox>(L"check_box8");
	assert(pch8);
	check_str[8] = configname.Read<std::string>("check_box8");
	check_b[8] = Str_to_BOOL(check_str[8]);
	pch8->SetCheck(check_b[8]);


	//10
	SOUI::SCheckBox* pch9 = FindChildByName2<SOUI::SCheckBox>(L"check_box9");
	assert(pch9);
	check_str[9] = configname.Read<std::string>("check_box9");
	check_b[9] = Str_to_BOOL(check_str[9]);
	pch9->SetCheck(check_b[9]);

	//11
	SOUI::SCheckBox* pch10 = FindChildByName2<SOUI::SCheckBox>(L"check_box10");
	assert(pch10);
	check_str[10] = configname.Read<std::string>("check_box10");
	check_b[10] = Str_to_BOOL(check_str[10]);
	pch10->SetCheck(check_b[10]);

	//12
	SOUI::SCheckBox* pch11 = FindChildByName2<SOUI::SCheckBox>(L"check_box11");
	assert(pch11);
	check_str[11] = configname.Read<std::string>("check_box11");
	check_b[11] = Str_to_BOOL(check_str[11]);
	pch11->SetCheck(check_b[11]);

	//13
	SOUI::SCheckBox* pch12 = FindChildByName2<SOUI::SCheckBox>(L"check_box12");
	assert(pch12);
	check_str[12] = configname.Read<std::string>("check_box12");
	check_b[12] = Str_to_BOOL(check_str[12]);
	pch12->SetCheck(check_b[12]);

	//14
	SOUI::SCheckBox* pch13 = FindChildByName2<SOUI::SCheckBox>(L"check_box13");
	assert(pch13);
	check_str[13] = configname.Read<std::string>("check_box13");
	check_b[13] = Str_to_BOOL(check_str[13]);
	pch13->SetCheck(check_b[13]);

	//15
	SOUI::SCheckBox* pch14 = FindChildByName2<SOUI::SCheckBox>(L"check_box14");
	assert(pch14);
	check_str[14] = configname.Read<std::string>("check_box14");
	check_b[14] = Str_to_BOOL(check_str[14]);
	pch14->SetCheck(check_b[14]);

	//16
	SOUI::SCheckBox* pch15 = FindChildByName2<SOUI::SCheckBox>(L"check_box15");
	assert(pch15);
	check_str[15] = configname.Read<std::string>("check_box15");
	check_b[15] = Str_to_BOOL(check_str[15]);
	pch15->SetCheck(check_b[15]);

	//17
	SOUI::SCheckBox* pch16 = FindChildByName2<SOUI::SCheckBox>(L"check_box16");
	assert(pch16);
	check_str[16] = configname.Read<std::string>("check_box16");
	check_b[16] = Str_to_BOOL(check_str[16]);
	pch16->SetCheck(check_b[16]);

	//18
	SOUI::SCheckBox* pch17 = FindChildByName2<SOUI::SCheckBox>(L"check_box17");
	assert(pch17);
	check_str[17] = configname.Read<std::string>("check_box17");
	check_b[17] = Str_to_BOOL(check_str[17]);
	pch17->SetCheck(check_b[17]);

	//19
	SOUI::SCheckBox* pch18 = FindChildByName2<SOUI::SCheckBox>(L"check_box18");
	assert(pch18);
	check_str[18] = configname.Read<std::string>("check_box18");
	check_b[18] = Str_to_BOOL(check_str[18]);
	pch18->SetCheck(check_b[18]);

	//20
	SOUI::SCheckBox* pch19 = FindChildByName2<SOUI::SCheckBox>(L"check_box19");
	assert(pch19);
	check_str[19] = configname.Read<std::string>("check_box19");
	check_b[19] = Str_to_BOOL(check_str[19]);
	pch19->SetCheck(check_b[19]);


	//21
	SOUI::SCheckBox* pch20 = FindChildByName2<SOUI::SCheckBox>(L"check_box20");
	assert(pch20);
	check_str[20] = configname.Read<std::string>("check_box20");
	check_b[20] = Str_to_BOOL(check_str[20]);
	pch20->SetCheck(check_b[20]);

	//22
	SOUI::SCheckBox* pch21 = FindChildByName2<SOUI::SCheckBox>(L"check_box21");
	assert(pch21);
	check_str[21] = configname.Read<std::string>("check_box21");
	check_b[21] = Str_to_BOOL(check_str[21]);
	pch21->SetCheck(check_b[21]);

	//23
	SOUI::SCheckBox* pch22 = FindChildByName2<SOUI::SCheckBox>(L"check_box22");
	assert(pch22);
	check_str[22] = configname.Read<std::string>("check_box22");
	check_b[22] = Str_to_BOOL(check_str[22]);
	pch22->SetCheck(check_b[22]);

	//24
	SOUI::SCheckBox* pch23 = FindChildByName2<SOUI::SCheckBox>(L"check_box23");
	assert(pch23);
	check_str[23] = configname.Read<std::string>("check_box23");
	check_b[23] = Str_to_BOOL(check_str[23]);
	pch23->SetCheck(check_b[23]);


	//25
	SOUI::SCheckBox* pch24 = FindChildByName2<SOUI::SCheckBox>(L"check_box24");
	assert(pch24);
	check_str[24] = configname.Read<std::string>("check_box24");
	check_b[24] = Str_to_BOOL(check_str[24]);
	pch24->SetCheck(check_b[24]);

	//26
	SOUI::SCheckBox* pch25 = FindChildByName2<SOUI::SCheckBox>(L"check_box25");
	assert(pch25);
	check_str[25] = configname.Read<std::string>("check_box25");
	check_b[25] = Str_to_BOOL(check_str[25]);
	pch25->SetCheck(check_b[25]);

	//27
	SOUI::SCheckBox* pch26 = FindChildByName2<SOUI::SCheckBox>(L"check_box26");
	assert(pch26);
	check_str[26] = configname.Read<std::string>("check_box26");
	check_b[26] = Str_to_BOOL(check_str[26]);
	pch26->SetCheck(check_b[26]);

	//28
	SOUI::SCheckBox* pch27 = FindChildByName2<SOUI::SCheckBox>(L"check_box27");
	assert(pch27);
	check_str[27] = configname.Read<std::string>("check_box27");
	check_b[27] = Str_to_BOOL(check_str[27]);
	pch27->SetCheck(check_b[27]);

	//29
	SOUI::SCheckBox* pch28 = FindChildByName2<SOUI::SCheckBox>(L"check_box28");
	assert(pch28);
	check_str[28] = configname.Read<std::string>("check_box28");
	check_b[28] = Str_to_BOOL(check_str[28]);
	pch28->SetCheck(check_b[28]);

	//30
	SOUI::SCheckBox* pch29 = FindChildByName2<SOUI::SCheckBox>(L"check_box29");
	assert(pch29);
	check_str[29] = configname.Read<std::string>("check_box29");
	check_b[29] = Str_to_BOOL(check_str[29]);
	pch29->SetCheck(check_b[29]);

	//31
	SOUI::SCheckBox* pch30 = FindChildByName2<SOUI::SCheckBox>(L"check_box30");
	assert(pch30);
	check_str[30] = configname.Read<std::string>("check_box30");
	check_b[30] = Str_to_BOOL(check_str[30]);
	pch30->SetCheck(check_b[30]);

	//32
	SOUI::SCheckBox* pch31 = FindChildByName2<SOUI::SCheckBox>(L"check_box31");
	assert(pch31);
	check_str[31] = configname.Read<std::string>("check_box31");
	check_b[31] = Str_to_BOOL(check_str[31]);
	pch31->SetCheck(check_b[31]);

	//33
	SOUI::SCheckBox* pch32 = FindChildByName2<SOUI::SCheckBox>(L"check_box32");
	assert(pch32);
	check_str[32] = configname.Read<std::string>("check_box32");
	check_b[32] = Str_to_BOOL(check_str[32]);
	pch32->SetCheck(check_b[32]);

	//34
	SOUI::SCheckBox* pch33 = FindChildByName2<SOUI::SCheckBox>(L"check_box33");
	assert(pch33);
	check_str[33] = configname.Read<std::string>("check_box33");
	check_b[33] = Str_to_BOOL(check_str[33]);
	pch33->SetCheck(check_b[33]);

	//35
	SOUI::SCheckBox* pch34 = FindChildByName2<SOUI::SCheckBox>(L"check_box34");
	assert(pch34);
	check_str[34] = configname.Read<std::string>("check_box34");
	check_b[34] = Str_to_BOOL(check_str[34]);
	pch34->SetCheck(check_b[34]);

	//36
	SOUI::SCheckBox* pch35 = FindChildByName2<SOUI::SCheckBox>(L"check_box35");
	assert(pch35);
	check_str[35] = configname.Read<std::string>("check_box35");
	check_b[35] = Str_to_BOOL(check_str[35]);
	pch35->SetCheck(check_b[35]);

	//37
	SOUI::SCheckBox* pch36 = FindChildByName2<SOUI::SCheckBox>(L"check_box36");
	assert(pch36);
	check_str[36] = configname.Read<std::string>("check_box36");
	check_b[36] = Str_to_BOOL(check_str[36]);
	pch36->SetCheck(check_b[36]);

	//38
	SOUI::SCheckBox* pch37 = FindChildByName2<SOUI::SCheckBox>(L"check_box37");
	assert(pch37);
	check_str[37] = configname.Read<std::string>("check_box37");
	check_b[37] = Str_to_BOOL(check_str[37]);
	pch37->SetCheck(check_b[37]);

	//39
	SOUI::SCheckBox* pch38 = FindChildByName2<SOUI::SCheckBox>(L"check_box38");
	assert(pch38);
	check_str[38] = configname.Read<std::string>("check_box38");
	check_b[38] = Str_to_BOOL(check_str[38]);
	pch38->SetCheck(check_b[38]);

	//40
	SOUI::SCheckBox* pch39 = FindChildByName2<SOUI::SCheckBox>(L"check_box39");
	assert(pch39);
	check_str[39] = configname.Read<std::string>("check_box39");
	check_b[39] = Str_to_BOOL(check_str[39]);
	pch39->SetCheck(check_b[39]);

	//41
	SOUI::SCheckBox* pch40 = FindChildByName2<SOUI::SCheckBox>(L"check_box40");
	assert(pch40);
	check_str[40] = configname.Read<std::string>("check_box40");
	check_b[40] = Str_to_BOOL(check_str[40]);
	pch40->SetCheck(check_b[40]);

	//42
	SOUI::SCheckBox* pch41 = FindChildByName2<SOUI::SCheckBox>(L"check_box41");
	assert(pch41);
	check_str[41] = configname.Read<std::string>("check_box41");
	check_b[41] = Str_to_BOOL(check_str[41]);
	pch41->SetCheck(check_b[41]);

	//43
	SOUI::SCheckBox* pch42 = FindChildByName2<SOUI::SCheckBox>(L"check_box42");
	assert(pch42);
	check_str[42] = configname.Read<std::string>("check_box42");
	check_b[42] = Str_to_BOOL(check_str[42]);
	pch42->SetCheck(check_b[42]);

	//44
	SOUI::SCheckBox* pch43 = FindChildByName2<SOUI::SCheckBox>(L"check_box43");
	assert(pch43);
	check_str[43] = configname.Read<std::string>("check_box43");
	check_b[43] = Str_to_BOOL(check_str[43]);
	pch43->SetCheck(check_b[43]);

	//45
	SOUI::SCheckBox* pch44 = FindChildByName2<SOUI::SCheckBox>(L"check_box44");
	assert(pch44);
	check_str[44] = configname.Read<std::string>("check_box44");
	check_b[44] = Str_to_BOOL(check_str[44]);
	pch44->SetCheck(check_b[44]);

	//46
	SOUI::SCheckBox* pch45 = FindChildByName2<SOUI::SCheckBox>(L"check_box45");
	assert(pch45);
	check_str[45] = configname.Read<std::string>("check_box45");
	check_b[45] = Str_to_BOOL(check_str[45]);
	pch45->SetCheck(check_b[45]);

	//47
	SOUI::SCheckBox* pch46 = FindChildByName2<SOUI::SCheckBox>(L"check_box46");
	assert(pch46);
	check_str[46] = configname.Read<std::string>("check_box46");
	check_b[46] = Str_to_BOOL(check_str[46]);
	pch46->SetCheck(check_b[46]);

	//48
	SOUI::SCheckBox* pch47 = FindChildByName2<SOUI::SCheckBox>(L"check_box47");
	assert(pch47);
	check_str[47] = configname.Read<std::string>("check_box47");
	check_b[47] = Str_to_BOOL(check_str[47]);
	pch47->SetCheck(check_b[47]);

	//49
	SOUI::SCheckBox* pch48 = FindChildByName2<SOUI::SCheckBox>(L"check_box48");
	assert(pch48);
	check_str[48] = configname.Read<std::string>("check_box48");
	check_b[48] = Str_to_BOOL(check_str[48]);
	pch48->SetCheck(check_b[48]);

	//50
	SOUI::SCheckBox* pch49 = FindChildByName2<SOUI::SCheckBox>(L"check_box49");
	assert(pch49);
	check_str[49] = configname.Read<std::string>("check_box49");
	check_b[49] = Str_to_BOOL(check_str[49]);
	pch49->SetCheck(check_b[49]);
	
	//51
	SOUI::SCheckBox* pch50 = FindChildByName2<SOUI::SCheckBox>(L"check_box50");
	assert(pch50);
	check_str[50] = configname.Read<std::string>("check_box50");
	check_b[50] = Str_to_BOOL(check_str[50]);
	pch50->SetCheck(check_b[50]);

	//52
	SOUI::SCheckBox* pch51 = FindChildByName2<SOUI::SCheckBox>(L"check_box51");
	assert(pch51);
	check_str[51] = configname.Read<std::string>("check_box51");
	check_b[51] = Str_to_BOOL(check_str[51]);
	pch51->SetCheck(check_b[51]);

	//53
	SOUI::SCheckBox* pch52 = FindChildByName2<SOUI::SCheckBox>(L"check_box52");
	assert(pch52);
	check_str[52] = configname.Read<std::string>("check_box52");
	check_b[52] = Str_to_BOOL(check_str[52]);
	pch52->SetCheck(check_b[52]);

	//54
	SOUI::SCheckBox* pch53 = FindChildByName2<SOUI::SCheckBox>(L"check_box53");
	assert(pch53);
	check_str[53] = configname.Read<std::string>("check_box53");
	check_b[53] = Str_to_BOOL(check_str[53]);
	pch53->SetCheck(check_b[53]);

	//55
	SOUI::SCheckBox* pch54 = FindChildByName2<SOUI::SCheckBox>(L"check_box54");
	assert(pch54);
	check_str[54] = configname.Read<std::string>("check_box54");
	check_b[54] = Str_to_BOOL(check_str[54]);
	pch54->SetCheck(check_b[54]);

	/*for
	INT nNumber = 0;
	SOUI::SStringW strName;
	strName.Format(L"check_box_%d", nNumber);*/
	/*for (int index = 0; index < 62;index++)
	{
		SOUI::SStringW strName,pCheck;
		strName.Format(L"check_box_%d", index);
		pCheck.Format(L"pCheck_%d", index);
		SOUI::SCheckBox* pCheck = FindChildByName2<SOUI::SCheckBox>(L strName);
		assert(pCheck);
		check_str[index] = configname.Read<std::string>(strName);
		check_b[55] = Str_to_BOOL(check_str[index]);
		pCheck->SetCheck(check_b[index]);
	}*/
	//56
	SOUI::SCheckBox* pch55 = FindChildByName2<SOUI::SCheckBox>(L"check_box55");
	assert(pch55);
	check_str[55] = configname.Read<std::string>("check_box55");
	check_b[55] = Str_to_BOOL(check_str[55]);
	pch55->SetCheck(check_b[55]);

	//57
	SOUI::SCheckBox* pch56 = FindChildByName2<SOUI::SCheckBox>(L"check_box56");
	assert(pch56);
	check_str[56] = configname.Read<std::string>("check_box56");
	check_b[56] = Str_to_BOOL(check_str[56]);
	pch56->SetCheck(check_b[56]);

	//58
	SOUI::SCheckBox* pch57 = FindChildByName2<SOUI::SCheckBox>(L"check_box57");
	assert(pch57);
	check_str[57] = configname.Read<std::string>("check_box57");
	check_b[57] = Str_to_BOOL(check_str[57]);
	pch57->SetCheck(check_b[57]);

	//59
	SOUI::SCheckBox* pch58 = FindChildByName2<SOUI::SCheckBox>(L"check_box58");
	assert(pch58);
	check_str[58] = configname.Read<std::string>("check_box58");
	check_b[58] = Str_to_BOOL(check_str[58]);
	pch58->SetCheck(check_b[58]);

	//60
	SOUI::SCheckBox* pch59 = FindChildByName2<SOUI::SCheckBox>(L"check_box59");
	assert(pch59);
	check_str[59] = configname.Read<std::string>("check_box59");
	check_b[59] = Str_to_BOOL(check_str[59]);
	pch59->SetCheck(check_b[59]);

	//61
	SOUI::SCheckBox* pch60 = FindChildByName2<SOUI::SCheckBox>(L"check_box60");
	assert(pch60);
	check_str[60] = configname.Read<std::string>("check_box60");
	check_b[60] = Str_to_BOOL(check_str[60]);
	pch60->SetCheck(check_b[60]);

	//62
	SOUI::SCheckBox* pch61 = FindChildByName2<SOUI::SCheckBox>(L"check_box61");
	assert(pch61);
	check_str[61] = configname.Read<std::string>("check_box61");
	check_b[61] = Str_to_BOOL(check_str[61]);
	pch61->SetCheck(check_b[61]);

	//
	//SOUI::SSpinButtonCtrl* Pspin0=FindChildByName2<SOUI::SSpinButtonCtrl>(L"spin_btn0");
	//assert(Pspin0);
	//SOUI::SStringW spin_str0 = configname.Read<std::string>("spin_btn0");
	///*int spin_int0 = std::stoi(cbx_str1);*/
	//Pspin0->OnAttrValue(spin_str0,TRUE);
	

	 //获取当前选中 Item 序号

	//INT nCurSel = pComboBox->GetCurSel();
	//SOUI::SStringW strCurSel;
	//strCurSel.Format(L"当前默认选中的是第 %d 个", nCurSel);
	//SOUI::SMessageBox(NULL, strCurSel, L"提示", MB_OK);
	// //设置当前选中 Item 序号为默认选中的下一个
	//pComboBox->SetCurSel(nCurSel + 1);

	/*std::map<string, string> config_;
	ReadInto();*/
	// TODO: 初始化读取配置文件

	//// 初始化勾选 check  另一种绑定方式
	//SOUI::SCheckBox* pTestCheck =
	//	FindChildByName2<SOUI::SCheckBox>(L"check_box0");
	//assert(pTestCheck);
	//pTestCheck->GetEventSet()->subscribeEvent(SOUI::EVT_CMD,
	//	Subscriber(&CMainDlg::OnTestCheck, this));
	//pTestCheck->SetCheck(TRUE);
	//BOOL SS=pTestCheck->GetState();


	// 初始化配置文件
	//const char configFileName[] = "config.ini";
	//Config config(configFileName);
	//// 写入一对值
	//std::string strKey = "name";
	//std::string strValue = "wangying";
	//config.Add(strKey, strValue);
	//// 读取写入的值
	//std::string strOutName;
	//config.ReadInto(strOutName, std::string("name"));
	//// 写入到文件中去
	//std::fstream out(configFileName);
	//out << config;
	//out.close();


	//初始化绑定
	SOUI::SComboBox* pCbx0 =
		FindChildByName2<SOUI::SComboBox>(L"cbx_name0");
	assert(pCbx0 != NULL);
	pCbx0->GetEventSet()->subscribeEvent(SOUI::EVT_CB_SELCHANGE,
		Subscriber(&CMainDlg::Cbx_answer0, this));

	SOUI::SComboBox* pCbx1 =
		FindChildByName2<SOUI::SComboBox>(L"cbx_name1");
	assert(pCbx1 != NULL);
	pCbx1->GetEventSet()->subscribeEvent(SOUI::EVT_CB_SELCHANGE,
		Subscriber(&CMainDlg::Cbx_answer1, this));
	
	SOUI::SComboBox* pCbx2 =
		FindChildByName2<SOUI::SComboBox>(L"cbx_name2");
	assert(pCbx2 != NULL);
	pCbx2->GetEventSet()->subscribeEvent(SOUI::EVT_CB_SELCHANGE,
		Subscriber(&CMainDlg::Cbx_answer2, this));

	SOUI::SComboBox* pCbx3 =
		FindChildByName2<SOUI::SComboBox>(L"cbx_name3");
	assert(pCbx3 != NULL);
	pCbx3->GetEventSet()->subscribeEvent(SOUI::EVT_CB_SELCHANGE,
		Subscriber(&CMainDlg::Cbx_answer3, this));

	SOUI::SComboBox* pCbx4 =
		FindChildByName2<SOUI::SComboBox>(L"cbx_name4");
	assert(pCbx4);
	pCbx4->GetEventSet()->subscribeEvent(SOUI::EVT_CB_SELCHANGE,
		Subscriber(&CMainDlg::Cbx_answer4,this));

	SOUI::SComboBox* pCbx5 =
		FindChildByName2<SOUI::SComboBox>(L"cbx_name5");
	assert(pCbx5);
	pCbx5->GetEventSet()->subscribeEvent(SOUI::EVT_CB_SELCHANGE,
		Subscriber(&CMainDlg::Cbx_answer5, this));

	//对radio的绑定。
	//SOUI::SRadioBox* pRadio0 =
	//	FindChildByName2<SOUI::SRadioBox>(L"radio_n0");
	//assert(pRadio0);
	//pRadio0->GetEventSet()->subscribeEvent(SOUI::EVT_CB_SELCHANGE,
	//	Subscriber(&CMainDlg::Rad_answer0, this));

	return 0;
}
//TODO:消息映射
void CMainDlg::OnClose()
{
	CSimpleWnd::DestroyWindow();
}

void CMainDlg::OnMaximize()
{
	SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE);
}
void CMainDlg::OnRestore()
{
	SendMessage(WM_SYSCOMMAND, SC_RESTORE);
}
void CMainDlg::OnMinimize()
{
	SendMessage(WM_SYSCOMMAND, SC_MINIMIZE);
}

void CMainDlg::OnSize(UINT nType, CSize size)
{
	SetMsgHandled(FALSE);
	if (!m_bLayoutInited) return;
	
	SWindow *pBtnMax = FindChildByName(L"btn_max");
	SWindow *pBtnRestore = FindChildByName(L"btn_restore");
	if(!pBtnMax || !pBtnRestore) return;
	
	if (nType == SIZE_MAXIMIZED)
	{
		pBtnRestore->SetVisible(TRUE);
		pBtnMax->SetVisible(FALSE);
	}
	else if (nType == SIZE_RESTORED)
	{
		pBtnRestore->SetVisible(FALSE);
		pBtnMax->SetVisible(TRUE);
	}
}


//打开文件函数
void CMainDlg::Onbtnopen()
{
	CFileDialogEx openDlg(TRUE, _T("mp4"), 0, OFN_EXPLORER | OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST | OFN_HIDEREADONLY | OFN_ALLOWMULTISELECT, _T("文件(*.mp4)\0*.mp4\0All files (*.*)\0*.*\0\0"));
	if (openDlg.DoModal() == IDOK)
	{
		TCHAR szPath[MAX_PATH];
		TCHAR szFileName[80 * MAX_PATH];

		TCHAR * p;
		int nLen = 0;

		lstrcpyn(szPath, szFileName, openDlg.m_ofn.nFileOffset);

		szPath[openDlg.m_ofn.nFileOffset] = '\0';
		nLen = lstrlen(szPath);

		if (szPath[nLen - 1] != '\\')
		{
			lstrcat(szPath, TEXT("\\"));
		}
		//p = szFile + openDlg.m_ofn.nFileOffset; //把指针移到第一个文件  
		p = szFileName + openDlg.m_ofn.nFileOffset; //把指针移到第一个文件
		int sum = 0;
		while (*p)
		{
			ZeroMemory(szFileName, sizeof(szFileName));
			lstrcat(szFileName, szPath);  //给文件名加上路径    
			lstrcat(szFileName, p);    //加上文件名

			p += lstrlen(p) + 1;     //移至下一个文件  
			sum++;
			//cout<<file_name<<endl ;
			lstrcat(szFileName, TEXT("\n")); //换行
			//STRACE("%s",szFileName);
		}
		printf("%d", sum);
		SMessageBox(NULL, _T("Test file"),_T("Warning"), MB_OK|MB_ICONEXCLAMATION);
	}
}


//将string转换为BOOL
BOOL CMainDlg::Str_to_BOOL(std::string str_st)
{
	if (str_st == "TRUE")
		return TRUE;
	else
		return FALSE;
}
// 测试勾选  响应函数
//bool CMainDlg::OnTestCheck(SOUI::EventArgs* pEvt)
//{
//	SOUI::SCheckBox* pCheckBox =
//		SOUI::sobj_cast<SOUI::SCheckBox>(pEvt->sender);
//	/*SOUI::SCheckBox* pTestCheck =
//		FindChildByName2<SOUI::SCheckBox>(L"check_box0");*/
//	assert(pCheckBox);
//	BOOL bIsChecked = pCheckBox->IsChecked();
//	SOUI::SStringW strMsg;
//	strMsg.Format(L"当前 checkbox 是否被选中：%s",
//		bIsChecked ? L"被选中了" : L"没有被选中");
//	SOUI::SMessageBox(NULL, strMsg, L"提示", MB_OK);
//	return true;
//}


//button按钮的响应

void CMainDlg::Onbtntool_jmglq()
{
	//SMessageBox(NULL, L"请先关闭扫描仪选择窗口", L"错误", MB_OK);
	SMessageBox(NULL, _T("界面管理器"), _T("Warning"), MB_OK | MB_ICONEXCLAMATION);
}
void CMainDlg::Onbtntool_zdhf()
{
	SMessageBox(NULL, _T("自动恢复设置"), _T("Warning"), MB_OK | MB_ICONEXCLAMATION);
}
void CMainDlg::Onbtntool_kjhf()
{
	SMessageBox(NULL, _T("快捷回复设置"), _T("Warning"), MB_OK | MB_ICONEXCLAMATION);
}
void CMainDlg::Onbtntool_dcqp()
{
	SMessageBox(NULL, _T("设置多彩气泡"), _T("Warning"), MB_OK | MB_ICONEXCLAMATION);
}
void CMainDlg::Onbtntool_tj()
{
	SMessageBox(NULL, _T("添加"), _T("Warning"), MB_OK | MB_ICONEXCLAMATION);
}
void CMainDlg::Onbtntool_szrj()
{
	SMessageBox(NULL, _T("设置热键"), _T("Warning"), MB_OK | MB_ICONEXCLAMATION);
}
void CMainDlg::Onbtntool_sztsy()
{
	SMessageBox(NULL, _T("设置提示音"), _T("Warning"), MB_OK | MB_ICONEXCLAMATION);
}
void CMainDlg::Onbtntool_mkfcs()
{
	SMessageBox(NULL, _T("麦克风测试"), _T("Warning"), MB_OK | MB_ICONEXCLAMATION);
}
void CMainDlg::Onbtntool_bfsy()
{
	SMessageBox(NULL, _T("播放声音测试"), _T("Warning"), MB_OK | MB_ICONEXCLAMATION);
}
void CMainDlg::Onbtntool_dkylhm()
{
	SMessageBox(NULL, _T("打开预览画面"), _T("Warning"), MB_OK | MB_ICONEXCLAMATION);
}
void CMainDlg::Onbtntool_hztj()
{
	SMessageBox(NULL, _T("画质调节"), _T("Warning"), MB_OK | MB_ICONEXCLAMATION);
}
void CMainDlg::Onbtntool_qxjzmm()
{
	SMessageBox(NULL, _T("取消记住密码"), _T("Warning"), MB_OK | MB_ICONEXCLAMATION);
}
void CMainDlg::Onbtntool_xgmm()
{
	SMessageBox(NULL, _T("修改密码"), _T("Warning"), MB_OK | MB_ICONEXCLAMATION);
}
void CMainDlg::Onbtntool_sqbhmm()
{
	SMessageBox(NULL, _T("申请密码保护"), _T("Warning"), MB_OK | MB_ICONEXCLAMATION);
}
void CMainDlg::Onbtntool_gldlmm()
{
	SMessageBox(NULL, _T("管理独立密码"), _T("Warning"), MB_OK | MB_ICONEXCLAMATION);
}
void CMainDlg::Onbtntool_gxrj()
{
	SMessageBox(NULL, _T("更新热键"), _T("Warning"), MB_OK | MB_ICONEXCLAMATION);
}
void CMainDlg::Onbtntool_zdsdsz()
{
	SMessageBox(NULL, _T("自动锁定设置"), _T("Warning"), MB_OK | MB_ICONEXCLAMATION);
}
void CMainDlg::Onbtntool_dkxxjl()
{
	SMessageBox(NULL, _T("打开消息管理器"), _T("Warning"), MB_OK | MB_ICONEXCLAMATION);
}
void CMainDlg::Onbtntool_scxxjl()
{
	SMessageBox(NULL, _T("删除消息记录"), _T("Warning"), MB_OK | MB_ICONEXCLAMATION);
}
void CMainDlg::Onbtntool_qxsz()
{
	SMessageBox(NULL, _T("权限设置"), _T("Warning"), MB_OK | MB_ICONEXCLAMATION);
}
void CMainDlg::Onbtntool_pblxrgl()
{
	SMessageBox(NULL, _T("屏蔽联系人管理"), _T("Warning"), MB_OK | MB_ICONEXCLAMATION);
}
void CMainDlg::Onbtntool_pbhhgl()
{
	SMessageBox(NULL, _T("屏蔽会话管理"), _T("Warning"), MB_OK | MB_ICONEXCLAMATION);
}




//在操作过程中根据状态值的改变做一个记录   写入操作

const char Config_filename [] = "config.ini";
Config config_name(Config_filename);
//config.Add(strKey, strValue);
//// 读取写入的值
//std::fstream out(configFileName);
//out << config;
//out.close();

std::string CMainDlg::Bo_to_str(BOOL btos)
{
	if (btos==5)
	{
		return "TRUE";
	} 
	else
	{
		return "FALSE";
	}
}



//下面六个函数comboBox的响应函数（文件写操作）

bool CMainDlg::Cbx_answer0(SOUI::EventArgs* pEvt0)
{
	SOUI::SComboBox* pcbx_answer0 = SOUI::sobj_cast<SOUI::SComboBox>(pEvt0->sender);//新的绑定方式
	assert(pcbx_answer0 != NULL);
	INT Icbx_cursel0 = pcbx_answer0->GetCurSel();
	config_name.Add("cbx_name0",Icbx_cursel0);
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
	SOUI::SStringW strMsg;
	strMsg.Format(L"您选中了第 %d 个", Icbx_cursel0+1);
	SMessageBox(NULL, strMsg, _T("Warning"), MB_OK);
	return true;
}


bool CMainDlg::Cbx_answer1(SOUI::EventArgs* pEvt1)
{
	SOUI::SComboBox* pcbx_answer1 = SOUI::sobj_cast<SOUI::SComboBox>(pEvt1->sender);//新的绑定方式
	assert(pcbx_answer1 != NULL);
	INT Icbx_cursel1= pcbx_answer1->GetCurSel();
	config_name.Add("cbx_name1", Icbx_cursel1);
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
	SOUI::SStringW strMsg;
	strMsg.Format(L"您选中了第 %d 个", Icbx_cursel1 + 1);
	SMessageBox(NULL, strMsg, _T("Warning"), MB_OK);
	return true;
}
bool CMainDlg::Cbx_answer2(SOUI::EventArgs* pEvt2)
{
	SOUI::SComboBox* pcbx_answer2 = SOUI::sobj_cast<SOUI::SComboBox>(pEvt2->sender);//新的绑定方式
	assert(pcbx_answer2 != NULL);
	INT Icbx_cursel2 = pcbx_answer2->GetCurSel();
	config_name.Add("cbx_name2", Icbx_cursel2);
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
	SOUI::SStringW strMsg;
	strMsg.Format(L"您选中了第 %d 个", Icbx_cursel2 + 1);
	SMessageBox(NULL, strMsg, _T("Warning"), MB_OK);
	return true;
}

bool CMainDlg::Cbx_answer3(SOUI::EventArgs* pEvt3)
{
	SOUI::SComboBox* pcbx_answer3 = SOUI::sobj_cast<SOUI::SComboBox>(pEvt3->sender);//新的绑定方式
	assert(pcbx_answer3 != NULL);
	INT Icbx_cursel3 = pcbx_answer3->GetCurSel();
	config_name.Add("cbx_name3", Icbx_cursel3);
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
	SOUI::SStringW strMsg;
	strMsg.Format(L"您选中了第 %d 个", Icbx_cursel3 + 1);
	SMessageBox(NULL, strMsg, _T("Warning"), MB_OK);
	return true;
}

bool CMainDlg::Cbx_answer4(SOUI::EventArgs* pEvt4)
{
	SOUI::SComboBox* pcbx_answer4 = SOUI::sobj_cast<SOUI::SComboBox>(pEvt4->sender);//新的绑定方式
	assert(pcbx_answer4 != NULL);
	INT Icbx_cursel4 = pcbx_answer4->GetCurSel();
	config_name.Add("cbx_name4", Icbx_cursel4);
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
	SOUI::SStringW strMsg;
	strMsg.Format(L"您选中了第 %d 个", Icbx_cursel4 + 1);
	SMessageBox(NULL, strMsg, _T("Warning"), MB_OK);
	return true;
}

bool CMainDlg::Cbx_answer5(SOUI::EventArgs* pEvt5)
{
	SOUI::SComboBox* pcbx_answer5 = SOUI::sobj_cast<SOUI::SComboBox>(pEvt5->sender);//新的绑定方式
	assert(pcbx_answer5 != NULL);
	INT Icbx_cursel5 = pcbx_answer5->GetCurSel();
	config_name.Add("cbx_name5", Icbx_cursel5);
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
	SOUI::SStringW strMsg;
	strMsg.Format(L"您选中了第 %d 个", Icbx_cursel5 + 1);
	SMessageBox(NULL, strMsg, _T("提示"), MB_OK);
	return true;
}

//radio的响应函数  文件写操作

void CMainDlg::Rad_answer0()
{
	SOUI::SRadioBox* pRad_answer0 = FindChildByName2<SOUI::SRadioBox>(L"radio_n0");
	assert(pRad_answer0);
	SOUI::SRadioBox* pRad_answer1 = FindChildByName2<SOUI::SRadioBox>(L"radio_n1");
	assert(pRad_answer1);
	config_name.Add("radio_n0", Bo_to_str(pRad_answer0->GetState()));
	config_name.Add("radio_n1", Bo_to_str(pRad_answer1->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}

void CMainDlg::Rad_answer1()
{
	SOUI::SRadioBox* pRad_answer2=FindChildByName2<SOUI::SRadioBox>(L"radio_n2");
	assert(pRad_answer2);
	SOUI::SRadioBox* pRad_answer3=FindChildByName2<SOUI::SRadioBox>(L"radio_n3");
	assert(pRad_answer3);
	config_name.Add("radio_n2",Bo_to_str(pRad_answer2->GetState()));
	config_name.Add("radio_n3",Bo_to_str(pRad_answer3->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}

void CMainDlg::Rad_answer2()
{
	SOUI::SRadioBox* pRad_answer4=FindChildByName2<SOUI::SRadioBox>(L"radio_n4");
	assert(pRad_answer4);
	SOUI::SRadioBox* pRad_answer5=FindChildByName2<SOUI::SRadioBox>(L"radio_n5");
	assert(pRad_answer5);
	SOUI::SRadioBox* pRad_answer6=FindChildByName2<SOUI::SRadioBox>(L"radio_n6");
	assert(pRad_answer6);
	config_name.Add("radio_n4",Bo_to_str(pRad_answer4->GetState()));
	config_name.Add("radio_n5",Bo_to_str(pRad_answer5->GetState()));
	config_name.Add("radio_n6",Bo_to_str(pRad_answer6->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Rad_answer3()
{
	SOUI::SRadioBox* pRad_answer7=FindChildByName2<SOUI::SRadioBox>(L"radio_n7");
	assert(pRad_answer7);
	SOUI::SRadioBox* pRad_answer8=FindChildByName2<SOUI::SRadioBox>(L"radio_n8");
	assert(pRad_answer8);
	config_name.Add("radio_n7",Bo_to_str(pRad_answer7->GetState()));
	config_name.Add("radio_n8",Bo_to_str(pRad_answer8->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Rad_answer4()
{
	SOUI::SRadioBox* pRad_answer9=FindChildByName2<SOUI::SRadioBox>(L"radio_n9");
	assert(pRad_answer9);
	SOUI::SRadioBox* pRad_answer10=FindChildByName2<SOUI::SRadioBox>(L"radio_n10");
	assert(pRad_answer10);
	SOUI::SRadioBox* pRad_answer11=FindChildByName2<SOUI::SRadioBox>(L"radio_n11");
	assert(pRad_answer11);
	config_name.Add("radio_n9",Bo_to_str(pRad_answer9->GetState()));
	config_name.Add("radio_n10",Bo_to_str(pRad_answer10->GetState()));
	config_name.Add("radio_n11",Bo_to_str(pRad_answer11->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Rad_answer5()
{
	SOUI::SRadioBox* pRad_answer12=FindChildByName2<SOUI::SRadioBox>(L"radio_n12");
	assert(pRad_answer12);
	SOUI::SRadioBox* pRad_answer13=FindChildByName2<SOUI::SRadioBox>(L"radio_n13");
	assert(pRad_answer13);
	SOUI::SRadioBox* pRad_answer14=FindChildByName2<SOUI::SRadioBox>(L"radio_n14");
	assert(pRad_answer14);
	config_name.Add("radio_n12",Bo_to_str(pRad_answer12->GetState()));
	config_name.Add("radio_n13",Bo_to_str(pRad_answer13->GetState()));
	config_name.Add("radio_n14",Bo_to_str(pRad_answer14->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Rad_answer6()
{
	SOUI::SRadioBox* pRad_answer15=FindChildByName2<SOUI::SRadioBox>(L"radio_n15");
	assert(pRad_answer15);
	SOUI::SRadioBox* pRad_answer16=FindChildByName2<SOUI::SRadioBox>(L"radio_n16");
	assert(pRad_answer16);
	config_name.Add("radio_n15",Bo_to_str(pRad_answer15->GetState()));
	config_name.Add("radio_n16",Bo_to_str(pRad_answer16->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Rad_answer7()
{
	SOUI::SRadioBox* pRad_answer17=FindChildByName2<SOUI::SRadioBox>(L"radio_n17");
	assert(pRad_answer17);
	SOUI::SRadioBox* pRad_answer18=FindChildByName2<SOUI::SRadioBox>(L"radio_n18");
	assert(pRad_answer18);
	config_name.Add("radio_n17",Bo_to_str(pRad_answer17->GetState()));
	config_name.Add("radio_n18",Bo_to_str(pRad_answer18->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Rad_answer8()
{
	SOUI::SRadioBox* pRad_answer19=FindChildByName2<SOUI::SRadioBox>(L"radio_n19");
	assert(pRad_answer19);
	SOUI::SRadioBox* pRad_answer20=FindChildByName2<SOUI::SRadioBox>(L"radio_n20");
	assert(pRad_answer20);
	config_name.Add("radio_n19",Bo_to_str(pRad_answer19->GetState()));
	config_name.Add("radio_n20",Bo_to_str(pRad_answer20->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Rad_answer9()
{
	SOUI::SRadioBox* pRad_answer21=FindChildByName2<SOUI::SRadioBox>(L"radio_n21");
	assert(pRad_answer21);
	SOUI::SRadioBox* pRad_answer22=FindChildByName2<SOUI::SRadioBox>(L"radio_n22");
	assert(pRad_answer22);
	SOUI::SRadioBox* pRad_answer23=FindChildByName2<SOUI::SRadioBox>(L"radio_n23");
	assert(pRad_answer23);
	config_name.Add("radio_n21",Bo_to_str(pRad_answer21->GetState()));
	config_name.Add("radio_n22",Bo_to_str(pRad_answer22->GetState()));
	config_name.Add("radio_n23",Bo_to_str(pRad_answer23->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Rad_answer10()
{
	SOUI::SRadioBox* pRad_answer24=FindChildByName2<SOUI::SRadioBox>(L"radio_n24");
	assert(pRad_answer24);
	SOUI::SRadioBox* pRad_answer25=FindChildByName2<SOUI::SRadioBox>(L"radio_n25");
	assert(pRad_answer25);
	SOUI::SRadioBox* pRad_answer26=FindChildByName2<SOUI::SRadioBox>(L"radio_n26");
	assert(pRad_answer26);
	SOUI::SRadioBox* pRad_answer27=FindChildByName2<SOUI::SRadioBox>(L"radio_n27");
	assert(pRad_answer27);
	config_name.Add("radio_n24",Bo_to_str(pRad_answer24->GetState()));
	config_name.Add("radio_n25",Bo_to_str(pRad_answer25->GetState()));
	config_name.Add("radio_n26",Bo_to_str(pRad_answer26->GetState()));
	config_name.Add("radio_n27",Bo_to_str(pRad_answer27->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}


//CheckBox的响应函数  类似（文件写入）
void CMainDlg::Check_answer0()
{
	SOUI::SCheckBox* pCheck_answer0 = FindChildByName2<SOUI::SCheckBox>(L"check_box0");
	assert(pCheck_answer0);
	config_name.Add("check_box0", Bo_to_str(pCheck_answer0->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer1()
{
	SOUI::SCheckBox* pCheck_answer1 = FindChildByName2<SOUI::SCheckBox>(L"check_box1");
	assert(pCheck_answer1);
	config_name.Add("check_box1", Bo_to_str(pCheck_answer1->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer2()
{
	SOUI::SCheckBox* pCheck_answer2 = FindChildByName2<SOUI::SCheckBox>(L"check_box2");
	assert(pCheck_answer2);
	config_name.Add("check_box2", Bo_to_str(pCheck_answer2->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer3()
{
	SOUI::SCheckBox* pCheck_answer3 = FindChildByName2<SOUI::SCheckBox>(L"check_box3");
	assert(pCheck_answer3);
	config_name.Add("check_box3", Bo_to_str(pCheck_answer3->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer4()
{
	SOUI::SCheckBox* pCheck_answer4 = FindChildByName2<SOUI::SCheckBox>(L"check_box4");
	assert(pCheck_answer4);
	config_name.Add("check_box4", Bo_to_str(pCheck_answer4->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer5()
{
	SOUI::SCheckBox* pCheck_answer5 = FindChildByName2<SOUI::SCheckBox>(L"check_box5");
	assert(pCheck_answer5);
	config_name.Add("check_box5", Bo_to_str(pCheck_answer5->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer6()
{
	SOUI::SCheckBox* pCheck_answer6 = FindChildByName2<SOUI::SCheckBox>(L"check_box6");
	assert(pCheck_answer6);
	config_name.Add("check_box6", Bo_to_str(pCheck_answer6->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer7()
{
	SOUI::SCheckBox* pCheck_answer7 = FindChildByName2<SOUI::SCheckBox>(L"check_box7");
	assert(pCheck_answer7);
	config_name.Add("check_box7", Bo_to_str(pCheck_answer7->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer8()
{
	SOUI::SCheckBox* pCheck_answer8 = FindChildByName2<SOUI::SCheckBox>(L"check_box8");
	assert(pCheck_answer8);
	config_name.Add("check_box8", Bo_to_str(pCheck_answer8->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer9()
{
	SOUI::SCheckBox* pCheck_answer9 = FindChildByName2<SOUI::SCheckBox>(L"check_box9");
	assert(pCheck_answer9);
	config_name.Add("check_box9", Bo_to_str(pCheck_answer9->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer10()
{
	SOUI::SCheckBox* pCheck_answer10 = FindChildByName2<SOUI::SCheckBox>(L"check_box10");
	assert(pCheck_answer10);
	config_name.Add("check_box10", Bo_to_str(pCheck_answer10->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer11()
{
	SOUI::SCheckBox* pCheck_answer11 = FindChildByName2<SOUI::SCheckBox>(L"check_box11");
	assert(pCheck_answer11);
	config_name.Add("check_box11", Bo_to_str(pCheck_answer11->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer12()
{
	SOUI::SCheckBox* pCheck_answer12 = FindChildByName2<SOUI::SCheckBox>(L"check_box12");
	assert(pCheck_answer12);
	config_name.Add("check_box12", Bo_to_str(pCheck_answer12->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer13()
{
	SOUI::SCheckBox* pCheck_answer13 = FindChildByName2<SOUI::SCheckBox>(L"check_box13");
	assert(pCheck_answer13);
	config_name.Add("check_box13", Bo_to_str(pCheck_answer13->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer14()
{
	SOUI::SCheckBox* pCheck_answer14 = FindChildByName2<SOUI::SCheckBox>(L"check_box14");
	assert(pCheck_answer14);
	config_name.Add("check_box14", Bo_to_str(pCheck_answer14->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer15()
{
	SOUI::SCheckBox* pCheck_answer15 = FindChildByName2<SOUI::SCheckBox>(L"check_box15");
	assert(pCheck_answer15);
	config_name.Add("check_box15", Bo_to_str(pCheck_answer15->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer16()
{
	SOUI::SCheckBox* pCheck_answer16 = FindChildByName2<SOUI::SCheckBox>(L"check_box16");
	assert(pCheck_answer16);
	config_name.Add("check_box16", Bo_to_str(pCheck_answer16->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer17()
{
	SOUI::SCheckBox* pCheck_answer17 = FindChildByName2<SOUI::SCheckBox>(L"check_box17");
	assert(pCheck_answer17);
	config_name.Add("check_box17", Bo_to_str(pCheck_answer17->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer18()
{
	SOUI::SCheckBox* pCheck_answer18 = FindChildByName2<SOUI::SCheckBox>(L"check_box18");
	assert(pCheck_answer18);
	config_name.Add("check_box18", Bo_to_str(pCheck_answer18->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer19()
{
	SOUI::SCheckBox* pCheck_answer19 = FindChildByName2<SOUI::SCheckBox>(L"check_box19");
	assert(pCheck_answer19);
	config_name.Add("check_box19", Bo_to_str(pCheck_answer19->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer20()
{
	SOUI::SCheckBox* pCheck_answer20 = FindChildByName2<SOUI::SCheckBox>(L"check_box20");
	assert(pCheck_answer20);
	config_name.Add("check_box20", Bo_to_str(pCheck_answer20->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer21()
{
	SOUI::SCheckBox* pCheck_answer21 = FindChildByName2<SOUI::SCheckBox>(L"check_box21");
	assert(pCheck_answer21);
	config_name.Add("check_box21", Bo_to_str(pCheck_answer21->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer22()
{
	SOUI::SCheckBox* pCheck_answer22 = FindChildByName2<SOUI::SCheckBox>(L"check_box22");
	assert(pCheck_answer22);
	config_name.Add("check_box22", Bo_to_str(pCheck_answer22->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer23()
{
	SOUI::SCheckBox* pCheck_answer23 = FindChildByName2<SOUI::SCheckBox>(L"check_box23");
	assert(pCheck_answer23);
	config_name.Add("check_box23", Bo_to_str(pCheck_answer23->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer24()
{
	SOUI::SCheckBox* pCheck_answer24 = FindChildByName2<SOUI::SCheckBox>(L"check_box24");
	assert(pCheck_answer24);
	config_name.Add("check_box24", Bo_to_str(pCheck_answer24->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer25()
{
	SOUI::SCheckBox* pCheck_answer25 = FindChildByName2<SOUI::SCheckBox>(L"check_box25");
	assert(pCheck_answer25);
	config_name.Add("check_box25", Bo_to_str(pCheck_answer25->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer26()
{
	SOUI::SCheckBox* pCheck_answer26 = FindChildByName2<SOUI::SCheckBox>(L"check_box26");
	assert(pCheck_answer26);
	config_name.Add("check_box26", Bo_to_str(pCheck_answer26->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer27()
{
	SOUI::SCheckBox* pCheck_answer27 = FindChildByName2<SOUI::SCheckBox>(L"check_box27");
	assert(pCheck_answer27);
	config_name.Add("check_box27", Bo_to_str(pCheck_answer27->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer28()
{
	SOUI::SCheckBox* pCheck_answer28 = FindChildByName2<SOUI::SCheckBox>(L"check_box28");
	assert(pCheck_answer28);
	config_name.Add("check_box28", Bo_to_str(pCheck_answer28->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer29()
{
	SOUI::SCheckBox* pCheck_answer29 = FindChildByName2<SOUI::SCheckBox>(L"check_box29");
	assert(pCheck_answer29);
	config_name.Add("check_box29", Bo_to_str(pCheck_answer29->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer30()
{
	SOUI::SCheckBox* pCheck_answer30 = FindChildByName2<SOUI::SCheckBox>(L"check_box30");
	assert(pCheck_answer30);
	config_name.Add("check_box30", Bo_to_str(pCheck_answer30->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer31()
{
	SOUI::SCheckBox* pCheck_answer31 = FindChildByName2<SOUI::SCheckBox>(L"check_box31");
	assert(pCheck_answer31);
	config_name.Add("check_box31", Bo_to_str(pCheck_answer31->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer32()
{
	SOUI::SCheckBox* pCheck_answer32 = FindChildByName2<SOUI::SCheckBox>(L"check_box32");
	assert(pCheck_answer32);
	config_name.Add("check_box32", Bo_to_str(pCheck_answer32->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer33()
{
	SOUI::SCheckBox* pCheck_answer33 = FindChildByName2<SOUI::SCheckBox>(L"check_box33");
	assert(pCheck_answer33);
	config_name.Add("check_box33", Bo_to_str(pCheck_answer33->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer34()
{
	SOUI::SCheckBox* pCheck_answer34 = FindChildByName2<SOUI::SCheckBox>(L"check_box34");
	assert(pCheck_answer34);
	config_name.Add("check_box34", Bo_to_str(pCheck_answer34->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer35()
{
	SOUI::SCheckBox* pCheck_answer35 = FindChildByName2<SOUI::SCheckBox>(L"check_box35");
	assert(pCheck_answer35);
	config_name.Add("check_box35", Bo_to_str(pCheck_answer35->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer36()
{
	SOUI::SCheckBox* pCheck_answer36 = FindChildByName2<SOUI::SCheckBox>(L"check_box36");
	assert(pCheck_answer36);
	config_name.Add("check_box36", Bo_to_str(pCheck_answer36->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer37()
{
	SOUI::SCheckBox* pCheck_answer37 = FindChildByName2<SOUI::SCheckBox>(L"check_box37");
	assert(pCheck_answer37);
	config_name.Add("check_box37", Bo_to_str(pCheck_answer37->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer38()
{
	SOUI::SCheckBox* pCheck_answer38 = FindChildByName2<SOUI::SCheckBox>(L"check_box38");
	assert(pCheck_answer38);
	config_name.Add("check_box38", Bo_to_str(pCheck_answer38->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer39()
{
	SOUI::SCheckBox* pCheck_answer39 = FindChildByName2<SOUI::SCheckBox>(L"check_box39");
	assert(pCheck_answer39);
	config_name.Add("check_box39", Bo_to_str(pCheck_answer39->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer40()
{
	SOUI::SCheckBox* pCheck_answer40 = FindChildByName2<SOUI::SCheckBox>(L"check_box40");
	assert(pCheck_answer40);
	config_name.Add("check_box40", Bo_to_str(pCheck_answer40->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer41()
{
	SOUI::SCheckBox* pCheck_answer41 = FindChildByName2<SOUI::SCheckBox>(L"check_box41");
	assert(pCheck_answer41);
	config_name.Add("check_box41", Bo_to_str(pCheck_answer41->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer42()
{
	SOUI::SCheckBox* pCheck_answer42 = FindChildByName2<SOUI::SCheckBox>(L"check_box42");
	assert(pCheck_answer42);
	config_name.Add("check_box42", Bo_to_str(pCheck_answer42->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer43()
{
	SOUI::SCheckBox* pCheck_answer43 = FindChildByName2<SOUI::SCheckBox>(L"check_box43");
	assert(pCheck_answer43);
	config_name.Add("check_box43", Bo_to_str(pCheck_answer43->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer44()
{
	SOUI::SCheckBox* pCheck_answer44 = FindChildByName2<SOUI::SCheckBox>(L"check_box44");
	assert(pCheck_answer44);
	config_name.Add("check_box44", Bo_to_str(pCheck_answer44->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer45()
{
	SOUI::SCheckBox* pCheck_answer45 = FindChildByName2<SOUI::SCheckBox>(L"check_box45");
	assert(pCheck_answer45);
	config_name.Add("check_box45", Bo_to_str(pCheck_answer45->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer46()
{
	SOUI::SCheckBox* pCheck_answer46 = FindChildByName2<SOUI::SCheckBox>(L"check_box46");
	assert(pCheck_answer46);
	config_name.Add("check_box46", Bo_to_str(pCheck_answer46->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer47()
{
	SOUI::SCheckBox* pCheck_answer47 = FindChildByName2<SOUI::SCheckBox>(L"check_box47");
	assert(pCheck_answer47);
	config_name.Add("check_box47", Bo_to_str(pCheck_answer47->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer48()
{
	SOUI::SCheckBox* pCheck_answer48 = FindChildByName2<SOUI::SCheckBox>(L"check_box48");
	assert(pCheck_answer48);
	config_name.Add("check_box48", Bo_to_str(pCheck_answer48->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer49()
{
	SOUI::SCheckBox* pCheck_answer49 = FindChildByName2<SOUI::SCheckBox>(L"check_box49");
	assert(pCheck_answer49);
	config_name.Add("check_box49", Bo_to_str(pCheck_answer49->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer50()
{
	SOUI::SCheckBox* pCheck_answer50 = FindChildByName2<SOUI::SCheckBox>(L"check_box50");
	assert(pCheck_answer50);
	config_name.Add("check_box50", Bo_to_str(pCheck_answer50->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer51()
{
	SOUI::SCheckBox* pCheck_answer51 = FindChildByName2<SOUI::SCheckBox>(L"check_box51");
	assert(pCheck_answer51);
	config_name.Add("check_box51", Bo_to_str(pCheck_answer51->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer52()
{
	SOUI::SCheckBox* pCheck_answer52 = FindChildByName2<SOUI::SCheckBox>(L"check_box52");
	assert(pCheck_answer52);
	config_name.Add("check_box52", Bo_to_str(pCheck_answer52->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer53()
{
	SOUI::SCheckBox* pCheck_answer53 = FindChildByName2<SOUI::SCheckBox>(L"check_box53");
	assert(pCheck_answer53);
	config_name.Add("check_box53", Bo_to_str(pCheck_answer53->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer54()
{
	SOUI::SCheckBox* pCheck_answer54 = FindChildByName2<SOUI::SCheckBox>(L"check_box54");
	assert(pCheck_answer54);
	config_name.Add("check_box54", Bo_to_str(pCheck_answer54->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer55()
{
	SOUI::SCheckBox* pCheck_answer55 = FindChildByName2<SOUI::SCheckBox>(L"check_box55");
	assert(pCheck_answer55);
	config_name.Add("check_box55", Bo_to_str(pCheck_answer55->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer56()
{
	SOUI::SCheckBox* pCheck_answer56 = FindChildByName2<SOUI::SCheckBox>(L"check_box56");
	assert(pCheck_answer56);
	config_name.Add("check_box56", Bo_to_str(pCheck_answer56->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer57()
{
	SOUI::SCheckBox* pCheck_answer57 = FindChildByName2<SOUI::SCheckBox>(L"check_box57");
	assert(pCheck_answer57);
	config_name.Add("check_box57", Bo_to_str(pCheck_answer57->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer58()
{
	SOUI::SCheckBox* pCheck_answer58 = FindChildByName2<SOUI::SCheckBox>(L"check_box58");
	assert(pCheck_answer58);
	config_name.Add("check_box58", Bo_to_str(pCheck_answer58->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer59()
{
	SOUI::SCheckBox* pCheck_answer59 = FindChildByName2<SOUI::SCheckBox>(L"check_box59");
	assert(pCheck_answer59);
	config_name.Add("check_box59", Bo_to_str(pCheck_answer59->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer60()
{
	SOUI::SCheckBox* pCheck_answer60 = FindChildByName2<SOUI::SCheckBox>(L"check_box60");
	assert(pCheck_answer60);
	config_name.Add("check_box60", Bo_to_str(pCheck_answer60->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}
void CMainDlg::Check_answer61()
{
	SOUI::SCheckBox* pCheck_answer61 = FindChildByName2<SOUI::SCheckBox>(L"check_box61");
	assert(pCheck_answer61);
	config_name.Add("check_box61", Bo_to_str(pCheck_answer61->GetState()));
	std::fstream out(Config_filename);
	out << config_name;
	out.close();
}