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
_veh = createVehicle ["ARMST_UAZ469_OPEN", position box_btr_1, [], 0, "FLY"];
clearMagazineCargoGlobal _veh;
clearWeaponCargoGlobal _veh;
clearBackpackCargoGlobal _veh;
deleteVehicle box_btr_1;
	};
};		
Armst_army_pirson = 
{
if (player isKindOf "Basic_Voen" or player isKindOf "Army_b" or player isKindOf "Army_l" or player isKindOf "elite_voen") then 
	{
		[army_pirson, "door_sound",5] call CBA_fnc_globalSay3d;
		[-2, {[army_pirson, false] call ARMST_fnc_visibleToggle}] call CBA_fnc_globalExecute;
		sleep 5;
		[-2, {[army_pirson, true] call ARMST_fnc_visibleToggle}] call CBA_fnc_globalExecute;
	};
};	
Armst_army_sklad = {
 if (player isKindOf "elite_voen" or player isKindOf "army_l" or player isKindOf "army_b" or player isKindOf "Voen_private" or player isKindOf "Armst_doctor" or player isKindOf "Armst_doctor2" or player isKindOf "Armst_doctor3" or player isKindOf "hazmat_2") then 
	{
		[sklad, "door_sound",5] call CBA_fnc_globalSay3d;
		[-2, {[sklad, false] call ARMST_fnc_visibleToggle}] call CBA_fnc_globalExecute;
		sleep 5;
		[-2, {[sklad, true] call ARMST_fnc_visibleToggle}] call CBA_fnc_globalExecute;
	};
};
Armst_army_megafone = {
 if (player isKindOf "elite_voen" or player isKindOf "army_l" or player isKindOf "army_b" or player isKindOf "Voen_private" or player isKindOf "Armst_doctor" or player isKindOf "Armst_doctor2" or player isKindOf "Armst_doctor3" or player isKindOf "hazmat_2") then 
	{
	[megafone_1, "megafon_alarm_13",300] call CBA_fnc_globalSay3d;
	sleep 5;
	[megafone_1, "megafon_alarm_2",300] call CBA_fnc_globalSay3d;
	};
};
 Armst_army_megafone_alarm = {
 if (player isKindOf "elite_voen" or player isKindOf "army_l" or player isKindOf "army_b" or player isKindOf "Voen_private" or player isKindOf "Armst_doctor" or player isKindOf "Armst_doctor2" or player isKindOf "Armst_doctor3" or player isKindOf "hazmat_2") then 
	{
[megafone_1, "megafon_alarm",500] call CBA_fnc_globalSay3d;
[megafone_2, "megafon_alarm",500] call CBA_fnc_globalSay3d;
	};
};
 Armst_army_megafone_propaganda = {
 if (player isKindOf "elite_voen" or player isKindOf "army_l" or player isKindOf "army_b" or player isKindOf "Voen_private" or player isKindOf "Armst_doctor" or player isKindOf "Armst_doctor2" or player isKindOf "Armst_doctor3" or player isKindOf "hazmat_2") then 
	{
[megafone_2, "propaganda",500] call CBA_fnc_globalSay3d;
	};
};
 Armst_army_megafone_angry = {
 if (player isKindOf "elite_voen" or player isKindOf "army_l" or player isKindOf "army_b" or player isKindOf "Voen_private" or player isKindOf "Armst_doctor" or player isKindOf "Armst_doctor2" or player isKindOf "Armst_doctor3" or player isKindOf "hazmat_2") then 
	{
	_type = ["comandir_megafon_1","comandir_megafon_2","comandir_megafon_3","comandir_megafon_4","comandir_megafon_5"];
	_resp = _type select floor random count _type;
	[megafone_2, _resp,200] call CBA_fnc_globalSay3d;
	};
};

