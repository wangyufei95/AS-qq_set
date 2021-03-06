// MainDlg.h : interface of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////
#pragma once


#include <commdlg.h>
/**
* BuildFilePath
* @brief    递归创建子目录
* @param    LPCTSTR pszCurPath --  创建路径的起始位置
* @param    LPCTSTR pszNewPath --  新路径
* @param    BOOL bPath --  pszNewPath是一个路径标识
* @return   BOOL -- true创建成功
* Describe  pszNewPath指向一个文件名时，只创建文件路径部分
*/
inline BOOL BuildFilePath(LPCTSTR pszCurPath, LPCTSTR pszNewPath, BOOL bPath = TRUE)
{
	TCHAR szCurDir[MAX_PATH + 1];
	GetCurrentDirectory(MAX_PATH, szCurDir);
	if (!SetCurrentDirectory(pszCurPath)) return FALSE;
	TCHAR szNewPath[MAX_PATH + 1];
	_tcscpy_s(szNewPath, _countof(szNewPath), pszNewPath);
	if (bPath)
	{
		int nLen = _tcslen(szNewPath);
		if (szNewPath[nLen - 1] != _T('\\'))
			_tcscat(szNewPath, _T("\\"));
	}
	LPTSTR pszPath = _tcschr(szNewPath, _T('\\'));
	while (pszPath)
	{
		*pszPath = 0;
		if (!CreateDirectory(szNewPath, NULL)) return FALSE;
		*pszPath = _T('\\');
		pszPath = _tcschr(pszPath + 1, _T('\\'));
	}
	SetCurrentDirectory(szCurDir);
	return TRUE;
}

class CFileDialogEx
{
public:

	OPENFILENAME m_ofn;
	BOOL m_bOpenFileDialog;            // TRUE for file open, FALSE for file save
	TCHAR m_szFileTitle[_MAX_FNAME];   // contains file title after return
	TCHAR m_szFileName[_MAX_PATH];     // contains full path name after return

	CFileDialogEx(BOOL bOpenFileDialog,LPCTSTR lpszDefExt = NULL,LPCTSTR lpszFileName = NULL,
		DWORD dwFlags = OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT,LPCTSTR lpszFilter = NULL,HWND hWndParent = NULL)
	{
		memset(&m_ofn, 0, sizeof(m_ofn)); // initialize structure to 0/NULL
		m_szFileName[0] = _T('\0');
		m_szFileTitle[0] = _T('\0');

		m_bOpenFileDialog = bOpenFileDialog;
		m_ofn.lStructSize = sizeof(m_ofn);
		m_ofn.lpstrFile = m_szFileName;
		m_ofn.nMaxFile = _MAX_PATH;
		m_ofn.lpstrDefExt = lpszDefExt;
		m_ofn.lpstrFileTitle = (LPTSTR)m_szFileTitle;
		m_ofn.nMaxFileTitle = _MAX_FNAME;
		m_ofn.Flags = dwFlags | OFN_EXPLORER | OFN_ENABLEHOOK | OFN_ENABLESIZING | OFN_NOCHANGEDIR;
		m_ofn.lpstrFilter = lpszFilter;
		m_ofn.hwndOwner = hWndParent;

		// setup initial file name
		if (lpszFileName != NULL)
			_tcscpy_s(m_szFileName, _countof(m_szFileName), lpszFileName);
	}

	INT_PTR DoModal(HWND hWndParent = ::GetActiveWindow())
	{
		if (m_ofn.hwndOwner == NULL)   // set only if not specified before
			m_ofn.hwndOwner = hWndParent;

		if (m_bOpenFileDialog)
			return ::GetOpenFileName(&m_ofn);
		else
			return ::GetSaveFileName(&m_ofn);
	}
};


class CMainDlg : public SHostWnd
{
public:
	CMainDlg();
	~CMainDlg();

	void OnClose();
	void OnMaximize();
	void OnRestore();
	void OnMinimize();
	void OnSize(UINT nType, CSize size);

	void Onbtnopen();
	void Onbtntool_jmglq();
	void Onbtntool_zdhf();
	void Onbtntool_kjhf();
	void Onbtntool_dcqp();
	void Onbtntool_tj();
	void Onbtntool_szrj();
	void Onbtntool_sztsy();
	void Onbtntool_mkfcs();
	void Onbtntool_bfsy();
	void Onbtntool_dkylhm();
	void Onbtntool_hztj();
	void Onbtntool_qxjzmm();
	void Onbtntool_xgmm();
	void Onbtntool_sqbhmm();
	void Onbtntool_gldlmm();
	void Onbtntool_gxrj();
	void Onbtntool_zdsdsz();
	void Onbtntool_dkxxjl();
	void Onbtntool_scxxjl();
	void Onbtntool_qxsz();
	void Onbtntool_pblxrgl();
	void Onbtntool_pbhhgl();
	BOOL Str_to_BOOL(std::string str_st);
	std::string Bo_to_str(BOOL btos);


