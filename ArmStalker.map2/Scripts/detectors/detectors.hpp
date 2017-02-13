class detector_medved
{
	idd = 56483;
	movingenable = 0;
	enableSimulation = true;
	class controlsBackground {
			class detectorBack: RscPicture
			{
				idc = -1;
				text = "\armst\armst_item\detectors\bear\clear.paa";
				x = 0.386562 * safezoneW + safezoneX;
				y = 0.181 * safezoneH + safezoneY;
				w = 0.20625 * safezoneW;
				h = 0.638 * safezoneH;
			};
		};
	
	class Controls {
			class detector: RscPicture
			{
				idc = 1200;
				text = "";
				x = 0.386562 * safezoneW + safezoneX;
				y = 0.181 * safezoneH + safezoneY;
				w = 0.20625 * safezoneW;
				h = 0.638 * safezoneH;
			};
			class art: RscText
			{
				idc = -1;
				text = "Артефакт";
				x = 0.428854 * safezoneW + safezoneX;
				y = 0.583259 * safezoneH + safezoneY;
				w = 0.0515625 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class daln: RscText
			{
				idc = -1;
				text = "в 100м";
				x = 0.427812 * safezoneW + safezoneX;
				y = 0.61 * safezoneH + safezoneY;
				w = 0.0532292 * safezoneW;
				h = 0.0225925 * safezoneH;
			};
			class start: RscButton
			{
				idc = 1605;
				text = "Начать";
				x = 0.496407 * safezoneW + safezoneX;
				y = 0.561482 * safezoneH + safezoneY;
				w = 0.0422917 * safezoneW;
				h = 0.0235185 * safezoneH;
				onButtonClick="[] spawn ARMST_art_detector_medved;";
			};
			class find: RscText
			{
				idc = 1601;
				text = "";
				x = 0.427812 * safezoneW + safezoneX;
				y = 0.636741 * safezoneH + safezoneY;
				w = 0.0527084 * safezoneW;
				h = 0.0207407 * safezoneH;
			};
	};
};
class detector_otklick
{
	idd = 56484;
	movingenable = 0;
	enableSimulation = true;
	class controlsBackground {
			class detector_otklick_Back: RscPicture
			{
				idc = -1;
				text = "\armst\armst_item\detectors\otklick\otklick_off.paa";
				x = 0.407187 * safezoneW + safezoneX;
				y = 0.181 * safezoneH + safezoneY;
				w = 0.159844 * safezoneW;
				h = 0.638 * safezoneH;
			};
		};
	
	class Controls {
			class detector: RscPicture
			{
				idc = 1200;
				text = "";
				x = 0.407187 * safezoneW + safezoneX;
				y = 0.181 * safezoneH + safezoneY;
				w = 0.159844 * safezoneW;
				h = 0.638 * safezoneH;
			};
			class start: RscButton
			{
				idc = -1;
				text = "Начать";
				x = 0.463906 * safezoneW + safezoneX;
				y = 0.577 * safezoneH + safezoneY;
				w = 0.0464063 * safezoneW;
				h = 0.022 * safezoneH;
				onButtonClick="[] spawn ARMST_art_detector_otklick;";
			};
	};
};