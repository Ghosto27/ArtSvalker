/*
	Functions Block Esc
	Author: Dragster <1dragsteron@gmail.com>
*/
disableSerialization;
while {true} do
{
	waitUntil{!isNull (findDisplay 49)};
	_abortButton = (findDisplay 49) displayCtrl 104;
	_abortButton ctrlEnable false;
	for "_i" from 60 to 1 step -1 do {
		if (isnull (findDisplay 49)) exitWith {};
		_abortButton ctrlSetText format["%1s",_i];
		uisleep 1;
	};
	_abortButton ctrlSetText "EXIT";
	_abortButton ctrlEnable true;
	waitUntil{isNull (findDisplay 49)};
};