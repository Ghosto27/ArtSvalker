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
	
	class BARMEN_SEBJAN 
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
					//pistols
					{"crowbar", 2},
					{"Axe2", 2},
					{"av_makarov", 2},
					{"av_tt", 4},
					{"av_aps", 4}, 
					{"armst_Colt_1911_2", 3},
					
										
					//rifles
					{"arifle_av_aksu", 45}, 
					{"arifle_av_aksu_f", 50},
					{"av_Saiga12K", 20},
					{"arifle_av_ak74_1", 85},
					{"arifle_av_ak74s", 86},
					{"arifle_av_akm", 120},
					{"arifle_av_ak74m", 90},
					{"arifle_av_ak74m_gp", 105},
					{"arifle_av_aks74", 85}
					
				};
			};	
		
			class Magazines {
				displayName = $STR_TRADE_SECTION_AMMO;
				totalPrice = 1000;
				items[] = {
					
					{"30Rnd_ak_545x39_mag", 5},
					{"8Rnd_Mag_pm", 0.3},
					{"8Rnd_Mag", 0.8},
					{"20Rnd_9x21_Mag", 0.4},
					{"9Rnd_45ACP_Mag", 0.5},
					{"30Rnd_ak_545x39_T_mag", 5},
					
					
					{"30Rnd_ak_762x39_T_mag",10},
					{"10Rnd_av_762x39_svd", 15},
					{"30Rnd_ak_762x39_mag", 10},
					
					{"av_Saiga12_M", 0.6}
					
					
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
		
			class Items {
				displayName = $STR_TRADE_SECTION_OTHERS;
				totalPrice = 1000;
				items[] = {
					
					//Items
					{"DAPSTALKERS_BOLTS", 0.1},
					{"DETECTOR_RKS20", 3.5},
					{"AGM_CableTie", 0.1},
					{"armst_MESHOK", 0.1},
					{"Binocular", 2.5},
					{"Photoapparat", 3.5},
					{"ARMST_potatobag", 2},
					{"armst_taynik_big", 120},
					{"armst_spicki", 0.05},
					{"ARMST_zippo", 3},
					{"ARMST_lighter", 0.4},
					{"ARMST_sleepingbag", 0.5},
					{"ARMST_cigarettes", 0.18},
					{"tf_anprc148jem", 4},
					{"armst_arthelp", 70},
					
					{"armst_item_detectors_otklick", 19},
					{"armst_item_detectors_medved", 50},
					{"armst_item_detectors_svarog", 100},
					{"ARMST_batteries", 0.9},
					
					
					{"armst_item_pda", 4},
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
					{"USSR_GUITAR", 5},
					{"ARMST_akkum", 6},
					
					//Money
					{"armst_money100R", 1.0},
					{"armst_money5000R", 5.0},
					{"armst_money10000R", 10},
					{"armst_money50000R", 50},

					//Food
					{"Armst_item_bred",0.25},
					{"Armst_item_kolbasa",0.3},
					{"Armst_item_can",0.4},
					{"Armst_item_waterbottle",0.4},
					{"armst_item_Beer",0.25},
					{"armst_item_vodka",0.45}
					
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
					{"SH_68", 4},
					{"kaska_nem", 3},
					{"ZSH_1_kam", 5},
					{"Maska1_ZN", 7},
					{"SH_60", 4},
					{"Altyn_ch_ber", 15},
					{"sfera", 17.5},
					{"Vulkan_ZV", 14},
					{"Altyn_ch_ch", 16},
					{"Vulkan", 20},
					
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
					{"armst_R5", 60},
					{"armst_R5_SH2", 63},
					{"armst_R5_P", 69}
					
				};
			};
			
			class VESTS {
				displayName = $STR_TRADE_SECTION_VESTS;
				totalPrice = 1000;
				items[] = {
					
					{"Kora", 1.5},
					{"Kora_p_ak", 2},
					{"Smersh_SVD", 8},
					{"Rys_m", 17},
					{"Rys_m_kora", 19},
					{"Rys_m_GP", 15},
					{"Smersh_AK", 10}
					
					
				};
			};
			
			class BACKPACKS {
				displayName = $STR_TRADE_SECTION_BACKPACKS;
				totalPrice = 1000;
				items[] = {
					{"ARMST_RUKZAK_GREEN1", 1},
					{"ARMST_RUKZAK_GREEN", 1},
					{"ARMST_RUKZAK_BLUE1", 1},
					{"ARMST_RUKZAK_BLACKBLUE", 1},
					{"ARMST_RUKZAK_GRAY", 1},
					{"ARMST_RUKZAK_BLACK2", 1},
					{"ARMST_RUKZAK_GREENCAMO", 1},
					{"ARMST_RUKZAK_BLACK", 1},
					{"ARMST_SUMKA1", 5},
					{"armst_backpack_ballon", 180}
				
					
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
					{"arifle_av_aksu", 40}, 
					{"arifle_av_aksu_f", 40},
					{"av_Saiga12K", 25},
					{"arifle_av_ak74_1", 50},
					{"arifle_av_ak74s", 50},
					{"arifle_KA_SKS_F", 29.4}, 
					{"arifle_av_akm", 60},
					{"arifle_av_aksu", 40},
					{"arifle_av_ak74m", 55},
					{"arifle_av_ak74m_gp", 60},
					{"arifle_av_aks74", 50}
				};
			};
			
			class Magazines {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_AMMO;
				items[] = {
					
					{"30Rnd_ak_545x39_mag", 1.5},
					{"8Rnd_Mag_pm", 0.3},
					{"20Rnd_9x21_Mag", 0.4},
					
					{"30Rnd_ak_545x39_T_mag", 2},
					
					
					
					{"10Rnd_av_762x39_svd", 2},
					{"30Rnd_ak_762x39_mag", 3},
					
					{"av_Saiga12_M", 0.6}
					
				};
			};
			
			class Remains {
				totalConsume = 1000;
				displayName = $STR_TRADE_SECTION_REMAINS;
				items[] = {
					
					//Mut parts
					{"Armst_mut_boar",1},
					{"Armst_mut_burer2",7},
					{"Armst_mut_controller",10},
					{"Armst_mut_krovosos",6},
					{"Armst_mut_chimera",30},
					{"Armst_mut_dog",1},
					{"Armst_mut_olen",2},
					{"Armst_mut_cat",4},
					{"Armst_mut_izlom",11},
					{"Armst_mut_tushkano",0.6},
					{"Armst_mut_pauk",1},
					{"Armst_mut_plot",1},
					{"Armst_mut_psevdog",1.5},
					{"Armst_mut_poltergeist",7},
					{"Armst_mut_snork",3}
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
					{"Item_STONEBLOOD_Unstab",6},
					
					{"Item_SPIKES_Unstab",8},
					{"Item_EMPTY_Unstab",15},
					{"Item_MEAT_Unstab",40}
					
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
					
					//Items
					{"DAPSTALKERS_BOLTS", 0.1},
					{"DETECTOR_RKS20", 3.5},
					{"AGM_CableTie", 0.1},
					{"armst_MESHOK", 0.1},
					{"Binocular", 2.5},
					{"Photoapparat", 3.5},
					{"ARMST_zippo", 0.5},
					{"ARMST_sleepingbag", 0.5},
					{"ARMST_cigarettes", 0.5},
					
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
					
					//Money
					{"armst_money100R", 1.0},
					{"armst_money5000R", 5.0},
					{"armst_money10000R", 10},
					{"armst_money50000R", 50},

					//Food
					{"Armst_item_bred",0.25},
					{"Armst_item_kolbasa",0.3},
					{"Armst_item_can",0.4},
					{"Armst_item_waterbottle",0.4},
					{"armst_item_Beer",0.25},
					{"armst_item_vodka",0.45},

										
					//EmptyBottle
					{"armst_item_waterbottleempty",0.4},
					{"armst_item_vodkaempty",0.3},
					{"armst_item_Beerempty",0.2},
					
					//Medicine
					{"AGM_Bandage", 0.25}, 
					{"AGM_Morphine", 0.5},
					{"armst_item_antirad", 2},
					{"AGM_Bloodbag", 3},
					{"AGM_Epipen", 1.5},
					
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
					{"SH_68", 4},
					{"kaska_nem", 3},
					{"ZSH_1_kam", 5},
					{"Maska1_ZN", 7},
					{"SH_60", 4},
					{"Altyn_ch_ber", 15},
					{"sfera", 12},
					{"Vulkan_ZV", 10.0},
					{"Altyn_ch_ch", 6},
					{"Vulkan", 10},
					
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
					
					//Flashlight
					{"acc_flashlight", 0.005},
					
										
					//Vests
					{"Kora", 1.5},
					{"Kora_p_ak", 2},
					{"Smersh_SVD", 8},
					{"Rys_m", 17},
					{"Rys_m_kora", 19},
					{"Rys_m_GP", 10},
					{"Smersh_AK", 10},
					
					//Backpacks
					{"ARMST_RUKZAK_GREEN1", 1},
					{"ARMST_RUKZAK_GREEN", 1},
					{"ARMST_RUKZAK_BLUE1", 1},
					{"ARMST_RUKZAK_BLACKBLUE", 1},
					{"ARMST_RUKZAK_GRAY", 1},
					{"ARMST_RUKZAK_BLACK2", 1},
					{"ARMST_RUKZAK_GREENCAMO", 1},
					{"ARMST_RUKZAK_BLACK", 1},
					{"ARMST_SUMKA1", 5}
					
				};
			};
		};
	
	};