	/* Локализация секций
		STR_TRADE_SECTION_WEAPONS - Оружие
		STR_TRADE_SECTION_AMMO - Патроны
		STR_TRADE_SECTION_ACCESSORIES - Приспособления
		STR_TRADE_SECTION_VESTS - Разгрузки
		STR_TRADE_SECTION_HELMETS - Шлемы
		STR_TRADE_SECTION_BACKPACKS - Рюкзаки
		STR_TRADE_SECTION_REMAINS - Останки
		STR_TRADE_SECTION_ARTEFACTS - Артефакты
		STR_TRADE_SECTION_MEDICINE - Медицина
		STR_TRADE_SECTION_OTHERS - Другое
	*/
	
	class SUPER_BARMEN 
	{
		ShowcaseType = "AGM_BOX_MISC"; 				//showcase must be placed near trader (<10m)
		ItemUp = 0.5;											//showed item  height relatively showcase
		CamRelative[] =  {0, 0.4, 1.7};									 //{-0.3, 0, 1.7};
		CamFOV =  1;
		noAllowedFactions[] = {"ARMST_RENEGADE"};		//
		
		class Sale 
		{
			class Weapons {
				displayName = $STR_TRADE_SECTION_WEAPONS;
				totalPrice = 1000;
				items[] = {
					
					{"arifle_av_vss", 500},
					{"arifle_av_asval", 550},
					{"av_pkp_base", 500},
					{"launch_RPG7V", 650},
					
					{"KA_SCAR_H", 250},
					{"KA_SCAR_H_EGLM", 280}
					
					
				};
			};	
		
			class Magazines {
				displayName = $STR_TRADE_SECTION_AMMO;
				totalPrice = 1000;
				items[] = {
				
					{"20Rnd_9x21_Mag", 0.6},
					{"8Rnd_Mag", 0.7},
					
					{"30Rnd_ak_545x39_mag", 5},
					
					{"30Rnd_ak_545x39_T_mag", 5},
					{"30Rnd_ak_762x39_mag", 10},
					
					{"30Rnd_ak_762x39_T_mag", 10},
					{"10Rnd_av_9x39mm_SP5", 10},
					{"10Rnd_av_9x39mm_SP6", 15},
					{"20Rnd_av_9x39mm_SP5", 20},
					
					{"20Rnd_av_9x39mm_SP6", 25},
					{"200Rnd_av_762x39_mag", 40},	
					
					{"10Rnd_av_762x39_svd", 15},
					{"RPG7_PG7V", 50},
					
					{"KA_20Rnd_762x51_M80", 20}
					
					
				
				};
			};			
		
			class WeaponItems {
				displayName = $STR_TRADE_SECTION_ACCESSORIES;
				totalPrice = 2000;
				items[] = {
					
					
				};
			};			
			
			class Items {
				displayName = $STR_TRADE_SECTION_OTHERS;
				totalPrice = 1000;
				items[] = {
					
					//Money
					{"armst_money100R", 1},
					{"armst_money5000R", 5},
					{"armst_money10000R", 10},
					{"armst_money50000R", 50}
					
				};
			};
			
			class VESTS {
				displayName = $STR_TRADE_SECTION_VESTS;
				totalPrice = 1000;
				items[] = {
					
					
					{"Armst_ekzo", 1000}
					
				};
			};		
		};
		
		class Buy 
		{
			
			class Items {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_OTHERS;
				items[] = {
					//Money
					{"armst_money100R", 2},
					{"armst_money5000R", 10},
					{"armst_money10000R", 20},
					{"armst_money50000R", 100},
					
					//Medicine
					{"AGM_Bandage", 0.25}, 
					{"ARMST_handwarmer", 0.5},
					{"AGM_Morphine", 0.5},
					{"armst_item_antirad", 2},
					{"AGM_Bloodbag", 3},
					{"AGM_Epipen", 1.5},

					//Food
					{"Armst_item_rathion", 2.0},
					{"Armst_item_bred",0.25},
					{"Armst_item_kolbasa",0.3},
					{"Armst_item_can",0.4},
					{"Armst_item_waterbottle",0.4},
					{"armst_item_Beer",0.25},
					{"armst_item_vodka",0.45}
			
				};
			};
		};
	
	};