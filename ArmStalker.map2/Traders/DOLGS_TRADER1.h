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
	
	class DOLGS_TRADER1 
	{
		ShowcaseType = "AGM_BOX_MISC"; 				//showcase must be placed near trader (<10m)
		ItemUp = 0.2;											//showed item  height relatively showcase
		CamRelative[] =  {0, 0.4, 1.5};									 //{-0.3, 0, 1.7};
		CamFOV =  1;
		noAllowedFactions[] = {"ARMST_STALKER","ARMST_RENEGADE","ARMST_SCIENCE","ARMST_FREEDOM","ARMST_MERCENARIES","ARMST_BANDITS","ARMST_ARMY","ARMST_MONOLITH"};	//
		
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
					{"arifle_av_103", 140},
					{"arifle_av_103_gp", 150},
					
					
				
					//Уникал
					{"av_pk_base",  450},
					{"arifle_av_rpk74_base", 175},
					{"arifle_av_groza", 110},
					{"arifle_av_groza_gp", 120}
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
					{"30Rnd_ak_762x39_mag", 10},
					{"30Rnd_ak_762x39_T_mag", 10},
					{"30Rnd_ak_545x39_mag", 5},
					{"30Rnd_ak_545x39_T_mag", 5},
					{"45Rnd_ak_545x39_mag", 8.5},
					
					{"200Rnd_av_762x39_mag", 12},
					{"200Rnd_av_762x39_T_mag", 12},
					
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
					{"acc_flashlight", 0.01}
					
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
					{"armst_money100R", 1.0},
					{"armst_money5000R", 5.0},
					{"armst_money10000R", 10},
					{"armst_money50000R", 50},
					
					//Others
					{"DAPSTALKERS_BOLTS", 0.1},
					{"DETECTOR_RKS20", 3.5},
					{"AGM_CableTie", 0.1},
					{"armst_MESHOK", 0.1},
					{"Binocular", 2.5},
					{"Photoapparat", 3.5},
					{"armst_taynik_big", 45},
					
					{"armst_spicki", 0.05},
					{"ARMST_zippo", 2},
					{"ARMST_lighter", 0.2},
					{"ARMST_sleepingbag", 0.5},
					{"ARMST_cigarettes", 0.18},
					{"tf_anprc148jem", 4},
					//baricad
					{"armst_bochka", 3},
					{"armst_Razorwire", 2},
					{"armst_pallet_vertical", 0.5},
					{"armst_armst_korob1", 1},
					{"armst_BagFence", 1.5},
					{"armst_Camper", 2},
					
					{"armst_item_pda", 4},
					{"ItemCompass", 1},
					
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

					//Food
					{"Armst_item_can", 0.4},
					{"Armst_item_bred", 0.250},
					{"Armst_item_waterbottle", 0.6}

				};
			};
			
			class Headgear {
				displayName = $STR_TRADE_SECTION_HELMETS;
				totalPrice = 1000;
				items[] = {
					
					//Headgear
					{"armst_Hood_Dolg",  0.25},
					{"armst_Hood2_Black",  0.25},
					{"armst_Hood2_Dolg",  0.25},
					{"H_Bandanna_gry", 0.2},
					{"armst_cap_dolg", 0.25},
					{"Beret_dolg",  0.3},
					
					{"Altyn_ch_ochki", 8},
					{"ZSH_1_ZV", 10},
					{"Rys", 8},
					{"Rys_ZV", 10},
					
					//Gasmask
					{"Armst_balaclava_dolg", 0.2},
					{"armst_respirator", 5.0},
					{"armst_Gasslon", 10},
					{"armst_GasP5", 15},
					{"armst_GasP7", 20},
					{"armst_Gasscout", 10},
					{"armst_gasm20", 14}
					
					
					
				};
			};
			
			class VESTS {
				displayName = $STR_TRADE_SECTION_VESTS;
				totalPrice = 1000;
				items[] = {
	
					{"V94_ch3", 10},
					{"Smersh_kora_SVD_Dolg", 12},
					{"Smersh_kora_AK_Dolg", 14},
					{"Smersh_kora_PK_Dolg", 16},
					{"Armst_sevadolg", 200},
					{"Armst_ekzodolg", 1300}
					
				};
			};
			
			class BACKPACKS {
				displayName = $STR_TRADE_SECTION_BACKPACKS;
				totalPrice = 1000;
				items[] = {
					
					{"ARMST_RUKZAK_BLACK2", 2},
					{"B_AssaultPack_blk", 4.5},
					{"B_FieldPack_blk", 6}

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
					
					{"arifle_av_103", 90},
					{"arifle_av_103_gp", 95},
					{"arifle_av_aksu", 40},
					
					
				
					//Уникал
					{"av_pk_base",  200},
					{"arifle_av_rpk74_base", 140},
					{"arifle_av_groza", 65},
					{"arifle_av_groza_gp", 70}
					
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
					{"30Rnd_ak_762x39_mag", 3},
					{"30Rnd_ak_762x39_T_mag", 3},
					{"30Rnd_ak_545x39_mag", 2},
					{"30Rnd_ak_545x39_T_mag", 2},
					{"45Rnd_ak_545x39_mag", 3},
					
					{"200Rnd_av_762x39_mag", 12},
					{"200Rnd_av_762x39_T_mag", 12},
					
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
					{"Armst_mut_boar",5},
					{"Armst_mut_burer2",17},
					{"Armst_mut_controller",20},
					{"Armst_mut_krovosos",30},
					{"Armst_mut_chimera",35},
					{"Armst_mut_dog",3},
					{"Armst_mut_olen",2},
					{"Armst_mut_pauk",35},
					{"Armst_mut_plot",4},
					{"Armst_mut_psevdog",4.5},
					{"Armst_mut_poltergeist",28},
					{"Armst_mut_psevdogigant",250},
					{"Armst_mut_snork",17}
				};
			};
			
			class Artefacts {
				totalConsume = 1000;
				displayName = $STR_TRADE_SECTION_ARTEFACTS;
				items[] = {
					
					//Artefacts
					//anomylki
					
					//Craft
					
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
					{"Photoapparat", 3.5},
					
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
					
					{"armst_item_pda", 1.5},
					{"ItemCompass", 1},
					
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

					//Food
					{"Armst_item_can", 0.4},
					{"Armst_item_bred", 0.250},
					{"Armst_item_waterbottle", 0.6},
					
					//EmptyBottle
					{"armst_item_waterbottleempty",0.5},
					{"armst_item_vodkaempty",0.3},
					{"armst_item_Beerempty",0.2},

					//Headgear
					{"armst_Hood_Dolg",  0.25},
					{"H_Bandanna_gry", 0.2},
					{"armst_cap_dolg", 0.25},
					{"Beret_dolg",  0.3},
					
					{"Altyn_ch_ochki", 8},
					{"ZSH_1_ZV", 10},
					{"Rys", 8},
					{"Rys_ZV", 10},
					
					//Gasmask
					{"Armst_balaclava_dolg", 0.2},
					{"armst_respirator", 1},
					{"armst_Gasslon", 10},
					{"armst_GasP5", 15},
					{"armst_GasP7", 20},
					{"armst_Gasscout", 10},
					{"armst_BioGasMaskG25", 30},
					
					//Vests
					{"V94_ch3", 10},
					{"Smersh_kora_SVD_Dolg", 12},
					{"Smersh_kora_AK_Dolg", 14},
					{"Smersh_kora_PK_Dolg", 16},
					{"Armst_sevadolg", 350},
					{"Armst_ekzodolg", 700},
					
					//Backpacks
					{"ARMST_RUKZAK_BLACK2", 2},
					{"B_AssaultPack_blk", 4.5},
					{"B_FieldPack_blk", 6}
					
				};
			};
		};
	};
