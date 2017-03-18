private ["_killed", "_killer", "_respawn", "_respawnDelay", "_inventoryParted", "_objectVar"];

_killed = _this select 0;
_killer = _this select 1;
_respawn = _this select 2;  
_respawnDelay = _this select 3;

removeUniform _killed;
_killed setvariable ["ARMST_HUNGER",1];
_killed setvariable ["ARMST_THIRST",1];
[_killed, false] call AGM_Captives_fnc_setCaptive;
[_killed] spawn armst_broken_gas;


hint format ["Вас ранил: %1", _killer, 60];
diag_log format ["%1 убил %2", _killed, _killer];
diag_log format ["| %1 | Игрок %2, был убит игроком: %3", _serverTime, _killed, _killer];

_condition = typeOf _killed;
_money = _killed getVariable ["Money", 0];
_delmoney=1;
switch (_condition) do {
    case "Voen_private": { 
   	 	_delmoney = 1.25;
	};
    case "bandits_private": { 
   	 	_delmoney = 2;
	};
    case "bandits_private2": { 
   	 	_delmoney = 2;
	};
    case "Dolg_private": { 
   	 	_delmoney = 1.25;
	};
    case "Dolg_private2": { 
   	 	_delmoney = 1.25;
	};
    case "Dolg_new_soldier": { 
   	 	_delmoney = 1.25;
	};
   case "freedom_private": { 
   	 	_delmoney = 1.25;
	};
    case "freedom_private2": { 
   	 	_delmoney = 1.25;
	};
    case "loner_private1": { 
   	 	_delmoney = 2;
	};
   case "loner_private2": {
   	 	_delmoney = 2;
	};
    case "loner_private3": { 
   	 	_delmoney = 2;
	};
    case "loner_private4": { 
   	 	_delmoney = 2;
	};
    case "loner_private5": { 
   	 	_delmoney = 2;
	};
    case "mercenaries_private": { 
   	 	_delmoney = 1.25;
	};
    case "hazmat_2": { 
   	 	_delmoney = 1;
	};
    case "mercenaries_private2": { 
      _delmoney = 1.25;
  };
    default { 
      _delmoney = 2;
  };
};
if (_money > 50000) then {
	_killed setVariable ["Money", round (_money / _delmoney), true];
};

AGM_Goggles_PostProcessEyes ppEffectEnable false;
AGM_Goggles_Effects = GLASSESDEFAULT;
call AGM_Goggles_fnc_RemoveGlassesEffect;
AGM_Goggles_EffectsActive=false;
_killed setVariable ["AGM_EyesDamaged", false];
terminate AGM_Goggles_EyesDamageScript;
terminate AGM_Goggles_MainLoop;
terminate AGM_Goggles_DustHandler;
AGM_Goggles_MainLoop = [] spawn AGM_Goggles_fnc_CheckGoggles;

_ehUDMdiveLightKilledID = _killed getVariable "UDMdiveLightEHKilledID";
_UDMshoulderLight = _killed getVariable "UDMshoulderLightName";
_UDMgroundLight = _killed getVariable "UDMgroundLightName";
deleteVehicle _UDMshoulderLight;
deleteVehicle _UDMgroundLight;
_flashlight = _killed getVariable "UDMnameOfFlashlight";
deleteVehicle _flashlight;
_killed setVariable ["UDMnameOfFlashlight",nil,false];
_killed setVariable ["UDMshoulderLightName",nil,false];
_killed setVariable ["UDMgroundLightName",nil,false];
_killed setVariable ["UDMdiveLightEHKilledID",nil,false];
_killed setVariable ["UDMflashlightPitch",nil,false];
_killed setVariable ["UDMgroundLightPos",nil,false];
_killed setVariable ["UDMflashlightYpos",nil,false];
_killed setVariable ["UDMbrightness",nil,false];
_killed removeEventHandler ["Killed",_ehUDMdiveLightKilledID];
_killed setvariable ["ARMST_BODYTEMP",1];
ARMST_BODYTEMP = 37.6;
_killed removeweapon "ItemMap";
titleCut ["Вы тяжело ранены и не помните что произошло...", "BLACK", 60];

