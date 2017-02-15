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
					{"av_aps", 8}, 
					
					//5.45
					{"arifle_av_ak74m", 80},
					{"arifle_av_ak74m_gp", 85},
					{"arifle_av_ak105s", 120}, 
					{"arifle_av_103", 140},
					{"arifle_av_103_gp", 150},
					
					
					//Уникал
					{"av_pk_base",  295},
					{"arifle_av_rpk74m_base", 145},
					{"arifle_av_104",  90},
					{"arifle_av_aksu",  40},
					{"arifle_av_vss", 350},
					{"srifle_av_svd",  250}
					
				};
			};		
			
			class Magazines {
				displayName = $STR_TRADE_SECTION_AMMO;
				totalPrice = 1000;
				items[] = {
					
					{"30Rnd_ak_545x39_mag", 5},
					{"30Rnd_ak_545x39_T_mag", 5},
					
					{"30Rnd_ak_762x39_mag", 10},
					{"30Rnd_ak_762x39_T_mag", 10},
					{"200Rnd_av_762x39_mag", 50},
					{"10Rnd_av_9x39mm_val", 25},
					{"20Rnd_av_9x39mm_SP5", 30},
					{"20Rnd_av_9x39mm_SP6", 35},
					
					{"20Rnd_av_9x39mm_val", 25},
					
					{"10Rnd_av_762x39_svd", 15},
					{"45Rnd_ak_762x39_mag", 15},
					
					{"8Rnd_Mag_pm", 0.5},
					{"20Rnd_9x21_Mag", 1.0},
					
					
					
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
					{"AGM_Bloodbag", 4},
					{"AGM_Epipen", 2}
					
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
					{"DETECTOR_RKS20", 3.5},
					{"AGM_CableTie", 0.1},
					{"armst_MESHOK", 0.1},
					{"ARMST_potatobag", 12},
					{"armst_taynik_big", 25},
					
					{"tf_anprc148jem", 2},
					{"armst_item_pda", 2.5},
					{"ARMST_akkum", 6},
					//baricad
					{"armst_bochka", 6},
					{"armst_Razorwire", 15},
					{"armst_pallet_vertical", 2},
					{"armst_armst_korob1", 7},
					{"armst_BagFence", 4.5},
					
					{"HandGrenade", 4},
					{"MiniGrenade", 4},
					
					{"SmokeShell", 1.5}, 
					{"SmokeShellYellow", 1.5},
					{"SmokeShellGreen", 1.5},
					{"SmokeShellRed", 1.5},
					{"SmokeShellOrange", 1.5},
					{"SmokeShellBlue", 1.5},
					
					{"APERSTripMine_Wire_Mag", 5},
					
					//Chemlight
					{"Chemlight_red", 1.5},
					{"Chemlight_green", 1.5},
					{"Chemlight_blue", 1.5},
					{"Chemlight_yellow", 1.5},
					
					{"Rangefinder", 7},
					{"Binocular", 2.5},
					{"Photoapparat", 3.5},
										
					{"ItemCompass", 1},
					
					{"armst_spicki", 0.05},
					{"ARMST_zippo", 1},
					{"ARMST_lighter", 0.2},
					{"ARMST_sleepingbag", 0.5},
					{"ARMST_cigarettes", 0.2},
					{"ToolKit", 0.4},
					
					//Food
					{"Armst_item_rathion", 2.5},
					{"Armst_item_waterbottle", 0.6},
					{"Armst_item_can",0.5}
					
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
					{"armst_M88PSM_un", 6},
					{"armst_ACHHelmet_Un", 6.5},
					{"ZSH_ZV", 8},
					{"Altyn_ochki", 10},
					{"Altyn_ZV", 10},
					{"armst_Hood2_voen", 0.2},
					
					//Gasmask
					{"Armst_balaclava_voen", 0.2},
					{"H_Bandanna_khk_hs", 0.2},
					{"H_Bandanna_khk", 0.2},
					{"G_Bandanna_oli", 0.2},
					
					
					{"armst_Gasslon", 10},
					{"armst_GasP5", 15},
					{"armst_GasP7", 20},
					{"armst_Gasscout", 10}
					
				};
			};
			
			class VESTS {
				displayName = $STR_TRADE_SECTION_VESTS;
				totalPrice = 1000;
				items[] = {
					
					//VESTS
					{"SP_JackEllis1_UNBlue1", 15},
					{"Smersh_kora_SVD_ARMY", 12},
					{"def_voen_easy", 10},
					{"def_voen_norm", 10},
					{"def_voen_hard", 10},
					{"Armst_sevavoen", 300},
					{"Armst_ekzoarmy", 1000}
					
				};
			};
			
			class BACKPACKS {
				displayName = $STR_TRADE_SECTION_BACKPACKS;
				totalPrice = 1000;
				items[] = {
					
					{"ARMST_RUKZAK_GREEN1", 2},
					{"B_Kitbag_rgr", 6},
					{"tf_anprc155", 2},
					
					//DshkM
					{"I_mas_Tripod_h_Bag", 5},
					{"I_mas_DShkM_h_Gun_Bag", 5},
					
					//backpacks
					{"B_TacticalPack_oli", 5}
					
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
					
					//5.45
					{"arifle_av_ak74m", 55},
					{"arifle_av_ak74m_gp", 60},
					{"arifle_av_ak105s", 70}, 
					{"arifle_av_103", 70},
					{"arifle_av_103_gp", 70},
					
					
					//Уникал
					{"av_pk_base",  325},
					{"arifle_av_rpk74m_base", 200},
					{"arifle_av_104",  70},
					{"arifle_av_aksu",  40},
					{"arifle_av_vss", 200},
					{"srifle_av_svd",  200}
				
				};
			};
			
			class Magazines {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_AMMO;
				items[] = {
					
					{"30Rnd_ak_545x39_mag", 2},
					{"30Rnd_ak_545x39_T_mag", 2},
					
					{"30Rnd_ak_762x39_mag", 3},
					{"30Rnd_ak_762x39_T_mag", 3},
					{"200Rnd_av_762x39_mag", 4},
					{"10Rnd_av_9x39mm_val", 1},
					
					{"20Rnd_av_9x39mm_val", 1.5},
					
					{"10Rnd_av_762x39_svd", 2},
					{"45Rnd_ak_762x39_mag", 3},
					
					{"8Rnd_Mag_pm", 0.5},
					{"20Rnd_9x21_Mag", 1.0},
					
					
					
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
					{"DETECTOR_RKS20", 3.5},
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
					
					{"HandGrenade", 4},
					{"MiniGrenade", 4},
					
					{"SmokeShell", 1.5}, 
					{"SmokeShellYellow", 1.5},
					{"SmokeShellGreen", 1.5},
					{"SmokeShellRed", 1.5},
					{"SmokeShellOrange", 1.5},
					{"SmokeShellBlue", 1.5},
					
					{"APERSTripMine_Wire_Mag", 5},
					
					//Chemlight
					{"Chemlight_red", 1.5},
					{"Chemlight_green", 1.5},
					{"Chemlight_blue", 1.5},
					{"Chemlight_yellow", 1.5},
					
					
					{"Binocular", 2.5},
					{"Photoapparat", 3.5},
										
					{"ItemCompass", 1},
					
					{"armst_spicki", 0.05},
					{"ToolKit", 0.4},
					
					//Food
					{"Armst_item_rathion", 0.6},
					{"Armst_item_waterbottle", 0.3},
					
					//EmptyBottle
					{"armst_item_waterbottleempty",0.2},
					{"armst_item_vodkaempty",0.3},
					{"armst_item_Beerempty",0.2},
					
					//Flashlight
					{"acc_flashlight", 0.1},
					
					//Aim
					{"av_pkp", 8},
					{"av_kobra", 10},
					{"optic_av_pso", 20},
					{"av_1p63", 16},
					{"av_bipod", 0.2},
					{"optic_av_1pn34", 100},

					//Headgear
					{"armst_Hood_voen", 0.2},
					{"Armst_cap_army", 0.25},
					{"Beret_a", 0.3},
					{"ZSH_1_zel", 6},
					{"ZSH_ochki", 6.5},
					{"ZSH_ZV", 8},
					{"Altyn_ochki", 10},
					{"Altyn_ZV", 10},
					
					//Gasmask
					{"Armst_balaclava_voen", 0.2},
					{"H_Bandanna_khk_hs", 0.2},
					{"H_Bandanna_khk", 0.2},
					{"G_Bandanna_oli", 0.2},
					
					
					{"armst_Gasslon", 10},
					{"armst_GasP5", 15},
					{"armst_GasP7", 20},
					{"armst_Gasscout", 10},
					
					//VESTS
					{"6B5_ARMY", 15},
					{"Smersh_kora_SVD_ARMY", 12},
					{"def_voen_easy", 10},
					{"def_voen_norm", 10},
					{"def_voen_hard", 10},
					{"Armst_sevavoen", 350},
					{"Armst_ekzoarmy", 700},
					
					{"ARMST_RUKZAK_GREEN1", 2},
					{"B_Kitbag_rgr", 6},
					{"tf_anprc155", 2},
					
					//DshkM
					{"I_mas_Tripod_h_Bag", 5},
					{"I_mas_DShkM_h_Gun_Bag", 5},
					
					//Minamet
					{"I_mas_Tripod_Bag", 5},
					{"I_mas_Podnos_Gun_Bag", 5},
					
					//backpacks
					{"B_TacticalPack_oli", 5}
					
					

				};
			};
		};
	};
