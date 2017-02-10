
Armst_switch_rathion =
{
private ["_unit","_eat","_drink","_binocs"];

_unit = _this select 0;
_eat = _this select 1;

_hunger=_unit getVariable ["ARMST_HUNGER",1];
if (_hunger>1) exitwith {
  hint 'Я не хочу больше кушать';
};
_unit removeitem "Armst_item_rathion";
disableUserInput true;
[_unit] call AGM_WeaponSelect_fnc_putWeaponAway;sleep 4;
_binocs = binocular _unit;
_unit addweapon "armst_switch_rathion";
_weaponIndex = [_unit, "armst_switch_rathion"] call getWeaponIndex;
_unit action ["SwitchWeapon", _unit, _unit,_weaponIndex];
_unit playactionnow "GestureEat";
sleep 0.5;
_unit playactionnow "GestureEat";
_unit playactionnow "GestureEat";
_unit say2d "eating0";
_unit setVariable ["ARMST_HUNGER", (_unit getVariable "ARMST_HUNGER") + _eat];
sleep 7;
_unit removeweapon "armst_switch_rathion";
_unit addweapon _binocs;
disableUserInput false;
};

Armst_switch_SuhPay =
{
private ["_unit","_eat","_drink","_binocs"];

_unit = _this select 0;
_eat = _this select 1;

_hunger=_unit getVariable ["ARMST_HUNGER",1];
if (_hunger>1) exitwith {
  hint 'Я не хочу больше кушать';
};
_unit removeitem "Armst_item_SuhPay";
disableUserInput true;
[_unit] call AGM_WeaponSelect_fnc_putWeaponAway;sleep 4;
_binocs = binocular _unit;
_unit addweapon "armst_switch_SuhPay";
_weaponIndex = [_unit, "armst_switch_SuhPay"] call getWeaponIndex;
_unit action ["SwitchWeapon", _unit, _unit,_weaponIndex];
_unit playactionnow "GestureEat";
sleep 0.5;
_unit playactionnow "GestureEat";
_unit playactionnow "GestureEat";
_unit say2d "eating0";
_unit setVariable ["ARMST_HUNGER", (_unit getVariable "ARMST_HUNGER") + _eat];
sleep 7;
_unit removeweapon "armst_switch_SuhPay";
_unit addweapon _binocs;
disableUserInput false;
};

Armst_switch_bred =
{
private ["_unit","_eat","_drink","_binocs"];

_unit = _this select 0;
_eat = _this select 1;

_unit removeitem "Armst_item_rathion";
_hunger=_unit getVariable ["ARMST_HUNGER",1];
if (_hunger>1) exitwith {
  hint 'Я не хочу больше кушать';
};
_unit removeitem "Armst_item_bred";
disableUserInput true;
[_unit] call AGM_WeaponSelect_fnc_putWeaponAway;sleep 4;
_binocs = binocular _unit;
_unit addweapon "armst_switch_bred";
_weaponIndex = [_unit, "armst_switch_bred"] call getWeaponIndex;
_unit action ["SwitchWeapon", _unit, _unit,_weaponIndex];
_unit playactionnow "GestureEat";

sleep 0.5;
_unit playactionnow "GestureEat";
_unit playactionnow "GestureEat";
_unit say2d "eating0";
_unit setVariable ["ARMST_HUNGER", (_unit getVariable "ARMST_HUNGER") + _eat];
sleep 7;
_unit removeweapon "armst_switch_bred";
_unit addweapon _binocs;
disableUserInput false;
};

Armst_switch_kolbasa =
{
private ["_unit","_eat","_drink","_binocs"];

_unit = _this select 0;
_eat = _this select 1;

_hunger=_unit getVariable ["ARMST_HUNGER",1];
if (_hunger>1) exitwith {
  hint 'Я не хочу больше кушать';
};
_unit removeitem "Armst_item_kolbasa";
disableUserInput true;
[_unit] call AGM_WeaponSelect_fnc_putWeaponAway;sleep 4;
_binocs = binocular _unit;
_unit addweapon "armst_switch_kolbasa";
_weaponIndex = [_unit, "armst_switch_kolbasa"] call getWeaponIndex;
_unit action ["SwitchWeapon", _unit, _unit,_weaponIndex];
_unit playactionnow "GestureEat";
sleep 0.5;

_unit playactionnow "GestureEat";
_unit playactionnow "GestureEat";
_unit say2d "eating0";
_unit setVariable ["ARMST_HUNGER", (_unit getVariable "ARMST_HUNGER") + _eat];
sleep 7;
_unit removeweapon "armst_switch_kolbasa";
_unit addweapon _binocs;
disableUserInput false;
};

