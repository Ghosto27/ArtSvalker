
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
            ["Баррикадирование >", "", "", "", ["Scripts\barricade.sqf", "barricade", 1], 49, true,  alive player && !(player getVariable ['AGM_isCaptive', false]) && !(player isKindOf "LandVehicle") && {isNull (attachedTo player)}]
			
     ]
    ],
      
    [
        ["barricade", "Установить", _menuRsc, "", false], // menu stays open after selection
        [		
            ["Моток колючей проволоки",{["armst_Razorwire","Land_Razorwire_F"] spawn armst_barricade},"", "", "", -1, 1,  alive player && ("ARMST_instruments" in (items player + assignedItems player))],
            ["Создать тайник", {[player] spawn ARMST_create_stash;},"", "", "", -1, 1, alive player  && ("armst_taynik_big" in (items player + assignedItems player))],
            ["Мешки с песком",{["armst_BagFence","Land_BagFence_Long_F"] spawn armst_barricade},"", "", "", -1, 1,  alive player  && ("ARMST_instruments" in (items player + assignedItems player))],
            ["Складной стул",{["armst_CampingChair","Land_CampingChair_V2_F"] spawn armst_barricade},"", "", "", -1, 1,  alive player  && ("ARMST_instruments" in (items player + assignedItems player))],
            ["Складной стол",{["armst_CampingTable","Land_CampingTable_small_F"] spawn armst_barricade},"", "", "", -1, 1,  alive player  && ("ARMST_instruments" in (items player + assignedItems player))],
            ["Палатка",{["armst_tent","Land_tentA_F"] spawn armst_barricade},"", "", "", -1, 1,  alive player  && ("ARMST_instruments" in (items player + assignedItems player))],
            ["Металлическая бочка",{["armst_MetalBarrel","MetalBarrel_burning_F"] spawn armst_barricade},"", "", "", -1, 1,  alive player  && ("ARMST_instruments" in (items player + assignedItems player))],
            ["Передвижной генератор",{["armst_generator","Land_Portable_generator_F"] spawn armst_barricade},"", "", "", -1, 1,  alive player  && ("ARMST_instruments" in (items player + assignedItems player))],
            ["Лампа",{["armst_Camping_Light","Land_Camping_Light_F"] spawn armst_barricade},"", "", "", -1, 1,  alive player  && ("ARMST_instruments" in (items player + assignedItems player))],
            ["Переносной фонарь",{["armst_PortableLight","Land_PortableLight_single_F"] spawn armst_barricade},"", "", "", -1, 1,  alive player  && ("ARMST_instruments" in (items player + assignedItems player))],
            ["Самодельный навес",{["armst_Camper","Land_cargo_addon02_V2_F"] spawn armst_barricade},"", "", "", -1, 1,  alive player  && ("ARMST_instruments" in (items player + assignedItems player))],
            ["Деревянный поддон",{["armst_pallet_vertical","xcam_pallet_vertical_F"] spawn armst_barricade},"", "", "", -1, 1,  alive player  && ("ARMST_instruments" in (items player + assignedItems player))],
            ["Деревянный ящик",{["armst_armst_korob1","armst_korob1"] spawn armst_barricade},"", "", "", -1, 1,  alive player  && ("ARMST_instruments" in (items player + assignedItems player))],
            ["НО:Измеритель давления",{["armst_NO1","Land_PressureWasher_01_F"] spawn armst_barricade},"", "", "", -1, 1,  alive player  && ("ARMST_instruments" in (items player + assignedItems player))],
            ["НО:Экраны",{["armst_NO2","Land_TripodScreen_01_dual_v2_F"] spawn armst_barricade},"", "", "", -1, 1,  alive player  && ("ARMST_instruments" in (items player + assignedItems player))],
            ["НО:Генератор",{["armst_NO3","Land_PortableGenerator_01_F"] spawn armst_barricade},"", "", "", -1, 1,  alive player  && ("ARMST_instruments" in (items player + assignedItems player))],
            ["НО:Анализатор воздуха",{["armst_NO4","WaterPump_01_forest_F"] spawn armst_barricade},"", "", "", -1, 1,  alive player  && ("ARMST_instruments" in (items player + assignedItems player))],
            ["НО:Антена",{["armst_NO5","Land_SatelliteAntenna_01_F"] spawn armst_barricade},"", "", "", -1, 1,  alive player  && ("ARMST_instruments" in (items player + assignedItems player))],
            ["НО:Мощная установка",{["armst_NO6","Land_Device_assembled_F"] spawn armst_barricade},"", "", "", -1, 1,  alive player  && ("ARMST_instruments" in (items player + assignedItems player))],
            ["НО:Машина переработки",{["armst_NO7","Land_DieselGroundPowerUnit_01_F"] spawn armst_barricade},"", "", "", -1, 1,  alive player  && ("ARMST_instruments" in (items player + assignedItems player))],
            ["Создать тайник", {[player] spawn ARMST_create_stash;},"", "", "", -1, 1, alive player  && ("armst_taynik_small" in (items player + assignedItems player))],
            ["Разобрать колючую проволоку",{["armst_Razorwire"] spawn armst_additem; _razorwire=nearestObjects [player, ["Land_Razorwire_F"], 10];{deleteVehicle _x;} forEach _razorwire;},"", "", "", -1, 1, ((count nearestObjects [player, ["Land_Razorwire_F"], 10])>0) && ("ARMST_instruments" in (items player + assignedItems player))]
           
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