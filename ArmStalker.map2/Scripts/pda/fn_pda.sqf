/*
 Created by Dragster
*/
ARMST_pda_open={
	disableSerialization;
	if ("armst_item_pda" in (items player + assignedItems player)) then {
		createdialog "pdamenu";
		_dialog = findDisplay 88666;
		_playerListBox = _dialog displayCtrl 8665;
		{
			if ((!isNull _x) && {isPlayer _x}) then {
				if ("armst_item_pda" in (assignedItems _x)) then {
				_namestr = name _x;
				_index = _playerListBox lbAdd _namestr;
				_playerListBox lbSetData [_index,str(_x)];
				};
			};	    
		} count playableUnits;
		//} count allUnits;
		lbSortByValue _playerListBox;
	};
};
ARMST_pda_send={
	private ["_mes", "_fullmes", "_dialog", "_playerListBox", "_index", "_p1", "_check", "_reciver", "_namestr","_arrmes"];
	ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\nodata.paa' size='5' shadow='true'/>"];
	if (player isKindOf "armst_a2bandit") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_a2bandit_2.paa' size='5' shadow='true'/>"]; }; 
	if (player isKindOf "armst_a2bandit_2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_a2bandit_2.paa' size='5' shadow='true'/>"]; }; 
	if (player isKindOf "armst_a2bandit_3") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_a2bandit_3.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_coat_1") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_coat_1.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_coat_2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_coat_2.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_coat_3") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_coat_3.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_coat_4") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_coat_4.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_coat_5") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_coat_5.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_coat_6") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_coat_6.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_coat_7") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_coat_7.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_coat_8") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_coat_8.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_doctor") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_doctor.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_doctor2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_doctor2.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_doctor3") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_doctor3.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_hazmat") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_hazmat.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_newbiebandit") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_newbiebandit.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_newbiebandit2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_newbiebandit2.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_newbiebandit3") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_newbiebandit3.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_novice") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_novice.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_novice1") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_novice1.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_novice2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_novice2.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_novice3") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_novice3.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_novice4") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_novice4.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_novice5") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_novice5.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_novice6") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_novice6.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_novice7") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_novice7.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_novice8") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_novice8.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_novice9") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_novice9.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "army_b") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\army_b.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "army_l") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\army_l.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "bandit_elite") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\bandit_elite.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "bandit_new_1") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\bandit_new_1.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "bandit_new_1_2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\bandit_new_1_2.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "bandit_new_1_3") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\bandit_new_1_3.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "bandit_new_2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\bandit_new_2.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "bandit_new_2_2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\bandit_new_2_2.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "bandit_new_2_3") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\bandit_new_2_3.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "bandits_l") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\bandits_l.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "bandits_private") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\bandits_private1.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "bandits_private2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\bandits_private2.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "clearsky_private") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\clearsky_private.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "dolg_b") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\dolg_b.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "dolg_l") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\dolg_l.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "dolg_new_soldier") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\dolg_new_soldier.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "dolg_private") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\dolg_private.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "elite_clearsky") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\elite_clearsky.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "elite_dolg") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\elite_dolg.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "elite_freedom") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\elite_freedom.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "elite_loner1") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\elite_loner1.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "elite_loner2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\elite_loner2.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "elite_merc") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\elite_merc.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "elite_voen") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\elite_voen.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "freedom_l") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\freedom_l.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "freedom_private") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\freedom_private.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "freedom_private2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\freedom_private2.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "hazmat_2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\hazmat_2.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "loner_b") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\loner_b.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "loner_l") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\loner_l.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "loner_private1") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\loner_private1.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "loner_private2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\loner_private2.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "loner_private3") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\loner_private3.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "loner_private4") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\loner_private4.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "loner_private5") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\loner_private5.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "mercenaries_l") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\mercenaries_l.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "mercenaries_private") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\mercenaries_private.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "mercenaries_private2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\mercenaries_private2.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "monolith_l") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\monolith_l.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "monolith_private") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\monolith_private.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "neutral_private") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\neutral_private.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "stalkerBeta") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\stalkerBeta.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "voen_private") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\voen_private.paa' size='5' shadow='true'/>"]; };
	
	disableSerialization;
	_mes = _this select 0;
	_fullmes=format["ЛС от %1: %2",name player,_mes];
	_dialog = findDisplay 88666;
	_playerListBox = _dialog displayCtrl 8665;
	_index = lbCurSel _playerListBox;
	_p1 = _playerListBox lbText _index;
	if(_p1==name player)exitwith{systemChat "Вы не можете отправлять себе сообщения.";};
	_check = 0;
	{
		if ((!isNull _x) && {isPlayer _x}  && {name _x == _p1}) exitWith {_check = 1;};
	} count playableUnits;
	//} count allUnits;
	if (_check == 0) exitWith {systemChat "Вы должны выбрать кого-нибудь чтобы отправить сообщение";};
	_reciver=objNull;
	{
		if ((!isNull _x) && {isPlayer _x}) then {_namestr = name _x; if(_p1==_namestr)exitwith{_reciver=_x;}; };	    
	} count playableUnits;
	//} count allUnits;
	
	if (0 == player getVariable "armst_pda_web") then 
	{
		if (!(_reciver getVariable ['AGM_isCaptive', false]) && !(_reciver getVariable ['AGM_isUnconscious', false])) then {
		  	composeText [parseText ARMST_TEXT2, lineBreak,"[КПК] " + _fullmes] remoteExec ["hint", _reciver];
			_arrmes=_reciver getVariable ["all_pda_mes",[]];
			_arrmes pushBack _fullmes;
			[_reciver, "pda_song",2] call CBA_fnc_globalSay3d;
			_reciver setVariable ["all_pda_mes",_arrmes,true];
		};
		player say2d "pda_song";
		systemchat "Сообщение отправлено";
		player setvariable ["armst_pda_web",1];
		sleep 60;
		systemChat "Отправка сообщений доступна.";
		player setvariable ["armst_pda_web",0];
	}
	else
	{
		["Невозможно отправить."] call AGM_Core_fnc_displayTextStructured;
	};
};
ARMST_pda_send_anon={
	private ["_mes", "_fullmes", "_dialog", "_playerListBox", "_index", "_p1", "_check", "_reciver", "_namestr","_arrmes"];
	ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\nodata.paa' size='5' shadow='true'/>"];disableSerialization;
	_mes = _this select 0;
	_fullmes=format["ЛС: %1",_mes];
	_dialog = findDisplay 88666;
	_playerListBox = _dialog displayCtrl 8665;
	_index = lbCurSel _playerListBox;
	_p1 = _playerListBox lbText _index;
	if(_p1==name player)exitwith{systemChat "Вы не можете отправлять себе сообщения.";};
	_check = 0;
	{
		if ((!isNull _x) && {isPlayer _x}  && {name _x == _p1}) exitWith {_check = 1;};
	} count playableUnits;
	//} count allUnits;
	if (_check == 0) exitWith {systemChat "Вы должны выбрать кого-нибудь чтобы отправить сообщение";};
	_reciver=objNull;
	{
		if ((!isNull _x) && {isPlayer _x}) then {_namestr = name _x; if(_p1==_namestr)exitwith{_reciver=_x;}; };	    
	} count playableUnits;
	//} count allUnits;
	
	if (0 == player getVariable "armst_pda_web") then 
	{
		if (!(_reciver getVariable ['AGM_isCaptive', false]) && !(_reciver getVariable ['AGM_isUnconscious', false])) then {
		  	composeText [parseText ARMST_TEXT2, lineBreak,"[КПК] " + _fullmes] remoteExec ["hint", _reciver];
			_arrmes=_reciver getVariable ["all_pda_mes",[]];
			_arrmes pushBack _fullmes;
			[_reciver, "pda_song",2] call CBA_fnc_globalSay3d;
			_reciver setVariable ["all_pda_mes",_arrmes,true];
		};
		player say2d "pda_song";
		systemchat "Сообщение отправлено";
		player setvariable ["armst_pda_web",1];
		sleep 60;
		systemChat "Отправка сообщений доступна.";
		player setvariable ["armst_pda_web",0];
	}
	else
	{
		["Невозможно отправить."] call AGM_Core_fnc_displayTextStructured;
	};
};
ARMST_pda_send_all={
	private ["_mes", "_fullmes"];
	_mes = _this select 0;
	//ARMST_TEXT2 = format ["<img image='\armst\armst_item\object\item_pda_ico.paa' size='2' shadow='true'/>"];
	ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\nodata.paa' size='5' shadow='true'/>"];
	if (player isKindOf "armst_a2bandit") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_a2bandit_2.paa' size='5' shadow='true'/>"]; }; 
	if (player isKindOf "armst_a2bandit_2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_a2bandit_2.paa' size='5' shadow='true'/>"]; }; 
	if (player isKindOf "armst_a2bandit_3") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_a2bandit_3.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_coat_1") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_coat_1.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_coat_2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_coat_2.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_coat_3") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_coat_3.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_coat_4") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_coat_4.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_coat_5") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_coat_5.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_coat_6") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_coat_6.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_coat_7") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_coat_7.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_coat_8") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_coat_8.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_doctor") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_doctor.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_doctor2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_doctor2.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_doctor3") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_doctor3.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_hazmat") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_hazmat.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_newbiebandit") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_newbiebandit.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_newbiebandit2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_newbiebandit2.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_newbiebandit3") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_newbiebandit3.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_novice") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_novice.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_novice1") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_novice1.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_novice2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_novice2.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_novice3") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_novice3.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_novice4") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_novice4.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_novice5") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_novice5.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_novice6") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_novice6.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_novice7") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_novice7.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_novice8") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_novice8.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "armst_novice9") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\armst_novice9.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "army_b") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\army_b.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "army_l") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\army_l.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "bandit_elite") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\bandit_elite.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "bandit_new_1") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\bandit_new_1.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "bandit_new_1_2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\bandit_new_1_2.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "bandit_new_1_3") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\bandit_new_1_3.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "bandit_new_2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\bandit_new_2.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "bandit_new_2_2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\bandit_new_2_2.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "bandit_new_2_3") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\bandit_new_2_3.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "bandits_l") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\bandits_l.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "bandits_private") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\bandits_private1.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "bandits_private2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\bandits_private2.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "clearsky_private") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\clearsky_private.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "dolg_b") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\dolg_b.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "dolg_l") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\dolg_l.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "dolg_new_soldier") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\dolg_new_soldier.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "dolg_private") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\dolg_private.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "elite_clearsky") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\elite_clearsky.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "elite_dolg") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\elite_dolg.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "elite_freedom") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\elite_freedom.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "elite_loner1") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\elite_loner1.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "elite_loner2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\elite_loner2.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "elite_merc") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\elite_merc.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "elite_voen") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\elite_voen.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "freedom_l") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\freedom_l.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "freedom_private") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\freedom_private.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "freedom_private2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\freedom_private2.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "hazmat_2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\hazmat_2.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "loner_b") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\loner_b.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "loner_l") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\loner_l.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "loner_private1") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\loner_private1.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "loner_private2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\loner_private2.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "loner_private3") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\loner_private3.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "loner_private4") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\loner_private4.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "loner_private5") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\loner_private5.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "mercenaries_l") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\mercenaries_l.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "mercenaries_private") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\mercenaries_private.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "mercenaries_private2") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\mercenaries_private2.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "monolith_l") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\monolith_l.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "monolith_private") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\monolith_private.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "neutral_private") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\neutral_private.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "stalkerBeta") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\stalkerBeta.paa' size='5' shadow='true'/>"]; };
	if (player isKindOf "voen_private") then { ARMST_TEXT2 = format ["<img image='\armst\armst_uidata\skins\voen_private.paa' size='5' shadow='true'/>"]; };
	_fullmes=format["ВСЕМ от %1: %2",name player,_mes];
	if (0 == player getVariable "armst_pda_web") then 
	{
		_endmes=composeText [parseText ARMST_TEXT2, lineBreak,"[КПК] " + _fullmes];
		{
		  	if ((!isNull _x) && {isPlayer _x}) then {
		  		if (("armst_item_pda" in (assignedItems _x)) && !(_x getVariable ['AGM_isCaptive', false]) && !(_x getVariable ['AGM_isUnconscious', false])) then {
		  			_endmes remoteExec ["hint", _x];
	  				_arrmes=_x getVariable ["all_pda_mes",[]];
					_arrmes pushBack _fullmes;
					_x setVariable ["all_pda_mes",_arrmes,true];
		  		};
		  	};
		} forEach playableUnits;
		//} count allUnits;
		player say2d "pda_song";
		player setvariable ["armst_pda_web",1];
		sleep 60;
		systemChat "Отправка сообщений доступна.";
		player setvariable ["armst_pda_web",0];
	}
	else
	{
		["Невозможно отправить."] call AGM_Core_fnc_displayTextStructured;
	};
};
ARMST_pda_upd_listbox={
	private ["_dialog", "_playerListBox", "_index", "_p1", "_reciver", "_namestr", "_fraction"];
	 disableSerialization;
	_dialog = findDisplay 88666;
	_playerListBox = _dialog displayCtrl 8665;
	_index = lbCurSel _playerListBox;
	_p1 = _playerListBox lbText _index;
	_reciver=objNull;
	{
		if ((!isNull _x) && {isPlayer _x}) then {_namestr = name _x; if(_p1==_namestr)exitwith{_reciver=_x;}; };	    
	} count playableUnits;
	//} count allUnits;
	_fraction= getText(configFile >> "CfgFactionClasses" >> faction _reciver >> "displayName");
	ctrlSetText [8668, _fraction];
};
ARMST_pda_dossier_open={
	private ["_dspl", "_fuction", "_money", "_kills", "_death", "_score", "_rating", "_hunger", "_thirst", "_datestamp", "_FactionEntry"];
	disableSerialization;
	createdialog "pda_dossier";
	waitUntil {_dspl = findDisplay 88600;!isNull _dspl;}; 
	_fraction = getText(configFile >> "CfgFactionClasses" >> faction player >> "displayName");
	_money = player getVariable ["Money",0];
	_kills = player getVariable ["Kills",0];
	_death = player getVariable ["Deaths",0];
	_hunger = (player getVariable ["ARMST_HUNGER",0]) * 100;
	_thirst = (player getVariable ["ARMST_THIRST",0]) * 100;
	ctrlSetText [1002, _fraction];
	ctrlSetText [1004, format["%1",_money]];
	ctrlSetText [1006, format["%1",_kills]];
	ctrlSetText [1008, format["%1",_death]];
	ctrlSetText [1010, format["%1",_hunger]];
	ctrlSetText [1012, format["%1",_thirst]];
};
ARMST_pda_diagnose_open={
	private ["_dspl", "_hit_head", "_hit_body", "_hit_left_arm", "_hit_right_arm", "_hit_left_leg", "_hit_right_leg", "_hit_head_pic", "_hit_body_pic", "_hit_left_arm_pic", "_hit_right_arm_pic", "_hit_left_leg_pic", "_hit_right_leg_pic", "_pain", "_blood", "_paint_text", "_blood_text", "_radiation_text"];
	disableSerialization;
	createdialog "pda_diagnose";
	waitUntil {_dspl = findDisplay 88500;!isNull _dspl;}; 
	_hit_head 			=	floor ((player getHitPointDamage "HitHead")     * 100) / 100;
	_hit_body 			=	floor ((player getHitPointDamage "HitBody")     * 100) / 100;
	_hit_left_arm 		=	floor ((player getHitPointDamage "HitLeftArm")     * 100) / 100;
	_hit_right_arm 		=	floor ((player getHitPointDamage "HitRightArm")     * 100) / 100;
	_hit_left_leg 		=	floor ((player getHitPointDamage "HitLeftLeg")     * 100) / 100;
	_hit_right_leg 		=	floor ((player getHitPointDamage "HitRightLeg")     * 100) / 100;

	_hit_head_pic		="armst_client\GUI\pda\medical\parts\head_none.paa";
	_hit_body_pic		="armst_client\GUI\pda\medical\parts\body_none.paa";
	_hit_left_arm_pic 	="armst_client\GUI\pda\medical\parts\left_arm_none.paa";
	_hit_right_arm_pic 	="armst_client\GUI\pda\medical\parts\right_arm_none.paa";
	_hit_left_leg_pic 	="armst_client\GUI\pda\medical\parts\left_leg_none.paa";
	_hit_right_leg_pic 	="armst_client\GUI\pda\medical\parts\right_leg_none.paa";

	if (_hit_head>0 && _hit_head <=0.4) then {			_hit_head_pic		="armst_client\GUI\pda\medical\parts\head_low.paa";};
	if (_hit_head>0.4 && _hit_head <=1) then {			_hit_head_pic		="armst_client\GUI\pda\medical\parts\head_high.paa";};
			
	if (_hit_body>0 && _hit_body <=0.4) then {			_hit_body_pic		="armst_client\GUI\pda\medical\parts\body_low.paa";};
	if (_hit_body>0.4 && _hit_body <=1) then {			_hit_body_pic		="armst_client\GUI\pda\medical\parts\body_high.paa";};

	if (_hit_left_arm>0 && _hit_left_arm <=0.4) then {	_hit_left_arm_pic	="armst_client\GUI\pda\medical\parts\left_arm_low2.paa";};
	if (_hit_left_arm>0.4 && _hit_left_arm <=1) then {	_hit_left_arm_pic	="armst_client\GUI\pda\medical\parts\left_arm_high.paa";};

	if (_hit_right_arm>0 && _hit_right_arm <=0.4) then {_hit_right_arm_pic	="armst_client\GUI\pda\medical\parts\right_arm_low2.paa";};
	if (_hit_right_arm>0.4 && _hit_right_arm <=1) then {_hit_right_arm_pic	="armst_client\GUI\pda\medical\parts\right_arm_high.paa";};

	if (_hit_left_leg>0 && _hit_left_leg <=0.4) then {	_hit_left_leg_pic	="armst_client\GUI\pda\medical\parts\left_leg_low2.paa";};
	if (_hit_left_leg>0.4 && _hit_left_leg <=1) then {	_hit_left_leg_pic	="armst_client\GUI\pda\medical\parts\left_leg_high.paa";};

	if (_hit_right_leg>0 && _hit_right_leg <=0.4) then {_hit_right_leg_pic	="armst_client\GUI\pda\medical\parts\right_leg_low2.paa";};
	if (_hit_right_leg>0.4 && _hit_right_leg <=1) then {_hit_right_leg_pic	="armst_client\GUI\pda\medical\parts\right_leg_high.paa";};

	ctrlSetText [1202, format["%1",_hit_head_pic]];
	ctrlSetText [1203, format["%1",_hit_body_pic]];
	ctrlSetText [1204, format["%1",_hit_left_arm_pic]];
	ctrlSetText [1205, format["%1",_hit_right_arm_pic]];
	ctrlSetText [1206, format["%1",_hit_left_leg_pic]];
	ctrlSetText [1207, format["%1",_hit_right_leg_pic]];


	_pain = player getVariable ["AGM_Pain", 0];
	_blood = player getVariable ["AGM_Blood", 1];
	_temp=ARMST_BODYTEMP;

	_paint_text="Ничего не болит";
	_blood_text="Кровяное давление в норме";
	_radiation_text="Нет радиметра";

	if (_pain > 0.1 && _pain <=0.4) then {_paint_text="Немного болит"};
	if (_pain > 0.4) then {_paint_text="Очень больно"};

	if (_blood > 0.1 && _blood <=0.4) then {_blood_text="Низкий уровень крови, опасно для жизни!"};
	if (_blood > 0.4 && _blood <1) then {_blood_text="Потерял немного крови."};

	if ("DETECTOR_RKS20" in (magazines player)) then {
		_radiation_text=str ARMST_Radiation_Infection;
	};

	ctrlSetText [1609, format["%1",_paint_text]];
	ctrlSetText [1611, format["%1",_blood_text]];
	ctrlSetText [1607, format["%1",_radiation_text]];
	ctrlSetText [1721, format["%1",_temp]];



	if (!("armst_item_antirad" in (magazines player))) then {ctrlEnable [1614, false];}else{ctrlEnable [1614, true];};
};

