/*
 Created by Dragster
*/
// Control types
#define CT_STATIC           0
#define CT_BUTTON           1
#define CT_EDIT             2
#define CT_SLIDER           3
#define CT_COMBO            4
#define CT_LISTBOX          5
#define CT_TOOLBOX          6
#define CT_CHECKBOXES       7
#define CT_PROGRESS         8
#define CT_HTML             9
#define CT_STATIC_SKEW      10
#define CT_ACTIVETEXT       11
#define CT_TREE             12
#define CT_STRUCTURED_TEXT  13
#define CT_CONTEXT_MENU     14
#define CT_CONTROLS_GROUP   15
#define CT_SHORTCUTBUTTON   16
#define CT_XKEYDESC         40
#define CT_XBUTTON          41
#define CT_XLISTBOX         42
#define CT_XSLIDER          43
#define CT_XCOMBO           44
#define CT_ANIMATED_TEXTURE 45
#define CT_OBJECT           80
#define CT_OBJECT_ZOOM      81
#define CT_OBJECT_CONTAINER 82
#define CT_OBJECT_CONT_ANIM 83
#define CT_LINEBREAK        98
#define CT_USER             99
#define CT_MAP              100
#define CT_MAP_MAIN         101
#define CT_LISTNBOX         102
#define CT_CHECKBOX         77

// Static styles
#define ST_POS            0x0F
#define ST_HPOS           0x03
#define ST_VPOS           0x0C
#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define ST_CENTER         0x02
#define ST_DOWN           0x04
#define ST_UP             0x08
#define ST_VCENTER        0x0C

#define ST_TYPE           0xF0
#define ST_SINGLE         0x00
#define ST_MULTI          0x10
#define ST_TITLE_BAR      0x20
#define ST_PICTURE        0x30
#define ST_FRAME          0x40
#define ST_BACKGROUND     0x50
#define ST_GROUP_BOX      0x60
#define ST_GROUP_BOX2     0x70
#define ST_HUD_BACKGROUND 0x80
#define ST_TILE_PICTURE   0x90
#define ST_WITH_RECT      0xA0
#define ST_LINE           0xB0

#define ST_SHADOW         0x100
#define ST_NO_RECT        0x200
#define ST_KEEP_ASPECT_RATIO  0x800

#define ST_TITLE          ST_TITLE_BAR + ST_CENTER

// Slider styles
#define SL_DIR            0x400
#define SL_VERT           0
#define SL_HORZ           0x400

#define SL_TEXTURES       0x10

// progress bar 
#define ST_VERTICAL       0x01
#define ST_HORIZONTAL     0

// Listbox styles
#define LB_TEXTURES       0x10
#define LB_MULTI          0x20

// Tree styles
#define TR_SHOWROOT       1
#define TR_AUTOCOLLAPSE   2

// MessageBox styles
#define MB_BUTTON_OK      1
#define MB_BUTTON_CANCEL  2
#define MB_BUTTON_USER    4


