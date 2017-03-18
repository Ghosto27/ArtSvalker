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
					{"av_revolver", 4.8},
					{"av_tt", 6},
					{"av_makarov", 6.9}, 
					{"armst_Colt_1911_2", 8.2},
					
					{"av_obrez", 9},
					{"av_toz34", 19},
					{"mp135", 25},
					{"av_mos", 18},
					{"av_toz122", 31},
					{"AV_M1014", 42},
					{"arifle_av_aksu", 68},
					{"arifle_av_aksu_f", 68},
					{"arifle_av_ak74old", 77}
					
				};
			};		
			
			class Magazines {
				displayName = $STR_TRADE_SECTION_AMMO;
				totalPrice = 1000;
				items[] = {
					
					{"8Rnd_Mag_pm", 0.728},
					{"8Rnd_Mag", 0.712},
					{"9Rnd_45ACP_Mag", 0.758},
					{"6Rnd_45ACP_Cylinder", 0.622},
					
					{"av_12_p", 0.37},
					{"av_4_p", 0.42},
					{"av_Benelip_p", 0.47},
					
					{"av_12_M", 0.38},
					{"av_4_M", 0.44},
					{"av_Beneli_M", 0.5},
					{"av_5x_762", 0.537},
					
					{"10Rnd_T45_762x39_Tracer_Green", 0.78},
					{"10Rnd_M43_762x39_Ball", 0.8},
					{"10Rnd_BP_762x39_AP", 0.82},
                    {"10Rnd_BZ_762x39_API", 0.85},
                    
					{"30Rnd_ak_545x39_T_mag", 5.2},
					{"30Rnd_ak_545x39_mag", 6}
				};
			};
			
			class WeaponItems {
				displayName = $STR_TRADE_SECTION_ACCESSORIES;
				totalPrice = 1000;
				items[] = {
					//Flashlight
					{"acc_flashlight", 1.3}
					
				};
			};	
			
			class Medicine {
				displayName = $STR_TRADE_SECTION_MEDICINE;
				totalPrice = 1000;
				items[] = {
					
					{"AGM_Bandage", 0.41},
					//{"ARMST_handwarmer", 1},	
					{"AGM_Morphine", 4}
					
				};
			};
			
			class Items {
				displayName = $STR_TRADE_SECTION_OTHERS;
				totalPrice = 1000;
				items[] = {
					//Others
					{"DAPSTALKERS_BOLTS", 0.1},
					{"DETECTOR_RKS20", 5.999},
					{"ItemCompass", 2.5},
					{"armst_item_pda", 7.3},
					{"armst_spicki", 0.05},
					{"ARMST_zippo", 2.5},
					{"ARMST_lighter", 0.25},
					{"ARMST_sleepingbag", 1.6},
					{"ARMST_cigarettes", 0.14},
					{"armst_item_chigarette", 0.16},
					{"tf_pnr1000a", 8.4},
					//tf_rf7800str
					//tf_microdagr
					//voen_tf_anprc154
					{"armst_item_detectors_otklick", 15},
					{"ARMST_batteries", 0.4},
					
					//Chemlight
					{"Chemlight_red", 0.113},
					{"Chemlight_green", 0.113},
					{"Chemlight_blue", 0.113},
					{"Chemlight_yellow", 0.113},
					
					//Money
					{"armst_money100R", 1.0},
					{"armst_money5000R", 5.0},
					{"armst_money10000R", 10},
					{"armst_money50000R", 50},
					
					//Food
					{"Armst_item_bred", 0.258},
					{"Armst_item_kolbasa", 2},
					{"Armst_item_waterbottle", 0.357},
					//{"Armst_item_can",1.2},
					{"Armst_item_Sgushenka",1.7},
					//{"Armst_item_tushonka",0.73},
					//{"ARMST_gum",0.07},
					//{"ARMST_skittles",0.223},
					//{"Armst_item_snorkers",0.275},
					{"armst_item_vodka",1.45}
					
				};
			};
			
			class Headgear {
				displayName = $STR_TRADE_SECTION_HELMETS;
				totalPrice = 1000;
				items[] = {
					
					//Капюшоны
					{"armst_Hood_od5", 0.499},
					{"armst_Hood_od1", 0.499},
					{"armst_Hood_od3", 0.499},
					{"armst_Hood_od4", 0.499},
					{"armst_Hood_Tan", 0.499},
					{"armst_Hood2_Green", 0.499},
					{"armst_Hood2_od1", 0.499},
					{"armst_Hood2_od4", 0.499},
					{"armst_Hood2_od3", 0.499},
					{"armst_Hood2_od5", 0.499},
					{"armst_Hood2_Tan", 0.499},
					//Bandanna
					{"H_Bandanna_sand", 0.3},
					{"H_Bandanna_sgg", 0.3},
					{"H_Bandanna_khk", 0.3},
					{"H_Bandanna_cbr", 0.3},
					{"H_Bandanna_gry", 0.3},
					//панамки и шапки
					{"H_Booniehat_khk", 0.72},
					{"H_Booniehat_oli", 0.72},
					{"armst_cap_band", 0.35},
					{"armst_cap_dolg", 0.35},
					{"armst_cap_free3", 0.35},
					{"armst_cap_free4", 0.35},
					{"armst_cap_free", 0.35},
					{"armst_cap_army", 0.35},
					{"armst_cap_free2", 0.35},
					{"armst_cap_merc", 0.35},
					
					
					//Gasmask
					{"G_Bandanna_khk", 0.6},
					{"G_Bandanna_oli", 0.6},
					{"G_Bandanna_blk", 0.6},
					{"G_Bandanna_tan", 0.6},
					{"G_Lowprofile", 1.36},
					{"armst_one_eye", 2},
					{"G_Balaclava_blk", 0.9},
					{"G_Balaclava_oli", 0.9},
					{"armst_gasmaskBastard", 11.35}
					
				};
			};
			
			class VESTS {
				displayName = $STR_TRADE_SECTION_VESTS;
				totalPrice = 1000;
				items[] = {
					
					{"p_ak", 0.5},
					{"p2_ak", 1},
					{"Kora", 3},
					{"Kora_p_ak", 3.5},
					{"Kora_p2_ak", 4},
					{"Smersh_AK", 6.4},
					{"6B3", 18},
					{"6B5", 10.15}
				};
			};
			
			class BACKPACKS {
				displayName = $STR_TRADE_SECTION_BACKPACKS;
				totalPrice = 1000;
				items[] = {
					
					{"ARMST_SUMKA1", 2.3},
					{"ARMST_RUKZAK", 5.5},
					{"ARMST_RUKZAK_BLACK", 5.5},
					{"ARMST_RUKZAK_GREEN1", 5.5},
					{"ARMST_RUKZAK_GREENCAMO", 5.5},
					{"ARMST_RUKZAK_GRAY", 5.5},
					{"ARMST_SUMKA", 8.5},
					{"ARMST_SUMKA8", 10.13},
					{"ARMST_SUMKA4", 17}
					
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
					{"av_revolver", 4.8},
					{"av_tt", 6},
					{"av_makarov", 6.9}, 
					{"armst_Colt_1911_2", 8.2},
					
					{"av_obrez", 9},
					{"av_toz34", 19},
					{"mp135", 25},
					{"armst_Remington870", 33},
					{"av_mos", 18},
					{"av_toz122", 31},
					{"arifle_KA_SKS_F", 17.3},
					{"AV_M1014", 42},
					{"arifle_av_aksu", 68},
					{"arifle_av_aksu_f", 68},
					{"arifle_av_ak74old", 77}
					
				};
			};
			
			class Magazines {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_AMMO;
				items[] = {
					
					{"8Rnd_Mag_pm", 0.728},
					{"8Rnd_Mag", 0.712},
					{"9Rnd_45ACP_Mag", 0.758},
					{"6Rnd_45ACP_Cylinder", 0.622},
					
					{"av_12_p", 0.37},
					{"av_4_p", 0.42},
					{"av_Benelip_p", 0.47},
					
					{"av_12_M", 0.38},
					{"av_4_M", 0.44},
					{"av_Beneli_M", 0.5},
					{"av_5x_762", 0.537},
					
					{"10Rnd_T45_762x39_Tracer_Green", 0.78},
					{"10Rnd_M43_762x39_Ball", 0.8},
					{"10Rnd_BP_762x39_AP", 0.82},
                    {"10Rnd_BZ_762x39_API", 0.85},
                    
					{"30Rnd_ak_545x39_T_mag", 5.2},
					{"30Rnd_ak_545x39_mag", 6}
					
				};
			};
			
			class Remains {
				totalConsume = 1000;
				displayName = $STR_TRADE_SECTION_REMAINS;
				items[] = {
					
					//Mut parts
					{"Armst_mut_tushkano",0.34},
					//{"Armst_mut_cat",6},
					{"Armst_mut_dog",0.75},
					{"Armst_mut_plot",0.98},
					{"Armst_mut_boar",2.5},
					{"Armst_mut_psevdog",3},
					{"Armst_mut_burer2",5},
					{"Armst_mut_controller",45},
					{"Armst_mut_krovosos",27},
					//{"Armst_mut_snork",17},
					//{"Armst_mut_chimera",35},
					//{"Armst_mut_izlom",16},
					
					//{"Armst_mut_poltergeist",28},
					//{"Armst_mut_psevdogigant",250},
					{"Armst_mut_olen",15},
					{"Armst_mut_pauk",10}
				};
			};
			
			class Artefacts {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_ARTEFACTS;
				items[] = {
					
					//Artefacts
					//anomylki
					{"Item_TEARS_Unstab",2.5},
					{"Item_Medusa_Unstab",6.3},
					{"Item_GRAVI_Unstab",8},
					{"Item_STONEBLOOD_Unstab",14},
					
					//{"Item_SPIKES_Unstab",10},
					//{"Item_Slude_Unstab",25},
					//{"Item_EMPTY_Unstab",40},
					//{"Item_FIRE_Unstab",65},
					//{"Item_MEAT_Unstab",80},
					
					//{"Item_ELECTRA_Unstab",170},
					//{"Item_BATTERY_Unstab",190},
					//{"Item_CRYSTALL_Unstab",310},
					//{"Item_SOUL_Unstab",640}
					
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
					{"DETECTOR_RKS20", 5.3},
					{"ItemCompass", 2.2},
					{"armst_item_pda", 7},
					{"armst_spicki", 0.05},
					{"ARMST_zippo", 2.5},
					{"ARMST_lighter", 0.25},
					{"ARMST_sleepingbag", 1.6},
					{"ARMST_cigarettes", 0.14},
					{"armst_item_chigarette", 0.16},
					{"tf_pnr1000a", 4},
					{"armst_item_detectors_otklick", 10},
					{"ARMST_batteries", 0.1},
					//musor
					{"ARMST_book_manual", 0.2},
					{"ARMST_book_novel", 0.2},
					{"ARMST_cards", 0.3},
					{"ARMST_comic", 0.3},
					{"ARMST_elec_powder", 0.4},
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
					{"ARMST_kanistra", 17.04},
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
					{"armst_brokenradio", 0.2},
					{"armst_brokenpda", 1.2},
					{"armst_zeton", 0.4},
					{"armst_polhir", 3.6},
					{"armst_medinst", 3},
					{"armst_arthelp", 6},
					{"armst_medperchatki", 0.4},
					{"armst_scaner", 5},
					{"armst_scanerart", 4.6},
					{"armst_doska", 1},
					{"armst_bochka", 1.2},
					{"armst_545", 0.06},
					{"armst_762", 0.08},
					{"armst_steklo", 1.4},
					
					//Chemlight
					{"Chemlight_red", 0.113},
					{"Chemlight_green", 0.113},
					{"Chemlight_blue", 0.113},
					{"Chemlight_yellow", 0.113},
					
					//Money
					{"armst_money100R", 1.0},
					{"armst_money5000R", 5.0},
					{"armst_money10000R", 10},
					{"armst_money50000R", 50},
					
					//Food
					{"Armst_item_bred", 0.217},
					{"Armst_item_kolbasa", 0.9},
					{"Armst_item_waterbottle", 0.325},
					{"Armst_item_Sgushenka",1.3},
					{"armst_item_vodka",1.73},
					
					//EmptyBottle
					{"armst_item_waterbottleempty", 0.1},
					{"armst_item_vodkaempty", 0.1},
					{"armst_item_Beerempty", 0.1}
				};
			};

            class Medicine {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_MEDICINE;
				items[] = {				
					//Medicine
					{"AGM_Bandage", 0.41},			
					{"AGM_Morphine", 1}
				};
            };		

			class Headgear {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_HELMETS;
				items[] = {		
					//Капюшоны
					{"armst_Hood_od5", 0.499},
					{"armst_Hood_od1", 0.499},
					{"armst_Hood_od3", 0.499},
					{"armst_Hood_od4", 0.499},
					{"armst_Hood_Tan", 0.499},
					{"armst_Hood2_Green", 0.499},
					{"armst_Hood2_od1", 0.499},
					{"armst_Hood2_od4", 0.499},
					{"armst_Hood2_od3", 0.499},
					{"armst_Hood2_od5", 0.499},
					{"armst_Hood2_Tan", 0.499},
					//Bandanna
					{"H_Bandanna_sand", 0.3},
					{"H_Bandanna_sgg", 0.3},
					{"H_Bandanna_khk", 0.3},
					{"H_Bandanna_cbr", 0.3},
					{"H_Bandanna_gry", 0.3},
					//панамки и шапки
					{"H_Booniehat_khk", 0.72},
					{"H_Booniehat_oli", 0.72},
					{"armst_cap_band", 0.35},
					{"armst_cap_dolg", 0.35},
					{"armst_cap_free3", 0.35},
					{"armst_cap_free4", 0.35},
					{"armst_cap_free", 0.35},
					{"armst_cap_army", 0.35},
					{"armst_cap_free2", 0.35},
					{"armst_cap_merc", 0.35},
					
					
					//Gasmask
					{"G_Bandanna_khk", 0.6},
					{"G_Bandanna_oli", 0.6},
					{"G_Bandanna_blk", 0.6},
					{"G_Bandanna_tan", 0.6},
					{"G_Lowprofile", 1.36},
					{"armst_one_eye", 2},
					{"G_Balaclava_blk", 0.9},
					{"G_Balaclava_oli", 0.9},
					{"armst_respirator", 7},
					{"armst_gasmaskBastard", 11.35},
					{"armst_Gasslon", 17.7}
				};
			};
					
            class VESTS {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_VESTS;
				items[] = {	
					//Vests
					{"p_ak", 0.5},
					{"p2_ak", 1},
					{"Kora", 3},
					{"Kora_p_ak", 3.5},
					{"Kora_p2_ak", 4},
					{"Smersh_AK", 7},
					{"6B3", 12.999},
					{"6B5", 11.35}
				};
			};
			
			class BACKPACKS {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_BACKPACKS;
				items[] = {	
					//Backpacks
					{"ARMST_SUMKA1", 1},
					{"ARMST_RUKZAK", 4.5},
					{"ARMST_RUKZAK_BLACK", 4.5},
					{"ARMST_RUKZAK_GREEN1", 4.5},
					{"ARMST_RUKZAK_GREENCAMO", 4.5},
					{"ARMST_RUKZAK_GRAY", 4.5},
					{"ARMST_SUMKA", 6.31},
					{"ARMST_SUMKA8", 8.52},
					{"ARMST_SUMKA4", 14}
					
				};
			};
		};
	};