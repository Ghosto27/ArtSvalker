Armst_BTR = {
if (player isKindOf "Basic_Voen" or player isKindOf "Army_b" or player isKindOf "Army_l" or player isKindOf "elite_voen") then 
	{
_veh = createVehicle ["I_mas_BTR60", position box_btr, [], 0, "FLY"];
clearMagazineCargoGlobal _veh;
clearWeaponCargoGlobal _veh;
clearBackpackCargoGlobal _veh;
deleteVehicle box_btr;
	};
};
Armst_BTR2 = 
{
if (player isKindOf "Basic_Voen" or player isKindOf "Army_b" or player isKindOf "Army_l" or player isKindOf "elite_voen") then 
	{
_veh = createVehicle ["I_mas_cars_uaz_MG", position box_btr_1, [], 0, "FLY"];
clearMagazineCargoGlobal _veh;
clearWeaponCargoGlobal _veh;
clearBackpackCargoGlobal _veh;
deleteVehicle box_btr_1;
	};
};	
Armst_BTR3 = 
{
if (player isKindOf "bandits_private" or player isKindOf "bandits_l" or player isKindOf "bandit_elite" or player isKindOf "armst_newbiebandit3" or player isKindOf "armst_newbiebandit2" or player isKindOf "armst_newbiebandit" or player isKindOf "bandits_private2") then 
	{
_veh = createVehicle ["I_mas_cars_uaz_unarmed", position box_btr_3, [], 0, "FLY"];
clearMagazineCargoGlobal _veh;
clearWeaponCargoGlobal _veh;
clearBackpackCargoGlobal _veh;
deleteVehicle box_btr_3;
	};
};
Armst_BTR4 = 
{
if (player isKindOf "mercenaries_private" or player isKindOf "elite_merc" or player isKindOf "mercenaries_l" or player isKindOf "mercenaries_private2") then 
	{
_veh = createVehicle ["ARMST_HMMWV", position box_btr_4, [], 0, "FLY"];
clearMagazineCargoGlobal _veh;
clearWeaponCargoGlobal _veh;
clearBackpackCargoGlobal _veh;
deleteVehicle box_btr_4;
	};
};
 Armst_army_megafone = {
[army_megafone, "megafon_alarm_13",300] call CBA_fnc_globalSay3d;
sleep 5;
[army_megafone, "megafon_alarm_2",300] call CBA_fnc_globalSay3d;
};
 Armst_army_megafone_alarm = {
[army_megafone, "megafon_alarm",300] call CBA_fnc_globalSay3d;
};

Armst_science_door = {
[science_door, "door_sound",15] call CBA_fnc_globalSay3d;
[-2, {[science_door, false] call ARMST_fnc_visibleToggle}] call CBA_fnc_globalExecute;
sleep 5;
[-2, {[science_door, true] call ARMST_fnc_visibleToggle}] call CBA_fnc_globalExecute;
};
Armst_freedom_door = 
{
if (player isKindOf "freedom_private" or player isKindOf "freedom_private2" or player isKindOf "freedom_l" or player isKindOf "elite_freedom") then 
	{
	[freedom_door, "door_sound",15] call CBA_fnc_globalSay3d;
	[-2, {[freedom_door, false] call ARMST_fnc_visibleToggle}] call CBA_fnc_globalExecute;
	sleep 5;
	[-2, {[freedom_door, true] call ARMST_fnc_visibleToggle}] call CBA_fnc_globalExecute;
	};
};

armst_status = {
hint "Досье смотрите в КПК." 
};

armst_barricade =
{
	private["_item","_barricade", "_l", "_pos"];
	_item = _this select 0;
	_barricade = _this select 1;
	
	if (_item in (items player + assignedItems player)) then 
		{
			player playMove "AinvPknlMstpSnonWnonDnon_medic_1";    
			sleep 5;
			_pos = getPosASL player;
			_landFire = player modeltoworld [0,1.8,0];
			_landFire set [2,0];
			_l = createVehicle [_barricade, _pos, [], 0, "NONE"];
			_l setPos _landFire;
			_l setDir getDir player + 180 ;
			player removeitem _item;
		}
	else
		{
			["Нечего устанавливать."] call AGM_Core_fnc_displayTextStructured;  
		};
};