///////////////////////////////////////////////////////////////////////////
/// Base Classes
///////////////////////////////////////////////////////////////////////////
class RscText
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 0;
	idc = -1;
	colorBackground[] = 
	{
		0,
		0,
		0,
		0
	};
	colorText[] = 
	{
		1,
		1,
		1,
		1
	};
	text = "";
	fixedWidth = 0;
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	style = 0;
	shadow = 1;
	colorShadow[] = 
	{
		0,
		0,
		0,
		0.5
	};
	font = "RobotoCondensed";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	linespacing = 1;
	tooltipColorText[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] = 
	{
		0,
		0,
		0,
		0.65
	};
};
class RscPicture
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 0;
	idc = -1;
	style = 48;
	colorBackground[] = 
	{
		0,
		0,
		0,
		0
	};
	colorText[] = 
	{
		1,
		1,
		1,
		1
	};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	fixedWidth = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
	tooltipColorText[] = 
	{
		1,
		1,
		1,
		1
	};
};
class RscEdit
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 2;
	x = 0;
	y = 0;
	h = 0.04;
	w = 0.2;
	colorBackground[] = 
	{
		0,
		0,
		0,
		0
	};
	colorText[] = 
	{
		0.95,
		0.95,
		0.95,
		1
	};
	colorDisabled[] = 
	{
		1,
		1,
		1,
		0.25
	};
	colorSelection[] = 
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",
		1
	};
	autocomplete = "";
	text = "";
	size = 0.2;
	style = "0x00 + 0x40";
	font = "RobotoCondensed";
	shadow = 2;
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	canModify = 1;
	tooltipColorText[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] = 
	{
		0,
		0,
		0,
		0.65
	};
};
class RscListBox
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 5;
	rowHeight = 0;
	colorText[] = 
	{
		1,
		1,
		1,
		1
	};
	colorDisabled[] = 
	{
		1,
		1,
		1,
		0.25
	};
	colorScrollbar[] = 
	{
		1,
		0,
		0,
		0
	};
	colorSelect[] = 
	{
		0,
		0,
		0,
		1
	};
	colorSelect2[] = 
	{
		0,
		0,
		0,
		1
	};
	colorSelectBackground[] = 
	{
		0.95,
		0.95,
		0.95,
		1
	};
	colorSelectBackground2[] = 
	{
		1,
		1,
		1,
		0.5
	};
	colorBackground[] = 
	{
		0,
		0,
		0,
		0.3
	};
	soundSelect[] = 
	{
		"\A3\ui_f\data\sound\RscListbox\soundSelect",
		0.09,
		1
	};
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	colorPicture[] = 
	{
		1,
		1,
		1,
		1
	};
	colorPictureSelected[] = 
	{
		1,
		1,
		1,
		1
	};
	colorPictureDisabled[] = 
	{
		1,
		1,
		1,
		0.25
	};
	colorPictureRight[] = 
	{
		1,
		1,
		1,
		1
	};
	colorPictureRightSelected[] = 
	{
		1,
		1,
		1,
		1
	};
	colorPictureRightDisabled[] = 
	{
		1,
		1,
		1,
		0.25
	};
	colorTextRight[] = 
	{
		1,
		1,
		1,
		1
	};
	colorSelectRight[] = 
	{
		0,
		0,
		0,
		1
	};
	colorSelect2Right[] = 
	{
		0,
		0,
		0,
		1
	};
	tooltipColorText[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] = 
	{
		0,
		0,
		0,
		0.65
	};
	class ListScrollBar
	{
		width = 0;
		height = 0;
		scrollSpeed = 0.01;

		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";

		color[] = {1,1,1,1}; // Scrollbar color
	};
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.3;
	style = 16;
	font = "RobotoCondensed";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 0;
	colorShadow[] = 
	{
		0,
		0,
		0,
		0.5
	};
	period = 1.2;
	maxHistoryDelay = 1;
};
class RscButton
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 1;
	text = "";
	colorText[] = 
	{
		1,
		1,
		1,
		1
	};
	colorDisabled[] = 
	{
		1,
		1,
		1,
		0.25
	};
	colorBackground[] = 
	{
		0,
		0,
		0,
		0.5
	};
	colorBackgroundDisabled[] = 
	{
		0,
		0,
		0,
		0.5
	};
	colorBackgroundActive[] = 
	{
		0,
		0,
		0,
		1
	};
	colorFocused[] = 
	{
		0,
		0,
		0,
		1
	};
	colorShadow[] = 
	{
		0,
		0,
		0,
		0
	};
	colorBorder[] = 
	{
		0,
		0,
		0,
		1
	};
	soundEnter[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.09,
		1
	};
	soundPush[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.09,
		1
	};
	soundClick[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.09,
		1
	};
	soundEscape[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.09,
		1
	};
	idc = -1;
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "RobotoCondensed";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0;
	offsetPressedY = 0;
	borderSize = 0;
};
class pdamenu
{
	idd = 88666;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {
			idc = 1300;
			text = "armst_client\GUI\pda\pda.paa";		
			moving = false;
			x = 0; y = 0;
			w = 1; h = 1;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
		};
	};
	
	class Controls {

		class pdalist : RscText {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = "Сталкеры";
			colorText[] = {1,1,1,1};
			x = 0.18;y = 0.12;
			w = 0.6;h = 0.04;
		};
		class pdames : RscText {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = "Введите сообщение";
			colorText[] = {1,1,1,1};
			x = 0.4;y = 0.12;
			w = 0.6;h = 0.04;
		};
		class Listplayer : RscListBox {
			idc = 8665;
			text = "";
			x = .13; y = .18;
			w = .2; h = .6;
			onMouseButtonClick="[] spawn ARMST_pda_upd_listbox;";
		};
		class editmes : Rscedit {
			idc = 8666;
			text = "";
			x = .36; y = .18;
			w = .48; h = .1;
			color[] = {.1,.95,.1,1};
		};
		class send : RscButton {
			idc = -1;
			text = "Отправить";
			onButtonClick = "[(ctrlText 8666)] spawn ARMST_pda_send;";
			x = .36; y = .3;
			w = .2; h = .045;
			color[] = {.1,.95,.1,1};
		};
		class sendall : RscButton {
			idc = -1;
			text = "Отправить всем";
			onButtonClick = "[(ctrlText 8666)] spawn ARMST_pda_send_all;";
			x = .36; y = .355;
			w = .2; h = .045;
			color[] = {.1,.95,.1,1};
		};
		class sendanon : RscButton {
			idc = -1;
			text = "Отправить(Анонимно)";
			onButtonClick = "[(ctrlText 8666)] spawn ARMST_pda_send_anon;";
			x = .6; y = .3;
			w = .25; h = .045;
			color[] = {.1,.95,.1,1};
		};
		class fraction: RscText
		{
			idc = -1;
			text = "Фракция:";
			x = 0.1125;y = 0.805;
			w = 0.1375;h = 0.06;
		};
		class fractiontext: RscText
		{
			idc = 8668;
			text = "";
			x = 0.2625;y = 0.805;
			w = 0.1625;h = 0.06;
		};
		class Bute : RscButton {
			idc = -1;
			text = "Открыть историю";
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);[] spawn ARMST_pda_history_open;";
			x = .62; y = .745;
			w = .22; h = .045;
			color[] = {.95,.1,.1,1};
		};
		class ButtDiagnose : RscButton {
			idc = -1;
			text = "Диагностика";
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1); [] spawn ARMST_pda_diagnose_open;";
			x = .41; y = .81;
			w = .15; h = .045;
			color[] = {.95,.1,.1,1};
		};
		class ButtDossier : RscButton {
			idc = -1;
			text = "Досье";
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1); [] spawn ARMST_pda_dossier_open;";
			x = .58; y = .81;
			w = .12; h = .045;
			color[] = {.95,.1,.1,1};
		};
		class ButtClose : RscButton {
			idc = -1;
			text = "Закрыть";
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);";
			x = .72; y = .81;
			w = .12; h = .045;
			color[] = {.95,.1,.1,1};
		};
	};
};
class pdahistorymes
{
	idd = 88670;
	movingenable = 0;
	enableSimulation = true;
	class controlsBackground {
		class MainBG : RscPicture {
			idc = 1300;
			text = "armst_client\GUI\pda\pda.paa";		
			moving = false;
			x = 0; y = 0;
			w = 1; h = 1;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
		};
	};
	
