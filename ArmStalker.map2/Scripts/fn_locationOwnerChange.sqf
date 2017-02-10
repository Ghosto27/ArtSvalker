	
	params ["_module", "_ownerSide", "_prevOwnerSide"];

	if(isServer) then {
		
		//Change respawn points
		if !(_ownerSide in [sideEnemy, sideUnknown]) then {
			
			private ["_curOwner"];
			
			_curOwner = _module getVariable ["RespOwner", nil];
			if !(isNil "_curOwner") then {
				_curOwner call BIS_fnc_removeRespawnPosition;
			};
			
			_module setVariable ["RespOwner", ([_ownerSide, getPosATL _module] call BIS_fnc_addRespawnPosition)];
		};

	};
	