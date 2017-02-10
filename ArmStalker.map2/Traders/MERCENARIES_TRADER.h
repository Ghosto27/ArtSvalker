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
	
	class MERCENARIES_TRADER 
	{
		ShowcaseType = "AGM_BOX_MISC"; 				//showcase must be placed near trader (<10m)
		ItemUp = 0.2;											//showed item  height relatively showcase
		CamRelative[] =  {0, 0.4, 1.5};									 //{-0.3, 0, 1.7};
		CamFOV =  1;
		noAllowedFactions[] = {"ARMST_STALKER","ARMST_RENEGADE","ARMST_SCIENCE","ARMST_FREEDOM","ARMST_DOLG","ARMST_BANDITS","ARMST_ARMY","ARMST_MONOLITH"};		//
		
		class Sale 
		{
			class Weapons {
				displayName = $STR_TRADE_SECTION_WEAPONS;
				totalPrice = 1000;
				items[] = {
					
					//pistols
					{"Axe", 7},
					{"machete", 4},
					{"av_makarov", 4},
					{"av_aps", 8},
					{"hgun_ACPC2_F", 8},
					
					//Rifles
					{"arifle_av_aksu_2", 80},
					{"KA_SCAR_H_EGLM", 110},
					{"arifle_ak_sf", 120},
					{"arifle_av_vsk", 125},
					{"KA_SCAR_H", 140},
					{"armst_M16_F", 160},
					{"arifle_av_vss", 200},
					{"arifle_av_sr3", 350}
					
				};
			};	
			
			class Magazines {
				displayName = $STR_TRADE_SECTION_AMMO;
				totalPrice = 1000;
				items[] = {
					
					{"30Rnd_ak_545x39_mag", 5},
					{"30Rnd_ak_545x39_T_mag", 5},
					{"10Rnd_av_9x39mm_SP5", 10},
					{"10Rnd_av_9x39mm_SP6", 15},
					{"20Rnd_av_9x39mm_vsk", 20},
					{"20Rnd_av_9x39mm_SP5", 20},
					{"20Rnd_av_9x39mm_SP6", 25},
					
					{"9Rnd_45ACP_Mag", 0.8},
					{"KA_20Rnd_762x51_M80", 8},
					
					{"KA_30Rnd_556x45_M855", 10},
					{"KA_20Rnd_762x51_M80", 8},
					{"8Rnd_Mag_pm", 0.5},
					
					{"20Rnd_9x21_Mag", 1},
					
					{"30Rnd_ak_762x39_mag", 10},
					{"30Rnd_ak_762x39_T_mag", 10},
					
					
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
					
					//ACCESSORIES
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
					{"acc_flashlight", 0.1},
					{"Flashlight_Black", 0.1},
					
					{"acc_pointer_IR", 1},
					{"Laser_Black_IR", 1},
					
					{"13_Inches_Barrel", 0.1},
					{"157_Inches_Barrel", 0.2},
					{"197_Inches_Barrel", 0.3},
					
					{"AFG_Grip", 0.15},
					{"KA_Bipod", 0.15}
					
					
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
					{"DAPSTALKERS_BOLTS", 0.1},
					{"DETECTOR_RKS20", 3.5},
					{"AGM_CableTie", 0.1},
					{"armst_MESHOK", 0.1},
					{"armst_taynik_big", 45},
					
					{"tf_anprc148jem", 2},
					{"tf_fadak", 1.5},
					{"tf_pnr1000a", 1.5},
					
					{"tf_microdagr", 1},
					{"armst_item_pda", 3},
					
					//baricad
					{"armst_bochka", 3},
					{"armst_Razorwire", 2},
					{"armst_pallet_vertical", 1},
					{"armst_armst_korob1", 3},
					
					{"HandGrenade", 4},
					{"MiniGrenade", 4},
					
					{"SmokeShell", 1.5}, 
					{"SmokeShellYellow", 1.5},
					{"SmokeShellGreen", 1.5},
					{"SmokeShellRed", 1.5},
					{"SmokeShellOrange", 1.5},
					{"SmokeShellBlue", 1.5},
					
					//Chemlight
					{"Chemlight_red", 0.4},
					{"Chemlight_green", 0.4},
					{"Chemlight_blue", 0.4},
					{"Chemlight_yellow", 0.4},
					
					
					{"Binocular", 2.5},
					{"Photoapparat", 3.5},
					{"Rangefinder", 7},
					
					
					{"ItemCompass", 1},
					{"ItemGPS", 6},
					
					{"armst_spicki", 0.05},
					{"ARMST_zippo", 2},
					{"ARMST_lighter", 0.2},
					{"ARMST_sleepingbag", 0.5},
					{"ARMST_cigarettes", 0.2},

					//Food
					{"Armst_item_can",0.4},
					{"Armst_item_bred",0.25},
					{"Armst_item_rathion",1},
					{"Armst_item_waterbottle",0.6}
				};
			};
			
			class Headgear {
				displayName = $STR_TRADE_SECTION_HELMETS;
				totalPrice = 1000;
				items[] = {
					
					{"H_MilCap_blue",  0.2},
					{"H_Bandanna_blu", 0.2},
					{"H_Bandanna_gry",  0.2},
					{"H_ShemagOpen_khk", 0.2},
					{"Armst_cap_merc", 0.2},
					{"H_HelmetB_light_black", 8},
					{"H_HelmetB", 8},
					{"H_HelmetB_black", 8},
					{"armst_ACHHelmet", 10},
					{"Altyn_ch_ch", 12},
					{"H_HelmetSpecB", 15},
					{"H_HelmetSpecB_blk", 15},
					
					//Gasmask
					{"G_Bandanna_beast", 0.2},
					{"G_Bandanna_shades", 0.25},
					{"G_Bandanna_blk", 0.2},
					{"G_Lowprofile", 0.25},
					{"G_Bandanna_aviator", 0.25},
					{"G_Bandanna_beast", 0.25},
					{"G_Balaclava_blk", 0.25},
					{"G_Balaclava_combat", 0.3},
					{"G_Balaclava_lowprofile", 0.3},
					{"G_Balaclava_TI_blk_F", 2},
					{"armst_BioGasMaskG25", 30},
					{"armst_gasmaskM40", 35},
					{"armst_G100", 35}
					
					
				};
			};
			
			class VESTS {
				displayName = $STR_TRADE_SECTION_VESTS;
				totalPrice = 1000;
				items[] = {
					
					{"V_TacVestIR_blk", 10},
					{"ARMST_Harness1_Black", 10},
					{"ARMST_PlateCarrier1_Grey", 15},
					{"ARMST_PlateCarrier1_Black", 15},
					{"ARMST_Tactical1_Black", 15},
					{"Armst_sevanaemnik", 170},
					{"Armst_ekzomercenaries", 1000}
					
				};
			};
			
			class BACKPACKS {
				displayName = $STR_TRADE_SECTION_BACKPACKS;
				totalPrice = 1000;
				items[] = {
					
					{"tf_rt1523g_black", 4},
					{"ARMST_RUKZAK_BLUE1", 2},
					{"ARMST_RUKZAK_BLACKBLUE", 2},
					{"B_AssaultPack_blk", 4},
					{"B_TacticalPack_blk", 6}
					
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
					{"hgun_ACPC2_F", 8},
					
					//Rifles
					{"arifle_av_vsk", 200},
					{"arifle_av_aksu_2", 40},
					{"KA_SCAR_H_EGLM", 65},
					{"arifle_ak_sf", 80},
					{"KA_M4A1_F", 60}
					
     
				};
			};
			
			class Magazines {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_AMMO;
				items[] = {
					
					{"30Rnd_ak_545x39_mag", 2},
					{"30Rnd_ak_545x39_T_mag", 2},
					{"20Rnd_av_9x39mm_vsk", 3},
					
					{"9Rnd_45ACP_Mag", 0.8},
					{"KA_20Rnd_762x51_M80", 2.5},
					
					{"KA_30Rnd_556x45_M855", 2.5},
					{"8Rnd_Mag_pm", 0.5},
					
					{"20Rnd_9x21_Mag", 1},
					
					{"30Rnd_ak_762x39_mag", 3},
					{"30Rnd_ak_762x39_T_mag", 3},
					
					
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
					{"Item_TEARS_Unstab",0.3},
					{"Item_Medusa_Unstab",1},
					{"Item_GRAVI_Unstab",2},
					{"Item_STONEBLOOD_Unstab",3},
					{"Item_SPIKES_Unstab",6},
					{"Item_Slude_Unstab",12},
					{"Item_EMPTY_Unstab",20},
					{"Item_FIRE_Unstab",37},
					{"Item_MEAT_Unstab",60}
					
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
					
					{"tf_anprc148jem", 0.5},
					{"tf_fadak", 1.5},
					{"tf_pnr1000a", 1.5},
					
					{"tf_microdagr", 1},
					
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
					
					//Chemlight
					{"Chemlight_red", 0.4},
					{"Chemlight_green", 0.4},
					{"Chemlight_blue", 0.4},
					{"Chemlight_yellow", 0.4},
					
					
					{"Binocular", 2.5},
					{"Photoapparat", 3.5},
					{"Rangefinder", 7},
					
					
					{"ItemCompass", 1},
					{"ItemGPS", 6},
					
					{"armst_spicki", 0.05},

					//Food
					{"Armst_item_can",0.4},
					{"Armst_item_bred",0.25},
					{"Armst_item_rathion",1},
					{"Armst_item_waterbottle",0.6},

										
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
					
					//ACCESSORIES
					{"acc_flashlight", 0.001},
					{"Flashlight_Black", 0.1},
					
					{"acc_pointer_IR", 1},
					{"Laser_Black_IR", 1},
					
					{"13_Inches_Barrel", 0.1},
					{"157_Inches_Barrel", 0.2},
					{"197_Inches_Barrel", 0.3},
					
					{"AFG_Grip", 0.15},
					{"KA_Bipod", 0.15},
					{"GL_Scope", 0.25},
					
					//mufflers
					{"muzzle_av_snds_sr", 10.0},
					{"muzzle_snds_acp", 1},
					{"optic_Hamr", 20},
					{"optic_MRCO", 20},
					
					{"av_barska",7.5},
					
					//Headgear
					{"H_MilCap_blue",  0.2},
					{"H_Bandanna_blu", 0.2},
					{"H_Bandanna_gry",  0.2},
					{"H_ShemagOpen_khk", 0.2},
					{"Armst_cap_merc", 0.2},
					{"H_HelmetB_light_black", 8},
					{"H_HelmetB", 8},
					{"H_HelmetB_black", 8},
					{"Altyn_ch_ch", 12},
					{"H_HelmetSpecB", 15},
					{"H_HelmetSpecB_blk", 15},
					
					//Gasmask
					{"G_Bandanna_beast", 0.2},
					{"G_Bandanna_shades", 0.25},
					{"G_Bandanna_blk", 0.2},
					{"G_Lowprofile", 0.25},
					{"G_Balaclava_blk", 0.25},
					{"G_Balaclava_combat", 0.3},
					{"G_Balaclava_lowprofile", 0.3},
					{"armst_BioGasMaskG25", 30},
					{"armst_gasmaskM40", 35},
					{"armst_G100", 35},
					
					//Vests
					{"V_TacVestIR_blk", 10},
					{"ARMST_Harness1_Black", 10},
					{"ARMST_PlateCarrier1_Grey", 15},
					{"ARMST_PlateCarrier1_Black", 15},
					{"ARMST_Tactical1_Black", 15},
					{"Armst_sevanaemnik", 350},
					{"Armst_ekzomercenaries", 750},
					
					//Backpacks
					{"ARMST_RUKZAK_BLUE1", 2},
					{"ARMST_RUKZAK_BLACKBLUE", 2},
					{"B_AssaultPack_blk", 4},
					{"B_TacticalPack_blk", 6}
					
				};
			};
		};
	};