	class Controls {
		class histmes: RscText
		{
			idc = -1;
			text = "История сообщений"; 
			x = 0.3;
			y = 0.14;
			w = 0.3625;
			h = 0.04;
		};
		class RscListbox_1500: RscListbox
		{
			onMouseButtonDblClick="_m = ((findDisplay 88670) displayCtrl 1500) lbText (lbCurSel ((findDisplay 88670) displayCtrl 1500));hint format['[КПК] %1',_m];";
			idc = 1500;
			x = 0.125;
			y = 0.2;
			w = 0.725;
			h = 0.6;
		};
		class RscButton_1600: RscButton
		{
			idc = 1600;
			text = "Очистить историю"; 
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);player setVariable ['all_pda_mes',[]];";
			x = 0.5;
			y = 0.815;
			w = 0.1875;
			h = 0.04;
		};
		class RscButton_1601: RscButton
		{
			idc = -1;
			text = "Закрыть";
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);";
			x = 0.7125;
			y = 0.815;
			w = 0.1375;
			h = 0.04;
		};
	};
};
class pda_dossier
{
	idd = 88600;
	movingenable = 0;
	enableSimulation = true;

	class controlsBackground {
		class MainBG : RscPicture {
			idc = 1300;
			text = "armst_client\GUI\pda\pda.paa";				
			moving = false;
			x = 0; y = 0;
			w = 1; h = 1;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
		};
	};
	
	class Controls {