Armst_science_door = {
if (player isKindOf "elite_voen" or player isKindOf "army_l" or player isKindOf "army_b" or player isKindOf "Voen_private" or player isKindOf "Armst_doctor" or player isKindOf "Armst_doctor2" or player isKindOf "Armst_doctor3" or player isKindOf "hazmat_2") then 
	{
		[science_door, "door_sound",15] call CBA_fnc_globalSay3d;
		[-2, {[science_door, false] call ARMST_fnc_visibleToggle}] call CBA_fnc_globalExecute;
		sleep 5;
		[-2, {[science_door, true] call ARMST_fnc_visibleToggle}] call CBA_fnc_globalExecute;
	};
};
Armst_bandit_door = 
{
if (player isKindOf "ARMST_BANDITS") then 
	{
	[bandit_door, "door_sound",15] call CBA_fnc_globalSay3d;
	[-2, {[bandit_door, false] call ARMST_fnc_visibleToggle}] call CBA_fnc_globalExecute;
	sleep 5;
	[-2, {[bandit_door, true] call ARMST_fnc_visibleToggle}] call CBA_fnc_globalExecute;
	};
};
Armst_bandit_door2 = 
{

if (player isKindOf "ARMST_BANDITS") then 
	{
	[bandit_door2, "door_sound",15] call CBA_fnc_globalSay3d;
	[-2, {[bandit_door2, false] call ARMST_fnc_visibleToggle}] call CBA_fnc_globalExecute;
	sleep 5;
	[-2, {[bandit_door2, true] call ARMST_fnc_visibleToggle}] call CBA_fnc_globalExecute;
	};
};
Armst_dolg_door = 
{

if (player isKindOf "ARMST_BANDITS") then 
	{
	[dolg_door, "door_sound",15] call CBA_fnc_globalSay3d;
	[-2, {[dolg_door, false] call ARMST_fnc_visibleToggle}] call CBA_fnc_globalExecute;
	sleep 5;
	[-2, {[dolg_door, true] call ARMST_fnc_visibleToggle}] call CBA_fnc_globalExecute;
	};
};

armst_random_sound = {

_target = _this select 0;
_type = _this select 1;

_resp = _type select floor random count _type;
[_target, _resp,3] call CBA_fnc_globalSay3d;
};

 
	 FN_radx =
    {    
        private["_unit", "_player"];      
        _unit = _this select 0;      
		if ("armst_item_antirad" in (items player + assignedItems player)) then 
		{
       "" remoteExec ["armst_radx", _unit];
		}
		else
		{
		Hint "Отсутствует Антирад!";
		};
    }; 

	
	FN_prinud_water  =
    {    
        private["_unit", "_player"];      
        _unit = _this select 0;      
		_hunger=_unit getVariable ["ARMST_THIRST",1];
		if (_hunger>1) exitwith {
		  
				["В меня больше не лезет!!!"] call AGM_Core_fnc_displayTextStructured; 
		};	    
		_unit setVariable ["ARMST_THIRST", (_unit getVariable "ARMST_THIRST") + 0.5];
		["Вас напоили водой..."] call AGM_Core_fnc_displayTextStructured; 
	};	 
	FN_prinud_vodka  =
    {    
        private["_unit", "_player"];      
        _unit = _this select 0;     
		_hunger=_unit getVariable ["ARMST_THIRST",1];
		if (_hunger>1) exitwith {
		  
				["В меня больше не лезет!!!"] call AGM_Core_fnc_displayTextStructured; 
		};	     
		_unit setVariable ["ARMST_THIRST", (_unit getVariable "ARMST_THIRST") + 0.2];
		["Вас напоили водкой..."] call AGM_Core_fnc_displayTextStructured; 
		[0] call ARMST_Radiation_SetInfection;
	};	
	FN_prinud_bred  =
    {    
        private["_unit", "_player"];      
        _unit = _this select 0;         
		_hunger=_unit getVariable ["ARMST_HUNGER",1];
		if (_hunger>1) exitwith {
		  
				["В меня больше не лезет!!!"] call AGM_Core_fnc_displayTextStructured; 
		};	 
		_unit setVariable ["ARMST_HUNGER", (_unit getVariable "ARMST_HUNGER") + 0.25];
		["Вас накормили хлебом..."] call AGM_Core_fnc_displayTextStructured; 
	};	 
	FN_prinud_kolbasa  =
    {    
        private["_unit", "_player"];      
        _unit = _this select 0;     
		_hunger=_unit getVariable ["ARMST_HUNGER",1];
		if (_hunger>1) exitwith {
		  
				["В меня больше не лезет!!!"] call AGM_Core_fnc_displayTextStructured; 
		};		
		_unit setVariable ["ARMST_HUNGER", (_unit getVariable "ARMST_HUNGER") + 0.3];
		["Вас накормили колбасой..."] call AGM_Core_fnc_displayTextStructured; 
	};	   
	
	
	
