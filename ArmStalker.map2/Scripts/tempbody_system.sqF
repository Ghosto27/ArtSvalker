//[] call compile preprocessFile "fnc\loadFunctions.sqf";
ARMST_BODYTEMP = 37.6;
player setvariable ["ARMST_BODYTEMP",1];
ARMST_BODYTEMP_CC = ppEffectCreate ["ColorCorrections", 4208];
ARMST_BODYTEMP_CC ppEffectForceInNVG True;
ARMST_BODYTEMP_CC ppEffectAdjust [1,1,0, [0,0,0,0], [1,1,1,1], [0.2,0.2,0.2,0]];
ARMST_BODYTEMP_CC ppEffectCommit 0;


0 spawn {
  _time = time;
  _timeBlood = 0;
  _blind = False;
  while {True} do {
    // Detect if curator interface is open and then disable effects
    if (!isNull(findDisplay 312)) then {
     ARMST_BODYTEMP_CC ppEffectEnable False;
      waitUntil {isNull(findDisplay 312)};
    };

    // Detect if player is not alive and then disable effects and enable input
    if (!(alive AGM_player)) then {
      ARMST_BODYTEMP_CC ppEffectEnable False;
      if !(isNull (uiNamespace getVariable ["AGM_Core_dlgDisableMouse", displayNull])) then {
        [False] call AGM_Core_fnc_disableUserInput;
      };
      waitUntil {alive AGM_player};
    };
    // BODYTEMP Effect
    _currentBODYTEMP = AGM_player getVariable ["ARMST_BODYTEMP", 1];
    if (_currentBODYTEMP > 0.99) then {
      ARMST_BODYTEMP_CC ppEffectEnable False;
    } else {
      ARMST_BODYTEMP_CC ppEffectEnable True;
      ARMST_BODYTEMP_CC ppEffectAdjust [1, 1, 0, [0.0, 0.0, 0.0, 0.0], [1, 1, 1,_currentBODYTEMP],  [0.2, 0.2, 0.2, 0]];
      ARMST_BODYTEMP_CC ppEffectCommit 0;
    };

    _time = time;
    _damage = damage AGM_player;
  };
};


[] execvm "Scripts\tempbody_cycle.sqf";