		class RscText_1000: RscText
		{
			idc = 1000;
			text = "Досье";
			x = 0.1875;y = 0.14;
			w = 0.075;h = 0.04;
		};
		class RscText_1001: RscText
		{
			idc = 1001;
			text = "Фракция:";
			x = 0.1;y = 0.2;
			w = 0.1125;h = 0.04;
		};
		class RscText_1002: RscText
		{
			idc = 1002;text = "";
			x = 0.2125;y = 0.2;
			w = 0.2;h = 0.04;
		};
		class RscText_1003: RscText
		{
			idc = 1003;
			text = "Деньги:";
			x = 0.1;y = 0.26;
			w = 0.125;h = 0.04;
		};
		class RscText_1004: RscText
		{
			idc = 1004;text = "";
			x = 0.2125;y = 0.26;
			w = 0.2;h = 0.04;
		};
		class RscText_1005: RscText
		{
			idc = 1005;
			text = "Убийств:";
			x = 0.1;y = 0.32;
			w = 0.1125;h = 0.04;
		};
		class RscText_1006: RscText
		{
			idc = 1006;text = "";
			x = 0.2125;y = 0.32;
			w = 0.2;h = 0.04;
		};
		class RscText_1007: RscText
		{
			idc = 1007;
			text = "Смертей:";
			x = 0.1;y = 0.38;
			w = 0.1125;h = 0.04;
		};
		class RscText_1008: RscText
		{
			idc = 1008;text = "";
			x = 0.2125;y = 0.38;
			w = 0.2;h = 0.04;
		};

		class RscText_1009: RscText
		{
			idc = 1009;
			text = "Голод:";
			x = 0.1;y = 0.44;
			w = 0.1125;h = 0.04;
		};
		class RscText_1010: RscText
		{
			idc = 1010;text = "";
			x = 0.2125;y = 0.44;
			w = 0.2;h = 0.04;
		};
		class RscText_1011: RscText
		{
			idc = 1011;
			text = "Жажда:";
			x = 0.1;y = 0.5;
			w = 0.1125;h = 0.04;
		};
		class RscText_1012: RscText
		{
			idc = 1012;text = "";
			x = 0.2125;y = 0.5;
			w = 0.2;h = 0.04;
		};
		class ButtClose : RscButton {
			idc = -1;
			text = "Закрыть";
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);";
			x = .69; y = .8;
			w = .15; h = .06;
			color[] = {.95,.1,.1,1};
		};
	};
};
class pda_diagnose
{
	idd = 88500;
	movingenable = 0;
	enableSimulation = true;

	class controlsBackground {
		class MainBG : RscPicture {
			idc = -1;
			text = "armst_client\GUI\pda\pda.paa";		
			moving = false;
			x = 0; y = 0;
			w = 1; h = 1;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
		};
	};
	
	class Controls {

