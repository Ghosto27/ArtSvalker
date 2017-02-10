/*
	Dialog for Crafting
	Author: Dragster <1dragsteron@gmail.com>
*/
class craft
{
	idd = 88300;
	movingenable = 0;
	enableSimulation = true;

	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			//text = "craft\craft.paa";
			text = "armst_client\GUI\craft\craft.paa";
			idc = -1;	
			x = 0; y = 0;
			w = 1; h = 1;
			colorBackground[] = {0,0,0,1};
		};
	};
	
	class Controls {
		class RscListbox_1500: RscListbox
		{
			idc = 8300;
			x = 0.125;
			y = 0.16;
			w = 0.275;
			h = 0.6;
		};
		class RscListbox_1501: RscListbox
		{
			idc = 8301;
			x = 0.5875;
			y = 0.16;
			w = 0.2875;
			h = 0.6;
		};
		class add_item: RscButton
		{
			idc = 1600;
			text = ">>";
			x = 0.125;
			y = 0.8;
			w = 0.275;
			h = 0.04;
			onButtonClick = "call ARMST_craft_add_item_to_list;";
		};
		class remove_item: RscButton
		{
			idc = 1601;
			text = "<<"; 
			x = 0.125;
			y = 0.88;
			w = 0.275;
			h = 0.04;
			onButtonClick = "call ARMST_craft_remove_item_from_list;";
		};
		class craft: RscButton
		{
			idc = 1602;
			text = "КРАФТ"; 
			x = 0.5875;
			y = 0.8;
			w = 0.2875;
			h = 0.04;
			onButtonClick = "[] spawn ARMST_craft_click_button;";
		};
		class items_player: RscText
		{
			idc = 8310;
			text = "Ваши предметы"; 
			x = 0.125;
			y = 0.1;
			w = 0.275;
			h = 0.04;
			lineSpacing=3;
			shadow=0;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0, 0, 0, 0};
		};
		class select_items: RscText
		{
			idc = 8311;
			text = "Выбранные"; 
			x = 0.5875;
			y = 0.1;
			w = 0.2875;
			h = 0.04;
			lineSpacing=3;
			shadow=0;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0, 0, 0, 0};
		};
		class ButtClose : RscButton {
			idc = -1;
			text = "Закрыть";
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);";
			x = 0.5875;
			y = 0.88;
			w = 0.2875;
			h = 0.04;
			color[] = {.95,.1,.1,1};
		};
	};
};