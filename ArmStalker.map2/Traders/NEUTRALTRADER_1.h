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
	
	class NEUTRALTRADER_1 
	{
		ShowcaseType = "AGM_BOX_MISC"; 				//showcase must be placed near trader (<10m)
		ItemUp = 0.2;											//showed item  height relatively showcase
		CamRelative[] =  {0, 0.4, 1.5};									 //{-0.3, 0, 1.7};
		CamFOV =  1;
		noAllowedFactions[] = {"ARMST_RENEGADE","ARMST_MONOLITH"};			//
		
		class Sale 
		{
			class Weapons {
				displayName = $STR_TRADE_SECTION_WEAPONS;
				totalPrice = 10000;
				items[] = {
					//pistols
					{"av_makarov", 0.2},
					
					//drobociki 
					{"av_toz34",  1.5},
					//{"av_obrez", 0.5},
					{"av_obrez_full", 0.7},
					{"av_toz122", 1.4},
					{"av_mos", 2},
					{"arifle_KA_SKS_F", 2.5},
					
				
					//5.45
					{"arifle_av_aksu", 2.8},
					{"arifle_av_aksu_f", 2.8}

				};
			};			
			class Magazines {
				displayName = $STR_TRADE_SECTION_AMMO;
				totalPrice = 1000;
				items[] = {
					
					{"8Rnd_Mag_pm", 0.1},
					{"av_obrez2rnd", 0.2},
					{"av_5x_762", 1.5},
					{"10Rnd_M43_762x39_Ball", 2.5},
					{"30Rnd_ak_545x39_mag", 1.9}
					
				};
			};			
			class WeaponItems {
				displayName = $STR_TRADE_SECTION_ACCESSORIES;
				totalPrice = 1000;
				items[] = {
					//Flashlight
					{"acc_flashlight", 0.1}
					
				};
			};			
			class Medicine {
				displayName = $STR_TRADE_SECTION_MEDICINE;
				totalPrice = 1000;
				items[] = {
					
					{"AGM_Bandage", 0.1},
					{"ARMST_handwarmer", 0.5},
					{"armst_item_antirad", 1.0},					
					{"AGM_Morphine", 0.25}
					
				};
			};
			class Items {
				displayName = $STR_TRADE_SECTION_OTHERS;
				totalPrice = 1000;
				items[] = {
					//Bolts
					{"DAPSTALKERS_BOLTS", 0.1},
					{"armst_item_pda", 4.5},
					{"ItemCompass", 0.8},
					{"DETECTOR_RKS20", 3.5},
					{"tf_anprc148jem", 3},
					
					//baricad
					{"armst_bochka", 6},
					{"armst_Razorwire", 7},
					{"armst_pallet_vertical", 8},
					{"armst_armst_korob1", 20},
					
					{"Chemlight_red", 0.15},
					{"Chemlight_green", 0.15},
					{"Chemlight_blue", 0.15},
					{"Chemlight_yellow", 0.15},
					
					{"AGM_CableTie", 0.5},
					{"armst_MESHOK", 0.5},
					{"USSR_GUITAR", 5},
					{"Binocular", 1},
					{"Photoapparat", 1.5},
					{"armst_spicki", 0.2},
					{"ARMST_zippo", 2},
					{"ARMST_lighter", 0.2},
					{"ARMST_sleepingbag", 0.7},
					{"ARMST_cigarettes", 1.5},
					
					//Money
					{"armst_money100R", 1.0},
					{"armst_money5000R", 5.0},
					{"armst_money10000R", 10},
					{"armst_money50000R", 50},
					
					//Food
					{"Armst_item_bred",0.15},
					{"Armst_item_waterbottle",0.5}
					
				};
			};
			class Headgear {
				displayName = $STR_TRADE_SECTION_HELMETS;
				totalPrice = 1000;
				items[] = {
					{"armst_Hood_od5", 0.5},
					{"armst_Hood_od1", 0.5},
					{"armst_Hood_od3", 0.5},
					{"armst_Hood_od4", 0.5},
					{"armst_Hood_Tan", 0.5},
					{"H_Bandanna_sand", 0.5},
					{"H_Bandanna_sgg", 0.5},
					{"H_Bandanna_khk", 0.5},
					{"H_Bandanna_cbr", 0.5},
					
					
					//Gasmask
					{"G_Bandanna_khk", 0.4},
					{"G_Bandanna_oli", 0.4},
					{"armst_respirator", 0.6}
					
				};
			};
			class VESTS {
				displayName = $STR_TRADE_SECTION_VESTS;
				totalPrice = 10000;
				items[] = {
					
					{"p_ak", 0.3},
					{"p2_ak", 0.6},
					{"Kora_p2_ak", 1.0}
					
				};
			};
			class BACKPACKS {
				displayName = $STR_TRADE_SECTION_BACKPACKS;
				totalPrice = 1000;
				items[] = {
					{"ARMST_SUMKA", 0.5}
				};
			};
		};
		class Buy 
		{
			class Weapons {
				totalConsume = 5000;
				displayName = $STR_TRADE_SECTION_WEAPONS;
				items[] = {
					
					//pistols
					{"av_makarov", 0.2},
					
					//drobociki 
					{"av_toz34",  1.5},
					{"av_obrez", 0.5},
					{"av_obrez_full", 0.7},
				
					//5.45
					
					{"arifle_av_aksu", 2.5},
					{"arifle_av_aksu_f", 2.5}
					
				};
			};
			
			class Magazines {
				totalConsume = 50;
				displayName = $STR_TRADE_SECTION_AMMO;
				items[] = {
					
					{"8Rnd_Mag_pm", 0.1},
					{"av_obrez2rnd", 0.2},
					{"30Rnd_ak_545x39_mag", 1.0}
					
				};
			};
			
			class Remains {
				totalConsume = 1000;
				displayName = $STR_TRADE_SECTION_REMAINS;
				items[] = {
					
					//Mut parts
					{"Armst_mut_boar",3.5},
					{"Armst_mut_burer2",25},
					{"Armst_mut_controller",30},
					{"Armst_mut_krovosos",20},
					{"Armst_mut_chimera",60},
					{"Armst_mut_dog",1.5},
					{"Armst_mut_olen",1.0},
					{"Armst_mut_pauk",0.5},
					{"Armst_mut_plot",2.0},
					{"Armst_mut_psevdog",6.0},
					{"Armst_mut_poltergeist",30},
					{"Armst_mut_psevdogigant",70},
					{"Armst_mut_snork",10.0}
				};
			};
			
			class Artefacts {
				totalConsume = 1000;
				displayName = $STR_TRADE_SECTION_ARTEFACTS;
				items[] = {
					
					//Artefacts
					{"Item_Medusa_Unstab",1.0},
					{"Item_GRAVI_Unstab",0.65},
					{"Item_TEARS_Unstab",0.5},
					{"Item_STONEBLOOD_Unstab",6},
					{"Item_BATTERY_Unstab",4},
					{"Item_ELECTRA_Unstab",2},
					{"Item_CRYSTALL_Unstab",14},
					{"Item_SLUDE_Unstab",9},
					{"Item_FIRE_Unstab",7},
					{"Item_SOUL_Unstab",45},
					{"Item_SPIKES_Unstab",20},
					{"Item_MEAT_Unstab",4},
					{"Item_EMPTY_Unstab",30}
					
				};
			};
			
			class Items {
				totalConsume = 1000;
				displayName = $STR_TRADE_SECTION_OTHERS;
				items[] = {
					//Money
					{"armst_money100R", 1},
					{"armst_money5000R", 5},
					{"armst_money10000R", 10},
					{"armst_money50000R", 50},
					
					//Bolts
					{"DAPSTALKERS_BOLTS", 0.05},
					{"DETECTOR_RKS20", 0.05},
					
					//Medicine
					{"AGM_Bandage", 0.05}, 
					{"AGM_Morphine", 0.25},
					{"armst_item_antirad", 1.0},
					{"AGM_Bloodbag", 0.5},
					{"AGM_Epipen", 1},
					
					//items
					{"AGM_CableTie", 1.0},
					{"HandGrenade", 0.7},			
					{"MiniGrenade", 0.6},
					{"Chemlight_red", 0.15},
					{"Chemlight_green", 0.15},
					{"Chemlight_blue", 0.15},
					{"Chemlight_yellow", 0.15},
					{"USSR_GUITAR", 5},
					{"Binocular", 0.35},
					{"armst_spicki", 0.2},
					{"Photoapparat", 0.41},
					{"armst_item_pda", 0.5},
					
					//Food
					{"Armst_item_bred",0.15},
					{"Armst_item_waterbottle",0.5},
					
					//EmptyBottle
					{"armst_item_waterbottleempty",0.4},
					{"armst_item_vodkaempty",0.3},
					{"armst_item_Beerempty",0.2},
					
					//Headgear
					{"armst_Hood_od5", 0.25},
					{"armst_Hood_od1", 0.25},
					{"armst_Hood_od3", 0.25},
					{"armst_Hood_od4", 0.25},
					{"armst_Hood_Tan", 0.25},
					{"H_Bandanna_sand", 0.25},
					{"H_Bandanna_sgg", 0.25},
					{"H_Bandanna_khk", 0.25},
					{"H_Bandanna_cbr", 0.25},
					
					
					//Gasmask
					{"G_Bandanna_khk", 0.2},
					{"G_Bandanna_oli", 0.2},
					{"armst_respirator", 0.3},
					
					//Flashlight
					{"acc_flashlight", 0.01},

					//Vests
					{"p_ak", 0.3},
					{"p2_ak", 0.6},
					{"Kora_p2_ak", 1.0},
					
					//Backpacks
					{"ARMST_SUMKA", 0.15}
					
				};
			};
		};
	};