Armst_switch_konserv =
{
private ["_unit","_eat","_drink","_binocs"];

_unit = _this select 0;
_eat = _this select 1;

_hunger=_unit getVariable ["ARMST_HUNGER",1];
if (_hunger>1) exitwith {
  hint 'Я не хочу больше кушать';
};
_unit removeitem "Armst_item_can";
disableUserInput true;
[_unit] call AGM_WeaponSelect_fnc_putWeaponAway;sleep 4;
_binocs = binocular _unit;
_unit addweapon "armst_switch_konserv";
_weaponIndex = [_unit, "armst_switch_konserv"] call getWeaponIndex;
_unit action ["SwitchWeapon", _unit, _unit,_weaponIndex];
_unit playactionnow "GestureEat";

sleep 0.5;
_unit playactionnow "GestureEat";
_unit playactionnow "GestureEat";
_unit say2d "eating0";
_unit setVariable ["ARMST_HUNGER", (_unit getVariable "ARMST_HUNGER") + _eat];
sleep 7;
_unit removeweapon "armst_switch_konserv";
_unit addweapon _binocs;
_unit additem "Armst_item_canempty";
disableUserInput false;
};

Armst_switch_shocolate =
{
private ["_unit","_eat","_drink","_binocs"];

_unit = _this select 0;
_eat = _this select 1;

_hunger=_unit getVariable ["ARMST_HUNGER",1];
if (_hunger>1) exitwith {
  hint 'Я не хочу больше кушать';
};
_unit removeitem "Armst_item_shocolate";
disableUserInput true;
[_unit] call AGM_WeaponSelect_fnc_putWeaponAway;sleep 4;
_binocs = binocular _unit;
_unit addweapon "armst_switch_shocolate";
_weaponIndex = [_unit, "armst_switch_shocolate"] call getWeaponIndex;
_unit action ["SwitchWeapon", _unit, _unit,_weaponIndex];
_unit playactionnow "GestureEat";

sleep 0.5;
_unit playactionnow "GestureEat";
_unit playactionnow "GestureEat";
_unit say2d "eating0";
_unit setVariable ["ARMST_HUNGER", (_unit getVariable "ARMST_HUNGER") + _eat];
sleep 7;
_unit removeweapon "armst_switch_shocolate";
_unit addweapon _binocs;
disableUserInput false;
};

Armst_switch_shocolate2 =
{
private ["_unit","_eat","_drink","_binocs"];

_unit = _this select 0;
_eat = _this select 1;

_hunger=_unit getVariable ["ARMST_HUNGER",1];
if (_hunger>1) exitwith {
  hint 'Я не хочу больше кушать';
};
_unit removeitem "Armst_item_shocolate2";
disableUserInput true;
[_unit] call AGM_WeaponSelect_fnc_putWeaponAway;sleep 4;
_binocs = binocular _unit;
_unit addweapon "armst_switch_shocolate2";
_weaponIndex = [_unit, "armst_switch_shocolate2"] call getWeaponIndex;
_unit action ["SwitchWeapon", _unit, _unit,_weaponIndex];
_unit playactionnow "GestureEat";

sleep 0.5;
_unit playactionnow "GestureEat";
_unit playactionnow "GestureEat";
_unit say2d "eating0";
_unit setVariable ["ARMST_HUNGER", (_unit getVariable "ARMST_HUNGER") + _eat];
sleep 7;
_unit removeweapon "armst_switch_shocolate2";
_unit addweapon _binocs;
disableUserInput false;
};

Armst_switch_beer =
{
private ["_unit","_eat","_drink","_binocs"];

_unit = _this select 0;
_eat = _this select 1;

_hunger=_unit getVariable ["ARMST_THIRST",1];
if (_hunger>1) exitwith {
  hint 'Я не хочу больше пить';
};
_unit removeitem "armst_item_Beer";
disableUserInput true;
[_unit] call AGM_WeaponSelect_fnc_putWeaponAway;sleep 4;
_binocs = binocular _unit;
_unit addweapon "armst_switch_beer";
_weaponIndex = [_unit, "armst_switch_beer"] call getWeaponIndex;
_unit action ["SwitchWeapon", _unit, _unit,_weaponIndex];
_unit playactionnow "GestureDrink";

sleep 0.5;
_unit playactionnow "GestureDrink";
_unit playactionnow "GestureDrink";
_unit say2d "drinking";
_unit setVariable ["ARMST_THIRST", (_unit getVariable "ARMST_THIRST") + _eat];
_unit setVariable ["ARMST_BODYTEMP", 1];
sleep 7;
addcamshake [1,180,2];
_unit additem "armst_item_Beerempty";
_unit removeweapon "armst_switch_beer";
_unit addweapon _binocs;
disableUserInput false;
};

