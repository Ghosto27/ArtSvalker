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

	class STAKLER_TRADER 
	{
		ShowcaseType = "AGM_BOX_MISC"; 				//showcase must be placed near trader (<10m)
		ItemUp = 0.4;											//showed item  height relatively showcase
		CamRelative[] =  {0, 0.5, 1.5};									 //{-0.3, 0, 1.7};
		CamFOV =  1;
		noAllowedFactions[] = {"ARMST_RENEGADE"};			//
		
		class Sale 
		{
			class Weapons {
				displayName = $STR_TRADE_SECTION_WEAPONS;
				totalPrice = 1000;
				items[] = {
					//pistols
					{"av_makarov", 3},
					{"av_revolver", 4.4}, 
					{"av_tt", 6},
					{"armst_Colt_1911_2", 7},
					{"av_pp2000", 18},
					
					{"av_obrez", 5},
					{"av_toz34", 7.5},
					{"mp135", 10},
					{"armst_Remington870", 12},
					{"av_mos", 20},
					{"AV_M1014", 26},
					{"arifle_av_aksu", 50},
					{"arifle_av_ak74old", 60}
					
				};
			};		
			
			class Magazines {
				displayName = $STR_TRADE_SECTION_AMMO;
				totalPrice = 1000;
				items[] = {
					
					{"8Rnd_Mag_pm", 0.5},
					{"8Rnd_Mag", 0.8},
					{"9Rnd_45ACP_Mag", 0.75},
					{"6Rnd_45ACP_Cylinder", 0.4},
					{"30Rnd_9x21_Mag", 3.6},
					{"av_12_p", 0.3},
					{"av_12_M", 0.2},
					{"obrez2rnd", 0.2},
					{"av_4_M", 0.4},
					{"av_4_p", 0.6},
					{"av_Benelip_p", 0.6},
					{"av_Beneli_M", 0.8},
					{"av_5x_762", 1.5},
					{"30Rnd_ak_545x39_mag", 6}
					
										
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
					
					{"AGM_Bandage", 0.2},
					{"ARMST_handwarmer", 0.5},	
					{"AGM_Morphine", 0.5}
					
				};
			};
			
			class Items {
				displayName = $STR_TRADE_SECTION_OTHERS;
				totalPrice = 1000;
				items[] = {
					//Others
					{"DAPSTALKERS_BOLTS", 0.1},
					{"DETECTOR_RKS20", 4},
					{"ItemCompass", 1},
					{"armst_item_pda", 5.6},
					{"armst_spicki", 0.05},
					{"ARMST_zippo", 2.5},
					{"ARMST_lighter", 0.4},
					{"ARMST_sleepingbag", 0.8},
					{"ARMST_cigarettes", 0.17},
					{"armst_item_chigarette", 0.19},
					{"tf_anprc148jem", 4.3},
					{"armst_item_detectors_otklick", 13},
					{"ARMST_batteries", 0.5},
					
					//Chemlight
					{"Chemlight_red", 0.4},
					{"Chemlight_green", 0.4},
					{"Chemlight_blue", 0.4},
					{"Chemlight_yellow", 0.4},
					
					//Money
					{"armst_money100R", 1.0},
					{"armst_money5000R", 5.0},
					{"armst_money10000R", 10},
					{"armst_money50000R", 50},
					
					//Food
					{"Armst_item_bred", 0.13},
					{"Armst_item_kolbasa", 0.27},
					{"Armst_item_waterbottle", 0.25},
					{"Armst_item_can",0.8},
					{"Armst_item_Sgushenka",0.5},
					{"Armst_item_tushonka",0.73},
					{"ARMST_gum",0.07},
					{"ARMST_skittles",0.2},
					{"ARMST_snickers",0.45},
					{"armst_item_vodka",2},
					{"armst_item_Beer",3},
					{"Armst_item_SuhPay",8}
					
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
					{"armst_Hood2_Green", 0.2},
					{"armst_Hood2_od1", 0.2},
					{"armst_Hood2_od4", 0.2},
					{"armst_Hood2_od3", 0.2},
					{"armst_Hood2_od5", 0.2},
					{"armst_Hood2_Tan", 0.2},
					//Bandanna
					{"H_Bandanna_sand", 0.2},
					{"H_Bandanna_sgg", 0.2},
					{"H_Bandanna_khk", 0.2},
					{"H_Bandanna_cbr", 0.2},
					
					//Gasmask
					{"G_Bandanna_khk", 0.2},
					{"G_Bandanna_oli", 0.2},
					{"armst_respirator", 1.15},
					{"armst_Gasslon", 3.3},
					{"armst_GasP5", 5.7}
					
				};
			};
			
			class VESTS {
				displayName = $STR_TRADE_SECTION_VESTS;
				totalPrice = 1000;
				items[] = {
					
					{"V_BandollierB_blk", 0.7},
					{"p_ak", 0.5},
					{"p2_ak", 0.75},
					{"Kora", 1.5},
					{"Kora_p_ak", 3.5},
					{"Kora_p2_ak", 4.2}
					
				};
			};
			
			class BACKPACKS {
				displayName = $STR_TRADE_SECTION_BACKPACKS;
				totalPrice = 1000;
				items[] = {
					
					{"ARMST_SUMKA1", 0.7},
					{"ARMST_SUMKA8", 2.3},
					{"ARMST_SUMKA", 2.8},
					{"ARMST_RUKZAK_GREEN1", 1},
					{"ARMST_RUKZAK_BLACK", 1},
					{"ARMST_RUKZAK_GRAY", 1}
					
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
					
					//Rifle
					{"av_mos", 20},
					{"av_obrez", 8},
					{"av_toz34", 10},
					{"av_obrez_full", 15}
					
				};
			};
			
			class Magazines {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_AMMO;
				items[] = {
					
					{"8Rnd_Mag_pm", 0.5},
					{"20Rnd_9x21_Mag", 1},
					{"10Rnd_av_762x39_svd", 1.5},
					{"av_5x_762", 1.5}
					
				};
			};
			
			class Remains {
				totalConsume = 1000;
				displayName = $STR_TRADE_SECTION_REMAINS;
				items[] = {
					
					//Mut parts
					{"Armst_mut_boar",0.7},
					{"Armst_mut_burer2",8},
					{"Armst_mut_krovosos",3},
					{"Armst_mut_dog",0.5},
					{"Armst_mut_pauk",1.5},
					{"Armst_mut_plot",1.5},
					{"Armst_mut_psevdog",0.65},
					{"Armst_mut_snork",3}
				};
			};
			
			class Artefacts {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_ARTEFACTS;
				items[] = {
					
					//Artefacts
					//anomylki
					{"Item_TEARS_Unstab",1},
					{"Item_Medusa_Unstab",2},
					{"Item_GRAVI_Unstab",2.8},
					{"Item_STONEBLOOD_Unstab",4},
					
					{"Item_SPIKES_Unstab",10},
					{"Item_Slude_Unstab",25},
					{"Item_EMPTY_Unstab",40},
					{"Item_FIRE_Unstab",65},
					{"Item_MEAT_Unstab",80},
					
					{"Item_ELECTRA_Unstab",170},
					{"Item_BATTERY_Unstab",190},
					{"Item_CRYSTALL_Unstab",310},
					{"Item_SOUL_Unstab",640}
					
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
					{"ItemCompass", 1},
					{"armst_item_pda", 3.5},
					{"armst_spicki", 0.05},
					{"ARMST_potatobag", 8},
					{"ARMST_zippo", 0.5},
					{"ARMST_sleepingbag", 0.5},
					{"ARMST_cigarettes", 0.17},
					{"armst_item_chigarette", 0.19},
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
					{"Chemlight_red", 0.4},
					{"Chemlight_green", 0.4},
					{"Chemlight_blue", 0.4},
					{"Chemlight_yellow", 0.4},
					
					//Food
					{"Armst_item_bred", 0.13},
					{"Armst_item_kolbasa", 0.27},
					{"Armst_item_waterbottle", 0.25},
					{"Armst_item_can",0.8},
					{"Armst_item_Sgushenka",0.5},
					{"Armst_item_tushonka",0.73},
					{"ARMST_gum",0.07},
					{"ARMST_skittles",0.2},
					{"ARMST_snickers",0.45},
					{"armst_item_Beer",0.7},
					{"armst_item_vodka",2},
									
					
					//EmptyBottle
					{"armst_item_waterbottleempty", 0.14},
					{"armst_item_vodkaempty", 0.1},
					{"armst_item_Beerempty", 0.1}
				};
			};

            class Medicine {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_MEDICINE;
				items[] = {				
					//Medicine
					{"AGM_Bandage", 0.2},			
					{"AGM_Morphine", 0.5}
				};
            };		

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
					//Bandanna
					{"H_Bandanna_sand", 0.2},
					{"H_Bandanna_sgg", 0.2},
					{"H_Bandanna_khk", 0.2},
					{"H_Bandanna_cbr", 0.2},
					
					//Gasmask
					{"G_Bandanna_khk", 0.2},
					{"G_Bandanna_oli", 0.2},
					{"armst_respirator", 1.0},
					{"armst_Gasslon", 3},
					{"armst_GasP5", 4.5}
				};
			};
					
            class VESTS {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_VESTS;
				items[] = {	
					//Vests
					{"V_BandollierB_blk", 0.7},
					{"p_ak", 0.2},
					{"p2_ak", 0.75},
					{"Kora", 1.5},
					{"Kora_p_ak", 3.5},
					{"Kora_p2_ak", 4.2}
				};
			};
			
			class BACKPACKS {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_BACKPACKS;
				items[] = {	
					//Backpacks
					{"ARMST_SUMKA1", 0.7},
					{"ARMST_SUMKA8", 2.3},
					{"ARMST_SUMKA", 2.8},
					{"ARMST_RUKZAK_GREEN1", 1},
					{"ARMST_RUKZAK_BLACK", 1},
					{"ARMST_RUKZAK_GRAY", 1}
					
				};
			};
		};
	};
	