ARMST_art_detector_medved_open = 
{
	createDialog "detector_medved";
};
ARMST_art_detector_medved = 
{
	disableSerialization;
	private ["_artt"];
	_north ="\armst\armst_item\detectors\bear\north.paa";
	_northwest ="\armst\armst_item\detectors\bear\northwest.paa";
	_northeast ="\armst\armst_item\detectors\bear\northeast.paa";
	_west = "\armst\armst_item\detectors\bear\west.paa";
	_east = "\armst\armst_item\detectors\bear\east.paa";
	_south ="\armst\armst_item\detectors\bear\south.paa";
	_southwest ="\armst\armst_item\detectors\bear\southwest.paa";
	_southeast ="\armst\armst_item\detectors\bear\southeast.paa";

	if ("ARMST_batteries" in (items player + assignedItems player)) then 
	{
		player setVariable ["ARMST_artdetector",0];
		player removeitem "ARMST_batteries";
	
		_list = player nearEntities [["DAP_ARTEFACT_hard", "DAP_ARTEFACT"], 100];
		_cnt = count _list;
		sleep 1;
		playsound "geiger2_1";
		if (_cnt > 0) then {
			_artt=_list select 0;
			_reldir = player getRelDir (getpos _artt);

			if((_reldir >= 337.5 && _reldir <= 360) || (_reldir >= 0 && _reldir <= 22.5))then	{ ctrlSetText [1200, _north]; }; 
			if(_reldir > 292.5 && _reldir <= 337.5) then	{ ctrlSetText [1200, _northwest ]; 	}; 
			if(_reldir > 247.5 && _reldir <= 292.5)then		{ ctrlSetText [1200, _west];		}; 
			if(_reldir > 202.5 && _reldir <= 247.5)then		{ ctrlSetText [1200, _southwest ]; 	}; 
			if(_reldir > 157.5 && _reldir <= 202.5) then	{ ctrlSetText [1200, _south ];		}; 
			if(_reldir > 112.5 && _reldir <= 157.5)then		{ ctrlSetText [1200, _southeast]; 	}; 
			if(_reldir > 67.5 && _reldir <= 112.5)then		{ ctrlSetText [1200, _east ]; 		}; 
			if(_reldir > 22.5 && _reldir <= 67.5)then		{ ctrlSetText [1200, _northeast ];  }; 
			
			_achtungtext = "Найден";
			ctrlSetText [1601, _achtungtext];
			player setVariable ["ARMST_artdetector",1];
			playsound "geiger2_1";
		}
		else
		{
			_resulttext = "Не найден";
			playsound "geiger2_1";
			player setVariable ["ARMST_artdetector",1];
			ctrlSetText [1601, _resulttext];
		};
	};
};
ARMST_art_detector_otklick_open = 
{
	createDialog "detector_otklick";
};
ARMST_art_detector_otklick = 
{
	disableSerialization;
	private ["_artt"];
	_otklick_on ="\armst\armst_item\detectors\otklick\otklick_on.paa";

	if ("ARMST_batteries" in (items player + assignedItems player)) then 
	{
		player setVariable ["ARMST_artdetector",0];
		player removeitem "ARMST_batteries";
	
		_list = player nearEntities [["DAP_ARTEFACT_hard", "DAP_ARTEFACT"], 100];
		_cnt = count _list;
		sleep 1;
		playsound "geiger2_1";
		if (_cnt > 0) then {
			_artt=_list select 0;
			_reldir = player getRelDir (getpos _artt);

			if((_reldir >= 315 && _reldir <= 360) || (_reldir >= 0 && _reldir <= 45))then{ ctrlSetText [1200, _otklick_on]; }; 

			player setVariable ["ARMST_artdetector",1];
			playsound "geiger2_1";
		}
		else
		{
			player setVariable ["ARMST_artdetector",1];
		};
	};
};