armst_switch_vodka =
{

private ["_unit","_eat","_drink","_binocs"];

_unit = _this select 0;
_eat = _this select 1;

_hunger=_unit getVariable ["ARMST_THIRST",1];
if (_hunger>1) exitwith {
  hint 'Я не хочу больше пить';
};
_unit removeitem "armst_item_vodka";
disableUserInput true;
[_unit] call AGM_WeaponSelect_fnc_putWeaponAway;sleep 4;
_binocs = binocular _unit;
_unit addweapon "armst_switch_vodka";
_weaponIndex = [_unit, "armst_switch_vodka"] call getWeaponIndex;
_unit action ["SwitchWeapon", _unit, _unit,_weaponIndex];
_unit playactionnow "GestureDrink";

sleep 0.5;
_unit playactionnow "GestureDrink";
_unit playactionnow "GestureDrink";
_unit say2d "drinking";
_unit setVariable ["ARMST_THIRST", (_unit getVariable "ARMST_THIRST") + _eat];
_unit setVariable ["ARMST_BODYTEMP", 1];
[0] call ARMST_Radiation_SetInfection;
sleep 7;
addcamshake [6,240,2];
_unit removeweapon "armst_switch_vodka";
_unit additem "armst_item_vodkaempty";
_unit addweapon _binocs;
disableUserInput false;
};

Armst_switch_waterbottle =
{
private ["_unit","_binocs","_thirst"];

private ["_unit","_eat","_drink","_binocs"];

_unit = _this select 0;
_eat = _this select 1;

_hunger=_unit getVariable ["ARMST_THIRST",1];
if (_hunger>1) exitwith {
  hint 'Я не хочу больше пить';
};
_unit removeitem "armst_item_waterbottle";
disableUserInput true;
[_unit] call AGM_WeaponSelect_fnc_putWeaponAway;sleep 4;
_binocs = binocular _unit;
_unit addweapon "armst_switch_waterbottle";
_unit say2d "drinking";
_weaponIndex = [_unit, "armst_switch_waterbottle"] call getWeaponIndex;
_unit action ["SwitchWeapon", _unit, _unit,_weaponIndex];
_unit playactionnow "GestureDrink";

sleep 0.5;
_unit playactionnow "GestureDrink";
_unit playactionnow "GestureDrink";
_unit say2d "drinking";
sleep 7;
_unit setVariable ["ARMST_THIRST", (_unit getVariable "ARMST_THIRST") + _eat];
_unit additem "armst_item_waterbottleempty";
_unit removeweapon "armst_switch_waterbottle";
_unit addweapon _binocs;
disableUserInput false;
};  

ARMST_skittles =
{
		_unit removeitem "ARMST_skittles";
		_unit playactionnow "GestureEat";
		_unit say2d "sladost";
		_unit setVariable ["ARMST_HUNGER", (_unit getVariable "ARMST_HUNGER") + 0.10];
		["Я с легкостью открываю упаковку и закидываю в рот всю пачку конфет."] call AGM_Core_fnc_displayTextStructured;   
	};
	
Armst_switch_snickers =
{
	
	private ["_unit","_eat","_drink","_binocs"];

_unit = _this select 0;
_eat = _this select 1;

_hunger=_unit getVariable ["ARMST_HUNGER",1];
if (_hunger>1) exitwith {
  hint 'Я не хочу больше кушать';
};
_unit removeitem "Armst_item_snorkers";
disableUserInput true;
[_unit] call AGM_WeaponSelect_fnc_putWeaponAway;sleep 4;
_binocs = binocular _unit;
_unit addweapon "armst_switch_snorkers";
_weaponIndex = [_unit, "armst_switch_snorkers"] call getWeaponIndex;
_unit action ["SwitchWeapon", _unit, _unit,_weaponIndex];
_unit playactionnow "GestureEat";

sleep 0.5;
_unit playactionnow "GestureEat";
_unit playactionnow "GestureEat";
_unit say2d "eating0";
_unit setVariable ["ARMST_HUNGER", (_unit getVariable "ARMST_HUNGER") + _eat];
sleep 7;
_unit removeweapon "armst_switch_snorkers";
_unit addweapon _binocs;
disableUserInput false;
};
	
