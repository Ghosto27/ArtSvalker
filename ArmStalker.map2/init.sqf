WEST setFriend [CIVILIAN, 0];
armst_first_spawn =
{
ARMST_SPAWN = [resp_1,resp_2,resp_3,resp_4,resp_5,resp_6,resp_7,resp_8,resp_9,resp_10,resp_11];
_resp = ARMST_SPAWN select floor random count ARMST_SPAWN;
player setPosATL [getPosATL _resp select 0, getPosATL _resp select 1, (getPosATL _resp select 2) + 0.3];
};
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

player addrating 100000;

	player addEventHandler ["InventoryClosed", {
		if (typeOf(_this select 1)=="armst_box_big") then {
		  [_this select 1] spawn ARMST_update_Stash;
		};
	}];	
sleep 5;
mydamage_eh22 = player addEventHandler ["Fired", {[player] spawn player_fired}];
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
