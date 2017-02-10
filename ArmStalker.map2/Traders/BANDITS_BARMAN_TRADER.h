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
		
		
		
		 "ТОРГОВЕЦ ЧИСТОГО НЕБА"
	*/
	
	class BANDITS_BARMAN_TRADER
	{
		ShowcaseType = "AGM_BOX_MISC"; 				//showcase must be placed near trader (<10m)
		ItemUp = 0.2;											//showed item  height relatively showcase
		CamRelative[] =  {0, 0.4, 1.5};						 //{-0.3, 0, 1.7};
		CamFOV =  1;
		noAllowedFactions[] = {"ARMST_RENEGADE"};	//
		
		class Sale 
		{
			class Weapons {
				displayName = $STR_TRADE_SECTION_WEAPONS;
				totalPrice = 1700;
				items[] = {
					
					//pistols
					{"av_makarov", 4},
					{"av_aps", 8}, 
					
										
					//rifles
					{"arifle_KA_SKS_F", 29.4}, 
					{"arifle_av_akm", 60},
					{"arifle_av_aksu", 40},
					{"arifle_av_ak74m", 55},
					{"arifle_av_ak74m_gp", 60}
					
				};
			};
			
			class Magazines {
				displayName = $STR_TRADE_SECTION_AMMO;
				totalPrice = 1000;
				items[] = {
					
					{"30Rnd_ak_545x39_mag", 2},
					{"30Rnd_ak_545x39_T_mag", 2},
					{"8Rnd_Mag_pm", 0.5},
					{"20Rnd_9x21_Mag", 0.6},
					{"30Rnd_ak_762x39_T_mag", 3},
					{"10Rnd_av_762x39_svd", 2},
					{"30Rnd_ak_762x39_mag", 3}
										
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
					
					//Medicine
					{"AGM_Bandage", 0.2}, 
					{"ARMST_handwarmer", 0.5},
					{"AGM_Morphine", 0.5},
					{"armst_item_antirad", 2.5},
					{"AGM_Bloodbag", 4.0},
					{"AGM_Epipen", 2.0}
					
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
					
					{"armst_spicki", 0.05},
					{"ARMST_zippo", 3},
					{"ARMST_cigarettes", 0.17},
					{"armst_item_chigarette", 0.19},
					{"ARMST_sleepingbag", 0.5},
					{"tf_anprc148jem", 4},

					{"armst_item_pda", 3.5},
					{"ItemCompass", 1},
					
					
					//Chemlight
					{"Chemlight_red", 0.2},
					{"Chemlight_green", 0.2},
					{"Chemlight_blue", 0.2},
					{"Chemlight_yellow", 0.2},
					
					//Food
					{"Armst_item_waterbottle", 0.25},
					{"Armst_item_can",0.7},
					{"Armst_item_Sgushenka",0.5},
					{"Armst_item_tushonka",0.7},
					{"ARMST_snickers",0.35},
					{"armst_item_vodka",2}

				};
			};
			
			class Headgear {
				displayName = $STR_TRADE_SECTION_HELMETS;
				totalPrice = 1000;
				items[] = {
					
					//Капюшоны
					{"armst_Hood_od5", 0.2},
					{"armst_Hood_od1", 0.2},
					{"armst_Hood_od3", 0.2},
					{"armst_Hood_od4", 0.2},
					{"armst_Hood_Tan", 0.2},
					{"armst_Hood_od2", 0.2},
					{"armst_Hood_Black", 0.2},
					
					//Bandanna
					{"H_Bandanna_cbr",  0.2},
					{"H_Bandanna_sand", 0.2},
					{"H_Bandanna_camo", 0.2},
					{"H_Bandanna_surfer_grn", 0.2},
					{"H_Bandanna_khk", 0.2},
					{"H_Bandanna_gry", 0.2},
										
					//Helmets
					{"Vulkan_ZV", 1.0},
					{"Altyn_ch_ch", 1.0},
										
					//Gasmask
					{"G_Bandanna_tan", 0.15},
					{"G_Bandanna_oli", 0.15},
					{"G_Bandanna_khk", 0.15},
					{"G_Bandanna_blk", 0.15},
					
					{"armst_respirator", 1},
					{"armst_Gasslon", 10},
					{"armst_GasP5", 15},
					{"armst_GasP7", 20},
					{"armst_Gasscout", 15}				
				};
			};
			
			class VESTS {
				displayName = $STR_TRADE_SECTION_VESTS;
				totalPrice = 1000;
				items[] = {
					
					{"def_molle_easy", 7},
					{"def_molle_norm", 13},
					{"Rys_m", 17},
					{"Rys_m_kora", 19},
					{"Rys_m_GP", 15}
					
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
					{"ARMST_SUMKA13", 10}
				
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
					{"av_aps", 8}, 
					
										
					//rifles
					{"av_toz34", 6},
					{"mp135", 8},
					{"armst_Remington870", 10},
					{"av_mos", 18},
					{"AV_M1014", 20},
					{"arifle_mp5", 37},
					{"arifle_av_aksu", 50},
					
				};
			};
			
			class Magazines {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_AMMO;
				items[] = {
					
					{"av_12_p", 0.3},
					{"av_12_M", 0.2},
					{"av_4_M", 0.4},
					{"av_4_p", 0.6},
					{"av_Benelip_p", 0.6},
					{"av_Beneli_M", 0.8},
					{"30Rnd_9x21_Mag", 3.6},
					{"30Rnd_ak_545x39_mag", 4},
					{"30Rnd_ak_545x39_T_mag", 5},
					{"8Rnd_Mag_pm", 0.5}
					
				};
			};
			
			class Remains {
				totalConsume = 1000;
				displayName = $STR_TRADE_SECTION_REMAINS;
				items[] = {
					
					//Mut parts
					{"Armst_mut_boar", 1.5},
					{"Armst_mut_burer2", 4},
					{"Armst_mut_controller", 7},
					{"Armst_mut_krovosos", 5},
					{"Armst_mut_chimera", 10},
					{"Armst_mut_dog", 0.5},
					{"Armst_mut_olen", 1.5},
					{"Armst_mut_pauk", 1},
					{"Armst_mut_plot", 1},
					{"Armst_mut_psevdog", 1.5},
					{"Armst_mut_poltergeist", 5},
					{"Armst_mut_psevdogigant", 15},
					{"Armst_mut_snork", 3}
				};
			};
			
			class Artefacts {
				totalConsume = 1000;
				displayName = $STR_TRADE_SECTION_ARTEFACTS;
				items[] = {
					
					//Artefacts
					//anomylki
					{"Item_Medusa_Unstab",5},
					{"Item_GRAVI_Unstab",5},
					{"Item_MEAT_Unstab",5},
					{"Item_FIRE_Unstab",5}
					//Craft
					
				};
			};
			
			class Items {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_OTHERS;
				items[] = {
					//Money
					{"armst_money100R", 2.0},
					{"armst_money5000R", 10.0},
					{"armst_money10000R", 20},
					{"armst_money50000R", 100},
					
				//Others
					{"DAPSTALKERS_BOLTS", 0.1},
					{"DETECTOR_RKS20", 3.5},
					{"AGM_CableTie", 0.1},
					{"armst_MESHOK", 0.1},
					{"Binocular", 2.5},
					{"Photoapparat", 3.5},
					
					{"armst_spicki", 0.05},
					{"tf_anprc148jem", 0.5},

					{"armst_item_pda", 3.5},
					{"ItemCompass", 1},
					
					
					//Chemlight
					{"Chemlight_red", 0.2},
					{"Chemlight_green", 0.2},
					{"Chemlight_blue", 0.2},
					{"Chemlight_yellow", 0.2},
					
					//Food
					{"Armst_item_waterbottle", 0.25},
					{"Armst_item_can",0.7},
					{"Armst_item_Sgushenka",0.5},
					{"Armst_item_tushonka",0.7},
					{"ARMST_snickers",0.35},
					{"armst_item_vodka",2},
					
					//EmptyBottle
					{"armst_item_waterbottleempty",0.14},
					{"armst_item_vodkaempty",0.1},
					{"armst_item_Beerempty",0.1}
				};
            };
			
			class Medicine {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_MEDICINE;
				items[] = {
					//Medicine
					{"AGM_Bandage", 0.2}, 
					{"ARMST_handwarmer", 0.5},
					{"AGM_Morphine", 0.5},
					{"armst_item_antirad", 2.5},
					{"AGM_Bloodbag", 4.0},
					{"AGM_Epipen", 2.0}
				};
            };				
					//Flashlight
					//{"acc_flashlight", 0.005},

					
			class Headgear {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_HELMETS;
				items[] = {
					//Капюшоны
					{"armst_Hood_od5", 0.2},
					{"armst_Hood_od1", 0.2},
					{"armst_Hood_od3", 0.2},
					{"armst_Hood_od4", 0.2},
					{"armst_Hood_Tan", 0.2},
					{"armst_Hood_od2", 0.2},
					{"armst_Hood_Black", 0.2},
					
					//Bandanna
					{"H_Bandanna_cbr",  0.2},
					{"H_Bandanna_sand", 0.2},
					{"H_Bandanna_camo", 0.2},
					{"H_Bandanna_surfer_grn", 0.2},
					{"H_Bandanna_khk", 0.2},
					{"H_Bandanna_gry", 0.2},
										
					//Helmets
					{"Vulkan_ZV", 1.0},
					{"Altyn_ch_ch", 1.0},
										
					//Gasmask
					{"G_Bandanna_tan", 0.15},
					{"G_Bandanna_oli", 0.15},
					{"G_Bandanna_khk", 0.15},
					{"G_Bandanna_blk", 0.15},
					
					{"armst_respirator", 1},
					{"armst_Gasslon", 10},
					{"armst_GasP5", 15},
					{"armst_GasP7", 20},
					{"armst_Gasscout", 15}
				};
			};
					
			class VESTS {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_VESTS;
				items[] = {
					//Vests
					{"def_molle_easy", 7},
					{"def_molle_norm", 13},
					{"Rys_m", 17},
					{"Rys_m_kora", 19},
					{"Rys_m_GP", 15}
			    };
			};		
			
			class BACKPACKS {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_BACKPACKS;
				items[] = {
					//Backpacks
					{"ARMST_RUKZAK_GREEN1", 1},
					{"ARMST_RUKZAK_GREEN", 1},
					{"ARMST_RUKZAK_BLUE1", 1},
					{"ARMST_RUKZAK_BLACKBLUE", 1},
					{"ARMST_RUKZAK_GRAY", 1},
					{"ARMST_RUKZAK_BLACK2", 1},
					{"ARMST_RUKZAK_GREENCAMO", 1},
					{"ARMST_RUKZAK_BLACK", 1},
					{"ARMST_SUMKA1", 5},
					{"ARMST_SUMKA13", 10}
					
				};
			};
		};
	};

