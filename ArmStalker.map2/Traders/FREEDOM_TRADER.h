class FREEDOM_TRADER 
	{
		ShowcaseType = "AGM_BOX_MISC"; 				//showcase must be placed near trader (<10m)
		ItemUp = 0.2;											//showed item  height relatively showcase
		CamRelative[] =  {0, 0.4, 1.5};									 //{-0.3, 0, 1.7};
		CamFOV =  1;
		noAllowedFactions[] = {"ARMST_STALKER","ARMST_RENEGADE","ARMST_SCIENCE","ARMST_DOLG","ARMST_MERCENARIES","ARMST_BANDITS","ARMST_ARMY","ARMST_MONOLITH"};		//
		
		class Sale 
		{
			class Weapons {
				displayName = $STR_TRADE_SECTION_WEAPONS;
				totalPrice = 1000;
				items[] = {
					
					//pistols
					{"av_makarov", 4},
					{"av_aps", 8}, 
				
					//Rifle
					{"arifle_av_aksu", 45},
					{"arifle_av_akms", 150},
										
					
					{"KA_M4A1_M203_F", 110},
					//{"KA_M4A1_F", 40},
					{"KA_SCAR_H", 100},
					{"KA_SCAR_H_EGLM", 105},
					{"armst_M16_F", 90},
					
					//Уникал
					{"av_svu", 350}
					     
				};
			};		
			
			class Magazines {
				displayName = $STR_TRADE_SECTION_AMMO;
				totalPrice = 1000;
				items[] = {
					
					//pistols
					{"8Rnd_Mag_pm", 0.5},
					{"20Rnd_9x21_Mag", 1.0},
					
					//Rifle
										
					
					
					{"30Rnd_ak_545x39_mag", 5},
					{"30Rnd_ak_545x39_T_mag", 5},
					
					{"30Rnd_ak_762x39_mag", 10},
					
					{"30Rnd_ak_762x39_T_mag", 10},
					{"KA_30Rnd_556x45_M855", 8},
					{"KA_30Rnd_556x45_M855A1", 8},
					{"KA_30Rnd_556x45_Mk262", 8},
					{"KA_30Rnd_556x45_XM996", 8},
					{"KA_30Rnd_556x45_M995AP", 8},
					{"KA_30Rnd_556x45_M856", 8},
					{"KA_20Rnd_762x51_M80", 8},
					{"KA_30Rnd_556x45_M855", 8},
					{"10Rnd_av_762x39_svd", 15},
					
					
					//HE_Grenade
					{"1Rnd_HE_Grenade_shell", 5},
					{"UGL_FlareWhite_F", 2},
					{"UGL_FlareGreen_F", 2},
					{"UGL_FlareRed_F", 2},
					{"UGL_FlareYellow_F", 2},
					{"1Rnd_Smoke_Grenade_shell", 2},
					{"1Rnd_SmokeRed_Grenade_shell", 2},
					{"1Rnd_SmokeGreen_Grenade_shell", 2},
					{"1Rnd_SmokeYellow_Grenade_shell", 2}
					
				};
			};			
			
			class WeaponItems {
				displayName = $STR_TRADE_SECTION_ACCESSORIES;
				totalPrice = 2000;
				items[] = {
					
					//Flashlight
					{"acc_flashlight", 0.1},
					
					//M4A1
					//Ствол
					{"103_Inches_Barrel", 0.15},
					{"145_Inches_Barrel", 0.25},
					//hand
					{"Hand_Guard_Rail", 0.25},
					{"Hand_Guard_Rail_Flashlight_Black", 0.35},
					//Прицел
					{"KA_Original_Sight_Carry_Handle", 0.35},
					{"KA_Eotech553", 0.5},
					{"KA_Rakurs", 1},
					//Приклад
					{"MOE_Grip_MOE_Stock_Black", 0.25},
					
					//SCAR-H
					{"acc_pointer_IR", 0.25},
					{"Laser_Black_IR", 0.25},
					
					{"13_Inches_Barrel", 0.1},
					{"157_Inches_Barrel", 0.2},
					{"197_Inches_Barrel", 0.3},
					
					{"AFG_Grip", 0.15},
					{"KA_Bipod", 0.15},
					{"GL_Scope", 0.25}
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
					{"DAPSTALKERS_BOLTS", 0.01},
					{"DETECTOR_RKS20", 3.5},
					{"AGM_CableTie", 0.1},
					{"armst_MESHOK", 0.1},
					{"Binocular", 2.5},
					{"armst_taynik_big", 45},
					
					
					{"ItemCompass", 1},
					{"armst_item_pda", 4},
					{"armst_spicki", 0.05},
					{"ARMST_zippo", 2},
					{"ARMST_lighter", 0.2},
					{"ARMST_sleepingbag", 0.5},
					{"ARMST_cigarettes", 0.5},
					{"tf_anprc148jem", 4},
					{"armst_arthelp", 15},
					//baricad
					{"armst_bochka", 3},
					{"armst_Razorwire", 2},
					{"armst_pallet_vertical", 0.5},
					{"armst_armst_korob1", 1},
					{"armst_BagFence", 1.5},
					{"armst_Camper", 2},
					
					{"ARMST_artdetector", 12},
					{"ARMST_batteries", 0.3},
					
					{"HandGrenade", 4},
					{"MiniGrenade", 4},
					
					{"SmokeShell", 1.5}, 
					{"SmokeShellYellow", 1.5},
					{"SmokeShellGreen", 1.5},
					{"SmokeShellRed", 1.5},
					{"SmokeShellOrange", 1.5},
					{"SmokeShellBlue", 1.5},
					
					{"Chemlight_red", 0.4},
					{"Chemlight_green", 0.4},
					{"Chemlight_blue", 0.4},
					{"Chemlight_yellow", 0.4},
					
					//Food
					{"Armst_item_can", 0.4},
					{"Armst_item_bred", 0.25},
					{"Armst_item_waterbottle", 0.6}
					
				};
			};
			
			class Headgear {
				displayName = $STR_TRADE_SECTION_HELMETS;
				totalPrice = 1000;
				items[] = {
					
					{"H_Bandanna_sgg",  0.2},
					{"H_Bandanna_surfer_blk", 0.2},
					{"Armst_cap_free", 0.2},
					{"Armst_cap_free2", 0.2},
					{"Armst_cap_free3", 0.2},
					{"Armst_cap_free4", 0.2},
					{"H_Booniehat_oli", 0.25},
					{"H_Hat_camo", 0.25},
					{"armst_Hood_Freedom", 0.25},
					{"armst_Hood2_Freedom", 0.25},
					{"Beret_freedom",  0.3},
					{"K6_3", 8},
					{"LSHZ_2DT_CH_CH_Y", 8},
					{"TIG", 8},
					{"TIG_ZV", 10},


					//Gasmask
					{"Armst_BalaclavaFreed", 0.2},
					{"G_Balaclava_oli", 0.2},
					{"armst_respirator", 5},
					{"armst_Gasslon", 10},
					{"armst_GasP5", 15},
					{"armst_GasP7", 20},
					{"armst_Gasscout", 10},
					{"armst_BioGasMaskG25", 30}
					
					
				};
			};
			
			class VESTS {
				displayName = $STR_TRADE_SECTION_VESTS;
				totalPrice = 1000;
				items[] = {
					
					{"Tarzan_w", 10},
					{"Smersh_kora_SVD_Freedom", 12},
					{"Smersh_kora_AK_Freedom", 14},
					{"Smersh_kora_PK_Freedom", 16},
					{"Armst_sevasvoboda", 200},
					{"Armst_ekzofreedom", 1300}
					
				};
			};
			
			class BACKPACKS {
				displayName = $STR_TRADE_SECTION_BACKPACKS;
				totalPrice = 1000;
				items[] = {
					
					{"ARMST_RUKZAK_GREENCAMO", 2},
					{"B_AssaultPack_khk", 4.5},
					{"B_FieldPack_oli", 6}
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
				
					//Rifle
					{"arifle_av_aksu", 40},
					{"arifle_av_akms", 85},
					{"arifle_F88", 65},
										
					
					{"KA_M4A1_M203_F", 70},
					{"KA_SCAR_H", 65},
					
					//Уникал
					{"av_svu", 200}
     
				};
			};
			
			class Magazines {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_AMMO;
				items[] = {
					
					//pistols
					{"8Rnd_Mag_pm", 0.5},
					{"20Rnd_9x21_Mag", 1.0},
					
					//Rifle
										
					
					{"30Rnd_ak_545x39_mag", 2},
					{"30Rnd_ak_545x39_T_mag", 2},
					
					{"30Rnd_ak_762x39_mag", 3},
					
					{"30Rnd_ak_762x39_T_mag", 3},
					{"KA_30Rnd_556x45_M855", 3},
					{"KA_30Rnd_556x45_M855A1", 3},
					{"KA_30Rnd_556x45_Mk262", 3},
					{"KA_30Rnd_556x45_XM996", 3},
					{"KA_30Rnd_556x45_M995AP", 3},
					{"KA_30Rnd_556x45_M856", 3},
					{"KA_20Rnd_762x51_M80", 3},
					
					{"10Rnd_av_762x39_svd", 3},
					
					
					//HE_Grenade
					{"1Rnd_HE_Grenade_shell", 5},
					{"UGL_FlareWhite_F", 2},
					{"UGL_FlareGreen_F", 2},
					{"UGL_FlareRed_F", 2},
					{"UGL_FlareYellow_F", 2},
					{"1Rnd_Smoke_Grenade_shell", 2},
					{"1Rnd_SmokeRed_Grenade_shell", 2},
					{"1Rnd_SmokeGreen_Grenade_shell", 2},
					{"1Rnd_SmokeYellow_Grenade_shell", 2}
					
				};
			};
			
			class Remains {
				totalConsume = 1000;
				displayName = $STR_TRADE_SECTION_REMAINS;
				items[] = {
					
					//Mut parts
					{"Armst_mut_boar", 1},
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
					{"Armst_mut_snork", 1}
				};
			};
			
			class Artefacts {
				totalConsume = 1000;
				displayName = $STR_TRADE_SECTION_ARTEFACTS;
				items[] = {
					
					//Artefacts
					//anomylki
					{"Item_TEARS_Unstab",3},
					{"Item_Medusa_Unstab",4},
					{"Item_GRAVI_Unstab",4.5},
					{"Item_STONEBLOOD_Unstab",5},
					
					{"Item_SPIKES_Unstab",6},
					{"Item_Slude_Unstab",8},
					{"Item_EMPTY_Unstab",12},
					{"Item_FIRE_Unstab",8},
					{"Item_MEAT_Unstab",20},
					
					{"Item_ELECTRA_Unstab",200},
					{"Item_BATTERY_Unstab",220},
					{"Item_CRYSTALL_Unstab",400},
					{"Item_SOUL_Unstab",800}
					
					
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
					{"DAPSTALKERS_BOLTS", 0.01},
					{"DETECTOR_RKS20", 3.5},
					{"AGM_CableTie", 0.1},
					{"armst_MESHOK", 0.1},
					{"Binocular", 2.5},
					
					
					{"ItemCompass", 1},
					{"armst_item_pda", 1.5},
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
					
					{"HandGrenade", 4},
					{"MiniGrenade", 4},
					
					{"SmokeShell", 1.5}, 
					{"SmokeShellYellow", 1.5},
					{"SmokeShellGreen", 1.5},
					{"SmokeShellRed", 1.5},
					{"SmokeShellOrange", 1.5},
					{"SmokeShellBlue", 1.5},
					
					{"Chemlight_red", 0.4},
					{"Chemlight_green", 0.4},
					{"Chemlight_blue", 0.4},
					{"Chemlight_yellow", 0.4},
					
					//Food
					{"Armst_item_can", 0.4},
					{"Armst_item_bred", 0.25},
					{"Armst_item_waterbottle", 0.6},
					
					//EmptyBottle
					{"armst_item_waterbottleempty",0.5},
					{"armst_item_vodkaempty",0.3},
					{"armst_item_Beerempty",0.2},
					
					//Medicine
					{"AGM_Bandage", 0.2}, 
					{"AGM_Morphine", 0.5},
					{"armst_item_antirad", 2.5},
					{"AGM_Bloodbag", 4},
					{"AGM_Epipen", 2},
					
					//Headgear
					{"H_Bandanna_sgg",  0.2},
					{"H_Bandanna_surfer_blk", 0.2},
					{"Armst_cap_free", 0.2},
					{"Armst_cap_free2", 0.2},
					{"Armst_cap_free3", 0.2},
					{"Armst_cap_free4", 0.2},
					{"H_Booniehat_oli", 0.25},
					{"H_Hat_camo", 0.25},
					{"armst_Hood_Freedom", 0.25},
					{"Beret_freedom",  0.3},
					{"K6_3", 8},
					{"LSHZ_2DT_CH_CH_Y", 8},
					{"TIG", 8},
					{"TIG_ZV", 10},



					//Gasmask
					{"Armst_BalaclavaFreed", 0.2},
					{"G_Balaclava_oli", 0.2},
					{"armst_respirator", 1},
					{"armst_Gasslon", 10},
					{"armst_GasP5", 15},
					{"armst_GasP7", 20},
					{"armst_Gasscout", 10},
					{"armst_BioGasMaskG25", 30},
					
					//Vests
					{"Tarzan_w", 10},
					{"Smersh_kora_SVD_Freedom", 12},
					{"Smersh_kora_AK_Freedom", 14},
					{"Smersh_kora_PK_Freedom", 16},
					{"Armst_sevasvoboda", 350},
					{"Armst_ekzofreedom", 700},
					
					//Backpacks
					{"ARMST_RUKZAK_GREENCAMO", 2},
					{"B_AssaultPack_khk", 4.5},
					{"B_FieldPack_oli", 6}
					
				};
			};
		};
	};
