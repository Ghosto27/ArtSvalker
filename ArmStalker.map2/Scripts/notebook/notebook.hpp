/*
 Created by Dragster
*/
class notebooklogin
{
	idd = 88800;
	movingenable = 0;
	enableSimulation = true;
	class controlsBackground {
		class MainBG : RscPicture {
			idc = -1;
			//text = "notebook\notebook_login.paa";
			text = "armst_client\GUI\notebook\notebook_login.paa";
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
	
	class Controls {
		class login: RscEdit
		{
			idc = 800;
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.420222 * safezoneH + safezoneY;
			w = 0.161406 * safezoneW;
			h = 0.0247778 * safezoneH;
			lineSpacing=3;
			shadow=0;
			colorText[] = {0,0,0,1};
		};
		class password: RscEdit
		{
			idc = 801;
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.161406 * safezoneW;
			h = 0.0247778 * safezoneH;
			lineSpacing=3;
			shadow=0;
			colorText[] = {0,0,0,1};
		};
		class leave: RscButton
		{
			idc = -1;
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0536458 * safezoneW;
			h = 0.0320741 * safezoneH;
			colorBackground[] = {0,0,0,0.1};
			colorFocused[] = 
			{
				0,
				0,
				0,
				0.2
			};
			colorBackgroundActive[] = 
			{
				0,
				0,
				0,
				0.2
			};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);";
		};
		class go_inside: RscButton
		{
			idc = -1;
			x = 0.570104 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0536458 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0.1};
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "_l=(ctrlText 800);_p=(ctrlText 801);  ((ctrlParent (_this select 0)) closeDisplay 1);[_l,_p] spawn ARMST_notebook_login_check;";
		};
	};
};
class notebookworktable
{
	idd = 88801;
	movingenable = 0;
	enableSimulation = true;
	class controlsBackground {
		class MainBG : RscPicture {
			idc = -1;
			//text = "notebook\worktable.paa";
			text = "armst_client\GUI\notebook\worktable.paa";
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
	
	class Controls {
		class upravgroup: RscButton
		{
			idc = 1600;
			x = 0.159687 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.132 * safezoneH;
			colorBackground[] = {0,0,0,0.1};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);[] spawn ARMST_notebook_faction_control_open;";
			colorFocused[] = 
			{
				0,
				0,
				0,
				0.2
			};
			colorBackgroundActive[] = 
			{
				0,
				0,
				0,
				0.2
			};
		};
		class close: RscButton
		{
			idc = 1601;
			x = 0.159688 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.132 * safezoneH;
			colorBackground[] = {0,0,0,0.1};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);";
			colorFocused[] = 
			{
				0,
				0,
				0,
				0.2
			};
			colorBackgroundActive[] = 
			{
				0,
				0,
				0,
				0.2
			};
		};
	};
};
class notebookfactioncontrol
{
	idd = 88802;
	movingenable = 0;
	enableSimulation = true;
	class controlsBackground {
		class MainBG : RscPicture {
			idc = -1;
			//text = "notebook\faction_control.paa";
			text = "armst_client\GUI\notebook\faction_control.paa";
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
	
	class Controls {
		class poiskedit: RscEdit
		{
			idc = 800;
			x = 0.243749 * safezoneW + safezoneX;
			y = 0.241556 * safezoneH + safezoneY;
			w = 0.119896 * safezoneW;
			h = 0.0244444 * safezoneH;
		};
		class players: RscListbox
		{
			idc = 801;
			x = 0.24427 * safezoneW + safezoneX;
			y = 0.293667 * safezoneH + safezoneY;
			w = 0.160521 * safezoneW;
			h = 0.461482 * safezoneH;
		};
		class sostav_group: RscListbox
		{
			idc = 802;
			x = 0.5825 * safezoneW + safezoneX;
			y = 0.294704 * safezoneH + safezoneY;
			w = 0.160521 * safezoneW;
			h = 0.461482 * safezoneH;
		};
		class poisk: RscButton
		{
			idc = -1;
			x = 0.366979 * safezoneW + safezoneX;
			y = 0.240518 * safezoneH + safezoneY;
			w = 0.0402083 * safezoneW;
			h = 0.0265185 * safezoneH;
			onButtonClick = "[(ctrlText 800)] spawn ARMST_notebook_faction_control_poisk;";
			colorBackground[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
		};
		class prinyatb: RscButton
		{
			idc = -1;
			x = 0.346874 * safezoneW + safezoneX;
			y = 0.775815 * safezoneH + safezoneY;
			w = 0.0605208 * safezoneW;
			h = 0.0392593 * safezoneH;
			onButtonClick = "[] spawn ARMST_notebook_add_to_faction;";
			colorBackground[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
		};
		class iscluch: RscButton
		{
			idc = -1;
			x = 0.580469 * safezoneW + safezoneX;
			y = 0.776852 * safezoneH + safezoneY;
			w = 0.0610417 * safezoneW;
			h = 0.0374073 * safezoneH;
			onButtonClick = "[] spawn ARMST_notebook_remove_from_faction;";
			colorBackground[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
		};
		class skins: RscListbox
		{
			idc = 803;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.088 * safezoneH;
		};
		class skinstext: RscText
		{
			idc = -1;
			text = "Выбор скина для фракции";
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
			shadow=0;
			//colorText[] = {1,1,1,1};
			colorText[] = {0.66,0.325,0.035,1};
		};
		class close: RscButton
		{
			idc = -1;
			x = 0.78724 * safezoneW + safezoneX;
			y = 0.16537 * safezoneH + safezoneY;
			w = 0.0123439 * safezoneW;
			h = 0.022 * safezoneH;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);[] spawn ARMST_notebook_worktable_open;";
			colorBackground[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
		};
	};
};