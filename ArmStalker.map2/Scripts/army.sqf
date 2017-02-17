
private ["_menuDef", "_target", "_params", "_menuName", "_menuRsc", "_menus", "_status", "_distance", "_unit", "_isBusy", "_name"];
_target = _this select 0;
_params = _this select 1;
_unit = cursorTarget;
_distance = player distance _unit;
if(_distance > 3) exitWith {};
if( isNull (_unit) ) exitWith {};
if( isPlayer (_unit) )then
{
     _goggles = goggles _unit;

		switch (_goggles) do 
		{
				case "Armst_BalaclavaFreed": 
					{
					_name = "Неизвестный";
					};
				case "Armst_balaclava_dolg": 
					{
					_name = "Неизвестный";
					};
				case "Armst_balaclava_voen": 
					{
					_name = "Неизвестный";
					};
				case "G_Balaclava_combat": 
					{
					_name = "Неизвестный";
					};
				case "G_Balaclava_oli": 
					{
					_name = "Неизвестный";
					};
				case "G_Balaclava_lowprofile": 
					{
					_name = "Неизвестный";
					};
				case "G_Balaclava_blk": 
					{
					_name = "Неизвестный";
					};
				case "G_Bandanna_aviator": 
					{
					_name = "Неизвестный";
					};
				case "armst_bandana": 
					{
					_name = "Неизвестный";
					};
				case "G_Bandanna_beast": 
					{
					_name = "Неизвестный";
					};
				case "G_Bandanna_tan": 
					{
					_name = "Неизвестный";
					};
				case "G_Bandanna_oli": 
					{
					_name = "Неизвестный";
					};
				case "G_Bandanna_sport": 
					{
					_name = "Неизвестный";
					};
				case "G_Bandanna_shades": 
					{
					_name = "Неизвестный";
					};
				case "G_Bandanna_khk": 
					{
					_name = "Неизвестный";
					};
				case "G_Bandanna_blk": 
					{
					_name = "Неизвестный";
					};
				case "armst_bandanaGlass": 
					{
					_name = "Неизвестный";
					};
				case "armst_MESHOK": 
					{
					_name = "Неизвестный";
					};
				case "armst_G100": 
					{
					_name = "Неизвестный";
					};
				case "armst_BioGasMaskG25": 
					{
					_name = "Неизвестный";
					};
				case "armst_GasP5": 
					{
					_name = "Неизвестный";
					};
				case "armst_GasP7": 
					{
					_name = "Неизвестный";
					};
				case "armst_gasm20": 
					{
					_name = "Неизвестный";
					};
				case "armst_gasm50": 
					{
					_name = "Неизвестный";
					};
				case "armst_Gasscout": 
					{
					_name = "Неизвестный";
					};
				case "armst_gasmaskM40": 
					{
					_name = "Неизвестный";
					};
				case "armst_Gasslon": 
					{
					_name = "Неизвестный";
					};
				case "armst_gasmaskBastard": 
					{
					_name = "Неизвестный";
					};
				case "armst_R5_SH2_filter": 
					{
					_name = "Неизвестный";
					};
				case "armst_R5_SH2": 
					{
					_name = "Неизвестный";
					};
				case "armst_R5_P_filter": 
					{
					_name = "Неизвестный";
					};
				case "armst_R5_P": 
					{
					_name = "Неизвестный";
					};
			};
}
else
{ 
    _name = getText (configFile >> "CfgVehicles" >> typeOf(_unit) >> "displayName");
};


_unitStatus = _unit getVariable["down", false];
_status = player getVariable["down", false];
_isBusy = player getVariable["busy", false];

_menuName = "";
_menuRsc = "popup";

if (typeName _params == typeName []) then
{
    if (count _params < 1) exitWith {diag_log format["Error: Invalid params: %1, %2", _this, __FILE__];};
    _menuName = _params select 0;
    _menuRsc = if (count _params > 1) then {_params select 1} else {_menuRsc};
} else {
    _menuName = _params;
};

