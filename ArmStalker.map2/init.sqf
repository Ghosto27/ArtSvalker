WEST setFriend [CIVILIAN, 0];
setViewDistance 800;
setObjectViewDistance 800;
enableSaving [false, false];

if (isMultiplayer and !isDedicated) then {
	
	private _ADMINS = getArray (missionConfigfile >> "ADMINS" >> "uids");
	waitUntil {player getVariable ["Authed", false]};
	diag_log format ["ADMINS: %1 | %2", getPlayerUID player, _ADMINS];
	if (getPlayerUID player in _ADMINS) then {
		sleep 4;
		hint "ВХОД ВЫПОЛНЕН В КАЧЕСТВЕ АДМИНИСТРАТОРА";
		setPlayerRespawnTime 5;
		[] spawn 
		{
			while {true} do
			{ 
				[0] call ARMST_Radiation_SetInfection;
				ARMST_BODYTEMP = 39;
				player setVariable ["ARMST_BODYTEMP", 1];
				sleep 5;
			};
		};
	};
	if !(getPlayerUID player in _ADMINS) then {
	  	player unassignItem "ItemMap"; 
		player removeItem "ItemMap";
		player removeItemFromBackpack "ItemMap";
		player removeItemFromVest "ItemMap";
	};
};
if (!isServer) then {
	[] execVM "scripts\pda\fn_pda.sqf";
	[] execVM "scripts\notebook\fn_notebook.sqf";
};
[] execVM "scripts\real_weather.sqf";
player addrating 100000;

	player addEventHandler ["InventoryClosed", {
		if (typeOf(_this select 1)=="armst_box_big") then {
		  [_this select 1] spawn ARMST_update_Stash;
		};
	}];	

[] spawn {
MASSIVOBJECTSSSS=[4100,4100] nearObjects 6000;

	while {true} do {
	  	_arr2=(position player) nearObjects 1200;
		{
			if !(_x in _arr2) then {
				if !(isPlayer _x) then {
			  		_x hideObject true; 
				};
			}
			else{
				if !(isPlayer _x) then {
				  	_x hideObject false; 
				};
				
			};
		}count MASSIVOBJECTSSSS;
		sleep 5;
	};	
};
sleep 5;
player setVariable ["ARMST_artdetector",1];
ARMY_TRADER switchmove "InBaseMoves_HandsBehindBack1";
BANDITS_TRADER switchmove "Acts_AidlPercMstpSnonWnonDnon_warmup_4_loop";
BANDITS_TRADER_1 switchmove "InBaseMoves_SittingRifle1";
BARMEN switchmove "HubBriefing_lookAround2";
BARMEN_SEBJAN switchmove "HubSittingChairUB_idle1";
DOLGS_TRADER1 switchmove "HubStandingUB_idle1";
FREEDOM_TRADER switchmove "InBaseMoves_HandsBehindBack1";
FREEDOMs_BARMEN switchmove "InBaseMoves_SittingRifle1";
MERCENARIES_TRADER switchmove "InBaseMoves_Lean1";
SCIENCES_TRADER switchmove "HubStandingUC_idle1";
STAKLER_TRADER switchmove "HubSittingChairUC_idle3";
SUPER_BARMEN switchmove "HubSittingChairUC_idle3";
WEST setFriend [CIVILIAN, 0];