ARMST_TeleportPoints = 
	{

	//Autors: Aloe, Romzet
	//Description:
	//Tелепортирует игрока с триггера Trigger на другой в соответсвии с параметрами Index и Altitude
		
	//Parameter(s):
	//0: Trigger <Object> Текущий триггер
	//1: Index <Number, Array> Если параметр является числом, телепортация осуществляется на триггер с этим индексом. 
	//Если является массивом с одним элементом [0], параметр принимает контекст шага и телепортация будет осуществлена на
	//рандомный, соседний (по индексу) триггер (исключая текущий) в соответсвии с шагом. 
	//Note: Если шаг = 0, телепортация будет осуществлена на этот же триггер   
	//2: Altitude <Number> (Optional) Высота, по умолчанию: 0
	
	
	if(params [["_activator", objNull, [objNull]], ["_point", [0], [0, [0]]]]) then {
	
		//local only
		if (local player) then {
			private ["_altitude", "_formatTrgName", "_getTriggerIndex", "_getRandomPoint", "_triggerNext"];
			
			_altitude = if(count _this > 2)then{_this select 2}else{0};
			_formatTrgName = "anomalyTeleport_";
			
			//Get Index from trigger name function
			_getTriggerIndex = {
				private ["_name", "_nameSeparate", "_index"];
				_index = -1;
				{
					if (missionNamespace getVariable _x isEqualTo _this) exitWith {_name = _x};
				} forEach allVariables missionNamespace;
				
				if !(isNil "_name") then {
					_nameSeparate = _name splitString "_";
					if !(_nameSeparate isEqualTo []) then {
						_index = parseNumber (_nameSeparate select 1);
					};
				};
			_index;
			};
			
			//Get a random trigger on the index between spending function
			_getRandomPoint = {
				params ["_current", "_diverge"];
				private ["_point", "_period", "_attempt"];
				
				_point = objNull;
				_period = [];
				for "_i" from (_current - _diverge) to (_current + _diverge) step 1 do {
					if(_i > 0 and _i != _current) then {_period pushBack _i}else{_diverge = _diverge + 1};
				};
				
				if(count _period > 0) then {
					_attempt = 0;
					while {_attempt <= count _period} do {
						private ["_randTrg"];
						_randTrg = missionNamespace getVariable [format["%1%2", _formatTrgName, _period select floor random count _period], nil];
						if !(isNil "_randTrg") exitWith {
							_point = _randTrg;
						};
						
					_attempt = _attempt + 1;
					};
				};

			_point;
			};
			
			switch (typeName _point) do {
				case "SCALAR" : {
					_triggerNext = missionNamespace getVariable (format ["%1%2", _formatTrgName, _point]);
				};
				case "ARRAY" : {
					private ["_currentIndex"];
					_currentIndex = _activator call _getTriggerIndex;
					_point = _point select 0;
					
					if(_point > 0) then {
						_triggerNext = [_currentIndex, _point] call _getRandomPoint;
					}else{
						_triggerNext = call compile (format ["%1%2", _formatTrgName, _currentIndex]);
					};
				};
				default {};
			};
				
			//hint format ["Текущий индекс: %1 Следующий: %2", str (_activator call _getTriggerIndex), str (_triggerNext call _getTriggerIndex)];
			
			if !(isNil "_triggerNext") then {
			
				if (alive player) then {
					
					sleep 6;
					
					if(player in list _activator) then { //Снова проверяем после задержки
						player say2d "voronka";
						enableCamShake true;
						addCamShake [2, 10, 25];
						sleep 6;
						if(player in list _activator) then { //И ещё раз и всегда после задержек
							RANDOMDEATH = random 10;
							player playactionnow "Gestureheadkick";
							addCamShake [3, 5, 20];
							player setFatigue 1;
							//player playactionnow "Gestureheadkick";
							private ["_teleportPos"];
							_teleportPos = getPosATL _triggerNext;
							_teleportPos set [2, _altitude];
							player setPosATL _teleportPos;
							if (RANDOMDEATH >= 8) then {player setdamage 1;};
						};
					};
				};
			} else {
				private ["_error"];
				_error =  format ["Undefined trigger '%1'", format ["%1%2", _formatTrgName, _point]];
				diag_log _error;
				hint _error;
			};
			
		};
	}else{
		diag_log format ["Incorrect params: %1 in %2", _this, __FILE__];
	};
};