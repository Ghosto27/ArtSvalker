
private ["_menuDef", "_target", "_params", "_menuName", "_menuRsc", "_menus", "_status"];
_target = _this select 0;
_params = _this select 1;
_busy = player getVariable["busy", false];
if(_busy) exitWith {};

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
_status = player getVariable["down", false];
_menus =
[
    [
        ["main", "", _menuRsc],
        [
            ["Анимации >", "", "", "", ["\armst\armst_misc\armst_game\scripts\animation.sqf", "animplay", 1], 35, true,  alive player && !(player getVariable ['AGM_isCaptive', false]) && !(player isKindOf "LandVehicle") && {isNull (attachedTo player)}]
			
     ]
    ],
      
    [
        ["animplay", "Список анимаций", _menuRsc, "", false], // menu stays open after selection
        [		
            ["Молиться",{[player] spawn an_fnc_molitva},"", "", "", -1, 1,  alive player ],
            ["Размяться",{[player] spawn an_fnc_sport_press},"", "", "", -1, 1,  alive player ],
            ["Отдышаться",{[player] spawn an_fnc_1},"", "", "", -1, 1,  alive player ],
            ["Отдыхать у костра",{[player] spawn an_fnc_12;},"", "", "", -1, 1,  alive player ],
            ["Стоять №1",{[player] spawn an_fnc_2},"", "", "", -1, 1,  alive player ],
            ["Стоять №2",{[player] spawn an_fnc_3},"", "", "", -1, 1,  alive player ],
            ["Стоять №3",{[player] spawn an_fnc_4},"", "", "", -1, 1,  alive player ],
            ["Стоять №4",{[player] spawn an_fnc_9},"", "", "", -1, 1,  alive player ],
            ["Присесть",{[player] spawn an_fnc_5;},"", "", "", -1, 1,  alive player ],
            ["Лежать",{[player] spawn an_fnc_6;},"", "", "", -1, 1,  alive player ],
            ["Чинить",{[player] spawn an_fnc_10;},"", "", "", -1, 1,  alive player ],
            ["Говорить по рации",{[player] spawn an_fnc_11;},"", "", "", -1, 1,  alive player ],
            ["Танцевать",{[player] spawn an_fnc_7;},"", "", "", -1, 1,  alive player ],
				["Прекратить",{[player] spawn an_fnc_8;},"", "", "", 31, 1, alive player]
           
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