	//对ComboBox操作，将状态值保存到本地。（写操作）

	bool Cbx_answer0(SOUI::EventArgs* pEvt0);
	bool Cbx_answer1(SOUI::EventArgs* pEvt1);
	bool Cbx_answer2(SOUI::EventArgs* pEvt2);
	bool Cbx_answer3(SOUI::EventArgs* pEvt3);
	bool Cbx_answer4(SOUI::EventArgs* pEvt4);
	bool Cbx_answer5(SOUI::EventArgs* pEvt5);


	//对radio操作，将状态值保存到本地（写操作）
	void Rad_answer0();
	void Rad_answer1();
	void Rad_answer2();
	void Rad_answer3();
	void Rad_answer4();
	void Rad_answer5();
	void Rad_answer6();
	void Rad_answer7();
	void Rad_answer8();
	void Rad_answer9();
	void Rad_answer10();


	//对checkbox操作，将状态值保存到本地（写操作）
	void Check_answer0();
	void Check_answer1();
	void Check_answer2();
	void Check_answer3();
	void Check_answer4();
	void Check_answer5();
	void Check_answer6();
	void Check_answer7();
	void Check_answer8();
	void Check_answer9();
	void Check_answer10();
	void Check_answer11();
	void Check_answer12();
	void Check_answer13();
	void Check_answer14();
	void Check_answer15();
	void Check_answer16();
	void Check_answer17();
	void Check_answer18();
	void Check_answer19();
	void Check_answer20();
	void Check_answer21();
	void Check_answer22();
	void Check_answer23();
	void Check_answer24();
	void Check_answer25();
	void Check_answer26();
	void Check_answer27();
	void Check_answer28();
	void Check_answer29();
	void Check_answer30();
	void Check_answer31();
	void Check_answer32();
	void Check_answer33();
	void Check_answer34();
	void Check_answer35();
	void Check_answer36();
	void Check_answer37();
	void Check_answer38();
	void Check_answer39();
	void Check_answer40();
	void Check_answer41();
	void Check_answer42();
	void Check_answer43();
	void Check_answer44();
	void Check_answer45();
	void Check_answer46();
	void Check_answer47();
	void Check_answer48();
	void Check_answer49();
	void Check_answer50();
	void Check_answer51();
	void Check_answer52();
	void Check_answer53();
	void Check_answer54();
	void Check_answer55();
	void Check_answer56();
	void Check_answer57();
	void Check_answer58();
	void Check_answer59();
	void Check_answer60();
	void Check_answer61();

	/*void Spin_btn_answer0();
	void Spin_btn_answer1();*/

	
	void OnBtnMsgBox();
		int OnCreate(LPCREATESTRUCT lpCreateStruct);
	BOOL OnInitDialog(HWND wndFocus, LPARAM lInitParam);
	// 测试勾选
	// bool OnTestCheck(SOUI::EventArgs* pEvt);


protected:
		//soui消息
	EVENT_MAP_BEGIN()
		EVENT_NAME_COMMAND(L"btn_close", OnClose)
		EVENT_NAME_COMMAND(L"btn_min", OnMinimize)
		EVENT_NAME_COMMAND(L"btn_max", OnMaximize)
		EVENT_NAME_COMMAND(L"btn_restore", OnRestore)


		EVENT_NAME_COMMAND(L"btn_open_file", Onbtnopen)
		EVENT_NAME_COMMAND(L"btn_person", Onbtnopen)
		EVENT_NAME_COMMAND(L"btn_save_ml", Onbtnopen)
		EVENT_NAME_COMMAND(L"btn_save_ml1", Onbtnopen)
		EVENT_NAME_COMMAND(L"btn_name0", Onbtntool_jmglq)
		EVENT_NAME_COMMAND(L"btn_name1", Onbtntool_zdhf)
		EVENT_NAME_COMMAND(L"btn_name2", Onbtntool_kjhf)
		EVENT_NAME_COMMAND(L"btn_name3", Onbtntool_dcqp)
		EVENT_NAME_COMMAND(L"btn_name4", Onbtntool_tj)
		EVENT_NAME_COMMAND(L"btn_name5", Onbtntool_szrj)
		EVENT_NAME_COMMAND(L"btn_name6", Onbtntool_sztsy)
		EVENT_NAME_COMMAND(L"btn_name7", Onbtntool_mkfcs)
		EVENT_NAME_COMMAND(L"btn_name8", Onbtntool_bfsy)
		EVENT_NAME_COMMAND(L"btn_name9", Onbtntool_dkylhm)
		EVENT_NAME_COMMAND(L"btn_name10", Onbtntool_hztj)
		EVENT_NAME_COMMAND(L"btn_name11", Onbtntool_qxsz)
		EVENT_NAME_COMMAND(L"btn_name12", Onbtntool_pblxrgl)
		EVENT_NAME_COMMAND(L"btn_name13", Onbtntool_pbhhgl)
		EVENT_NAME_COMMAND(L"btn_name14", Onbtntool_qxjzmm)
		EVENT_NAME_COMMAND(L"btn_name15", Onbtntool_xgmm)
		EVENT_NAME_COMMAND(L"btn_name16", Onbtntool_sqbhmm)
		EVENT_NAME_COMMAND(L"btn_name17", Onbtntool_gldlmm)
		EVENT_NAME_COMMAND(L"btn_name18", Onbtntool_gxrj)
		EVENT_NAME_COMMAND(L"btn_name19", Onbtntool_zdsdsz)
		EVENT_NAME_COMMAND(L"btn_name20", Onbtntool_dkxxjl)
		EVENT_NAME_COMMAND(L"btn_name21", Onbtntool_scxxjl)


