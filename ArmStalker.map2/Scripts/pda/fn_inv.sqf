/*
 Created by Dragster
*/
ARMST_dragster_dblclick_on_item={
	_item = _this select 0;
	_class = _this select 1;
	switch (_item) do { 
		
		case "ARMST_condom" : 			{  (findDisplay 602) closeDisplay 100;[player] spawn ARMST_condom;}; 
		case "ARMST_bugspray" : 		{  (findDisplay 602) closeDisplay 100;[player] spawn ARMST_bugspray }; 
		case "armst_babywipes" : 		{  (findDisplay 602) closeDisplay 100;[player] spawn armst_babywipes; }; 
		case "ARMST_handwarmer" : 		{  (findDisplay 602) closeDisplay 100;[player] spawn ARMST_handwarmer; }; 
		case "ARMST_kosyak" : 			{ 
		 	if ((('ARMST_zippo' in items player) || ('ARMST_lighter' in items player) || ("armst_spicki" in (magazines player)))) then {
		 	  	(findDisplay 602) closeDisplay 100;[player] spawn ARMST_kosyak;
		 	};
		}; 
		case "ARMST_cigar" : 			{
		 	if ((('ARMST_zippo' in items player) || ('ARMST_lighter' in items player) || ("armst_spicki" in (magazines player)))) then {
		 	  	(findDisplay 602) closeDisplay 100;[player] spawn ARMST_cigar;
		 	};
		}; 
		case "ARMST_cigarettes" : 		{
		 	if ((('ARMST_zippo' in items player) || ('ARMST_lighter' in items player) || ("armst_spicki" in (magazines player)))) then {
		 	  	(findDisplay 602) closeDisplay 100;[player] spawn ARMST_cigarettes;
		 	};
		}; 
		case "ARMST_towel" : 			{  (findDisplay 602) closeDisplay 100;[player] spawn ARMST_towel;  			}; 
		case "ARMST_toiletpaper" : 		{  (findDisplay 602) closeDisplay 100;[player] spawn ARMST_toiletpaper;  	}; 
		case "ARMST_tanboxer" : 		{  (findDisplay 602) closeDisplay 100;[player] spawn ARMST_tanboxer;  		}; 
		case "ARMST_sunblock" : 		{  (findDisplay 602) closeDisplay 100;[player] spawn ARMST_sunblock; 		}; 
		case "ARMST_sudoku" : 			{  (findDisplay 602) closeDisplay 100;[player] spawn ARMST_sudoku;  		}; 
		case "ARMST_eyedrops" : 		{  (findDisplay 602) closeDisplay 100;[player] spawn ARMST_eyedrops;  		}; 
		case "ARMST_dice" : 			{  (findDisplay 602) closeDisplay 100;[player] spawn ARMST_dice;  			}; 
		case "ARMST_laptop" : 			{  (findDisplay 602) closeDisplay 100;[player] spawn ARMST_laptop;  		}; 
		case "ARMST_sleepingbag" :  	{  (findDisplay 602) closeDisplay 100;[player] spawn armst_matras_placer;   }; 
		case "armst_scanerart" :  	{  (findDisplay 602) closeDisplay 100; createdialog "detector_display";   }; 
		
		case "Item_MEAT_Unstab" : 		{  (findDisplay 602) closeDisplay 100;[player] spawn usd_MEAT_Unstab;       }; 
		case "Item_FIRE_Unstab" : 		{  (findDisplay 602) closeDisplay 100;[player] spawn usd_FIRE_Unstab;       }; 
		case "Item_GRAVI_Unstab" : 		{  (findDisplay 602) closeDisplay 100;[player] spawn usd_GRAVI_Unstab;      }; 
		case "Item_Medusa_Unstab" : 	{  (findDisplay 602) closeDisplay 100;[player] spawn usd_Medusa_Unstab;     }; 
		case "Item_CRYSTALL_Unstab" : 	{  (findDisplay 602) closeDisplay 100;[player] spawn usd_CRYSTALL_Unstab;   }; 
		case "Item_TEARS_Unstab" : 		{  (findDisplay 602) closeDisplay 100;[player] spawn usd_TEARS_Unstab;      }; 
		case "Item_BATTERY_Unstab" : 	{  (findDisplay 602) closeDisplay 100;[player] spawn usd_BATTERY_Unstab;    }; 
		case "Item_EMPTY_Unstab" : 		{  (findDisplay 602) closeDisplay 100;[player] spawn usd_EMPTY_Unstab;      }; 
		case "Item_SPIKES_Unstab" :		{  (findDisplay 602) closeDisplay 100;[player] spawn usd_SPIKES_Unstab;     }; 
		case "Item_ELECTRA_Unstab" :	{  (findDisplay 602) closeDisplay 100;[player] spawn usd_ELECTRA_Unstab;    }; 
		case "Item_SOUL_Unstab" : 		{  (findDisplay 602) closeDisplay 100;[player] spawn usd_SOUL_Unstab;       }; 
		
		case "armst_spicki" : 			{  (findDisplay 602) closeDisplay 100;[player] spawn armst_fireplacer;      }; 
		
		case "ARMST_gum" : 				{  (findDisplay 602) closeDisplay 100;[player] spawn ARMST_gum;     		}; 
		case "ARMST_skittles" : 		{  (findDisplay 602) closeDisplay 100;[player] spawn ARMST_skittles;        }; 
		case "ARMST_snickers" : 		{  (findDisplay 602) closeDisplay 100;[player] spawn ARMST_snickers;        }; 
		case "Armst_item_waterbottle" : {  (findDisplay 602) closeDisplay 100;[player,0.5] spawn Armst_switch_waterbottle;      }; 
		case "armst_item_beer" : 		{  (findDisplay 602) closeDisplay 100;[player,0.4] spawn Armst_switch_beer;      		}; 
		case "armst_item_vodka" : 		{  (findDisplay 602) closeDisplay 100;[player,0.2] spawn armst_switch_vodka;    		}; 
		case "Armst_item_shocolate" : 	{  (findDisplay 602) closeDisplay 100;[player,0.15] spawn Armst_switch_shocolate;       }; 
		case "Armst_item_shocolate2" : 	{  (findDisplay 602) closeDisplay 100;[player,0.1] spawn Armst_switch_shocolate2;       }; 
		case "Armst_item_snorkers" : 	{  (findDisplay 602) closeDisplay 100;[player,0.15] spawn Armst_switch_snickers;        }; 
		case "Armst_item_bred" : 		{  (findDisplay 602) closeDisplay 100;[player,0.25] spawn Armst_switch_bred;      		}; 
		case "Armst_item_can" : 		{  (findDisplay 602) closeDisplay 100;[player,0.4] spawn Armst_switch_konserv;      	}; 
		case "Armst_item_tushonka" : 	{  (findDisplay 602) closeDisplay 100;[player,0.4] spawn Armst_switch_konserv2;      	}; 
		case "Armst_item_kolbasa" : 	{  (findDisplay 602) closeDisplay 100;[player,0.3] spawn Armst_switch_kolbasa;      	}; 
		case "Armst_item_Sgushenka" : 	{  (findDisplay 602) closeDisplay 100;[player,0.4] spawn Armst_switch_Sgushenka;     	}; 
		case "Armst_item_SuhPay" : 		{  (findDisplay 602) closeDisplay 100;[player,0.8] spawn Armst_switch_SuhPay;      		}; 
		case "Armst_item_rathion" : 	{  (findDisplay 602) closeDisplay 100;[player,0.65] spawn Armst_switch_rathion;      	}; 
		
		case "armst_Razorwire" : 		{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["armst_Razorwire","Land_Razorwire_F"] spawn armst_barricade;                 };  }; 
		case "armst_BagFence" : 		{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["armst_BagFence","Land_BagFence_Long_F"] spawn armst_barricade;              };  }; 
		case "armst_CampingChair" : 	{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["armst_CampingChair","Land_CampingChair_V2_F"] spawn armst_barricade;        };  }; 
		case "armst_CampingTable" : 	{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["armst_CampingTable","Land_CampingTable_small_F"] spawn armst_barricade;     };  }; 
		case "armst_tent" : 			{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["armst_tent","Land_tentA_F"] spawn armst_barricade;                          };  }; 
		case "armst_MetalBarrel" : 		{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["armst_MetalBarrel","MetalBarrel_burning_F"] spawn armst_barricade;          };  }; 
		case "armst_generator" : 		{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["armst_generator","Land_Portable_generator_F"] spawn armst_barricade;        };  }; 
		case "armst_Camping_Light" : 	{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["armst_Camping_Light","Land_Camping_Light_F"] spawn armst_barricade;         };  }; 
		case "armst_PortableLight" : 	{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["armst_PortableLight","Land_PortableLight_single_F"] spawn armst_barricade;  };  }; 
		case "armst_Camper" : 			{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["armst_Camper","Land_cargo_addon02_V2_F"] spawn armst_barricade;             };  }; 
		case "armst_pallet_vertical" : 	{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["armst_pallet_vertical","xcam_pallet_vertical_F"] spawn armst_barricade;     };  }; 
		case "armst_armst_korob1" : 	{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["armst_armst_korob1","armst_korob1"] spawn armst_barricade;                  };  }; 
		case "armst_NO1" : 				{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["armst_NO1","Land_PressureWasher_01_F"] spawn armst_barricade;       		};  }; 
		case "armst_NO2" : 				{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["armst_NO2","Land_TripodScreen_01_dual_v2_F"] spawn armst_barricade; 		};  }; 
		case "armst_NO3" : 				{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["armst_NO3","Land_PortableGenerator_01_F"] spawn armst_barricade;    		};  }; 
		case "armst_NO4" : 				{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["armst_NO4","WaterPump_01_forest_F"] spawn armst_barricade;          		};  }; 
		case "armst_NO5" : 				{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["armst_NO5","Land_SatelliteAntenna_01_F"] spawn armst_barricade;     		};  }; 
		case "armst_NO6" : 				{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["armst_NO6","Land_Device_assembled_F"] spawn armst_barricade;        		};  }; 
		case "armst_NO7" : 				{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["armst_NO7","Land_DieselGroundPowerUnit_01_F"] spawn armst_barricade;		};  };
		case "armst_taynik_small" : 	{  (findDisplay 602) closeDisplay 100;[player] spawn ARMST_create_stash;      	}; 
		case "armst_taynik_big" : 		{  (findDisplay 602) closeDisplay 100;[player] spawn ARMST_create_stash;      	};  
		case "ARMST_instruments" : 		{  (findDisplay 602) closeDisplay 100;if (((count nearestObjects [player, ["Land_Razorwire_F"], 10])>0)) then { ["armst_Razorwire"] spawn armst_additem; _razorwire=nearestObjects [player, ["Land_Razorwire_F"], 10];{deleteVehicle _x;} forEach _razorwire; };      	}; 

		case "AGM_Bandage" : 			{  (findDisplay 602) closeDisplay 100;createdialog "medicine";      	}; 
		case "AGM_Morphine" : 			{  (findDisplay 602) closeDisplay 100;[player, player, 'morphine'] call AGM_Medical_fnc_treat;      	}; 
		case "armst_item_antirad" : 	{  (findDisplay 602) closeDisplay 100;player playMoveNow 'AinvPknlMstpSnonWnonDnon_medic1';[5, player, 'Armst_fnc_radX_health','Ввожу антирадин', 'armst_abort'] spawn AGM_Core_fnc_progressBar;      	}; 
		case "AGM_Bloodbag" : 			{  (findDisplay 602) closeDisplay 100;[player, player, 'bloodbag'] call AGM_Medical_fnc_treat;     	};  
		
		case "Chemlight_red" : 			{  (findDisplay 602) closeDisplay 100;[player] call AGM_Attach_fnc_openAttachUI;      	};  
		case "Chemlight_green" : 		{  (findDisplay 602) closeDisplay 100;[player] call AGM_Attach_fnc_openAttachUI;      	};  
		case "Chemlight_blue" : 		{  (findDisplay 602) closeDisplay 100;[player] call AGM_Attach_fnc_openAttachUI;      	};  
		case "Chemlight_yellow" : 		{  (findDisplay 602) closeDisplay 100;[player] call AGM_Attach_fnc_openAttachUI;      	};  

		case "8Rnd_Mag_pm" : 			{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "8Rnd_Mag" : 				{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "20Rnd_9x21_Mag" : 		{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "30Rnd_ak_545x39_mag" : 	{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "30Rnd_ak_762x39_mag" : 	{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "av_12_M" : 				{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "av_Saiga12_M" : 			{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "30Rnd_ak_545x39_T_mag" : 	{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "30Rnd_ak_762x39_T_mag" : 	{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "200Rnd_av_762x39_mag" : 	{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "10Rnd_av_9x39mm_val" : 	{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "20Rnd_av_9x39mm_SP5" : 	{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "20Rnd_av_9x39mm_SP6" : 	{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "20Rnd_av_9x39mm_val" : 	{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "10Rnd_av_762x39_svd" : 	{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "45Rnd_ak_762x39_mag" : 	{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "av_4_M" : 				{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "30Rnd_9x21_Mag" : 		{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "45Rnd_ak_545x39_mag" : 	{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "200Rnd_av_762x39_T_mag" : {  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "KA_30Rnd_556x45_M855" : 	{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "KA_30Rnd_556x45_M855A1" : {  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "KA_30Rnd_556x45_Mk262" : 	{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "KA_30Rnd_556x45_XM996" : 	{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "KA_30Rnd_556x45_M995AP" : {  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "KA_30Rnd_556x45_M856" : 	{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "KA_20Rnd_762x51_M80" : 	{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "20Rnd_av_9x39mm_vsk" : 	{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "9Rnd_45ACP_Mag" : 		{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };  
		case "5Rnd_as_127x55mm_pt" : 	{  (findDisplay 602) closeDisplay 100;[player] call AGM_MagazineRepack_fnc_magazineRepack;      };   
		case "DETECTOR_RKS20" : 		{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_raddiagnos;      };   
		case "DETECTOR_MKS1009" : 		{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_raddiagnos;      };   
		case "DETECTOR_RKS20" : 		{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_raddiagnos;      };   

	};		
};

[] spawn {
	disableSerialization;
    //fnc_lbdbclick = {  
    ExileClient_gui_inventory_event_onItemDoubleClick = {  
        private ["_data","_configName","_stop"];
        _stop=false;
        _all=_this;
        _idc = ctrlIDC (_this select 0);
        _selectedIndex = _this select 1;
        _dt=lbData [_idc, _selectedIndex];
        _tx=lbText [_idc, _selectedIndex];
        _ok=isClass(configFile >> "CfgMagazines" >> _dt);       
        if (_ok) then {
            _configName = "CfgMagazines";
            _data=_dt;
        }else{
            _item=items player;
            {
            	//_resp=isClass(configFile >> "CfgGlasses" >> _x);   
            	//if (_resp) then {   _stop=true; 	};
                _resp =getText(configFile >> "CfgGlasses" >> _x >> "displayName");
                if (_resp==_tx) exitWith {
                	_data=_x;
                	_stop=true;
            		_configName = "CfgGlasses";
                };
                _name =getText(configFile >> "CfgWeapons" >> _x >> "displayName");
                if (_name==_tx) exitWith {
                	_data=_x;
            		_configName = "CfgWeapons";
                };
            	
            } forEach _item;

        };
   		_text1 = format ["Text\n%1\n________\n",lbText [_idc, _selectedIndex]];
   		//hint format["Selected Item: %1\n%2\n%3\n%4",_selectedIndex,_tx,_configName,_data];
        if (_stop) exitWith { };
        [_data,_configName] spawn ARMST_dragster_dblclick_on_item;
        false
    };
    fnc_dbclick_helm = { 
    	_helm=headgear player;
    	switch (_helm) do { 
    		case "ZSH_ZV" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "ZSH_ZN"        }; 
    		case "ZSH_ZN" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "ZSH_ZV"        }; 
    		case "ZSH_1_ZV" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "ZSH_1_ZN"      }; 
    		case "ZSH_1_ZN" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "ZSH_1_ZV"      }; 
    		case "Vulkan_ZV" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "Vulkan_ZN"     }; 
    		case "Vulkan_ZN" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "Vulkan_ZV"     }; 
    		case "TIG_ZV" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "TIG_ZN"        }; 
    		case "TIG_ZN" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "TIG_ZV"        }; 
    		case "Rys_ZV" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "Rys_ZN"        }; 
    		case "Rys_ZN" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "Rys_ZV"        }; 
    		case "Maska2_ZV" :  	{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "Maska2_ZN"     }; 
    		case "Maska2_ZN" :  	{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "Maska2_ZV"     }; 
    		case "Maska1h_ZV" : 	{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "Maska1h_ZN"    }; 
    		case "Maska1h_ZN" : 	{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "Maska1h_ZV"    }; 
    		case "LSHZ_2DT_Y_ZV" : 	{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "LSHZ_2DT_Y_ZN" }; 
    		case "LSHZ_2DT_Y_ZN" : 	{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "LSHZ_2DT_Y_ZV" }; 
    		case "K6_3_ZV" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "K6_3_ZN"       }; 
    		case "K6_3_ZN" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "K6_3_ZV"       }; 
    		case "Altyn_ZV" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "Altyn_ZN"      }; 
    		case "Altyn_ZN" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "Altyn_ZV"      }; 
    		case "Maska1_ZV" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "Maska1_ZN"     }; 
    		case "Maska1_ZN" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "Maska1_ZV"     }; 
    	};
    false
	};
    while {true} do {
        waituntil {!(isnull (finddisplay 602))};        
        //((findDisplay 602) displayCtrl 638) ctrlSetEventHandler ["LBDblClick", "_this call fnc_lbdbclick"];
        //((findDisplay 602) displayCtrl 619) ctrlSetEventHandler ["LBDblClick", "_this call fnc_lbdbclick"];
        ((findDisplay 602) displayCtrl 6240) ctrlSetEventHandler ["MouseButtonDblClick", "_this call fnc_dbclick_helm"];

		ctrlShow [6307, false];
		_diagn=(findDisplay 602) ctrlCreate ["RscButton", 6888];
		_diagn ctrlSetPosition [0, 0.875,0.225,0.06];
		_diagn ctrlSetTextColor [1, 0, 0, 1];
		_diagn ctrlCommit 0;
		ctrlSetText [6888, "Диагностика"];
		_diagn ctrlSetEventHandler ["ButtonClick", "[player, player, 'diagnose'] call AGM_Medical_fnc_treat;"];
		
        waituntil {isnull (finddisplay 602)};
    };
};

Armst_switch_konserv2 =
{
	private ["_unit","_eat","_drink","_binocs"];
	
	_unit = _this select 0;
	_eat = _this select 1;
	
	_hunger=_unit getVariable ["ARMST_HUNGER",1];
	if (_hunger>1) exitwith {
	  hint 'Я не хочу больше кушать';
	};
	player removeitem "Armst_item_tushonka";
	disableUserInput true;
	[_unit] call AGM_WeaponSelect_fnc_putWeaponAway;sleep 4;
	_binocs = binocular player;
	_unit addweapon "armst_switch_konserv";
	_weaponIndex = [_unit, "armst_switch_konserv"] call getWeaponIndex;
	_unit action ["SwitchWeapon", _unit, _unit,_weaponIndex];
	sleep 1;
	player playactionnow "GestureEat";
	_unit say2d "eating0";
	_unit setVariable ["ARMST_HUNGER", (player getVariable "ARMST_HUNGER") + _eat];
	sleep 6.5;
	_unit removeweapon "armst_switch_konserv";
	_unit addweapon _binocs;
	_unit additem "Armst_item_canempty";
	disableUserInput false;
};