		class head: RscPicture
		{
			idc = 1202;text = "";
			x = 0.1375;y = 0.18;
			w = 0.2625;h = 0.62;
		};
		class body: RscPicture
		{
			idc = 1203;text = "";
			x = 0.1375;y = 0.18;
			w = 0.2625;h = 0.62;
		};
		class right_arm: RscPicture
		{
			idc = 1204;text = "";
			x = 0.1375;y = 0.18;
			w = 0.2625;h = 0.62;
		};
		class left_arm: RscPicture
		{
			idc = 1205;text = "";
			x = 0.1375;y = 0.18;
			w = 0.2625;h = 0.62;
		};
		class right_leg: RscPicture
		{
			idc = 1206;text = "";
			x = 0.1375;y = 0.18;
			w = 0.2625;h = 0.62;
		};
		class left_leg: RscPicture
		{
			idc = 1207;text = "";
			x = 0.1375;y = 0.18;
			w = 0.2625;h = 0.62;
		};
		class bint_head: RscButton
		{
			idc = 1600;text = "Бинтовать голову";
			x = 0.375;y = 0.48;
			w = 0.2;h = 0.04;
			onButtonClick = "[player, player, 'bandage', 'HitHead'] call AGM_Medical_fnc_treat;";
		};
		class bint_tors: RscButton
		{
			idc = 1601;text = "Бинтовать торс";
			x = 0.5875;y = 0.48;
			w = 0.2125;h = 0.04;
			onButtonClick = "[player, player, 'bandage', 'HitBody'] call AGM_Medical_fnc_treat;";
		};
		class bint_left_arm: RscButton
		{
			idc = 1602;text = "Бинтовать левую руку";
			x = 0.375;y = 0.56;
			w = 0.2;h = 0.04;
			onButtonClick = "[player, player, 'bandage', 'HitLeftArm'] call AGM_Medical_fnc_treat;";
		};
		class bint_right_arm: RscButton
		{
			idc = 1603;text = "Бинтовать правую руку";
			x = 0.5875;y = 0.56;
			w = 0.2125;h = 0.04;
			onButtonClick = "[player, player, 'bandage', 'HitRightArm'] call AGM_Medical_fnc_treat;";
		};
		class bint_left_leg: RscButton
		{
			idc = 1604;text = "Бинтовать левую ногу";
			x = 0.375;y = 0.64;
			w = 0.2;h = 0.04;
			onButtonClick = "[player, player, 'bandage', 'HitLeftLeg'] call AGM_Medical_fnc_treat;";
		};
		class bint_right_leg: RscButton
		{
			idc = 1605;text = "Бинтовать правую ногу";
			x = 0.5875;y = 0.64;
			w = 0.2125;h = 0.04;
			onButtonClick = "[player, player, 'bandage', 'HitRightLeg'] call AGM_Medical_fnc_treat;";
		};
		class RscButton_1612: RscText
		{
			idc = 1612;	text="Медицинская диагностика";
			x = 0.375;y = 0.16;
			w = 0.3375;h = 0.04;
		};
		class blood_title: RscText
		{
			idc = 1610;text = "Кровь:";
			x = 0.375;y = 0.2;
			w = 0.15;h = 0.04;
		};
		class blood_text: RscText
		{
			idc = 1611;text = "";
			x = 0.4375;y = 0.2;
			w = 0.4;h = 0.04;
		};
		class Pain_title: RscText
		{
			idc = 1608;text = "Боль:";
			x = 0.375;y = 0.24;
			w = 0.15;h = 0.04;
		};
		class Pain_text: RscText
		{
			idc = 1609;text = "";
			x = 0.4375;y = 0.24;
			w = 0.4;h = 0.04;
		};
		class obluchenie_title: RscText
		{
			idc = 1606;text = "Облучение:";
			x = 0.375;y = 0.28;
			w = 0.15;h = 0.04;
		};
		class obluchenie_text: RscText
		{
			idc = 1607;text = "";
			x = 0.5375;y = 0.28;
			w = 0.175;h = 0.04;
		};
		class temperature_title: RscText
		{
			idc = 1720;text = "Температура:";
			x = 0.375;y = 0.32;
			w = 0.15;h = 0.04;
		};
		class temperature_text: RscText
		{
			idc = 1721;text = "";
			x = 0.5375;y = 0.32;
			w = 0.175;h = 0.04;
		};
		class blood_transfusion: RscButton
		{
			idc = 1612;
			text = "Перелить кровь";
			x = 0.375;y = 0.72;
			w = 0.2;h = 0.04;
			onButtonClick = "[player, player, 'bloodbag'] call AGM_Medical_fnc_treat;";
		};
		class stabbing_morphine: RscButton
		{
			idc = 1613;
			text = "Вколоть морфий";
			x = 0.5875;y = 0.72;
			w = 0.2125;h = 0.04;
			onButtonClick = "[player, player, 'morphine'] call AGM_Medical_fnc_treat;";
		};
		class radx: RscButton
		{
			idc = 1614;
			text = "Вколоть radx";
			x = 0.375;y = 0.8;
			w = 0.2;h = 0.04;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);player playMoveNow 'AinvPknlMstpSnonWnonDnon_medic1';[5, player, 'Armst_fnc_radX_health','Ввожу антирадин', 'armst_abort'] spawn AGM_Core_fnc_progressBar;";
		};
		class ButtClose : RscButton {
			idc = -1;
			text = "Закрыть";
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);";
			x = .69; y = .8;
			w = .15; h = .06;
			color[] = {.95,.1,.1,1};
		};
	};
};
class medicine
{
	idd = 45888;
	movingenable = 0;
	enableSimulation = true;
	class controlsBackground {
		class MainBG : RscPicture {
			idc = -1;
			text = "scripts\pda\fon.paa";
			x = 0.412344 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.418 * safezoneH;
		};
	};
	