		//old 绑定方式
		/*EVENT_NAME_COMMAND(L"cbx_name0", Cbx_answer0)
		EVENT_NAME_COMMAND(L"cbx_name1", Cbx_answer1)
		EVENT_NAME_COMMAND(L"cbx_name2", Cbx_answer2)
		EVENT_NAME_COMMAND(L"cbx_name3", Cbx_answer3)
		EVENT_NAME_COMMAND(L"cbx_name4", Cbx_answer4)
		EVENT_NAME_COMMAND(L"cbx_name5", Cbx_answer5)*/
		//绑定radio的响应函数
		EVENT_NAME_COMMAND(L"radio_n0", Rad_answer0)
		EVENT_NAME_COMMAND(L"radio_n1", Rad_answer0)
		EVENT_NAME_COMMAND(L"radio_n2", Rad_answer1)
		EVENT_NAME_COMMAND(L"radio_n3", Rad_answer1)
		EVENT_NAME_COMMAND(L"radio_n4", Rad_answer2)
		EVENT_NAME_COMMAND(L"radio_n5", Rad_answer2)
		EVENT_NAME_COMMAND(L"radio_n6", Rad_answer2)
		EVENT_NAME_COMMAND(L"radio_n7", Rad_answer3)
		EVENT_NAME_COMMAND(L"radio_n8", Rad_answer3)
		EVENT_NAME_COMMAND(L"radio_n9", Rad_answer4)
		EVENT_NAME_COMMAND(L"radio_n10", Rad_answer4)
		EVENT_NAME_COMMAND(L"radio_n11", Rad_answer4)
		EVENT_NAME_COMMAND(L"radio_n12", Rad_answer5)
		EVENT_NAME_COMMAND(L"radio_n13", Rad_answer5)
		EVENT_NAME_COMMAND(L"radio_n14", Rad_answer5)
		EVENT_NAME_COMMAND(L"radio_n15", Rad_answer6)
		EVENT_NAME_COMMAND(L"radio_n16", Rad_answer6)
		EVENT_NAME_COMMAND(L"radio_n17", Rad_answer7)
		EVENT_NAME_COMMAND(L"radio_n18", Rad_answer7)
		EVENT_NAME_COMMAND(L"radio_n19", Rad_answer8)
		EVENT_NAME_COMMAND(L"radio_n20", Rad_answer8)
		EVENT_NAME_COMMAND(L"radio_n21", Rad_answer9)
		EVENT_NAME_COMMAND(L"radio_n22", Rad_answer9)
		EVENT_NAME_COMMAND(L"radio_n23", Rad_answer9)
		EVENT_NAME_COMMAND(L"radio_n24", Rad_answer10)
		EVENT_NAME_COMMAND(L"radio_n25", Rad_answer10)
		EVENT_NAME_COMMAND(L"radio_n26", Rad_answer10)
		EVENT_NAME_COMMAND(L"radio_n27", Rad_answer10)

