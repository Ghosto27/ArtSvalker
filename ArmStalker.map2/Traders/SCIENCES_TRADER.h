class SCIENCES_TRADER 
	{
		ShowcaseType = "AGM_BOX_MISC"; 				//showcase must be placed near trader (<10m)
		ItemUp = 0.2;											//showed item  height relatively showcase
		CamRelative[] =  {0, 0.4, 1.5};									 //{-0.3, 0, 1.7};
		CamFOV =  0.7;
		noAllowedFactions[] = {"ARMST_STALKER","ARMST_RENEGADE","ARMST_DOLG","ARMST_FREEDOM","ARMST_MERCENARIES","ARMST_BANDITS","ARMST_ARMY","ARMST_MONOLITH"};		//
		
		class Sale 
		{
			class Weapons {
				displayName = $STR_TRADE_SECTION_WEAPONS;
				totalPrice = 1000;
				items[] = {
					
					{"av_makarov", 4},
					{"av_kedrpp", 10},
					{"arifle_av_bizon", 15},
					{"arifle_av_aksu", 19}
			     
				};
			};		
			
			class Magazines {
				displayName = $STR_TRADE_SECTION_AMMO;
				totalPrice = 1000;
				items[] = {
					
					{"8Rnd_Mag_pm", 0.55},
					{"16Rnd_9x21_Mag", 1.5},
					{"30Rnd_9x21_Mag", 0.55},
					{"30Rnd_ak_545x39_T_mag", 4.372},
					{"30Rnd_ak_545x39_mag", 5.699},
					{"64Rnd_9x19_mag", 4.326}

					
				};
			};		
			
			class WeaponItems {
				displayName = $STR_TRADE_SECTION_ACCESSORIES;
				totalPrice = 1000;
				items[] = {
					
					{"acc_flashlight", 2.2}
				};
			};		
			
			class Medicine {
				displayName = $STR_TRADE_SECTION_MEDICINE;
				totalPrice = 1000;
				items[] = {
					
					
					{"AGM_Bandage", 0.15}, 
					{"ARMST_handwarmer", 0.9},
					{"AGM_Morphine", 3.5},
					{"armst_item_antirad", 60.4},
					{"AGM_Bloodbag", 43},
					{"AGM_Epipen", 5}
				};
			};
			
			class Items {
				displayName = $STR_TRADE_SECTION_OTHERS;
				totalPrice = 1000;
				items[] = {
					
					{"armst_money100R", 1},
					{"armst_money5000R", 5},
					{"armst_money10000R", 10},
					{"armst_money50000R", 50},
					{"ARMST_propusk", 0.1},
					{"DAPSTALKERS_BOLTS", 0.1},
					{"DETECTOR_RKS20", 3.2},
					{"AGM_CableTie", 0.095},
					{"armst_MESHOK", 0.25},
					{"armst_spicki", 0.05},
					{"ARMST_zippo", 2},
					{"ARMST_lighter", 0.1},
					{"ARMST_sleepingbag", 1},
					{"ARMST_cigarettes", 0.2},
					///{"tf_anprc148jem", 2},
					{"tf_anprc154", 4.3},
					{"armst_item_pda", 2.5},
					{"Binocular", 2.5},
					{"Photoapparat", 4},	
					{"ItemCompass", 1.3},
					{"armst_NO1", 2},
					{"armst_NO2", 6},
					{"armst_NO3", 12},
					{"armst_NO4", 15},
					{"armst_NO5", 20},
					{"armst_NO6", 22},
					{"armst_NO7", 30},
					{"armst_CampingChair", 1},
					{"armst_CampingTable", 2},
					{"armst_Camping_Light", 0.8},
					{"armst_PortableLight", 3},
					{"armst_Camper", 5},
					{"ARMST_instruments", 4},
					
					{"armst_item_detectors_otklick", 6},
					{"ARMST_batteries", 0.15},
					
					{"Chemlight_red", 0.095},
					{"Chemlight_green", 0.095},
					{"Chemlight_blue", 0.095},
					{"Chemlight_yellow", 0.095},
				
                    {"SmokeShell", 5.5}, 
					{"SmokeShellYellow", 5.5},
					{"SmokeShellGreen", 5.5},
					{"SmokeShellRed", 5.5},
					{"SmokeShellOrange", 5.5},
					{"SmokeShellBlue", 5.5},
					
					{"Armst_item_rathion", 2.37},
					{"Armst_item_waterbottle", 0.25},
					{"Armst_item_can",0.9},
					{"Armst_item_shocolate", 0.15}
					
				};
			};
			
			class Headgear {
				displayName = $STR_TRADE_SECTION_HELMETS;
				totalPrice = 1000;
				items[] = {
					
					{"H_Watchcap_cbr",  0.2},
					{"H_Bandanna_sgg", 0.2},
					{"H_Bandanna_sand",  0.2},
					{"G_Bandanna_oli",  0.2},

					{"H_Cap_marshal", 2.3},
					{"H_Cap_red", 2.25},
					{"G_Lady_Blue", 0.4},
					{"G_Spectacles", 0.4},
					{"G_Spectacles_Tinted", 0.4},
					//{"armst_psy_protector_exp", 250},
					{"armst_Gasslon", 5},
					{"armst_GasP5", 11},
					{"armst_GasP7", 17.6},
					{"armst_BioGasMaskG25", 30}
					//{"armst_seva_visor", 70},
					//{"armst_seva_science_shlem", 35},
					//{"armst_seva_shlem", 35},
					//{"armst_R5", 50},
					//{"armst_R5_SH2", 52},
					//{"armst_R5_P", 54},
					//{"armst_R5_filter", 60},
					//{"armst_R5_SH2_filter", 62},
					//{"armst_R5_P_filter", 67}

				};
			};
			
			class VESTS {
				displayName = $STR_TRADE_SECTION_VESTS;
				totalPrice = 1000;
				items[] = {
					{"Kora", 1},
					{"Kora_p_ak", 1.5},
					{"Kora_p2_ak", 2}
				};
			};
			
			class BACKPACKS {
				displayName = $STR_TRADE_SECTION_BACKPACKS;
				totalPrice = 1000;
				items[] = {
					//BACKPACKS
					{"B_Kitbag_sgg", 3}
					//{"armst_backpack_ballon", 150},
					//{"armst_seva_science_backpack", 150},
					//{"armst_seva_backpack", 200},
					
				};
			};
		};
		
		class Buy 
		{
			class Weapons {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_WEAPONS;
				items[] = {

					{"av_makarov", 4},
					{"av_kedrpp", 10},
					{"arifle_av_bizon", 15},
					{"arifle_av_aksu", 19}
		
				};
			};
			
			class Magazines {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_AMMO;
				items[] = {
					
					{"8Rnd_Mag_pm", 0.55},
					{"16Rnd_9x21_Mag", 1.5},
					{"30Rnd_9x21_Mag", 0.55},
					{"30Rnd_ak_545x39_T_mag", 4.372},
					{"30Rnd_ak_545x39_mag", 5.699},
					{"64Rnd_9x19_mag", 4.326}
					
				};
			};
			
			class Remains {
				totalConsume = 1000;
				displayName = $STR_TRADE_SECTION_REMAINS;
				items[] = {
					
					{"Armst_mut_tushkano",2.25},
					//{"Armst_mut_cat",6},
					{"Armst_mut_dog",2},
					{"Armst_mut_plot",3},
					{"Armst_mut_boar",5},
					{"Armst_mut_psevdog",7},
					{"Armst_mut_burer2",20},
					{"Armst_mut_controller",90},
					{"Armst_mut_krovosos",40},
					//{"Armst_mut_snork",17},
					//{"Armst_mut_chimera",35},
					//{"Armst_mut_izlom",16},
					//{"Armst_mut_poltergeist",28},
					//{"Armst_mut_psevdogigant",250},
					{"Armst_mut_olen",25},
					{"Armst_mut_pauk",40}
				};
			};
			
			class Artefacts {
				totalConsume = 1000;
				displayName = $STR_TRADE_SECTION_ARTEFACTS;
				items[] = {
					
					//Artefacts
					//anomylki
					{"Item_TEARS_Unstab",5},
					{"Item_Medusa_Unstab",8},
					{"Item_GRAVI_Unstab",15},
					{"Item_STONEBLOOD_Unstab",28},
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
					{"DETECTOR_RKS20", 0.5},
					{"AGM_CableTie", 0.1},
					{"armst_MESHOK", 0.1},
					{"armst_spicki", 0.05},
					{"armst_item_pda", 0.5},
					{"ItemCompass", 1},
					
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
					{"ARMST_instruments", 1},
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
					{"armst_arthelp", 7},
					{"armst_NO1", 4},
					{"armst_NO2", 12},
					{"armst_NO3", 24},
					{"armst_NO4", 30},
					{"armst_NO5", 40},
					{"armst_NO6", 44},
					{"armst_NO7", 60},
					{"armst_CampingChair", 2},
					{"armst_CampingTable", 4},
					{"armst_Camping_Light", 0.8},
					{"armst_PortableLight", 6},
					{"armst_Camper", 10},
					
					//Chemlight
					{"Chemlight_red", 0.1},
					{"Chemlight_green", 0.1},
					{"Chemlight_blue", 0.1},
					{"Chemlight_yellow", 0.1},
					
					//Smoke
					{"SmokeShell", 2}, 
					{"SmokeShellYellow", 2},
					{"SmokeShellGreen", 2},
					{"SmokeShellRed", 2},
					{"SmokeShellOrange", 2},
					{"SmokeShellBlue", 2},
					
					//Food
					{"Armst_item_rathion", 2.37},
					{"Armst_item_waterbottle", 0.25},
					{"Armst_item_can",0.9},
					{"Armst_item_shocolate", 0.15},
					
					
					//EmptyBottle
					
					//Flashlight
					{"acc_flashlight", 0.1},
					
					//Medicine
					{"AGM_Bandage", 0.01}, 
					{"AGM_Morphine", 0.05},
					{"armst_item_antirad", 0.1},
					{"AGM_Bloodbag", 0.1},
					{"AGM_Epipen", 0.1},
					
					//Headgear
					{"H_Watchcap_cbr",  0.2},
					{"H_Bandanna_sgg", 0.2},
					{"H_Bandanna_sand",  0.2},

					//Gasmask
					{"G_Lady_Blue", 0.25},
					{"G_Spectacles", 0.25},
					{"G_Spectacles_Tinted", 0.25}
					
					
				};
				
			};
			
			class VESTS {
				displayName = $STR_TRADE_SECTION_VESTS;
				totalPrice = 1000;
				items[] = {
					{"Armst_science2", 1}
				};
			};
			
			class BACKPACKS {
				displayName = $STR_TRADE_SECTION_BACKPACKS;
				totalPrice = 1000;
				items[] = {
					//BACKPACKS
					{"armst_seva_backpack", 1}
					
				};
			};
		};
	};