ARMST_pda_history_open={
	private ["_dialog", "_ListBox", "_allmes", "_onemes", "_index"];
	disableSerialization;
	createdialog "pdahistorymes";
	if ("armst_item_pda" in (items player + assignedItems player)) then {
		_dialog = findDisplay 88670;
		_ListBox = _dialog displayCtrl 1500;
		_allmes=player getVariable ["all_pda_mes",[]];
		{
			_onemes = _x;
			_index = _ListBox lbAdd _onemes;
			_ListBox lbSetData [_index,str(_x)]; 
		} forEach _allmes;
	};
};
ARMST_create_stash={
	_unit=_this select 0;
	_classname="armst_box_big";
	_unitUID = getPlayerUID _unit;
	_objs=nearestObjects [_unit, ["armst_box_big"], 8000];
	_cntobj=0;
	{
	  	_objOwner=_x getVariable ["OwnerUID",""];
	  	if (_unitUID==_objOwner) then {
	  		_cntobj=_cntobj+1;
	  	};
	} forEach _objs;
	if (_cntobj > 0) exitWith {
	  	hint "У вас уже есть тайник!";
	};
	player playMove "AinvPknlMstpSnonWnonDnon_medic_1";    
	sleep 4;
	
	_stash = _classname createVehicle [0,0,0];
	clearWeaponCargoGlobal _stash;
	clearMagazineCargoGlobal _stash;
	clearItemCargoGlobal _stash;
	clearBackpackCargoGlobal _stash;
	_stash setPosATL (getPosATL player);
	_stash setVariable ["OwnerUID",_unitUID,true];
	sleep 2;
	ARMST_querydragster = [6,_stash]; 
	publicVariableServer "ARMST_querydragster"; 

	player removeItem "armst_taynik_big";
};
ARMST_update_Stash={
	_stash=_this select 0;
	ARMST_querydragster = [7,_stash]; 
	publicVariableServer "ARMST_querydragster"; 
};
ARMST_remove_Stash={
	_stash=_this select 0;
	_ownerUID = _stash getVariable ["OwnerUID",""];
	ARMST_querydragster = [8,_stash,_ownerUID]; 
	publicVariableServer "ARMST_querydragster"; 
	deleteVehicle _stash;
};