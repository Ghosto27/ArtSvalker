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
	
	class BANDITS_TRADER
	{
		ShowcaseType = "AGM_BOX_MISC"; 				//showcase must be placed near trader (<10m)
		ItemUp = 0.2;											//showed item  height relatively showcase
		CamRelative[] =  {0, 0.4, 1.5};						 //{-0.3, 0, 1.7};
		CamFOV =  1;
		noAllowedFactions[] = {"ARMST_STALKER","ARMST_RENEGADE","ARMST_SCIENCE","ARMST_FREEDOM","ARMST_DOLG","ARMST_MERCENARIES","ARMST_ARMY","ARMST_MONOLITH"};	//
		
		class Sale 
		{
			class Weapons {
				displayName = $STR_TRADE_SECTION_WEAPONS;
				totalPrice = 1000;
				items[] = {
					
					//pistols
					{"av_revolver", 3.5},
					{"av_tt", 5.3},
					{"av_makarov", 6}, 
					{"armst_Colt_1911_2", 8},
					
					{"av_toz34", 19},
					{"av_uzi", 19},
					{"arifle_mp5", 7.5},
					{"av_kedrpp", 25},
					{"arifle_av_aksu_f", 50},
					{"arifle_av_aksu", 50},
					{"arifle_av_ak74old", 80}
					
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
					{"20Rnd_9x21_Mag", 1},
					{"30Rnd_9x21_Mag", 1.5},
					{"av_12_p", 0.57},
					{"av_4_p", 0.62},
					{"av_Benelip_p", 0.67},
					{"16Rnd_9x21_Mag", 0.87},
					{"av_12_M", 0.58},
					{"av_4_M", 0.64},
					{"av_Beneli_M", 0.7},
					{"30Rnd_ak_545x39_T_mag", 5.8},
					{"30Rnd_ak_545x39_mag", 7}
					
				};
			};		
			
			class WeaponItems {
				displayName = $STR_TRADE_SECTION_ACCESSORIES;
				totalPrice = 1000;
				items[] = {
					
					//Flashlight
					{"acc_flashlight", 4}
					
				};
			};	
			
			class Medicine {
				displayName = $STR_TRADE_SECTION_MEDICINE;
				totalPrice = 1000;
				items[] = {
					
					//Medicine
					{"AGM_Bandage", 0.35}, 
					{"AGM_Morphine", 5.37},
					
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
					{"DETECTOR_RKS20", 6},
					{"AGM_CableTie", 0.075},
					{"armst_MESHOK", 0.25},
					{"Binocular", 3.25},
					//{"armst_taynik_big", 45},
					
					{"armst_spicki", 0.05},
					{"ARMST_zippo", 2.7},
					{"ARMST_lighter", 0.15},
					{"ARMST_sleepingbag", 1.2},
					{"ARMST_cigarettes", 0.115},
					{"armst_item_chigarette", 0.15},
					{"tf_pnr1000a", 6},
					
					//baricad
					{"armst_bochka", 3},
					{"armst_Razorwire", 2},
					{"armst_pallet_vertical", 0.5},
					{"armst_armst_korob1", 1},
					{"armst_BagFence", 1.5},
					{"armst_Camper", 2},
					
					
					
					{"armst_item_pda", 7},
					{"ItemCompass", 2},
					
					
					//Chemlight
					{"Chemlight_red", 0.113},
					{"Chemlight_green", 0.113},
					{"Chemlight_blue", 0.113},
					{"Chemlight_yellow", 0.113},
					
					{"USSR_GUITAR", 7},
					
					//Food
					{"Armst_item_bred",0.215},
					{"Armst_item_kolbasa",0.4},
					{"Armst_item_can",0.98},
					{"Armst_item_waterbottle",0.25},
					{"armst_item_vodka",1}
					
				};
			};
			
			class Headgear {
				displayName = $STR_TRADE_SECTION_HELMETS;
				totalPrice = 1000;
				items[] = {
					
					{"armst_Hood_od2", 0.4},
					{"armst_Hood_Black", 0.4},
					{"armst_Hood2_od2", 0.4},
					{"armst_Hood2_Black", 0.4},
					{"armst_Hood_band", 0.7},
					{"armst_Hood_band_2", 0.7},
					{"armst_Hood_band_3", 0.7},
					{"H_Bandanna_gry", 0.2},
					{"H_Cap_blk", 0.2},
					{"armst_kepka_gop_3", 0.9},
					{"armst_kepka_gop_2", 0.9},
					{"armst_kepka_gop", 0.9},
					{"armst_kepka_gop2_3", 0.9},
					{"armst_kepka_gop2", 0.9},
					{"armst_kepka_gop2_2 ", 0.9},

					//Gasmask
					{"G_Balaclava_blk", 0.47},
					{"G_Bandanna_blk", 0.47},
					{"armst_one_eye", 2},
					{"armst_band_balaclava", 0.47},
					{"armst_band_balaclava_2", 0.47},
					{"armst_band_balaclava_3", 0.47},
					{"armst_bandana", 0.25},
					{"armst_bandanaGlass", 0.25},
					{"G_Bandanna_beast", 0.2},
					{"armst_respirator", 5},
					{"armst_Gasslon", 17.7}
					
				};
			};
			
			class VESTS {
				displayName = $STR_TRADE_SECTION_VESTS;
				totalPrice = 1000;
				items[] = {
					
					{"p_ak", 0.5},
					{"p2_ak", 0.75},
					{"Kora_p2_ak", 3},
					{"Armst_band_coat_mini", 5.7},
					{"Armst_band_coat_mini2", 5.7},
					{"Armst_band_coat_mini3", 5.7},
					{"Armst_band_kurt", 6},
					{"Armst_band_kurt_2", 6},
					{"Armst_band_kurt_3", 6},
					{"Armst_band_kurt2", 8.9},
					{"Armst_band_kurt_3", 8.9},
					{"Armst_band_kurt_3", 8.9},
					{"Armst_band_coat2", 14},
					{"Armst_band_coat2_2", 14},
					{"Armst_band_coat2_3", 14}
					
					
				};
			};
			
			class BACKPACKS {
				displayName = $STR_TRADE_SECTION_BACKPACKS;
				totalPrice = 1000;
				items[] = {
					
					{"ARMST_SUMKA", 6},
					{"ARMST_RUKZAK_GRAY", 3.2},
					{"ARMST_SUMKA7", 15}
					
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
					{"av_revolver", 3.5},
					{"av_tt", 5.3},
					{"av_makarov", 6}, 
					{"armst_Colt_1911_2", 8},
					
					{"av_toz34", 19},
					{"av_uzi", 19},
					{"arifle_mp5", 7.5},
					{"av_kedrpp", 25},
					{"arifle_av_aksu_f", 50},
					{"arifle_av_aksu", 50},
					{"arifle_av_ak74old", 80}
					
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
					{"20Rnd_9x21_Mag", 1},
					{"30Rnd_9x21_Mag", 1.5},
					{"av_12_p", 0.57},
					{"av_4_p", 0.62},
					{"av_Benelip_p", 0.67},
					{"16Rnd_9x21_Mag", 0.87},
					{"av_12_M", 0.58},
					{"av_4_M", 0.64},
					{"av_Beneli_M", 0.7},
					{"30Rnd_ak_545x39_T_mag", 5.8},
					{"30Rnd_ak_545x39_mag", 7}
					
				};
			};
			
			class Remains {
				totalConsume = 1000;
				displayName = $STR_TRADE_SECTION_REMAINS;
				items[] = {
					
					{"Armst_mut_tushkano",0.4},
					{"Armst_mut_dog",0.25},
					{"Armst_mut_plot",0.1},
					{"Armst_mut_boar",0.9},
					{"Armst_mut_psevdog",1.5},
					{"Armst_mut_burer2",3},
					{"Armst_mut_controller",35},
					{"Armst_mut_krovosos",19},
					{"Armst_mut_olen",11},
					{"Armst_mut_pauk",2}
				};
			};
			
			class Artefacts {
				totalConsume = 1000;
				displayName = $STR_TRADE_SECTION_ARTEFACTS;
				items[] = {
					
					//Artefacts
					//anomylki
					{"Item_TEARS_Unstab",2.5},
					{"Item_Medusa_Unstab",6.3},
					{"Item_GRAVI_Unstab",8},
					{"Item_STONEBLOOD_Unstab",12},
					
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
					{"DETECTOR_RKS20", 6},
					{"AGM_CableTie", 0.075},
					{"armst_MESHOK", 0.25},
					{"Binocular", 3.25},

					
					{"armst_spicki", 0.05},
					{"ARMST_zippo", 2.7},
					{"ARMST_lighter", 0.15},
					{"ARMST_sleepingbag", 1.2},
					{"ARMST_cigarettes", 0.115},
					{"armst_item_chigarette", 0.15},
					{"tf_pnr1000a", 6},
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
					
					{"armst_item_pda", 2},
					{"ItemCompass", 1},
					
					
					//Chemlight
					{"Chemlight_red", 0.05},
					{"Chemlight_green", 0.05},
					{"Chemlight_blue", 0.05},
					{"Chemlight_yellow", 0.05},
					
					{"USSR_GUITAR", 4},
					
					//Food
					{"Armst_item_bred",0.15},
					{"Armst_item_kolbasa",0.25},
					{"Armst_item_can",0.4},
					{"Armst_item_waterbottle",0.1},
					{"armst_item_vodka",1},
					
					//EmptyBottle
					{"armst_item_waterbottleempty", 0.1},
					{"armst_item_vodkaempty", 0.1},
					{"armst_item_Beerempty", 0.1},
					
					//Medicine
					{"AGM_Bandage", 0.2}, 
					{"AGM_Morphine", 0.5},
					{"AGM_Bloodbag", 4},
					{"AGM_Epipen", 2},
					
					//Headgear
					{"armst_Hood_od2", 0.2},
					{"armst_Hood_Black", 0.2},
					{"H_Bandanna_gry", 0.2},
					{"H_Cap_blk", 0.2},

					//Gasmask
					{"G_Balaclava_blk", 0.25},
					{"G_Bandanna_blk", 0.25},
					{"armst_bandana", 0.25},
					{"armst_bandanaGlass", 0.25},
					{"G_Bandanna_beast", 0.2},
					
					//WeaponItems
					{"acc_flashlight", 0.1},

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
