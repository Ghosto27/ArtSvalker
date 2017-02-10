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

	class BANDITS_TRADER_1 
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
					
					//Rifle
					{"av_obrez", 8},
					{"av_uzi", 15}
					
				};
			};		
			
			class Magazines {
				displayName = $STR_TRADE_SECTION_AMMO;
				totalPrice = 1000;
				items[] = {
					
					{"8Rnd_Mag_pm", 0.5},
					{"20Rnd_9x21_Mag", 1},
					{"av_12_p", 0.2},
					{"av_4_M", 0.2},
					{"av_12_M", 0.4},
					{"av_5x_762", 1.5}
					
										
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
					{"DETECTOR_RKS20", 3.5},
					{"ItemCompass", 1},
					{"armst_item_pda", 6},
					{"armst_spicki", 0.05},
					{"ARMST_zippo", 2.5},
					{"ARMST_lighter", 0.4},
					{"ARMST_sleepingbag", 0.8},
					{"ARMST_cigarettes", 0.3},
					{"tf_anprc148jem", 3.5},
					
					
					//Money
					{"armst_money100R", 1.0},
					{"armst_money5000R", 5.0},
					{"armst_money10000R", 10},
					{"armst_money50000R", 50},
					
					//Food
					{"Armst_item_bred", 0.6},
					{"Armst_item_kolbasa", 0.8},
					{"Armst_item_waterbottle", 1}
					
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
					//Bandanna
					{"H_Bandanna_sand", 0.2},
					{"H_Bandanna_sgg", 0.2},
					{"H_Bandanna_khk", 0.2},
					{"H_Bandanna_cbr", 0.2},
					
					//Gasmask
					{"G_Bandanna_khk", 0.2},
					{"G_Bandanna_oli", 0.2},
					{"armst_respirator", 1.0}
					
				};
			};
			
			class VESTS {
				displayName = $STR_TRADE_SECTION_VESTS;
				totalPrice = 1000;
				items[] = {
					
					{"V_BandollierB_blk", 0.5},
					{"p_ak", 0.5},
					{"p2_ak", 0.75},
					{"Kora_p2_ak", 3}
					
				};
			};
			
			class BACKPACKS {
				displayName = $STR_TRADE_SECTION_BACKPACKS;
				totalPrice = 1000;
				items[] = {
					
					{"ARMST_SUMKA", 2},
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
					{"av_obrez2rnd", 0.2},
					{"10Rnd_av_762x39_svd", 1.5},
					{"av_5x_762", 1.5}
					
				};
			};
			
			class Remains {
				totalConsume = 1000;
				displayName = $STR_TRADE_SECTION_REMAINS;
				items[] = {
					
					//Mut parts
					{"Armst_mut_boar",2},
					{"Armst_mut_burer2",8},
					{"Armst_mut_krovosos",3},
					{"Armst_mut_dog",1},
					{"Armst_mut_pauk",1.5},
					{"Armst_mut_plot",1.5},
					{"Armst_mut_psevdog",2},
					{"Armst_mut_snork",3}
				};
			};
			
			class Artefacts {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_ARTEFACTS;
				items[] = {
					
					//Artefacts
					//anomylki
					{"Item_TEARS_Unstab",1.2},
					{"Item_Medusa_Unstab",2.4},
					{"Item_GRAVI_Unstab",4}
					
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
					{"ARMST_cigarettes", 0.3},
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
					
					//Chemlight
					{"Chemlight_red", 0.4},
					{"Chemlight_green", 0.4},
					{"Chemlight_blue", 0.4},
					{"Chemlight_yellow", 0.4},
					
					//Food
					{"Armst_item_bred", 0.6},
					{"Armst_item_kolbasa", 0.8},
					{"Armst_item_waterbottle", 1},
									
					
					//EmptyBottle
					{"armst_item_waterbottleempty", 0.4},
					{"armst_item_vodkaempty", 0.3},
					{"armst_item_Beerempty", 0.2},
					
					//Medicine
					{"AGM_Bandage", 0.2},			
					{"AGM_Morphine", 0.5},
					
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
					
					//WeaponItems
					{"acc_flashlight", 0.005},

					//Vests
					{"V_BandollierB_blk", 0.5},
					{"p_ak", 0.5},
					{"p2_ak", 0.75},
					{"Kora_p2_ak", 3},
					
					//Backpacks
					{"ARMST_SUMKA", 2},
					{"ARMST_RUKZAK_GRAY", 1}
					
				};
			};
		};
	};
	