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
	
	class BARMEN 
	{
		ShowcaseType = "AGM_BOX_MISC"; 				//showcase must be placed near trader (<10m)
		ItemUp = 0.4;											//showed item  height relatively showcase
		CamRelative[] =  {0, 0.4, 1.7};									 //{-0.3, 0, 1.7};
		CamFOV =  1;
		noAllowedFactions[] = {"ARMST_RENEGADE"};		//
		
		class Sale 
		{
			class Weapons {
				displayName = $STR_TRADE_SECTION_WEAPONS;
				totalPrice = 1000;
				items[] = {
					//pistols
					{"crowbar", 2},
					{"Axe2", 2},
					{"av_makarov", 2},
					{"av_revolver", 4}, 
					{"av_tt", 6},
					{"av_aps", 10}, 
					{"armst_Colt_1911_2", 5},
					{"av_pp2000", 15},
					{"av_kedrpp", 18},
					{"av_aek919", 23},

					
										
					//rifles
					{"arifle_av_aksu", 45},
					{"arifle_av_ak74_1", 80},
					{"arifle_av_aks74", 85},
					{"arifle_av_ak74s", 86},
					{"arifle_av_akm", 120}, 
					{"arifle_av_aek", 75},
					{"arifle_av_aekg", 85},
					{"av_AN94", 100},
					{"arifle_av_akms", 130},
					{"arifle_av_akms_f", 135}
				
				};
			};
			
			class Magazines {
				displayName = $STR_TRADE_SECTION_AMMO;
				totalPrice = 1000;
				items[] = {
					
					{"8Rnd_Mag_pm", 0.7},
					{"8Rnd_Mag", 0.8},
					{"6Rnd_45ACP_Cylinder", 0.4},
					{"9Rnd_45ACP_Mag", 0.6},
					{"20Rnd_9x21_Mag", 0.85},
					{"30Rnd_9x21_Mag", 3},
					{"30Rnd_ak_545x39_mag", 5},
					{"30Rnd_ak_762x39_mag", 10},
					{"av_12_M", 0.5},
					{"av_Saiga12_M", 1.5}
										
					
				};
			};			
			
			class WeaponItems {
				displayName = $STR_TRADE_SECTION_ACCESSORIES;
				totalPrice = 1000;
				items[] = {
					//Flashlight
					{"acc_flashlight", 0.001}
				};
			};			
			
			class Medicine {
				displayName = $STR_TRADE_SECTION_MEDICINE;
				totalPrice = 1000;
				items[] = {
					
					//Medicine
					{"AGM_Bandage", 0.25}, 
					{"ARMST_handwarmer", 0.5},
					{"AGM_Morphine", 0.5},
					{"armst_item_antirad", 2},
					{"AGM_Bloodbag", 3},
					{"AGM_Epipen", 1.5}
					
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
					{"armst_money50000R", 50},
					
					//Others
					{"DAPSTALKERS_BOLTS", 0.1},
					{"DETECTOR_RKS20", 3.5},
					{"AGM_CableTie", 0.1},
					{"armst_MESHOK", 0.1},
					{"Binocular", 2.5},
					{"Photoapparat", 3.5},
					{"armst_taynik_big", 60},
					
					{"armst_spicki", 0.05},
					{"ARMST_zippo", 2},
					{"ARMST_lighter", 0.2},
					
					{"ARMST_sleepingbag", 0.5},
					{"ARMST_cigarettes", 0.2},
					{"armst_item_chigarette", 0.19},
					{"tf_anprc148jem", 3},
					{"armst_scanerart", 17},
					{"ARMST_batteries", 0.65},
					
					
					{"armst_item_pda", 4.5},
					{"ItemCompass", 1},
					
					
					//Chemlight
					{"Chemlight_red", 0.4},
					{"Chemlight_green", 0.4},
					{"Chemlight_blue", 0.4},
					{"Chemlight_yellow", 0.4},
					
					{"av_bandage_grey", 2},
					{"av_bandage_orange", 2},
					{"av_bandage_green", 2},
					{"av_bandage_red", 2},
					{"av_bandage_blue", 2},
					{"av_bandage_white", 2},
					{"USSR_GUITAR", 6},
					
					//Food
					{"ARMST_gum",0.4},
					{"ARMST_skittles",0.4},
					{"ARMST_snickers",0.45},
					{"Armst_item_bred",0.5},
					{"Armst_item_kolbasa",0.7},
					{"Armst_item_can",0.8},
					{"Armst_item_waterbottle",1},
					{"armst_item_Beer",0.7},
					{"armst_item_vodka",1.0}
					
				};
			};
			
			class Headgear {
				displayName = $STR_TRADE_SECTION_HELMETS;
				totalPrice = 1000;
				items[] = {
					
					//Капюшоны
					{"armst_Hood_od5", 0.25},
					{"armst_Hood_od1", 0.25},
					{"armst_Hood_od3", 0.25},
					{"armst_Hood_od4", 0.25},
					{"armst_Hood_Tan", 0.25},
					{"armst_Hood_od2", 0.25},
					{"armst_Hood_Black", 0.25},
					{"armst_Hood2_Green", 0.25},
					{"armst_Hood2_od1", 0.25},
					{"armst_Hood2_od4", 0.25},
					{"armst_Hood2_od3", 0.25},
					{"armst_Hood2_od5", 0.25},
					{"armst_Hood2_Tan", 0.25},
					
					//Bandanna
					{"H_Bandanna_cbr",  0.25},
					{"H_Bandanna_sand", 0.25},
					{"H_Bandanna_camo", 0.25},
					{"H_Bandanna_surfer_grn", 0.25},
					{"H_Bandanna_khk", 0.25},
					{"H_Bandanna_gry", 0.25},
					{"H_Cap_grn", 0.25},
					{"H_Cap_tan", 0.25},
					{"H_Cap_oli", 0.25},
					{"H_Cap_blk", 0.25},
					
					//Helmets
					{"SH_68", 5},
					{"kaska_nem", 3},
					{"ZSH_1_kam", 6},
					{"Maska1_ZN", 8},
					{"SH_60", 5.0},
					{"Altyn_ch_ber", 9},
					{"sfera", 12},
					{"Vulkan", 15},
					
					//Gasmask
					{"G_Bandanna_tan", 0.2},
					{"G_Bandanna_oli", 0.2},
					{"G_Bandanna_khk", 0.2},
					{"G_Bandanna_blk", 0.2},
					
					{"armst_respirator", 1},
					{"armst_Gasslon", 10},
					{"armst_GasP5", 15},
					{"armst_GasP7", 20},
					{"armst_Gasscout", 15},
                    {"armst_R5_filter", 60},
					{"armst_R5_SH2_filter", 62},
					{"armst_R5_P_filter", 67}			
				};
			};
			
			class VESTS {
				displayName = $STR_TRADE_SECTION_VESTS;
				totalPrice = 1000;
				items[] = {
					
					
					{"Smersh_AK", 6},        //обычный
					{"Smersh_SVD", 5},          //облегчённый
					{"Smersh_AK_GP", 8},     ////расширенный
					{"Smersh_PK", 12},         //улучшеный
					{"6B3", 12},
					{"Tarzan_ch", 15},
					{"V94_zel2", 17},
					{"Smersh_def_SVD", 20},
					{"Smersh_def_AK", 22},
					{"Smersh_kora_AK", 18},
					{"Rys_m", 20},
					{"Rys_m_kora", 22},
					{"Rys_m_GP", 18},
					{"Armst_sevastalk", 150}
					
				};
			};
			
			class BACKPACKS {
				displayName = $STR_TRADE_SECTION_BACKPACKS;
				totalPrice = 1000;
				items[] = {
					
					
				
					{"ARMST_SUMKA1", 3.0},
					{"ARMST_SUMKA8", 5},
					{"ARMST_SUMKA11", 7},
					{"ARMST_SUMKA7", 4},
					{"ARMST_SUMKA9", 6},
					{"ARMST_SUMKA12", 8}
					
				};
			};
		};
		
		class Buy 
		{
			class Weapons {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_WEAPONS;
				items[] = {
				
					//pistols
					{"av_makarov", 4},
					{"av_tt", 8},
					{"av_aps", 8}, 
					
										
					//rifles
					{"arifle_av_akm", 65}, 
					{"arifle_av_aek", 50},
					{"arifle_av_aekg", 55},
					{"av_AN94", 50},
					{"arifle_av_akms", 45},
					{"arifle_av_akms_f", 45}
				};
			};
			
			class Magazines {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_AMMO;
				items[] = {
					
					{"30Rnd_ak_545x39_mag", 3},
					{"8Rnd_Mag_pm", 0.7},
					{"20Rnd_9x21_Mag", 0.85},
					{"30Rnd_ak_762x39_mag", 2},
					{"av_Saiga12_M", 1.5}
					
				};
			};
			
			class Remains {
				totalConsume = 1000;
				displayName = $STR_TRADE_SECTION_REMAINS;
				items[] = {
					
					//Mut parts
					{"Armst_mut_boar",2},
					{"Armst_mut_burer2",10},
					{"Armst_mut_controller",4},
					{"Armst_mut_krovosos",8},
					{"Armst_mut_chimera",20},
					{"Armst_mut_dog",1},
					{"Armst_mut_olen",1},
					{"Armst_mut_pauk",2},
					{"Armst_mut_plot",0.3},
					{"Armst_mut_psevdog",1},
					{"Armst_mut_poltergeist",10},
					{"Armst_mut_psevdogigant",70},
					{"Armst_mut_snork",1}
				};
			};
			
			class Artefacts {
				totalConsume = 1000;
				displayName = $STR_TRADE_SECTION_ARTEFACTS;
				items[] = {
					
					//Artefacts
					//anomylki
					{"Item_TEARS_Unstab",1},
					{"Item_Medusa_Unstab",1.6},
					{"Item_GRAVI_Unstab",3},
					{"Item_STONEBLOOD_Unstab",5}
					
					
				};
			};
			
			class Items {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_OTHERS;
				items[] = {
					//Money
					{"armst_money100R", 2},
					{"armst_money5000R", 10},
					{"armst_money10000R", 20},
					{"armst_money50000R", 100},
					
					//Others
					{"DAPSTALKERS_BOLTS", 0.1},
					{"DETECTOR_RKS20", 3.5},
					{"AGM_CableTie", 0.1},
					{"armst_MESHOK", 0.1},
					{"Binocular", 2.5},
					{"Photoapparat", 3.5},
					{"ARMST_potatobag", 12},
					{"ARMST_zippo", 0.5},
					{"ARMST_sleepingbag", 0.5},
					{"ARMST_cigarettes", 0.1},
					{"armst_spicki", 0.05},
					{"tf_anprc148jem", 0.5},
					//musor
					{"ARMST_book_manual", 0.2},
					{"ARMST_book_novel", 0.2},
					{"ARMST_cards", 0.3},
					{"ARMST_comic", 0.3},
					{"ARMST_elec_powder", 0.4},
					{"ARMST_lighter", 0.1},
					{"ARMST_multitool", 0.4},
					{"ARMST_newspaper", 0.2},
					{"ARMST_picture_fam", 0.1},
					{"ARMST_picture_gf", 0.2},
					{"ARMST_socks_green", 0.13},
					{"ARMST_socks_black", 0.13},
					{"ARMST_tanboxer", 0.22},
					{"ARMST_toiletpaper", 0.6},
					{"ARMST_towel", 0.5},
					{"ARMST_vhstape", 0.2},
					{"ARMST_550cord", 0.4},
					{"ARMST_acetone", 0.38},
					{"ARMST_batteries", 0.27},
					{"ARMST_bungeecord", 0.82},
					{"ARMST_canopener", 0.4},
					{"ARMST_detcord", 1.4},
					{"ARMST_ducttape", 1.25},
					{"ARMST_dumbphone", 1,6},
					{"ARMST_firestarter", 1.1},
					{"ARMST_gameboy", 1.6},
					{"ARMST_hammer", 1},
					{"ARMST_hexamine", 0.8},
					{"ARMST_hydrochloric", 0.9},
					{"ARMST_nails", 0.6},
					{"ARMST_steelpipe", 1},
					{"ARMST_toxicgas", 1.3},
					{"ARMST_wpnclnkit", 2.24},
					{"ARMST_goldwatch", 2.8},
					{"ARMST_socks_green_dirty", 0.03},
					{"ARMST_socks_black_dirty", 0.03},
					{"ARMST_tanboxer_dirty", 0.02},
					{"ARMST_airfilter", 3},
					{"ARMST_cellphone", 3},
					{"ARMST_clutch_disk", 4},
					{"ARMST_fanbelt", 0.1},
					{"ARMST_piston", 2.2},
					{"ARMST_solderingiron", 1},
					{"ARMST_spoon", 0.06},
					{"ARMST_leaflet_psyop", 0.02},
					{"ARMST_steeringwheel", 1.7},
					{"ARMST_valvesprings", 1.8},
					{"ARMST_wirecutter", 0.4},
					{"ARMST_akkum", 4},
					{"ARMST_bumaga", 0.02},
					{"ARMST_kanistra", 1.5},
					{"ARMST_instruments", 2.4},
					{"ARMST_matplat", 2},
					{"ARMST_gaz", 3.6},
					{"armst_svecha", 1.3},
					{"armst_karburator", 3},
					{"armst_tkan", 0.2},
					{"armst_brezent", 1},
					{"armst_kevlar", 3.48},
					{"armst_lopatka", 1},
					{"armst_skipidar", 0.6},
					{"armst_broneplastina", 4},
					{"armst_brokenradio", 0.2},
					{"armst_brokenpda", 1.2},
					{"armst_zeton", 0.4},
					{"armst_polhir", 3.6},
					{"armst_medinst", 3},
					{"armst_arthelp", 4},
					{"armst_medperchatki", 0.4},
					{"armst_scaner", 5},
					{"armst_scanerart", 4.6},
					{"armst_doska", 1},
					{"armst_bochka", 1.2},
					{"armst_545", 0.06},
					{"armst_762", 0.08},
					{"armst_steklo", 1.4},
					
					{"armst_item_pda", 3.5},
					{"ItemCompass", 1},
					
					
					//Chemlight
					{"Chemlight_red", 0.4},
					{"Chemlight_green", 0.4},
					{"Chemlight_blue", 0.4},
					{"Chemlight_yellow", 0.4},
					
					{"USSR_GUITAR", 0.5},
					
					//Food
					{"ARMST_gum",0.4},
					{"ARMST_skittles",0.4},
					{"ARMST_snickers",0.45},
					{"Armst_item_bred",0.5},
					{"Armst_item_bred",0.5},
					{"Armst_item_kolbasa",0.7},
					{"Armst_item_can",0.8},
					{"Armst_item_waterbottle",1},
					{"armst_item_Beer",0.7},
					{"armst_item_vodka",1.0},
					
					//EmptyBottle
					{"armst_item_waterbottleempty", 0.4},
					{"armst_item_vodkaempty", 0.3},
					{"armst_item_Beerempty", 0.2},
					
					//Medicine
					{"AGM_Bandage", 0.25}, 
					{"AGM_Morphine", 0.5},
					{"armst_item_antirad", 2},
					{"AGM_Bloodbag", 3},
					{"AGM_Epipen", 1.5},
					
					//Flashlight
					{"acc_flashlight", 0.001},
					
				//Headgear
					//Капюшоны
					{"armst_Hood_od5", 0.25},
					{"armst_Hood_od1", 0.25},
					{"armst_Hood_od3", 0.25},
					{"armst_Hood_od4", 0.25},
					{"armst_Hood_Tan", 0.25},
					{"armst_Hood_od2", 0.25},
					{"armst_Hood_Black", 0.25},
					
					//Bandanna
					{"H_Bandanna_cbr",  0.25},
					{"H_Bandanna_sand", 0.25},
					{"H_Bandanna_camo", 0.25},
					{"H_Bandanna_surfer_grn", 0.25},
					{"H_Bandanna_khk", 0.25},
					{"H_Bandanna_gry", 0.25},
					{"H_Cap_grn", 0.25},
					{"H_Cap_tan", 0.25},
					{"H_Cap_oli", 0.25},
					{"H_Cap_blk", 0.25},
					
					//Helmets
					{"SH_68", 5},
					{"kaska_nem", 3},
					{"ZSH_1_kam", 6},
					{"Maska1_ZN", 8},
					{"SH_60", 5.0},
					{"Altyn_ch_ber", 9},
					{"sfera", 12},
					{"Vulkan", 15},
					
					//Gasmask
					{"G_Bandanna_tan", 0.2},
					{"G_Bandanna_oli", 0.2},
					{"G_Bandanna_khk", 0.2},
					{"G_Bandanna_blk", 0.2},
					
					{"armst_respirator", 1},
					{"armst_Gasslon", 10},
					{"armst_GasP5", 15},
					{"armst_GasP7", 20},
					{"armst_Gasscout", 15},
					
					//Vests
					{"6B3", 12},
					{"Tarzan_ch", 15},
					{"V94_zel2", 17},
					{"Smersh_def_SVD", 20},
					{"Smersh_def_AK", 22},
					{"Smersh_kora_AK", 18},
					{"Rys_m", 20},
					{"Rys_m_kora", 22},
					{"Rys_m_GP", 18},
					
					//Backpacks
					{"ARMST_SUMKA1", 3.0},
					{"ARMST_SUMKA8", 5},
					{"ARMST_SUMKA11", 7},
					{"ARMST_SUMKA7", 4},
					{"ARMST_SUMKA9", 6},
					{"ARMST_SUMKA12", 8}
					
				};
			};
		};
	};
