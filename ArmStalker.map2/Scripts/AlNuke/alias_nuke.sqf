//nul = [nuke,4000,false,false,false,true] execvm "Scripts\AlNuke\alias_nuke.sqf";

// by ALIAS
// nul = [nuke_obj,radius,damage_buildings_units,weather_effect,radiation,fallout] spawn compile preprocessFile "AlNuke\alias_nuke.sqf";
// see ini_nuke.sqf for more info about parameters

obj_nuke = _this select 0;
radius = _this select 1;
damage_buildings_units = _this select 2;
weather_effect = _this select 3;
radiation = _this select 4;
fallout = _this select 5;

// b_nuke=false; if (!b_nuke) then {
	nul = [obj_nuke] execvm "Scripts\AlNuke\falling_nuke.sqf";
	nul = [] execvm "Scripts\AlNuke\fog_nuke.sqf";
	nul = [obj_nuke,radius] execvm "Scripts\AlNuke\ignite_nuke.sqf";
	if (weather_effect) then {nul = [] execvm "Scripts\AlNuke\weather_nuke.sqf";};
	if (damage_buildings_units) then {nul = [obj_nuke,radius] execvm "Scripts\AlNuke\damage_nuke.sqf";};
	if (radiation) then {nul = [obj_nuke,radius] execvm "Scripts\AlNuke\rad_nuke.sqf";};
	if (fallout) then {nul = [] execvm "Scripts\AlNuke\ash_nuke.sqf";};
//b_nuke=true; };