	class Controls {
		class head: RscButton
		{
			idc = 1600;
			text = "Перевязать голову"; 
			x = 0.434479 * safezoneW + safezoneX;
			y = 0.315667 * safezoneH + safezoneY;
			w = 0.140677 * safezoneW;
			h = 0.0477037 * safezoneH;
			colorBackground[] = {0,0,0,0.1};
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);[player, player, 'bandage', 'HitHead'] call AGM_Medical_fnc_treat;";
		};
		class body: RscButton
		{
			idc = 1601;
			text = "Перевязать торс"; 
			x = 0.436042 * safezoneW + safezoneX;
			y = 0.372519 * safezoneH + safezoneY;
			w = 0.139114 * safezoneW;
			h = 0.0495556 * safezoneH;
			colorBackground[] = {0,0,0,0.1};
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);[player, player, 'bandage', 'HitBody'] call AGM_Medical_fnc_treat;";
		};
		class left_arm: RscButton
		{
			idc = 1602;
			text = "Перевязать левую руку"; 
			x = 0.435 * safezoneW + safezoneX;
			y = 0.430296 * safezoneH + safezoneY;
			w = 0.140677 * safezoneW;
			h = 0.0495555 * safezoneH;
			colorBackground[] = {0,0,0,0.1};
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);[player, player, 'bandage', 'HitLeftArm'] call AGM_Medical_fnc_treat;";
		};
		class right_arm: RscButton
		{
			idc = 1603;
			text = "Перевязать правую руку"; 
			x = 0.435 * safezoneW + safezoneX;
			y = 0.487963 * safezoneH + safezoneY;
			w = 0.138594 * safezoneW;
			h = 0.0486297 * safezoneH;
			colorBackground[] = {0,0,0,0.1};
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);[player, player, 'bandage', 'HitRightArm'] call AGM_Medical_fnc_treat;";
		};
		class left_leg: RscButton
		{
			idc = 1604;
			text = "Перевязать левую ногу"; 
			x = 0.434531 * safezoneW + safezoneX;
			y = 0.543074 * safezoneH + safezoneY;
			w = 0.140677 * safezoneW;
			h = 0.0467778 * safezoneH;
			colorBackground[] = {0,0,0,0.1};
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);[player, player, 'bandage', 'HitLeftLeg'] call AGM_Medical_fnc_treat;";
		};
		class right_leg: RscButton
		{
			idc = 1605;
			text = "Перевязать правую ногу"; 
			x = 0.435052 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.140156 * safezoneW;
			h = 0.0477037 * safezoneH;
			colorBackground[] = {0,0,0,0.1};
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);[player, player, 'bandage', 'HitRightLeg'] call AGM_Medical_fnc_treat;";
		};
		class exit: RscButton
		{
			idc = 1606;
			text = "Отмена"; 
			x = 0.435573 * safezoneW + safezoneX;
			y = 0.66037 * safezoneH + safezoneY;
			w = 0.140156 * safezoneW;
			h = 0.0495556 * safezoneH;
			colorBackground[] = {0,0,0,0.1};
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);";
		};
	};
};

class detector_display
{
	idd = 99666;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {
			idc = 2301;
			text = "Scripts\pda\detektor_svarog.paa";		
			moving = true;
			x = 0; y = 0;
			w = 1; h = 1;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
		};
	};	
	class Controls {

		class art_detector_on : RscButton {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = "Анализировать.";	
			onButtonClick = "[] spawn ARMST_art_detector_on;";
			colorText[] = {1,1,1,1};
			colorFocused[] = {0, 0, 0, 0};
			colorBackgroundActive[] = {0, 0, 0, 0};
			x = 0.37;y = 0.48;
			w = 0.19;h = 0.04;
		};
		class analistext: RscText
		{
			idc = 8667;
			text = "";
			x = 0.28;y = 0.2;
			w = 0.4;h = 0.04;
		};
		class sbortext: RscText
		{
			idc = 8668;
			text = "";
			x = 0.28;y = 0.23;
			w = 0.4;h = 0.04;
		};
		class achtungtext: RscText
		{
			idc = 8670;
			text = "";
			x = 0.28;y = 0.26;
			w = 0.4;h = 0.04;
		};
		class resulttext: RscText
		{
			idc = 8669;
			text = "";
			x = 0.28;y = 0.29;
			w = 0.45;h = 0.04;
		};
	};	
};