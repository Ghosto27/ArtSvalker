
WEST setFriend [CIVILIAN, 0];
	[] spawn ARMST_fnc_locationHUD;
	waitUntil{!isNull (findDisplay 46)};
		missionKeyspressed = compileFinal preprocessFile "scripts\keyspressed.sqf";
		(findDisplay 46) displayAddEventHandler ["KeyDown","_this call missionKeyspressed"];

#include "scripts\night.sqf";
#include "scripts\anim.sqf";	
#include "scripts\pda\fn_inv.sqf";
Boost = 50;
[] execVM "scripts\keypad\fn_keypad.sqf";
[] execVM "scripts\pda\fn_inv.sqf";
[] execVM "\armst\armst_misc\armst_game\scripts\mission\tempbody_system.sqf";

player addEventHandler ["hit", {[_this] spawn armst_broken_gas}];
[] spawn
	{
		waitUntil {!isNil "interaction_key"};
		waitUntil {!isNil "interaction_key_self"};
		["player", [interaction_key], -23, ["\armst\armst_misc\armst_game\scripts\mission\army.sqf", "main"]] call CBA_ui_fnc_add;
		["player", [interaction_key], -21, ["\armst\armst_misc\armst_game\scripts\mission\barricade_int.sqf", "main"]] call CBA_ui_fnc_add;
		["player", [interaction_key], -8, ["\armst\armst_misc\armst_game\scripts\remains_menu.sqf", "main"]] call CBA_ui_fnc_add;
		["player", [interaction_key], -3, ["\armst\armst_misc\armst_game\scripts\mission\interactionMED_menu.sqf", "main"]] call CBA_ui_fnc_add;
		["player", [interaction_key_self], -6, ["\armst\armst_misc\armst_game\scripts\art_kontainer_self_menu.sqf", "main"]] call CBA_ui_fnc_add;
		["player", [interaction_key_self], -17, ["\armst\armst_misc\armst_game\scripts\animation.sqf", "main"]] call CBA_ui_fnc_add;
		["player", [interaction_key_self], -30, ["\armst\armst_misc\armst_game\scripts\guitar_self_menu.sqf", "main"]] call CBA_ui_fnc_add;
		["player", [interaction_key_self], -7, ["\armst\armst_misc\armst_game\scripts\interaction_self_menu.sqf", "main"]] call CBA_ui_fnc_add;
	};
player addrating 100000;

sleep 10;
WEST setFriend [CIVILIAN, 0];
_mydamage_eh2 = player addEventHandler ["Fired", {[player] spawn player_fired}];
player setvariable ["ARTDETECTOR",0];
player setvariable ["armst_pda_web",0];
player setVariable ["ARMST_artdetector",1];