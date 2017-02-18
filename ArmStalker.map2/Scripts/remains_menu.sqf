
private ["_menuDef", "_target", "_params", "_menuName", "_menuRsc", "_menus", "_status", "_distance", "_unit", "_isBusy", "_name"];
_target = _this select 0;
_params = _this select 1;
_unit = cursorTarget;
_distance = player distance _unit;
if(_distance > 3) exitWith {};
if( isNull (_unit) ) exitWith {};
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
           ["Отрезать часть мутанта", {[cursorTarget] spawn Armst_kaban_remains}, "", "", "",  -1,true,_unit isKindOf "armst_boar" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Отрезать часть мутанта", {[cursorTarget] spawn Armst_kaban_remains}, "", "", "",  -1,true,_unit isKindOf "armst_boar2" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Отрезать часть мутанта", {[cursorTarget] spawn Armst_flesh_remains}, "", "", "",  -1,true,_unit isKindOf "armst_PLOT" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Отрезать часть мутанта", {[cursorTarget] spawn Armst_flesh_remains}, "", "", "",  -1,true,_unit isKindOf "armst_PLOT2" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Отрезать часть мутанта", {[cursorTarget] spawn Armst_flesh_remains}, "", "", "",  -1,true,_unit isKindOf "armst_PLOT3" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Отрезать часть мутанта", {[cursorTarget] spawn Armst_chimera_remains}, "", "", "",  -1,true,_unit isKindOf "celchimera" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Отрезать часть мутанта", {[cursorTarget] spawn Armst_Pseudodog_remains}, "", "", "",  -1,true,_unit isKindOf "armst_pseudodog" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Отрезать часть мутанта", {[cursorTarget] spawn Armst_Pseudodog_remains}, "", "", "",  -1,true,_unit isKindOf "armst_pseudodog2" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Отрезать часть мутанта", {[cursorTarget] spawn Armst_dog_remains}, "", "", "",  -1,true,_unit isKindOf "armst_blinddog" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Отрезать часть мутанта", {[cursorTarget] spawn Armst_dog_remains}, "", "", "",  -1,true,_unit isKindOf "armst_blinddog2" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Отрезать часть мутанта", {[cursorTarget] spawn Armst_dog_remains}, "", "", "",  -1,true,_unit isKindOf "armst_blinddog3" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Отрезать часть мутанта", {[cursorTarget] spawn Armst_dog_remains}, "", "", "",  -1,true,_unit isKindOf "armst_blinddog4" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Отрезать часть мутанта", {[cursorTarget] spawn Armst_kontroller_remains}, "", "", "",  -1,true,_unit isKindOf "armst_controler" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Отрезать часть мутанта", {[cursorTarget] spawn Armst_kontroller_remains}, "", "", "",  -1,true,_unit isKindOf "armst_controler2" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Отрезать часть мутанта", {[cursorTarget] spawn Armst_kontroller_remains}, "", "", "",  -1,true,_unit isKindOf "armst_controler3" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Отрезать часть мутанта", {[cursorTarget] spawn Armst_kontroller_remains}, "", "", "",  -1,true,_unit isKindOf "armst_controler4" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Отрезать часть мутанта", {[cursorTarget] spawn Armst_krovovos_remains}, "", "", "",  -1,true,_unit isKindOf "armst_krovosos" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Отрезать часть мутанта", {[cursorTarget] spawn Armst_krovovos_remains}, "", "", "",  -1,true,_unit isKindOf "armst_krovosos2" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Отрезать часть мутанта", {[cursorTarget] spawn Armst_krovovos_remains}, "", "", "",  -1,true,_unit isKindOf "armst_krovosos3" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Отрезать часть мутанта", {[cursorTarget] spawn Armst_krovovos_remains}, "", "", "",  -1,true,_unit isKindOf "armst_krovosos4" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Отрезать часть мутанта", {[cursorTarget] spawn Armst_spider_remains}, "", "", "",  -1,true,_unit isKindOf "pauk" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Отрезать часть мутанта", {[cursorTarget] spawn Armst_poltergeyts_remains}, "", "", "",  -1,true,_unit isKindOf "armst_poltergeist" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Отрезать часть мутанта", {[cursorTarget] spawn Armst_psevdogigant_remains}, "", "", "",  -1,true,_unit isKindOf "armst_giant" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Отрезать часть мутанта", {[cursorTarget] spawn Armst_psevdogigant_remains}, "", "", "",  -1,true,_unit isKindOf "armst_giant2" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Отрезать часть мутанта", {[cursorTarget] spawn Armst_burer_remains}, "", "", "",  -1,true,_unit isKindOf "burer" && isNil {_unit getVariable "RemainsEmpty"}],
           ["Отрезать часть мутанта", {[cursorTarget] spawn Armst_snork_remains}, "", "", "",  -1,true,_unit isKindOf "armst_snork" && isNil {_unit getVariable "RemainsEmpty"}]
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