//-----------------------------------------------------------------------------
_menus =
[ 
    [
        ["main", format["%1", _name], _menuRsc],
        [
           ["Открыть", {[player] spawn Armst_BTR}, "", "", "",  -1,true, cursorTarget isKindOf "Land_Cargo10_blue_F" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Открыть", {[player] spawn Armst_BTR2}, "", "", "",  -1,true, cursorTarget isKindOf "Land_Cargo10_grey_F"],
           ["Открыть", {[player] spawn Armst_BTR3}, "", "", "",  -1,true, _unit isKindOf "Land_Cargo10_blue_F"],
           ["Открыть", {[player] spawn Armst_BTR4}, "", "", "",  -1,true, _unit isKindOf "Land_Cargo10_red_F"],
           ["Прокричать в мегафон.", {[player] spawn Armst_army_megafone}, "", "", "",  -1,true, cursorTarget isKindOf "Land_Lamp_Mike_1_vert" && player isKindOf "Basic_Voen"],
           ["Включить тревогу!", {[player] spawn Armst_army_megafone_alarm}, "", "", "",  -1,true, cursorTarget isKindOf "Land_Lamp_Mike_1_vert" && player isKindOf "Basic_Voen" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Открыть врата.", {[_unit] spawn Armst_door_monolith}, "", "", "",  -1,true, cursorTarget isKindOf "Land_HBarrierWall4_f" && player isKindOf "monolith_private"],
           ["Открыть врата.", {[_unit] spawn Armst_door_mercenaries}, "", "", "",  -1,true, cursorTarget isKindOf "Land_Mil_WallBig_4m_F" && player isKindOf "mercenaries_private"],
           ["Открыть врата.", {[_unit] spawn Armst_door_mercenaries}, "", "", "",  -1,true, cursorTarget isKindOf "Land_Mil_WallBig_4m_F" && player isKindOf "mercenaries_private2"],
           ["Открыть врата.", {[_unit] spawn Armst_door_dolg}, "", "", "",  -1,true, cursorTarget isKindOf "Land_HBarrierWall4_f" && player isKindOf "Dolg_private"],
           ["Открыть врата.", {[_unit] spawn Armst_door_dolg}, "", "", "",  -1,true, cursorTarget isKindOf "Land_HBarrierWall4_f" && player isKindOf "Dolg_private2"],
           ["Открыть врата.", {[_unit] spawn Armst_freedom_mercenaries}, "", "", "",  -1,true, cursorTarget isKindOf "Land_Mil_WallBig_4m_F" && player isKindOf "freedom_private"],
           ["Открыть врата.", {[_unit] spawn Armst_freedom_mercenaries}, "", "", "",  -1,true, cursorTarget isKindOf "Land_Mil_WallBig_4m_F" && player isKindOf "freedom_private2"],
           ["Открыть гермодверь", {[_unit] spawn Armst_science_door}, "", "", "",  -1,true, cursorTarget isKindOf "Land_Mil_WallBig_Corner_F"],
           ["Открыть дверь", {[_unit] spawn Armst_army_door}, "", "", "",  -1,true, cursorTarget isKindOf "Land_Mil_WallBig_Corner_F" && player isKindOf "Voen_private"],
           //["Собрать травку", {player additem "ARMST_kosyak";deleteVehicle _unit;}, "", "", "",  -1,true, cursorTarget isKindOf "xCam_c_Flower_Tansy" && player isKindOf "freedom_private" or player isKindOf "freedom_private2"],
		   ["Открыть дверь", {[_unit] spawn Armst_army_garaj}, "", "", "",  -1,true, cursorTarget isKindOf "Land_Canal_WallSmall_10m_F" && player isKindOf "Voen_private"]
		]
     ]
   
];

//-----------------------------------------------------------------------------
_menuDef = [];
{
    if (_x select 0 select 0 == _menuName) exitWith {_menuDef = _x};
} forEach _menus;

if (count _menuDef == 0) then
{
    hintC format ["Error: Menu not found: %1\n%2\n%3", str _menuName, if (_menuName == "") then {_this}else{""}, __FILE__];
    diag_log format ["Error: Menu not found: %1, %2, %3", str _menuName, _this, __FILE__];
};

_menuDef // return value