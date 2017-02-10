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

	class DOLGS_BARMEN_TRADER 
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
				totalPrice = 10000;
				items[] = {
					//pistols
					
					
					//drobociki 
					

				};
			};		
			
			class Magazines {
				displayName = $STR_TRADE_SECTION_AMMO;
				totalPrice = 1000;
				items[] = {
					
					
					
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
					{"AGM_Morphine", 0.4}
					
				};
			};
			
			class Items {
				displayName = $STR_TRADE_SECTION_OTHERS;
				totalPrice = 1000;
				items[] = {
					//Others
					
					{"armst_spicki", 0.05},
					{"ARMST_zippo", 0.5},
					{"ARMST_sleepingbag", 0.5},
					{"ARMST_cigarettes", 0.5},
					{"tf_anprc148jem", 5},
					
					//Chemlight
					
					
					//Money
					{"armst_money100R", 1.0},
					{"armst_money5000R", 5.0},
					{"armst_money10000R", 10},
					{"armst_money50000R", 50},
					
					//Food
					{"Armst_item_bred", 0.5},
					{"Armst_item_kolbasa", 0.7},
					{"Armst_item_can", 0.8},
					{"Armst_item_waterbottle", 1}
					
				};
			};
			
			class Headgear {
				displayName = $STR_TRADE_SECTION_HELMETS;
				totalPrice = 1000;
				items[] = {
					
					//Капюшоны
					
					//Bandanna
					
					
					//Gasmask
					
					
				};
			};
			
			class VESTS {
				displayName = $STR_TRADE_SECTION_VESTS;
				totalPrice = 1000;
				items[] = {
					
					
					
				};
			};
			
			class BACKPACKS {
				displayName = $STR_TRADE_SECTION_BACKPACKS;
				totalPrice = 1000;
				items[] = {
					
					
					
				};
			};
		};
		
		class Buy 
		{
			class Weapons {
				totalConsume = 5000;
				displayName = $STR_TRADE_SECTION_WEAPONS;
				items[] = {
					
					//pistols
					
					
					//drobociki 
					
					
				};
			};
			
			class Magazines {
				totalConsume = 500;
				displayName = $STR_TRADE_SECTION_AMMO;
				items[] = {
					
					
					
				};
			};
			
			class Remains {
				totalConsume = 1000;
				displayName = $STR_TRADE_SECTION_REMAINS;
				items[] = {
					
					//Mut parts
					{"Armst_mut_boar",3.25},
					{"Armst_mut_burer2",12.5},
					{"Armst_mut_controller",16},
					{"Armst_mut_krovosos",9},
					{"Armst_mut_chimera",30},
					{"Armst_mut_dog",1.5},
					{"Armst_mut_olen",2},
					{"Armst_mut_pauk",2.5},
					{"Armst_mut_plot",3},
					{"Armst_mut_psevdog",2.5},
					{"Armst_mut_poltergeist",14},
					{"Armst_mut_psevdogigant",250},
					{"Armst_mut_snork",6.5}
				};
			};
			
			class Artefacts {
				totalConsume = 1000;
				displayName = $STR_TRADE_SECTION_ARTEFACTS;
				items[] = {
					
					//Artefacts
					//anomylki
					{"Item_Medusa_Unstab",1},
					{"Item_GRAVI_Unstab",1},
					{"Item_MEAT_Unstab",1},
					{"Item_FIRE_Unstab",1}
					//Craft
					
				};
			};
			
			class Items {
				totalConsume = 1000;
				displayName = $STR_TRADE_SECTION_OTHERS;
				items[] = {
					//Money
					{"armst_money100R", 1},
					{"armst_money5000R", 5},
					{"armst_money10000R", 10},
					{"armst_money50000R", 50},
					
					//Others
					
					{"armst_spicki", 0.025},
					{"tf_anprc148jem", 0.25},
					
					//Chemlight
					
					
					//Food
					{"Armst_item_bred", 0.25},
					{"Armst_item_kolbasa", 0.35},
					{"Armst_item_can", 0.4},
					{"Armst_item_waterbottle", 0.5},
					
					//EmptyBottle
					{"armst_item_waterbottleempty", 0.4},
					{"armst_item_vodkaempty", 0.3},
					{"armst_item_Beerempty", 0.2},
					
					//Medicine
					{"AGM_Bandage", 0.1},			
					{"AGM_Morphine", 0.2},
					
					//Headgear
					
					
					//Gasmask
					
					
					//WeaponItems
					{"acc_flashlight", 0.05}

					//Vests
					
					
					//Backpacks
					
					
				};
			};
		};
	};
	