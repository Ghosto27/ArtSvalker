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
	
	class ARMY_TRADER
	{
		ShowcaseType = "AGM_BOX_MISC"; 				//showcase must be placed near trader (<10m)
		ItemUp = 0.2;											//showed item  height relatively showcase
		CamRelative[] =  {0, 0.4, 1.5};									 //{-0.3, 0, 1.7};
		CamFOV =  1;
		noAllowedFactions[] = {"ARMST_STALKER","ARMST_RENEGADE","ARMST_SCIENCE","ARMST_FREEDOM","ARMST_DOLG","ARMST_MERCENARIES","ARMST_BANDITS","ARMST_MONOLITH"};
		
		class Sale 
		{
			class Weapons {
				displayName = $STR_TRADE_SECTION_WEAPONS;
				totalPrice = 1000;
				items[] = {
					
					//pistols
					{"av_makarov", 4},
					{"av_aps", 7}, 
					
					//5.45
					{"arifle_av_bizon", 15},
					{"arifle_av_aksu", 19},
					{"arifle_av_ak74_1", 23},
					{"arifle_av_ak74g", 30},
					{"arifle_av_ak74m", 32},
					{"arifle_av_ak74m_gp", 38},
					{"arifle_av_aks74", 35}			
				};
			};		
			
			class Magazines {
				displayName = $STR_TRADE_SECTION_AMMO;
				totalPrice = 1000;
				items[] = {
					
					{"30Rnd_ak_545x39_T_mag", 4.372},
					{"30Rnd_ak_545x39_mag", 5.699},
					{"64Rnd_9x19_mag", 4.326},
					
					{"8Rnd_Mag_pm", 0.55},
					{"20Rnd_9x21_Mag", 0.82},
					
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
				totalPrice = 1000;
				items[] = {
					
					//Flashlight
					{"acc_flashlight", 2.2}
				};
			};	
			
			class Medicine {
				displayName = $STR_TRADE_SECTION_MEDICINE;
				totalPrice = 1000;
				items[] = {
					
					//Medicine
					{"AGM_Bandage", 0.15}, 
					//{"ARMST_handwarmer", 0.5},
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
					
					//Money
					{"ARMST_udostoveren", 0.1},
					{"ARMST_propusk", 0.1},
					{"armst_money100R", 1},
					{"armst_money5000R", 5},
					{"armst_money10000R", 10},
					{"armst_money50000R", 50},

					//Others
					{"DAPSTALKERS_BOLTS", 0.1},
					{"DETECTOR_RKS20", 3.2},
					{"AGM_CableTie", 0.095},
					{"armst_MESHOK", 0.25},
					//{"armst_taynik_big", 50},
					
					{"tf_anprc154", 4.3},
					///{"tf_anprc148jem", 2},
					{"armst_item_pda", 2.5},
					{"ARMST_akkum", 4},
					//baricad
					{"armst_bochka", 6},
					{"armst_Razorwire", 12},
					{"armst_pallet_vertical", 2},
					{"armst_armst_korob1", 7},
					{"armst_BagFence", 3.5},
					
					{"HandGrenade", 4.37},
					{"MiniGrenade", 4.37},
					
					{"SmokeShell", 5.5}, 
					{"SmokeShellYellow", 5.5},
					{"SmokeShellGreen", 5.5},
					{"SmokeShellRed", 5.5},
					{"SmokeShellOrange", 5.5},
					{"SmokeShellBlue", 5.5},
					
					
					//Chemlight
					{"Chemlight_red", 0.095},
					{"Chemlight_green", 0.095},
					{"Chemlight_blue", 0.095},
					{"Chemlight_yellow", 0.095},
					
					{"Rangefinder", 7},
					{"Binocular", 2.5},
					{"Photoapparat", 4},	
					{"ItemCompass", 1.3},
					
					{"armst_spicki", 0.05},
					{"ARMST_zippo", 1.7},
					{"ARMST_lighter", 0.2},
					{"ARMST_sleepingbag", 0.9},
					{"ARMST_cigarettes", 0.211},
					{"ToolKit", 6},
					
					//Food
					{"Armst_item_rathion", 2.37},
					{"Armst_item_waterbottle", 0.25},
					{"Armst_item_can",0.9}
					
				};
			};
			
			class Headgear {
				displayName = $STR_TRADE_SECTION_HELMETS;
				totalPrice = 1000;
				items[] = {
					
					//Headgear
					{"armst_beret_un", 0.2},
					{"Armst_cap_army", 0.25},
					{"Beret_a", 0.3},
					{"SH_68_ch", 4},
					{"SH_68", 4},
					{"ZSH_1_zel", 4.65},
					{"Skat", 6.3},
					
					{"Altyn_ochki", 8.4},
					{"Altyn", 8},
					{"armst_Hood2_voen", 0.25},
					
					//Gasmask
					{"Armst_balaclava_voen", 0.2},
					{"H_Bandanna_khk_hs", 0.2},
					{"H_Bandanna_khk", 0.2},
					{"G_Bandanna_oli", 0.2},
					
					
					{"armst_Gasslon", 5},
					{"armst_GasP5", 11},
					{"armst_GasP7", 17.6}
					
				};
			};
			
			class VESTS {
				displayName = $STR_TRADE_SECTION_VESTS;
				totalPrice = 1000;
				items[] = {
					
					//VESTS
					{"Smersh_kora_SVD_ARMY", 19},
					{"def_voen_easy", 5},
					{"def_voen_norm", 10},
					{"def_voen_hard", 15},
					{"6B5_ARMY", 7.6}
					
				};
			};
			
			class BACKPACKS {
				displayName = $STR_TRADE_SECTION_BACKPACKS;
				totalPrice = 1000;
				items[] = {
					
					{"ARMST_RUKZAK_GREEN1", 2},
					{"B_Kitbag_rgr", 7},
					
					//DshkM
					{"I_mas_Tripod_h_Bag", 5},
					{"I_mas_DShkM_h_Gun_Bag", 15}
					
					//backpacks
					
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
					{"av_aps", 8}

				
				};
			};
			
			class Magazines {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_AMMO;
				items[] = {
					
					
					
					
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
					{"DETECTOR_RKS20", 1.5},
					{"AGM_CableTie", 0.1},
					{"armst_MESHOK", 0.1},
					
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
					
					
					//backpacks
					{"B_TacticalPack_oli", 5}
					
					

				};
			};
		};
	};
