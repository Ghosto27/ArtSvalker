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
	
	class MONOLIT_TRADER 
	{
		ShowcaseType = "AGM_BOX_MISC"; 				//showcase must be placed near trader (<10m)
		ItemUp = 0.8;											//showed item  height relatively showcase
		CamRelative[] =  {0, 0.5, 1.8};									 //{-0.3, 0, 1.7};
		CamFOV =  1;
		noAllowedFactions[] = {"ARMST_STALKER","ARMST_RENEGADE","ARMST_SCIENCE","ARMST_FREEDOM","ARMST_DOLG","ARMST_MERCENARIES","ARMST_BANDITS","ARMST_ARMY"};
		
		class Sale 
		{
			class Weapons {
				displayName = $STR_TRADE_SECTION_WEAPONS;
				totalPrice = 1;
				items[] = {
					
					//pistols
					{"av_makarov", 1},
					{"av_aps", 1},
					{"Axe", 1},
					{"machete", 1},
					
					//Rifles
					{"arifle_av_vsk", 1},
					{"arifle_av_103", 1},
					{"arifle_ak_sf", 1},
					{"arifle_av_aks74", 1},
					{"arifle_av_ak103s_gl", 1},
					{"arifle_av_bul", 1},
					{"av_pkp_base", 1},
					{"arifle_sa_vssk", 1},
					{"launch_RPG7V", 1},
					{"arifle_F88", 1}
					

				};
			};		
			
			class Magazines {
				displayName = $STR_TRADE_SECTION_AMMO;
				totalPrice = 1;
				items[] = {
					
					{"KA_20Rnd_762x51_M80", 1},
					{"KA_30Rnd_556x45_M855", 1},
					{"8Rnd_Mag_pm", 1},
					{"20Rnd_9x21_Mag", 1},
					
					{"30Rnd_ak_545x39_mag", 1},
					{"30Rnd_ak_762x39_mag", 1},
					{"30Rnd_ak_762x39_T_mag", 1},
					{"20Rnd_av_9x39mm_vsk", 1},
					
					{"5Rnd_as_127x55mm_pt", 1},
					{"200Rnd_av_762x39_mag", 1},
					{"RPG7_PG7V", 1},
					
					
					//HE_Grenade
					{"1Rnd_HE_Grenade_shell", 1},
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
				totalPrice = 1;
				items[] = {
					
					//ACCESSORIES
					{"av_1p63", 1},
					{"optic_av_1p78", 1},
					{"bipod_01_F_blk", 1},
					{"acc_flashlight", 1},
					{"optic_DMS", 1},
					{"av_barska", 1},
					{"optic_av_aimp", 1},
					{"Flashlight_Black", 1},
					{"acc_pointer_IR", 1},
					{"Laser_Black_IR", 1},
					
					{"13_Inches_Barrel", 1},
					{"157_Inches_Barrel", 1},
					{"197_Inches_Barrel", 1},
					
					{"AFG_Grip", 1},
					{"KA_Bipod", 1}
					
					
				};
			};	
			
			class Medicine {
				displayName = $STR_TRADE_SECTION_MEDICINE;
				totalPrice = 1;
				items[] = {
					
					//Medicine
					{"AGM_Bandage", 1}, 
					{"ARMST_handwarmer", 0.5},
					{"AGM_Morphine", 1},
					{"armst_item_antirad", 1},
					{"AGM_Bloodbag", 1},
					{"AGM_Epipen", 1}
					
				};
			};
			
			class Items {
				displayName = $STR_TRADE_SECTION_OTHERS;
				totalPrice = 1;
				items[] = {
					
					//Money
					
					//Others
					{"DAPSTALKERS_BOLTS", 1},
					{"DETECTOR_RKS20", 1},
					{"AGM_CableTie", 1},
					{"armst_MESHOK", 1},
					{"Binocular", 1},
					{"Rangefinder", 1},
					{"armst_taynik_big", 1},
					
					{"armst_spicki", 1},
					{"tf_anprc148jem", 1},
					{"ARMST_cigarettes", 0.2},
					{"ARMST_akkum", 1},
										
					{"ItemCompass", 1},
					{"armst_item_pda", 1},
					{"tf_fadak", 1},
					//baricad
					{"armst_bochka", 6},
					{"armst_Razorwire", 7},
					{"armst_pallet_vertical", 8},
					{"armst_armst_korob1", 20},
					
					{"HandGrenade", 1},
					{"MiniGrenade", 1},
					
					{"SmokeShell", 1}, 
					{"SmokeShellYellow", 1},
					{"SmokeShellGreen", 1},
					{"SmokeShellRed", 1},
					{"SmokeShellOrange", 1},
					{"SmokeShellBlue", 1},
					
					{"APERSTripMine_Wire_Mag", 1},
					
					//Chemlight
					{"Chemlight_red", 1},
					{"Chemlight_green", 1},
					{"Chemlight_blue", 1},
					{"Chemlight_yellow", 1},
					
					//GEN
										
					//Food
					{"Armst_item_can",1},
					{"Armst_item_bred",1},
					{"Armst_item_rathion",1},
					{"Armst_item_waterbottle",1}
				};
			};
			
			class Headgear {
				displayName = $STR_TRADE_SECTION_HELMETS;
				totalPrice = 1;
				items[] = {
					
					{"armst_Hood_mono",  1},
					{"armst_Hood2_mono",  1},
					{"H_Bandanna_gry",  1},
					{"Vulkan_ZV", 8},
					{"Rys_ZV", 8},
					{"Altyn_ch_ch", 8},
					{"armst_seva_shlem", 8},
					
					//Gasmask
					{"G_Bandanna_beast", 1},
					{"G_Bandanna_shades", 1},
					{"Armst_balaclava_dolg", 1},
					{"G_Bandanna_blk", 1},
					{"armst_G100", 1},
					{"armst_gasm50", 1},
					{"armst_gasmaskM40", 1},
					{"armst_gasm20", 1},
					{"armst_BioGasMaskG25", 1},
					{"armst_seva_visor", 1}
					
				};
			};
			
			class VESTS {
				displayName = $STR_TRADE_SECTION_VESTS;
				totalPrice = 1;
				items[] = {
					
					{"Tarzan_ch", 1},
					{"V94_ch", 1},
					{"V_PlateCarrier1_blk", 1},
					{"Armst_sevamonolith", 1},
					{"Armst_ekzomonolith", 1}
				};
			};
			
			class BACKPACKS {
				displayName = $STR_TRADE_SECTION_BACKPACKS;
				totalPrice = 1;
				items[] = {
					
					{"B_FieldPack_blk", 1},
					{"ARMST_RUKZAK_GRAY", 1},
					{"B_TacticalPack_blk", 1},
					{"B_AssaultPack_blk", 1},
					{"tf_anprc155", 1},
					{"B_Carryall_oucamo", 1},
					{"armst_seva_backpack", 1}
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
					
					//Rifles
					{"arifle_sa_vssk", 200},
					{"arifle_av_ak12", 100},
					{"KA_M4A1_F", 90},
					{"KA_M4A1_M203_F", 95},
					{"arifle_F88", 75},
					{"KA_SCAR_H_EGLM", 95},
					{"KA_SCAR_H", 90}
					
					
     
				};
			};
			
			class Magazines {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_AMMO;
				items[] = {
					
					{"KA_20Rnd_762x51_M80", 3},
					{"KA_30Rnd_556x45_M855", 2},
					{"8Rnd_Mag_pm", 0.5},
					{"20Rnd_9x21_Mag", 1},
					
					{"30Rnd_ak_762x39_mag", 3},
					{"30Rnd_ak_762x39_T_mag", 3},
					
					{"5Rnd_as_127x55mm_pt", 5},
					
					
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
					{"Armst_mut_burer2",3},
					{"Armst_mut_controller",5},
					{"Armst_mut_krovosos",3},
					{"Armst_mut_chimera",5},
					{"Armst_mut_dog",0.2},
					{"Armst_mut_pauk",0.2},
					{"Armst_mut_plot",0.2},
					{"Armst_mut_psevdog",0.3},
					{"Armst_mut_poltergeist",4},
					{"Armst_mut_psevdogigant",6},
					{"Armst_mut_snork",1.5}
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
					//Others
					{"DAPSTALKERS_BOLTS", 0.1},
					{"DETECTOR_RKS20", 3.5},
					{"AGM_CableTie", 0.1},
					{"armst_MESHOK", 0.1},
					{"Binocular", 2.5},
					{"Rangefinder", 3.5},
					
					{"armst_spicki", 0.05},
					{"tf_anprc148jem", 0.5},
										
					{"ItemCompass", 1},
					{"armst_item_pda", 3.5},
					
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
					{"Chemlight_red", 0.4},
					{"Chemlight_green", 0.4},
					{"Chemlight_blue", 0.4},
					{"Chemlight_yellow", 0.4},
					
					//GEN
										
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
					{"av_1p63", 0.1},
					{"optic_av_1p78", 0.1},
					{"bipod_01_F_blk", 0.1},
					{"acc_flashlight", 0.1},
					{"optic_DMS", 0.1},
					{"av_barska", 0.1},
					{"optic_av_aimp", 0.1},
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
					{"muzzle_av_snds", 10.0},
					{"muzzle_av_snds2", 10.0},
					{"muzzle_av_snds_tgp", 10.0},
					{"muzzle_av_snds_tgp2", 10.0},
					{"muzzle_snds_B", 10.0},
					{"muzzle_av_snds_sr", 10.0},
					{"muzzle_snds_acp", 1},
					{"optic_Hamr", 20},
					{"optic_MRCO", 20},
					
					{"av_barska",7.5},
					
					//Headgear
					{"armst_Hood_mono",  0.1},
					{"H_Bandanna_gry",  0.1},
					{"Vulkan_ZV", 8},
					{"Rys_ZV", 8},
					
					//Gasmask
					{"G_Bandanna_beast", 0.2},
					{"G_Bandanna_shades", 0.25},
					{"G_Bandanna_blk", 0.2},
					{"armst_G100", 35},
					{"armst_gasm50", 35},
					{"armst_gasm20", 35},
					
									
					//Vests
					{"Tarzan_ch", 10},
					{"V94_ch", 15},
					{"Armst_sevamonolith", 350},
					{"Armst_ekzomonolith", 700},
					
					//Backpacks
					{"B_FieldPack_blk", 3},
					{"ARMST_RUKZAK_GRAY", 3},
					{"B_AssaultPack_blk", 4.5},
					{"tf_anprc155", 2},
					{"B_Carryall_oucamo", 6}
					
				};
			};
		};
	};
