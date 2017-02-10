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
					{"av_makarov", 2},
					{"av_aps", 3.5},
					{"av_tt", 3.5},
					
					
					{"av_obrez_full", 7.5},
					{"av_kedrpp", 25},
					{"arifle_mp5", 30},
					{"av_toz122", 45},
					{"arifle_av_aksu_f", 50}
					
				};
			};	
			
			class Magazines {
				displayName = $STR_TRADE_SECTION_AMMO;
				totalPrice = 1000;
				items[] = {
					
					{"30Rnd_ak_545x39_mag", 5},
					{"8Rnd_Mag_pm", 0.5},
					{"20Rnd_9x21_Mag", 1},
					{"av_4_M", 0.2},
					{"av_12_M", 0.4},
					{"8Rnd_Mag", 0.5},
					{"30Rnd_9x21_Mag", 1}
					
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
					{"AGM_Bloodbag", 4},
					{"AGM_Epipen", 2}
					
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
					{"armst_taynik_big", 45},
					
					{"armst_spicki", 0.05},
					{"ARMST_zippo", 2},
					{"ARMST_lighter", 0.2},
					{"ARMST_sleepingbag", 0.5},
					{"ARMST_cigarettes", 0.17},
					{"armst_item_chigarette", 0.2},
					{"tf_anprc148jem", 2},
					
					//baricad
					{"armst_bochka", 3},
					{"armst_Razorwire", 2},
					{"armst_pallet_vertical", 0.5},
					{"armst_armst_korob1", 1},
					{"armst_BagFence", 1.5},
					{"armst_Camper", 2},
					
					
					
					{"armst_item_pda", 3.5},
					{"ItemCompass", 1},
					
					
					//Chemlight
					{"Chemlight_red", 0.4},
					{"Chemlight_green", 0.4},
					{"Chemlight_blue", 0.4},
					{"Chemlight_yellow", 0.4},
					
					{"USSR_GUITAR", 4},
					
					//Food
					{"Armst_item_bred",0.15},
					{"Armst_item_kolbasa",0.35},
					{"Armst_item_can",0.4},
					{"Armst_item_waterbottle",0.6},
					{"armst_item_vodka",1}
					
				};
			};
			
			class Headgear {
				displayName = $STR_TRADE_SECTION_HELMETS;
				totalPrice = 1000;
				items[] = {
					
					{"armst_Hood_od2", 0.2},
					{"armst_Hood_Black", 0.2},
					{"armst_Hood2_od2", 0.2},
					{"armst_Hood2_Black", 0.2},
					{"H_Bandanna_gry", 0.2},
					{"H_Cap_blk", 0.2},

					//Gasmask
					{"G_Balaclava_blk", 0.25},
					{"G_Bandanna_blk", 0.25},
					{"armst_bandana", 0.25},
					{"armst_bandanaGlass", 0.25},
					{"G_Bandanna_beast", 0.2},
					{"armst_respirator", 5}
					
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
					{"av_aps", 7},
					{"av_tt", 7},
					
					
					{"arifle_av_akm", 60},
				
					{"av_toz122", 45},
					{"arifle_av_aksu_f", 40},
					{"av_kedrpp", 20},
					{"av_obrez_full", 7},
					{"av_obrez", 8}
					
				};
			};
			
			class Magazines {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_AMMO;
				items[] = {
					
					{"30Rnd_ak_545x39_mag", 2},
					{"30Rnd_ak_762x39_mag", 3},
					{"10Rnd_av_762x39_svd", 3},
					{"8Rnd_Mag_pm", 0.5},
					{"20Rnd_9x21_Mag", 1},
					{"av_obrez2rnd", 0.2},
					{"8Rnd_Mag", 0.5},
					{"30Rnd_9x21_Mag", 1}
					
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
					{"Armst_mut_snork", 2}
				};
			};
			
			class Artefacts {
				totalConsume = 1000;
				displayName = $STR_TRADE_SECTION_ARTEFACTS;
				items[] = {
					
					//Artefacts
					//anomylki
					{"Item_TEARS_Unstab",1.6},
					{"Item_Medusa_Unstab",2.2},
					{"Item_GRAVI_Unstab",4.5},
					{"Item_STONEBLOOD_Unstab",3},
					
					{"Item_SPIKES_Unstab",3},
					{"Item_Slude_Unstab",4},
					{"Item_EMPTY_Unstab",10},
					{"Item_FIRE_Unstab",5},
					{"Item_MEAT_Unstab",15},
					
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
					
					{"armst_spicki", 0.05},
					{"tf_anprc148jem", 2},
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
					{"Armst_item_bred",0.15},
					{"Armst_item_kolbasa",0.25},
					{"Armst_item_can",0.4},
					{"Armst_item_waterbottle",0.6},
					{"armst_item_vodka",1},
					
					//EmptyBottle
					{"armst_item_waterbottleempty", 0.4},
					{"armst_item_vodkaempty", 0.3},
					{"armst_item_Beerempty", 0.2},
					
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
