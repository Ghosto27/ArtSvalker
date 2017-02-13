
	_key = _this select 1;
	_shift = _this select 2;
	_ctrl = _this select 3;
	
	//hint (str _key);
	

	switch (_key) do {
		//Y key
		case 3: {
			_anim = if(_ctrl) then {"GestureCheckWeap"};
			player playActionNow _anim;
		};
		case 20: {
				call ARMST_Radiation_ShowRadimetr;
		};
		case 22: {
		
			if ("armst_item_detectors_medved" in (assignedItems player)) then 
				{
				call ARMST_art_detector_medved_open;
				};
			if ("armst_item_detectors_otklick" in (assignedItems player)) then 
				{
				call ARMST_art_detector_otklick_open;
				};
			if ("armst_item_detectors_svarog" in (assignedItems player)) then 
				{
				createdialog "detector_display";
				};
			if ("armst_item_pda" in (assignedItems player)) then 
				{
					private _dialog = findDisplay 88666;
					if (isNull _dialog && !(player getVariable ['AGM_isCaptive', false]) && !(player getVariable ['AGM_isUnconscious', false])) then {
					call ARMST_pda_open;
					}else{
					_dialog closeDisplay 100;
					};		
				};
					
		};
		case 36: {
			private _dialog = findDisplay 88300;
			if (isNull _dialog && !(player getVariable ['AGM_isCaptive', false]) && !(player getVariable ['AGM_isUnconscious', false])) then {
				call ARMST_craft_open;
			}else{
				_dialog closeDisplay 100;
			};	
		};
		case 41: {
			[player] execVM "scripts\boost_up.sqf";
		};
		case 58: {
			player playActionNow 'GestureRadioTalk';
		};
		case 59: {
		ARMST_GAME = ["GestureGameKamen","GestureGamebumaga","GestureGamenojnice"];
		_ARMST_GAME = ARMST_GAME select floor random count ARMST_GAME;
		_anim = if(_ctrl) then {_ARMST_GAME}else{"GestureOUT"};
			player playActionNow _anim;
		};
		case 60: {
			player playActionNow 'GesturePrivet';
		};
		case 61: {
			player playactionnow "GestureUkaz";
		};
		case 62: {
			player playactionnow "GestureThumb";
		};
		case 63: {
			player playActionNow 'GestureFacepalm';
		};
		case 64: {
			_anim1 = if(_ctrl) then {"GestureFuck"}else{"Gestureugroza"};
			player playActionNow _anim1;
		};
		case 65: {
			player playActionNow 'GestureSilenced';
		};
		case 66: {
			player playActionNow 'GestureSdastsa';
		};
		case 156: {
				_distance = player distance cursortarget;
				if(_distance <= 2) then 
				{
				
					if (alive cursortarget && cursortarget isKindOf "armst_human") then 
					{
						player playactionnow "cross1";
						"" remoteExec ["armst_nocdaun", cursortarget];
					};
				};
		
			};
		default {};
	};