disableSerialization;
	uiSleep 10;

	while {true} do {
		waitUntil {not(isnull (findDisplay 49))};

		_ctrl = (findDisplay 49) displayCtrl 1010;
		_ctrl ctrlEnable false;
		//escape menu opened
		_enCtrl = [_ctrl] spawn {
			disableSerialization;
			_ctrl = _this select 0;
			_stext = ctrlText _ctrl;
			private["_i"];
			_ctrl buttonSetAction "respawnButtonPressed = true;";
			for "_i" from 99999 to 1 step -1 do {
				if (isnull (findDisplay 49)) exitWith {};
				_text = _stext + format ["(%1)",_i]; _ctrl ctrlSetText _text;
				uiSleep 1;
			};

			if (!isnull (findDisplay 49)) then {
				_ctrl ctrlSetText _stext;
				_ctrl ctrlEnable true;
			};
		};

		waitUntil {isNull (findDisplay 49)};
		//escape menu closed
		if (!scriptDone _enCtrl) then {
			terminate _enCtrl
		};
	};