ARMST_art_detector_on = 
{

_state = player getVariable "ARMST_artdetector";
if (( _state == 1 ) && ("ARMST_batteries" in (items player + assignedItems player))) then 
	{
	player setVariable ["ARMST_artdetector",0];
	player removeitem "ARMST_batteries";
	_analistext = "";
	_resulttext = "";
	_sbortext = "";
	_achtungtext = "";
	ctrlSetText [8670, _achtungtext];
	ctrlSetText [8669, _resulttext];
	ctrlSetText [8668, _sbortext];
	ctrlSetText [8667, _analistext];

	_list = player nearEntities [["DAP_ARTEFACT_hard", "DAP_ARTEFACT"], 100];
	_cnt = count _list;

		_analistext = "Анализ местности .";
		ctrlSetText [8667, _analistext];
		sleep 1;
		playsound "geiger2_1";
		_analistext = "Анализ местности . .";
		ctrlSetText [8667, _analistext];
		sleep 1;
		playsound "geiger2_1";
		_analistext = "Анализ местности . . .";
		ctrlSetText [8667, _analistext];
		sleep 1;
		playsound "geiger2_1";
		_analistext = "Анализ местности .";
		ctrlSetText [8667, _analistext];
		sleep 1;
		playsound "geiger2_1";
		_analistext = "Анализ местности . .";
		ctrlSetText [8667, _analistext];
		sleep 1;
		playsound "geiger2_1";
		_analistext = "Анализ местности . . .";
		ctrlSetText [8667, _analistext];
		sleep 1;
		playsound "geiger2_1";
		_sbortext = "Сбор данных .";
		ctrlSetText [8668, _sbortext];
		sleep 1;
		playsound "geiger2_1";
		_sbortext = "Сбор данных . .";
		ctrlSetText [8668, _sbortext];
		sleep 1;
		playsound "geiger2_1";
		_sbortext = "Сбор данных . . .";
		ctrlSetText [8668, _sbortext];
		sleep 1;
		playsound "geiger2_1";
		_sbortext = "Сбор данных .";
		ctrlSetText [8668, _sbortext];
		sleep 1;
		playsound "geiger2_1";
		_sbortext = "Сбор данных . .";
		ctrlSetText [8668, _sbortext];
		sleep 1;
		playsound "geiger2_1";
		_sbortext = "Сбор данных . . .";
		ctrlSetText [8668, _sbortext];
		playsound "geiger2_1";
		sleep 0.5;
		playsound "geiger2_1";
		sleep 0.5;
		playsound "geiger2_1";
		sleep 0.5;
		playsound "geiger2_1";
		sleep 0.5;
		playsound "geiger2_1";
		sleep 0.5;
		playsound "geiger2_1";
		sleep 0.5;
		playsound "geiger2_1";
		sleep 0.5;
		playsound "geiger2_1";
		sleep 0.5;
		playsound "geiger2_1";
		sleep 0.5;
		playsound "geiger2_1";
		sleep 0.5;
		if (_cnt > 0) then {
		_achtungtext = "Внимание ! ! !";
		ctrlSetText [8670, _achtungtext];
		ctrlSetText [8669, format["В радиусе 100 метров обнаружено «%1» артефактов .",_cnt]];
		player setVariable ["ARMST_artdetector",1];
		playsound "geiger2_1";
		}
		else
		{
		_resulttext = "Ошибка. Артефакты не обнаружены.";
		playsound "geiger2_1";
		player setVariable ["ARMST_artdetector",1];
		ctrlSetText [8669, _resulttext];
		};
	};
};


armst_respawn_wake =
	{
	_condition = typeOf player;
	switch (_condition) do {

		case "loner_private1": { 
		player setPosATL [762.079,610.247, 0.2];
			[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
		};
		case "loner_private2": { 
			
		player setPosATL [762.079,610.247, 0.2];
			[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
		};
		case "loner_private3": { 
		player setPosATL [762.079,610.247, 0.2];
			[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
			
		};
		case "loner_private4": { 
		player setPosATL [762.079,610.247, 0.2];
			[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
			
		};
		case "loner_private5": { 
		player setPosATL [762.079,610.247, 0.2];
		[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
			
		};
		case "armst_coat_1": { 
		player setPosATL [762.079,610.247, 0.2];
			[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
			
		};
		case "armst_coat_2": { 
		player setPosATL [762.079,610.247, 0.2];
			[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
			
		};
		case "armst_coat_3": { 
		player setPosATL [762.079,610.247, 0.2];
			[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
			
		};
		case "armst_coat_4": { 
		player setPosATL [762.079,610.247, 0.2];
			[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
			
		};
		case "armst_coat_5": { 
		player setPosATL [762.079,610.247, 0.2];
			[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
			
		};
		case "armst_coat_6": { 
		player setPosATL [762.079,610.247, 0.2];
			[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
			
		};
		case "armst_coat_7": { 
		player setPosATL [762.079,610.247, 0.2];
			[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
			
		};
		case "armst_coat_8": { 
		player setPosATL [762.079,610.247, 0.2];
			[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
			
		};
		case "armst_novice": { 
		player setPosATL [762.079,610.247, 0.2];
			[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
			
		};
		case "armst_novice_1": { 
		player setPosATL [762.079,610.247, 0.2];
			[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
			
		};
		case "armst_novice_2": { 
		player setPosATL [762.079,610.247, 0.2];
			[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
			
		};
		case "armst_novice_3": { 
		player setPosATL [762.079,610.247, 0.2];
			[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
			
		};
		case "armst_novice_4": { 
		player setPosATL [762.079,610.247, 0.2];
			[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
			
		};
		case "armst_novice_5": { 
		player setPosATL [762.079,610.247, 0.2];
			[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
			
		};
		case "armst_novice_6": { 
		player setPosATL [762.079,610.247, 0.2];
			[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
			
		};
		case "armst_novice_7": { 
		player setPosATL [762.079,610.247, 0.2];
			[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
			
		};
		case "armst_novice_8": { 
		player setPosATL [762.079,610.247, 0.2];
			[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
			
		};
		case "loner_l": { 
		player setPosATL [762.079,610.247, 0.2];
			[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
			
		};
		case "loner_b": { 
		player setPosATL [762.079,610.247, 0.2];
			[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
			
		};
		case "elite_loner1": { 
		player setPosATL [762.079,610.247, 0.2];
			[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
			
		};
		case "elite_loner2": { 
		player setPosATL [762.079,610.247, 0.2];
			[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
			
		};
		case "clearsky_private": { 
		player setPosATL [5520.276,461.430, 0.2];
			[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 5;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
			
		};
	};
};