		//绑定checkbox的响应函数
		EVENT_NAME_COMMAND(L"check_box0", Check_answer0)
		EVENT_NAME_COMMAND(L"check_box1", Check_answer1)
		EVENT_NAME_COMMAND(L"check_box2", Check_answer2)
		EVENT_NAME_COMMAND(L"check_box3", Check_answer3)
		EVENT_NAME_COMMAND(L"check_box4", Check_answer4)
		EVENT_NAME_COMMAND(L"check_box5", Check_answer5)
		EVENT_NAME_COMMAND(L"check_box6", Check_answer6)
		EVENT_NAME_COMMAND(L"check_box7", Check_answer7)
		EVENT_NAME_COMMAND(L"check_box8", Check_answer8)
		EVENT_NAME_COMMAND(L"check_box9", Check_answer9)
		EVENT_NAME_COMMAND(L"check_box10", Check_answer10)
		EVENT_NAME_COMMAND(L"check_box11", Check_answer11)
		EVENT_NAME_COMMAND(L"check_box12", Check_answer12)
		EVENT_NAME_COMMAND(L"check_box13", Check_answer13)
		EVENT_NAME_COMMAND(L"check_box14", Check_answer14)
		EVENT_NAME_COMMAND(L"check_box15", Check_answer15)
		EVENT_NAME_COMMAND(L"check_box16", Check_answer16)
		EVENT_NAME_COMMAND(L"check_box17", Check_answer17)
		EVENT_NAME_COMMAND(L"check_box18", Check_answer18)
		EVENT_NAME_COMMAND(L"check_box19", Check_answer19)
		EVENT_NAME_COMMAND(L"check_box20", Check_answer20)
		EVENT_NAME_COMMAND(L"check_box21", Check_answer21)
		EVENT_NAME_COMMAND(L"check_box22", Check_answer22)
		EVENT_NAME_COMMAND(L"check_box23", Check_answer23)
		EVENT_NAME_COMMAND(L"check_box24", Check_answer24)
		EVENT_NAME_COMMAND(L"check_box25", Check_answer25)
		EVENT_NAME_COMMAND(L"check_box26", Check_answer26)
		EVENT_NAME_COMMAND(L"check_box27", Check_answer27)
		EVENT_NAME_COMMAND(L"check_box28", Check_answer28)
		EVENT_NAME_COMMAND(L"check_box29", Check_answer29)
		EVENT_NAME_COMMAND(L"check_box30", Check_answer30)
		EVENT_NAME_COMMAND(L"check_box31", Check_answer31)
		EVENT_NAME_COMMAND(L"check_box32", Check_answer32)
		EVENT_NAME_COMMAND(L"check_box33", Check_answer33)
		EVENT_NAME_COMMAND(L"check_box34", Check_answer34)
		EVENT_NAME_COMMAND(L"check_box35", Check_answer35)
		EVENT_NAME_COMMAND(L"check_box36", Check_answer36)
		EVENT_NAME_COMMAND(L"check_box37", Check_answer37)
		EVENT_NAME_COMMAND(L"check_box38", Check_answer38)
		EVENT_NAME_COMMAND(L"check_box39", Check_answer39)
		EVENT_NAME_COMMAND(L"check_box40", Check_answer40)
		EVENT_NAME_COMMAND(L"check_box41", Check_answer41)
		EVENT_NAME_COMMAND(L"check_box42", Check_answer42)
		EVENT_NAME_COMMAND(L"check_box43", Check_answer43)
		EVENT_NAME_COMMAND(L"check_box44", Check_answer44)
		EVENT_NAME_COMMAND(L"check_box45", Check_answer45)
		EVENT_NAME_COMMAND(L"check_box46", Check_answer46)
		EVENT_NAME_COMMAND(L"check_box47", Check_answer47)
		EVENT_NAME_COMMAND(L"check_box48", Check_answer48)
		EVENT_NAME_COMMAND(L"check_box49", Check_answer49)
		EVENT_NAME_COMMAND(L"check_box50", Check_answer50)
		EVENT_NAME_COMMAND(L"check_box51", Check_answer51)
		EVENT_NAME_COMMAND(L"check_box52", Check_answer52)
		EVENT_NAME_COMMAND(L"check_box53", Check_answer53)
		EVENT_NAME_COMMAND(L"check_box54", Check_answer54)
		EVENT_NAME_COMMAND(L"check_box55", Check_answer55)
		EVENT_NAME_COMMAND(L"check_box56", Check_answer56)
		EVENT_NAME_COMMAND(L"check_box57", Check_answer57)
		EVENT_NAME_COMMAND(L"check_box58", Check_answer58)
		EVENT_NAME_COMMAND(L"check_box59", Check_answer59)
		EVENT_NAME_COMMAND(L"check_box60", Check_answer60)
		EVENT_NAME_COMMAND(L"check_box61", Check_answer61)

		//
		/*EVENT_NAME_COMMAND(L"spin_btn0",Spin_btn_answer0)
		EVENT_NAME_COMMAND(L"spin_btn1",Spin_btn_answer1)*/

		//测试代码
		// EVENT_NAME_COMMAND(L"check_box_test", OnTestCheck)


			EVENT_MAP_END()
		
	//HostWnd真实窗口消息处理
	BEGIN_MSG_MAP_EX(CMainDlg)
		MSG_WM_CREATE(OnCreate)
		MSG_WM_INITDIALOG(OnInitDialog)
		MSG_WM_CLOSE(OnClose)
				MSG_WM_SIZE(OnSize)
						CHAIN_MSG_MAP(SHostWnd)
		REFLECT_NOTIFICATIONS_EX()
	END_MSG_MAP()
private:
	BOOL			m_bLayoutInited;
	};
