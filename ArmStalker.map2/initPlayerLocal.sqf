
	[] spawn ARMST_fnc_locationHUD;
	waitUntil{!isNull (findDisplay 46)};
		missionKeyspressed = compileFinal preprocessFile "scripts\keyspressed.sqf";
		(findDisplay 46) displayAddEventHandler ["KeyDown","_this call missionKeyspressed"];

#include "scripts\night.sqf";
#include "scripts\compile_eat.sqf";	
#include "scripts\anim.sqf";	
#include "scripts\prices.sqf";
#include "scripts\pda\fn_inv.sqf";
		
Boost = 50;
[] execVM "scripts\keypad\fn_keypad.sqf";
[] execVM "scripts\vest.sqf";
[] execVM "scripts\vest_seva.sqf";
[] execVM "scripts\gasmask.sqf";
[] execVM "scripts\gasmask_ballon.sqf";
[] execVM "scripts\local_anomals.sqf";
[] execVM "scripts\tempbody_system.sqf";
[] execVM "scripts\night_fogs.sqf";
[] execVM "scripts\dead_fogs.sqf";
[] execVM "scripts\pda\fn_inv.sqf";
[] execVM "scripts\detectors\fn_detectors.sqf";

player addEventHandler ["hit", {[_this] spawn armst_broken_gas}];
[] spawn
	{
		waitUntil {!isNil "interaction_key"};
		waitUntil {!isNil "interaction_key_self"};
		["player", [interaction_key], -23, ["scripts\army.sqf", "main"]] call CBA_ui_fnc_add;
		["player", [interaction_key], -21, ["scripts\barricade_int.sqf", "main"]] call CBA_ui_fnc_add;
		
		["player", [interaction_key], -8, ["\armst\armst_misc\armst_game\scripts\remains_menu.sqf", "main"]] call CBA_ui_fnc_add;
		["player", [interaction_key], -3, ["scripts\interactionMED_menu.sqf", "main"]] call CBA_ui_fnc_add;
		["player", [interaction_key_self], -6, ["\armst\armst_misc\armst_game\scripts\art_kontainer_self_menu.sqf", "main"]] call CBA_ui_fnc_add;
		["player", [interaction_key_self], -17, ["\armst\armst_misc\armst_game\scripts\animation.sqf", "main"]] call CBA_ui_fnc_add;
		
		//["player", [interaction_key_self], -22, ["scripts\barricade.sqf", "main"]] call CBA_ui_fnc_add;
		["player", [interaction_key_self], -30, ["scripts\guitar_self_menu.sqf", "main"]] call CBA_ui_fnc_add;
		["player", [interaction_key_self], -7, ["\armst\armst_misc\armst_game\scripts\interaction_self_menu.sqf", "main"]] call CBA_ui_fnc_add;
		//["player", [interaction_key_self], -5, ["\armst\armst_misc\armst_game\scripts\shlemy_self_menu.sqf", "main"]] call CBA_ui_fnc_add;
		//["player", [interaction_key_self], -2, ["\armst\armst_misc\armst_game\scripts\interactionMED_self_menu.sqf", "main"]] call CBA_ui_fnc_add;
		//["player", [interaction_key_self], -1, ["\armst\armst_misc\armst_game\scripts\action_self_menu.sqf", "main"]] call CBA_ui_fnc_add;
		//["player", [interaction_key_self], -15, ["\armst\armst_misc\armst_game\scripts\artefacts_self.sqf", "main"]] call CBA_ui_fnc_add;
		//["player", [interaction_key_self], -18, ["\armst\armst_misc\armst_game\scripts\interaction_self.sqf", "main"]] call CBA_ui_fnc_add;
	};
player addrating 100000;

sleep 10;

_mydamage_eh2 = player addEventHandler ["Fired", {[player] spawn player_fired}];
player setvariable ["ARTDETECTOR",0];
player setvariable ["armst_pda_web",0];
player setVariable ["ARMST_artdetector",1];