Armst_switch_Sgushenka =
{
	
	private ["_unit","_eat","_drink","_binocs"];

_unit = _this select 0;
_eat = _this select 1;

_hunger=_unit getVariable ["ARMST_HUNGER",1];
if (_hunger>1) exitwith {
  hint 'Я не хочу больше кушать';
};
_unit removeitem "Armst_item_Sgushenka";
disableUserInput true;
[_unit] call AGM_WeaponSelect_fnc_putWeaponAway;
sleep 4;
_binocs = binocular _unit;
_unit addweapon "armst_switch_Sgushenka";
_weaponIndex = [_unit, "armst_switch_Sgushenka"] call getWeaponIndex;
_unit action ["SwitchWeapon", _unit, _unit,_weaponIndex];
_unit playactionnow "GestureEat";

sleep 0.5;
_unit playactionnow "GestureEat";
_unit playactionnow "GestureEat";
_unit say2d "eating0";
_unit setVariable ["ARMST_HUNGER", (_unit getVariable "ARMST_HUNGER") + _eat];
sleep 7;
_unit removeweapon "armst_switch_Sgushenka";
_unit addweapon _binocs;
_unit additem "Armst_item_canempty";
disableUserInput false;
};


	ARMST_cigarettes =
    {
		_unit removeitem "ARMST_cigarettes";
		disableUserInput true;
		[_unit] call AGM_WeaponSelect_fnc_putWeaponAway;
		sleep 3;
		_unit playactionnow "Gesturecigaretes";
		
		_unit say2d "smoke";
		[_unit] spawn armst_cigs_smoke;
		
		_unit say2d "smoke";
		[_unit] spawn armst_cigs_smoke;
		
		_unit say2d "smoke";
		[_unit] spawn armst_cigs_smoke;
		
		_unit say2d "smoke";
		[_unit] spawn armst_cigs_smoke;
		sleep 4;
		_unit say2d "smoke";
		[_unit] spawn armst_cigs_smoke;
		
		_unit setFatigue 1;
		disableUserInput false;
	};
	
	ARMST_cigar =
    {
		_unit removeitem "ARMST_cigar";
		disableUserInput true;
		[_unit] call AGM_WeaponSelect_fnc_putWeaponAway;
		sleep 3;
		_unit playactionnow "Gesturecigaretes";
		
		_unit say2d "smoke";
		[_unit] spawn armst_cigs_smoke;
		
		_unit say2d "smoke";
		[_unit] spawn armst_cigs_smoke;
		
		_unit say2d "smoke";
		[_unit] spawn armst_cigs_smoke;
		
		_unit say2d "smoke";
		[_unit] spawn armst_cigs_smoke;
		sleep 4;
		_unit say2d "smoke";
		[_unit] spawn armst_cigs_smoke;
		
		_unit setFatigue 1;
		disableUserInput false;
	};

	
	ARMST_kosyak =
    {
		_unit removeitem "ARMST_kosyak";
		disableUserInput true;
		[_unit] call AGM_WeaponSelect_fnc_putWeaponAway;
		_unit playactionnow "Gesturecigaretes";
		"chromAberration" ppEffectEnable true;
		"radialBlur" ppEffectEnable true;
		enableCamShake true;
		_unit playactionnow "Gesturecigaretes";
		   
		//Let's go for 45secs of effetcs
		for "_i" from 0 to 155 do
		{
			"chromAberration" ppEffectAdjust [random 0.25,random 0.25,true];
			"chromAberration" ppEffectCommit 1;   
			"radialBlur" ppEffectAdjust  [random 0.02,random 0.02,0.15,0.15];
			"radialBlur" ppEffectCommit 1;
			addcamShake[random 3, 1, random 3];
			
		};

	//Stop effects
	"chromAberration" ppEffectAdjust [0,0,true];
	"chromAberration" ppEffectCommit 5;
	"radialBlur" ppEffectAdjust  [0,0,0,0];
	"radialBlur" ppEffectCommit 5;
		_unit playactionnow "Gesturecigaretes";
	sleep 7;

		//Deactivate ppEffects
	"chromAberration" ppEffectEnable false;
	"radialBlur" ppEffectEnable false;
	resetCamShake;
		_unit setFatigue 1;
		disableUserInput false;
		_unit setVariable ["AGM_Pain", 0, True];
	};	
	

	