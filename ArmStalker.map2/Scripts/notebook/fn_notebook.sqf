/*
 Created by Dragster
*/
ARMST_notebook_login_open={
	disableSerialization;
	createdialog "notebooklogin";
};
ARMST_notebook_login_check={
private ["_log", "_pass", "_check", "_flag", "_login", "_password"];
	disableSerialization;
	_log=_this select 0;
	_pass=_this select 1;
	_check=loginpassfaction;
	_flag=false;
	{
		_login = _x select 0;
		if (_log==_login) then {
		  	_password = _x select 1;
		  	if (_pass==_password) exitWith {
		  	  _flag=true;
		  	};
		};
	} count _check;

	if (_flag) then {
		[] spawn ARMST_notebook_worktable_open;
	}else{
		hint "Пара логин/пароль не верна."
	};
};
ARMST_notebook_worktable_open={
	disableSerialization;
	createdialog "notebookworktable";
};
ARMST_notebook_faction_control_open={
	//private ["_m"];
	private ["_m", "_dialog", "_memberListBox", "_accid", "_index", "_fractID", "_model"];
	disableSerialization;	
	disableUserInput true;
	createdialog "notebookfactioncontrol";
	ARMST_querydragster = [1,player,owner player]; 
	publicVariableServer "ARMST_querydragster"; 
	hint "Начало инициализации программы управления группировкой";
	sleep 4;
	waitUntil {!isNil "ARMST_querydragsterResult"}; 
	_m=ARMST_querydragsterResult;
	hint "Инвестор the best";
	sleep 0.5;
	hint "Получение списка членов группировки";
	sleep 4;
	ARMST_querydragsterResult=nil;
	publicVariable "ARMST_querydragsterResult";
	hint "Заполнение списка членов группировки";
	sleep 4;
	_m=_m select 1;
	_dialog = findDisplay 88802;
	_memberListBox = _dialog displayCtrl 802;
	{
		_name = _x select 0;
		_accid = _x select 1;
		_index = _memberListBox lbAdd _name;
		_memberListBox lbSetData [_index,str(_accid)];
	} count _m;
	lbSortByValue _memberListBox;


	hint "Получение формы группировки";
	sleep 4;
	ARMST_querydragster = [5,player]; 
	publicVariableServer "ARMST_querydragster"; 
	waitUntil {!isNil "ARMST_querydragsterResult"}; 
	_fractID=ARMST_querydragsterResult;
	hint "Список формы со склада получен";
	sleep 4;
	ARMST_querydragsterResult=nil;
	publicVariable "ARMST_querydragsterResult";
	_fractID=((_fractID select 1) select 0) select 0;
	_model=[];
	switch (_fractID) do { 
		case 1 : 	{ _model = ["hazmat_2"]; }; 
		case 2 : 	{ _model = ["loner_private1","loner_private2","loner_private3","loner_private4","loner_private5","elite_loner1","elite_loner2"]; }; 
		//case 3 : 	{ _model=""; };     // РЕНЕГАТЫ
		case 4 : 	{ _model = ["freedom_private","freedom_private2"]; }; 
		case 5 : 	{ _model = ["bandits_private","bandits_private2"]; }; 
		case 6 : 	{ _model = ["Dolg_private","Dolg_private2"]; }; 
		case 7 : 	{ _model = ["Voen_private","elite_Voen"]; }; 
		case 8 : 	{ _model = ["monolith_private"]; }; 
		case 9 : 	{ _model = ["mercenaries_private","mercenaries_private2"]; }; 
		default 	{ _model = ["loner_private1","loner_private2","loner_private3","loner_private4","loner_private5"]; }; 
	};
	hint "Выдача вам списка формы ";
	sleep 4;
	_dialog = findDisplay 88802;
	lbClear 803;
	_memberListBox = _dialog displayCtrl 803;
	{
		_name = _x;
		_index = _memberListBox lbAdd _name;
	} count _model;

	hint "Инициализация выполнена";
	sleep 4;
	hint "Я хлеб ниешь миня";
	sleep 0.5;
	hint "";
	disableUserInput false;
	disableUserInput true;
	disableUserInput false;

};
ARMST_notebook_faction_control_poisk={
private ["_nm", "_m2", "_dialog", "_memberListBox", "_accid", "_index"];
	disableSerialization;	
	disableUserInput true;
	_nm=_this select 0;
	if (_nm=="") exitWith {
	  hint format["Вы не ввели позывной"];
	};
	//hint format["%1",_nm];
	ARMST_querydragster = [2,_nm]; 
	publicVariableServer "ARMST_querydragster"; 
	//hint "Поиск человека в базе сталкеров";
	sleep 4;
	waitUntil {!isNil "ARMST_querydragsterResult"}; 
	_m2=ARMST_querydragsterResult;
	//hint "Человеки найдены";
	sleep 4;
	ARMST_querydragsterResult=nil;
	publicVariable "ARMST_querydragsterResult";
	_m2=_m2 select 1;
	_dialog = findDisplay 88802;
	//hint "Выдача вам списка сталкеров";
	sleep 4;
	lbClear 801;
	_memberListBox = _dialog displayCtrl 801;
	{
		_name = _x select 0;
		_accid = _x select 1;
		_index = _memberListBox lbAdd _name;
		_memberListBox lbSetData [_index,str(_accid)];
	} count _m2;
	//hint "Я хлеб ниешь миня";
	sleep 1;
	//hint "";
	disableUserInput false;
	disableUserInput true;
	disableUserInput false;

};
ARMST_notebook_add_to_faction={
private ["_fractID", "_dialog", "_playerListBox", "_index", "_data", "_accid", "_skinListBox", "_index2", "_model"];
	disableUserInput true;
	disableSerialization;	
	ARMST_querydragster = [5,player]; 
	publicVariableServer "ARMST_querydragster"; 
	waitUntil {!isNil "ARMST_querydragsterResult"}; 
	hint "Поиск человека";
	sleep 4;
	_fractID=ARMST_querydragsterResult;
	ARMST_querydragsterResult=nil;
	publicVariable "ARMST_querydragsterResult";
	_fractID=((_fractID select 1) select 0) select 0;
	_dialog = findDisplay 88802;
	_playerListBox = _dialog displayCtrl 801;
	_index = lbCurSel _playerListBox;
	if (_index == -1) exitWith { hint "Не выбран человек" };
	hint "Человек найден.Поиск формы на складе";
	sleep 2;
	_data = lbData [801,_index];
	_accid=parseNumber _data;
	_skinListBox = _dialog displayCtrl 803;
	_index2 = lbCurSel _skinListBox;
	if (_index2 == -1) exitWith { hint "Не выбрана форма" };
	hint "Выдача формы";
	sleep 4;
	_model = lbText [803,_index];
	lbDelete [801, _index];
	ARMST_querydragster = [3,_fractID,_model,_accid]; 
	publicVariableServer "ARMST_querydragster"; 
	hint "Я хлеб ниешь миня";
	sleep 0.5;
	hint "";
	disableUserInput false;
	disableUserInput true;
	disableUserInput false;
};
ARMST_notebook_remove_from_faction={
private ["_dialog", "_playerListBox", "_index", "_data", "_accid", "_fractID", "_model"];
	disableSerialization;	
	disableUserInput true;
	hint "Поиск человека";
	sleep 4;
	_dialog = findDisplay 88802;
	_playerListBox = _dialog displayCtrl 802;
	_index = lbCurSel _playerListBox;
	if (_index == -1) exitWith { hint "Не выбран человек" };
	_data = lbData [802,_index];
	_accid=parseNumber _data;
	hint "Человек найден";
	sleep 4;
	_fractID=2;
	_model = selectRandom ["loner_private1","loner_private2","loner_private3","loner_private4","loner_private5"];
	hint "Выдача формы сталкера";
	sleep 4;
	ARMST_querydragster = [4,_fractID,_model,_accid]; 
	publicVariableServer "ARMST_querydragster";
	sleep 4;
	ARMST_querydragsterResult=nil;
	publicVariable "ARMST_querydragsterResult";
	lbDelete [802, _index];
	hint "Я хлеб ниешь миня";
	sleep 1;
	hint "";
	disableUserInput false;
	disableUserInput true;
	disableUserInput false;
};