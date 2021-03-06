//stamp:092009e53729de0a
/*<------------------------------------------------------------------------------------------------->*/
/*该文件由uiresbuilder生成，请不要手动修改*/
/*<------------------------------------------------------------------------------------------------->*/
#pragma once
#include <res.mgr/snamedvalue.h>
#define ROBJ_IN_CPP \
namespace SOUI \
{\
    const _R R;\
    const _UIRES UIRES;\
}
namespace SOUI
{
	class _UIRES{
		public:
		class _UIDEF{
			public:
			_UIDEF(){
				XML_INIT = _T("UIDEF:XML_INIT");
			}
			const TCHAR * XML_INIT;
		}UIDEF;
		class _LAYOUT{
			public:
			_LAYOUT(){
				XML_MAINWND = _T("LAYOUT:XML_MAINWND");
				page_baseset = _T("LAYOUT:page_baseset");
				page_safeset = _T("LAYOUT:page_safeset");
				page_powerset = _T("LAYOUT:page_powerset");
			}
			const TCHAR * XML_MAINWND;
			const TCHAR * page_baseset;
			const TCHAR * page_safeset;
			const TCHAR * page_powerset;
		}LAYOUT;
		class _values{
			public:
			_values(){
				string = _T("values:string");
				color = _T("values:color");
				skin = _T("values:skin");
			}
			const TCHAR * string;
			const TCHAR * color;
			const TCHAR * skin;
		}values;
		class _png{
			public:
			_png(){
				ID_PNG_BG = _T("png:ID_PNG_BG");
				ID_SYS_BTN_CLOSE = _T("png:ID_SYS_BTN_CLOSE");
				ID_SYS_BTN_RESTORE = _T("png:ID_SYS_BTN_RESTORE");
				ID_SYS_BTN_MIN = _T("png:ID_SYS_BTN_MIN");
				ID_PNG_SHADOW = _T("png:ID_PNG_SHADOW");
				ID_WHITE_BG = _T("png:ID_WHITE_BG");
				ID_SKIN_VER_LINE = _T("png:ID_SKIN_VER_LINE");
				ID_SKIN_HOR_LINE = _T("png:ID_SKIN_HOR_LINE");
				ID_SUBTAB_BG = _T("png:ID_SUBTAB_BG");
				ID_SUBTAB_BTN = _T("png:ID_SUBTAB_BTN");
				ID_SUBTAB_SPLIT = _T("png:ID_SUBTAB_SPLIT");
			}
			const TCHAR * ID_PNG_BG;
			const TCHAR * ID_SYS_BTN_CLOSE;
			const TCHAR * ID_SYS_BTN_RESTORE;
			const TCHAR * ID_SYS_BTN_MIN;
			const TCHAR * ID_PNG_SHADOW;
			const TCHAR * ID_WHITE_BG;
			const TCHAR * ID_SKIN_VER_LINE;
			const TCHAR * ID_SKIN_HOR_LINE;
			const TCHAR * ID_SUBTAB_BG;
			const TCHAR * ID_SUBTAB_BTN;
			const TCHAR * ID_SUBTAB_SPLIT;
		}png;
		class _IMGX{
			public:
			_IMGX(){
				png_menu_border = _T("IMGX:png_menu_border");
				png_tab_left_splitter = _T("IMGX:png_tab_left_splitter");
				png_tab_main = _T("IMGX:png_tab_main");
				png_lcex_header = _T("IMGX:png_lcex_header");
				png_lcex_header_arrow = _T("IMGX:png_lcex_header_arrow");
				png_lcex_down = _T("IMGX:png_lcex_down");
				png_lcex_up = _T("IMGX:png_lcex_up");
				png_lcex_selectrange = _T("IMGX:png_lcex_selectrange");
				png_img_bk = _T("IMGX:png_img_bk");
				png_page_sound = _T("IMGX:png_page_sound");
				png_page_sxt = _T("IMGX:png_page_sxt");
			}
			const TCHAR * png_menu_border;
			const TCHAR * png_tab_left_splitter;
			const TCHAR * png_tab_main;
			const TCHAR * png_lcex_header;
			const TCHAR * png_lcex_header_arrow;
			const TCHAR * png_lcex_down;
			const TCHAR * png_lcex_up;
			const TCHAR * png_lcex_selectrange;
			const TCHAR * png_img_bk;
			const TCHAR * png_page_sound;
			const TCHAR * png_page_sxt;
		}IMGX;
		class _IMG{
			public:
			_IMG(){
			}
		}IMG;
		class _GIF{
			public:
			_GIF(){
				gif_sound = _T("GIF:gif_sound");
			}
			const TCHAR * gif_sound;
		}GIF;
		class _ICON{
			public:
			_ICON(){
				ICON_LOGO = _T("ICON:ICON_LOGO");
				ICON_SEARCH = _T("ICON:ICON_SEARCH");
			}
			const TCHAR * ICON_LOGO;
			const TCHAR * ICON_SEARCH;
		}ICON;
	};
	const SNamedID::NAMEDVALUE namedXmlID[]={
		{L"_name_start",65535},
		{L"btn_close",65536},
		{L"btn_down",65557},
		{L"btn_min",65537},
		{L"btn_name0",65550},
		{L"btn_name1",65562},
		{L"btn_name10",65614},
		{L"btn_name11",65638},
		{L"btn_name12",65653},
		{L"btn_name13",65654},
		{L"btn_name14",65616},
		{L"btn_name15",65617},
		{L"btn_name16",65618},
		{L"btn_name17",65619},
		{L"btn_name18",65622},
		{L"btn_name19",65623},
		{L"btn_name2",65563},
		{L"btn_name20",65627},
		{L"btn_name3",65574},
		{L"btn_name4",65585},
		{L"btn_name5",65586},
		{L"btn_name6",65588},
		{L"btn_name7",65607},
		{L"btn_name8",65609},
		{L"btn_name9",65613},
		{L"btn_ok",65671},
		{L"btn_open_file",65592},
		{L"btn_person",65597},
		{L"btn_save_ml",65591},
		{L"btn_save_ml1",65615},
		{L"btn_tree21",65628},
		{L"btn_up",65556},
		{L"cbx_name0",65551},
		{L"cbx_name1",65559},
		{L"cbx_name2",65605},
		{L"cbx_name3",65608},
		{L"cbx_name4",65611},
		{L"cbx_name5",65639},
		{L"check_box0",65539},
		{L"check_box1",65540},
		{L"check_box10",65553},
		{L"check_box11",65561},
		{L"check_box12",65564},
		{L"check_box13",65565},
		{L"check_box14",65566},
		{L"check_box15",65567},
		{L"check_box16",65568},
		{L"check_box17",65569},
		{L"check_box18",65570},
		{L"check_box19",65571},
		{L"check_box2",65541},
		{L"check_box20",65572},
		{L"check_box21",65573},
		{L"check_box22",65575},
		{L"check_box23",65576},
		{L"check_box24",65577},
		{L"check_box25",65578},
		{L"check_box26",65579},
		{L"check_box27",65580},
		{L"check_box28",65581},
		{L"check_box29",65587},
		{L"check_box3",65542},
		{L"check_box30",65593},
		{L"check_box31",65598},
		{L"check_box32",65599},
		{L"check_box33",65604},
		{L"check_box34",65606},
		{L"check_box35",65610},
		{L"check_box36",65612},
		{L"check_box37",65624},
		{L"check_box38",65625},
		{L"check_box39",65626},
		{L"check_box4",65543},
		{L"check_box40",65629},
		{L"check_box41",65630},
		{L"check_box42",65640},
		{L"check_box43",65641},
		{L"check_box44",65642},
		{L"check_box45",65643},
		{L"check_box46",65644},
		{L"check_box47",65645},
		{L"check_box48",65646},
		{L"check_box49",65647},
		{L"check_box5",65544},
		{L"check_box50",65652},
		{L"check_box51",65655},
		{L"check_box52",65656},
		{L"check_box53",65657},
		{L"check_box54",65658},
		{L"check_box55",65659},
		{L"check_box56",65660},
		{L"check_box57",65661},
		{L"check_box58",65662},
		{L"check_box59",65663},
		{L"check_box6",65545},
		{L"check_box60",65664},
		{L"check_box61",65665},
		{L"check_box7",65546},
		{L"check_box8",65547},
		{L"check_box9",65552},
		{L"dlg_TIstMsg_ScannerConnecting",65666},
		{L"edit_spin",65554},
		{L"mysxt",0},
		{L"radio_n0",65548},
		{L"radio_n1",65549},
		{L"radio_n10",65595},
		{L"radio_n11",65596},
		{L"radio_n12",65601},
		{L"radio_n13",65602},
		{L"radio_n14",65603},
		{L"radio_n15",65620},
		{L"radio_n16",65621},
		{L"radio_n17",65631},
		{L"radio_n18",65632},
		{L"radio_n19",65633},
		{L"radio_n2",65558},
		{L"radio_n20",65634},
		{L"radio_n21",65635},
		{L"radio_n22",65636},
		{L"radio_n23",65637},
		{L"radio_n24",65648},
		{L"radio_n25",65649},
		{L"radio_n26",65650},
		{L"radio_n27",65651},
		{L"radio_n3",65560},
		{L"radio_n4",65582},
		{L"radio_n5",65583},
		{L"radio_n6",65584},
		{L"radio_n7",65589},
		{L"radio_n8",65590},
		{L"radio_n9",65594},
		{L"spin_btn0",65555},
		{L"spin_btn1",65600},
		{L"tabctrl",65538},
		{L"text_countdown",65670},
		{L"text_reminder_text",65668},
		{L"text_rollcall_title",65667},
		{L"window_countdown",65669}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			_name_start = namedXmlID[0].strName;
			btn_close = namedXmlID[1].strName;
			btn_down = namedXmlID[2].strName;
			btn_min = namedXmlID[3].strName;
			btn_name0 = namedXmlID[4].strName;
			btn_name1 = namedXmlID[5].strName;
			btn_name10 = namedXmlID[6].strName;
			btn_name11 = namedXmlID[7].strName;
			btn_name12 = namedXmlID[8].strName;
			btn_name13 = namedXmlID[9].strName;
			btn_name14 = namedXmlID[10].strName;
			btn_name15 = namedXmlID[11].strName;
			btn_name16 = namedXmlID[12].strName;
			btn_name17 = namedXmlID[13].strName;
			btn_name18 = namedXmlID[14].strName;
			btn_name19 = namedXmlID[15].strName;
			btn_name2 = namedXmlID[16].strName;
			btn_name20 = namedXmlID[17].strName;
			btn_name3 = namedXmlID[18].strName;
			btn_name4 = namedXmlID[19].strName;
			btn_name5 = namedXmlID[20].strName;
			btn_name6 = namedXmlID[21].strName;
			btn_name7 = namedXmlID[22].strName;
			btn_name8 = namedXmlID[23].strName;
			btn_name9 = namedXmlID[24].strName;
			btn_ok = namedXmlID[25].strName;
			btn_open_file = namedXmlID[26].strName;
			btn_person = namedXmlID[27].strName;
			btn_save_ml = namedXmlID[28].strName;
			btn_save_ml1 = namedXmlID[29].strName;
			btn_tree21 = namedXmlID[30].strName;
			btn_up = namedXmlID[31].strName;
			cbx_name0 = namedXmlID[32].strName;
			cbx_name1 = namedXmlID[33].strName;
			cbx_name2 = namedXmlID[34].strName;
			cbx_name3 = namedXmlID[35].strName;
			cbx_name4 = namedXmlID[36].strName;
			cbx_name5 = namedXmlID[37].strName;
			check_box0 = namedXmlID[38].strName;
			check_box1 = namedXmlID[39].strName;
			check_box10 = namedXmlID[40].strName;
			check_box11 = namedXmlID[41].strName;
			check_box12 = namedXmlID[42].strName;
			check_box13 = namedXmlID[43].strName;
			check_box14 = namedXmlID[44].strName;
			check_box15 = namedXmlID[45].strName;
			check_box16 = namedXmlID[46].strName;
			check_box17 = namedXmlID[47].strName;
			check_box18 = namedXmlID[48].strName;
			check_box19 = namedXmlID[49].strName;
			check_box2 = namedXmlID[50].strName;
			check_box20 = namedXmlID[51].strName;
			check_box21 = namedXmlID[52].strName;
			check_box22 = namedXmlID[53].strName;
			check_box23 = namedXmlID[54].strName;
			check_box24 = namedXmlID[55].strName;
			check_box25 = namedXmlID[56].strName;
			check_box26 = namedXmlID[57].strName;
			check_box27 = namedXmlID[58].strName;
			check_box28 = namedXmlID[59].strName;
			check_box29 = namedXmlID[60].strName;
			check_box3 = namedXmlID[61].strName;
			check_box30 = namedXmlID[62].strName;
			check_box31 = namedXmlID[63].strName;
			check_box32 = namedXmlID[64].strName;
			check_box33 = namedXmlID[65].strName;
			check_box34 = namedXmlID[66].strName;
			check_box35 = namedXmlID[67].strName;
			check_box36 = namedXmlID[68].strName;
			check_box37 = namedXmlID[69].strName;
			check_box38 = namedXmlID[70].strName;
			check_box39 = namedXmlID[71].strName;
			check_box4 = namedXmlID[72].strName;
			check_box40 = namedXmlID[73].strName;
			check_box41 = namedXmlID[74].strName;
			check_box42 = namedXmlID[75].strName;
			check_box43 = namedXmlID[76].strName;
			check_box44 = namedXmlID[77].strName;
			check_box45 = namedXmlID[78].strName;
			check_box46 = namedXmlID[79].strName;
			check_box47 = namedXmlID[80].strName;
			check_box48 = namedXmlID[81].strName;
			check_box49 = namedXmlID[82].strName;
			check_box5 = namedXmlID[83].strName;
			check_box50 = namedXmlID[84].strName;
			check_box51 = namedXmlID[85].strName;
			check_box52 = namedXmlID[86].strName;
			check_box53 = namedXmlID[87].strName;
			check_box54 = namedXmlID[88].strName;
			check_box55 = namedXmlID[89].strName;
			check_box56 = namedXmlID[90].strName;
			check_box57 = namedXmlID[91].strName;
			check_box58 = namedXmlID[92].strName;
			check_box59 = namedXmlID[93].strName;
			check_box6 = namedXmlID[94].strName;
			check_box60 = namedXmlID[95].strName;
			check_box61 = namedXmlID[96].strName;
			check_box7 = namedXmlID[97].strName;
			check_box8 = namedXmlID[98].strName;
			check_box9 = namedXmlID[99].strName;
			dlg_TIstMsg_ScannerConnecting = namedXmlID[100].strName;
			edit_spin = namedXmlID[101].strName;
			mysxt = namedXmlID[102].strName;
			radio_n0 = namedXmlID[103].strName;
			radio_n1 = namedXmlID[104].strName;
			radio_n10 = namedXmlID[105].strName;
			radio_n11 = namedXmlID[106].strName;
			radio_n12 = namedXmlID[107].strName;
			radio_n13 = namedXmlID[108].strName;
			radio_n14 = namedXmlID[109].strName;
			radio_n15 = namedXmlID[110].strName;
			radio_n16 = namedXmlID[111].strName;
			radio_n17 = namedXmlID[112].strName;
			radio_n18 = namedXmlID[113].strName;
			radio_n19 = namedXmlID[114].strName;
			radio_n2 = namedXmlID[115].strName;
			radio_n20 = namedXmlID[116].strName;
			radio_n21 = namedXmlID[117].strName;
			radio_n22 = namedXmlID[118].strName;
			radio_n23 = namedXmlID[119].strName;
			radio_n24 = namedXmlID[120].strName;
			radio_n25 = namedXmlID[121].strName;
			radio_n26 = namedXmlID[122].strName;
			radio_n27 = namedXmlID[123].strName;
			radio_n3 = namedXmlID[124].strName;
			radio_n4 = namedXmlID[125].strName;
			radio_n5 = namedXmlID[126].strName;
			radio_n6 = namedXmlID[127].strName;
			radio_n7 = namedXmlID[128].strName;
			radio_n8 = namedXmlID[129].strName;
			radio_n9 = namedXmlID[130].strName;
			spin_btn0 = namedXmlID[131].strName;
			spin_btn1 = namedXmlID[132].strName;
			tabctrl = namedXmlID[133].strName;
			text_countdown = namedXmlID[134].strName;
			text_reminder_text = namedXmlID[135].strName;
			text_rollcall_title = namedXmlID[136].strName;
			window_countdown = namedXmlID[137].strName;
		}
		 const wchar_t * _name_start;
		 const wchar_t * btn_close;
		 const wchar_t * btn_down;
		 const wchar_t * btn_min;
		 const wchar_t * btn_name0;
		 const wchar_t * btn_name1;
		 const wchar_t * btn_name10;
		 const wchar_t * btn_name11;
		 const wchar_t * btn_name12;
		 const wchar_t * btn_name13;
		 const wchar_t * btn_name14;
		 const wchar_t * btn_name15;
		 const wchar_t * btn_name16;
		 const wchar_t * btn_name17;
		 const wchar_t * btn_name18;
		 const wchar_t * btn_name19;
		 const wchar_t * btn_name2;
		 const wchar_t * btn_name20;
		 const wchar_t * btn_name3;
		 const wchar_t * btn_name4;
		 const wchar_t * btn_name5;
		 const wchar_t * btn_name6;
		 const wchar_t * btn_name7;
		 const wchar_t * btn_name8;
		 const wchar_t * btn_name9;
		 const wchar_t * btn_ok;
		 const wchar_t * btn_open_file;
		 const wchar_t * btn_person;
		 const wchar_t * btn_save_ml;
		 const wchar_t * btn_save_ml1;
		 const wchar_t * btn_tree21;
		 const wchar_t * btn_up;
		 const wchar_t * cbx_name0;
		 const wchar_t * cbx_name1;
		 const wchar_t * cbx_name2;
		 const wchar_t * cbx_name3;
		 const wchar_t * cbx_name4;
		 const wchar_t * cbx_name5;
		 const wchar_t * check_box0;
		 const wchar_t * check_box1;
		 const wchar_t * check_box10;
		 const wchar_t * check_box11;
		 const wchar_t * check_box12;
		 const wchar_t * check_box13;
		 const wchar_t * check_box14;
		 const wchar_t * check_box15;
		 const wchar_t * check_box16;
		 const wchar_t * check_box17;
		 const wchar_t * check_box18;
		 const wchar_t * check_box19;
		 const wchar_t * check_box2;
		 const wchar_t * check_box20;
		 const wchar_t * check_box21;
		 const wchar_t * check_box22;
		 const wchar_t * check_box23;
		 const wchar_t * check_box24;
		 const wchar_t * check_box25;
		 const wchar_t * check_box26;
		 const wchar_t * check_box27;
		 const wchar_t * check_box28;
		 const wchar_t * check_box29;
		 const wchar_t * check_box3;
		 const wchar_t * check_box30;
		 const wchar_t * check_box31;
		 const wchar_t * check_box32;
		 const wchar_t * check_box33;
		 const wchar_t * check_box34;
		 const wchar_t * check_box35;
		 const wchar_t * check_box36;
		 const wchar_t * check_box37;
		 const wchar_t * check_box38;
		 const wchar_t * check_box39;
		 const wchar_t * check_box4;
		 const wchar_t * check_box40;
		 const wchar_t * check_box41;
		 const wchar_t * check_box42;
		 const wchar_t * check_box43;
		 const wchar_t * check_box44;
		 const wchar_t * check_box45;
		 const wchar_t * check_box46;
		 const wchar_t * check_box47;
		 const wchar_t * check_box48;
		 const wchar_t * check_box49;
		 const wchar_t * check_box5;
		 const wchar_t * check_box50;
		 const wchar_t * check_box51;
		 const wchar_t * check_box52;
		 const wchar_t * check_box53;
		 const wchar_t * check_box54;
		 const wchar_t * check_box55;
		 const wchar_t * check_box56;
		 const wchar_t * check_box57;
		 const wchar_t * check_box58;
		 const wchar_t * check_box59;
		 const wchar_t * check_box6;
		 const wchar_t * check_box60;
		 const wchar_t * check_box61;
		 const wchar_t * check_box7;
		 const wchar_t * check_box8;
		 const wchar_t * check_box9;
		 const wchar_t * dlg_TIstMsg_ScannerConnecting;
		 const wchar_t * edit_spin;
		 const wchar_t * mysxt;
		 const wchar_t * radio_n0;
		 const wchar_t * radio_n1;
		 const wchar_t * radio_n10;
		 const wchar_t * radio_n11;
		 const wchar_t * radio_n12;
		 const wchar_t * radio_n13;
		 const wchar_t * radio_n14;
		 const wchar_t * radio_n15;
		 const wchar_t * radio_n16;
		 const wchar_t * radio_n17;
		 const wchar_t * radio_n18;
		 const wchar_t * radio_n19;
		 const wchar_t * radio_n2;
		 const wchar_t * radio_n20;
		 const wchar_t * radio_n21;
		 const wchar_t * radio_n22;
		 const wchar_t * radio_n23;
		 const wchar_t * radio_n24;
		 const wchar_t * radio_n25;
		 const wchar_t * radio_n26;
		 const wchar_t * radio_n27;
		 const wchar_t * radio_n3;
		 const wchar_t * radio_n4;
		 const wchar_t * radio_n5;
		 const wchar_t * radio_n6;
		 const wchar_t * radio_n7;
		 const wchar_t * radio_n8;
		 const wchar_t * radio_n9;
		 const wchar_t * spin_btn0;
		 const wchar_t * spin_btn1;
		 const wchar_t * tabctrl;
		 const wchar_t * text_countdown;
		 const wchar_t * text_reminder_text;
		 const wchar_t * text_rollcall_title;
		 const wchar_t * window_countdown;
		}name;

		class _id{
		public:
		const static int _name_start	=	65535;
		const static int btn_close	=	65536;
		const static int btn_down	=	65557;
		const static int btn_min	=	65537;
		const static int btn_name0	=	65550;
		const static int btn_name1	=	65562;
		const static int btn_name10	=	65614;
		const static int btn_name11	=	65638;
		const static int btn_name12	=	65653;
		const static int btn_name13	=	65654;
		const static int btn_name14	=	65616;
		const static int btn_name15	=	65617;
		const static int btn_name16	=	65618;
		const static int btn_name17	=	65619;
		const static int btn_name18	=	65622;
		const static int btn_name19	=	65623;
		const static int btn_name2	=	65563;
		const static int btn_name20	=	65627;
		const static int btn_name3	=	65574;
		const static int btn_name4	=	65585;
		const static int btn_name5	=	65586;
		const static int btn_name6	=	65588;
		const static int btn_name7	=	65607;
		const static int btn_name8	=	65609;
		const static int btn_name9	=	65613;
		const static int btn_ok	=	65671;
		const static int btn_open_file	=	65592;
		const static int btn_person	=	65597;
		const static int btn_save_ml	=	65591;
		const static int btn_save_ml1	=	65615;
		const static int btn_tree21	=	65628;
		const static int btn_up	=	65556;
		const static int cbx_name0	=	65551;
		const static int cbx_name1	=	65559;
		const static int cbx_name2	=	65605;
		const static int cbx_name3	=	65608;
		const static int cbx_name4	=	65611;
		const static int cbx_name5	=	65639;
		const static int check_box0	=	65539;
		const static int check_box1	=	65540;
		const static int check_box10	=	65553;
		const static int check_box11	=	65561;
		const static int check_box12	=	65564;
		const static int check_box13	=	65565;
		const static int check_box14	=	65566;
		const static int check_box15	=	65567;
		const static int check_box16	=	65568;
		const static int check_box17	=	65569;
		const static int check_box18	=	65570;
		const static int check_box19	=	65571;
		const static int check_box2	=	65541;
		const static int check_box20	=	65572;
		const static int check_box21	=	65573;
		const static int check_box22	=	65575;
		const static int check_box23	=	65576;
		const static int check_box24	=	65577;
		const static int check_box25	=	65578;
		const static int check_box26	=	65579;
		const static int check_box27	=	65580;
		const static int check_box28	=	65581;
		const static int check_box29	=	65587;
		const static int check_box3	=	65542;
		const static int check_box30	=	65593;
		const static int check_box31	=	65598;
		const static int check_box32	=	65599;
		const static int check_box33	=	65604;
		const static int check_box34	=	65606;
		const static int check_box35	=	65610;
		const static int check_box36	=	65612;
		const static int check_box37	=	65624;
		const static int check_box38	=	65625;
		const static int check_box39	=	65626;
		const static int check_box4	=	65543;
		const static int check_box40	=	65629;
		const static int check_box41	=	65630;
		const static int check_box42	=	65640;
		const static int check_box43	=	65641;
		const static int check_box44	=	65642;
		const static int check_box45	=	65643;
		const static int check_box46	=	65644;
		const static int check_box47	=	65645;
		const static int check_box48	=	65646;
		const static int check_box49	=	65647;
		const static int check_box5	=	65544;
		const static int check_box50	=	65652;
		const static int check_box51	=	65655;
		const static int check_box52	=	65656;
		const static int check_box53	=	65657;
		const static int check_box54	=	65658;
		const static int check_box55	=	65659;
		const static int check_box56	=	65660;
		const static int check_box57	=	65661;
		const static int check_box58	=	65662;
		const static int check_box59	=	65663;
		const static int check_box6	=	65545;
		const static int check_box60	=	65664;
		const static int check_box61	=	65665;
		const static int check_box7	=	65546;
		const static int check_box8	=	65547;
		const static int check_box9	=	65552;
		const static int dlg_TIstMsg_ScannerConnecting	=	65666;
		const static int edit_spin	=	65554;
		const static int mysxt	=	0;
		const static int radio_n0	=	65548;
		const static int radio_n1	=	65549;
		const static int radio_n10	=	65595;
		const static int radio_n11	=	65596;
		const static int radio_n12	=	65601;
		const static int radio_n13	=	65602;
		const static int radio_n14	=	65603;
		const static int radio_n15	=	65620;
		const static int radio_n16	=	65621;
		const static int radio_n17	=	65631;
		const static int radio_n18	=	65632;
		const static int radio_n19	=	65633;
		const static int radio_n2	=	65558;
		const static int radio_n20	=	65634;
		const static int radio_n21	=	65635;
		const static int radio_n22	=	65636;
		const static int radio_n23	=	65637;
		const static int radio_n24	=	65648;
		const static int radio_n25	=	65649;
		const static int radio_n26	=	65650;
		const static int radio_n27	=	65651;
		const static int radio_n3	=	65560;
		const static int radio_n4	=	65582;
		const static int radio_n5	=	65583;
		const static int radio_n6	=	65584;
		const static int radio_n7	=	65589;
		const static int radio_n8	=	65590;
		const static int radio_n9	=	65594;
		const static int spin_btn0	=	65555;
		const static int spin_btn1	=	65600;
		const static int tabctrl	=	65538;
		const static int text_countdown	=	65670;
		const static int text_reminder_text	=	65668;
		const static int text_rollcall_title	=	65667;
		const static int window_countdown	=	65669;
		}id;

		class _string{
		public:
		const static int title	=	0;
		const static int ver	=	1;
		}string;

		class _color{
		public:
		}color;

	};

#ifdef R_IN_CPP
	 extern const _R R;
	 extern const _UIRES UIRES;
#else
	 extern const __declspec(selectany) _R & R = _R();
	 extern const __declspec(selectany) _UIRES & UIRES = _UIRES();
#endif//R_IN_CPP
}
