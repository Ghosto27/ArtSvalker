
armst_toxinfogs = {
private ["_obj","_pos","_fog1","_fog2","_fog3","_inVehicle"];
        _inVehicle = (vehicle player != player);
 
        if (_inVehicle) then {
            _obj = (vehicle player);
        } else {
            _obj = player;
        };
 
        _pos = position _obj;
 
        _fog1 = "#particlesource" createVehicleLocal _pos;
        _fog1 setParticleParams [
        ["\A3\Data_F\ParticleEffects\Universal\universal.p3d" , 16, 12, 13, 0], "", "Billboard", 1, 10,
            [0, 0, -6], [0, 0, 0], 1, 1.275, 1, 0,
            [7,6], [[0, 1, 0, 0], [0, 1, 0, 0.04], [0, 1, 0, 0]], [1000], 1, 0, "", "", _obj
        ];
        _fog1 setParticleRandom [3, [55, 55, 0.2], [0, 0, -0.1], 2, 0.45, [0, 0, 0, 0.1], 0, 0];
        _fog1 setParticleCircle [0.001, [0, 0, -0.12]];
        _fog1 setDropInterval 0.001;
 
        _fog2 = "#particlesource" createVehicleLocal _pos;
        _fog2 setParticleParams [
        ["\A3\Data_F\ParticleEffects\Universal\universal.p3d" , 16, 12, 13, 0], "", "Billboard", 1, 10,
            [0, 0, -6], [0, 0, 0], 1, 1.275, 1, 0,
            [7,6], [[0, 1, 0, 0], [0, 1, 0, 0.04], [0, 1, 0, 0]], [1000], 1, 0, "", "", _obj
        ];
        _fog2 setParticleRandom [3, [55, 55, 0.2], [0, 0, -0.1], 2, 0.45, [0, 0, 0, 0.1], 0, 0];
        _fog2 setParticleCircle [0.001, [0, 0, -0.12]];
        _fog2 setDropInterval 0.01;
 
        _fog3 = "#particlesource" createVehicleLocal _pos;
        _fog3 setParticleParams [
        ["\A3\Data_F\ParticleEffects\Universal\universal.p3d" , 16, 12, 13, 0], "", "Billboard", 1, 10,
            [0, 0, -6], [0, 0, 0], 1, 1.275, 1, 0,
            [7,6], [[0, 1, 0, 0], [0, 1, 0, 0.04], [0, 1, 0, 0]], [1000], 1, 0, "", "", _obj
        ];
        _fog3 setParticleRandom [3, [55, 55, 0.2], [0, 0, -0.1], 2, 0.45, [0, 0, 0, 0.1], 0, 0];
        _fog3 setParticleCircle [0.001, [0, 0, -0.12]];
        _fog3 setDropInterval 0.01;
 
        _this setVariable ["playerfog", floor time + 5];
 
        sleep 20;
 
        deleteVehicle _fog1;
        deleteVehicle _fog2;
        deleteVehicle _fog3;
    };
[] spawn {
    while {true} do {
		_meters1 = player distance2D dead_fog_milirary;
        if(_meters1 < 200) then {
            if (player getVariable ["playerfog", -1] < time) then 
			{
                player setVariable ["playerfog", floor time + 5];
                player spawn armst_toxinfogs;
				if ((vest player) in ["Armst_sevastalk","Armst_sevamonolith","Armst_sevadolg","Armst_sevasvoboda","Armst_sevanaemnik","Armst_sevavoen","Armst_science2"]) then 
					{
					if ((goggles player)=="armst_seva_visor") then 
						{
						if ((headgear player) in ["armst_seva_shlem","armst_seva_science_shlem"]) then 
							{
							if ((backpack player) in ["armst_seva_backpack","armst_backpack_ballon","armst_seva_science_backpack"]) then 
								{
								
								}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};
								
							}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};			
						}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};	
					}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};
            };
				sleep 10;
        };
		_meters2 = player distance2D dead_fog_base;
        if(_meters2 < 200) then {
            if (player getVariable ["playerfog", -1] < time) then 
			{
                player setVariable ["playerfog", floor time + 5];
                player spawn armst_toxinfogs;
				if ((vest player) in ["Armst_sevastalk","Armst_sevamonolith","Armst_sevadolg","Armst_sevasvoboda","Armst_sevanaemnik","Armst_sevavoen","Armst_science2"]) then 
					{
					if ((goggles player)=="armst_seva_visor") then 
						{
						if ((headgear player) in ["armst_seva_shlem","armst_seva_science_shlem"]) then 
							{
							if ((backpack player) in ["armst_seva_backpack","armst_backpack_ballon","armst_seva_science_backpack"]) then 
								{
								
								}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};
								
							}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};			
						}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};	
					}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};
            };
				sleep 10;
        };
		_meters3 = player distance2D dead_fog_yantar;
        if(_meters3 < 200) then {
            if (player getVariable ["playerfog", -1] < time) then 
			{
                player setVariable ["playerfog", floor time + 5];
                player spawn armst_toxinfogs;
				if ((vest player) in ["Armst_sevastalk","Armst_sevamonolith","Armst_sevadolg","Armst_sevasvoboda","Armst_sevanaemnik","Armst_sevavoen","Armst_science2"]) then 
					{
					if ((goggles player)=="armst_seva_visor") then 
						{
						if ((headgear player) in ["armst_seva_shlem","armst_seva_science_shlem"]) then 
							{
							if ((backpack player) in ["armst_seva_backpack","armst_backpack_ballon","armst_seva_science_backpack"]) then 
								{
								
								}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};
								
							}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};			
						}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};	
					}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};
            };
				sleep 10;
        };
		_meters4= player distance2D dead_fog_forest;
        if(_meters4 < 400) then {
            if (player getVariable ["playerfog", -1] < time) then 
			{
                player setVariable ["playerfog", floor time + 5];
                player spawn armst_toxinfogs;
				if ((vest player) in ["Armst_sevastalk","Armst_sevamonolith","Armst_sevadolg","Armst_sevasvoboda","Armst_sevanaemnik","Armst_sevavoen","Armst_science2"]) then 
					{
					if ((goggles player)=="armst_seva_visor") then 
						{
						if ((headgear player) in ["armst_seva_shlem","armst_seva_science_shlem"]) then 
							{
							if ((backpack player) in ["armst_seva_backpack","armst_backpack_ballon","armst_seva_science_backpack"]) then 
								{
								
								}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};
								
							}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};			
						}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};	
					}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};
            };
				sleep 10;
        };
		_meters5 = player distance2D dead_fog_forest_1;
        if(_meters5 < 400) then {
            if (player getVariable ["playerfog", -1] < time) then 
			{
                player setVariable ["playerfog", floor time + 5];
                player spawn armst_toxinfogs;
				if ((vest player) in ["Armst_sevastalk","Armst_sevamonolith","Armst_sevadolg","Armst_sevasvoboda","Armst_sevanaemnik","Armst_sevavoen","Armst_science2"]) then 
					{
					if ((goggles player)=="armst_seva_visor") then 
						{
						if ((headgear player) in ["armst_seva_shlem","armst_seva_science_shlem"]) then 
							{
							if ((backpack player) in ["armst_seva_backpack","armst_backpack_ballon","armst_seva_science_backpack"]) then 
								{
								
								}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};
								
							}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};			
						}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};	
					}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};
            };
				sleep 10;
        };
		_meters6 = player distance2D dead_fog_bunker;
        if(_meters6 < 400) then {
            if (player getVariable ["playerfog", -1] < time) then 
			{
                player setVariable ["playerfog", floor time + 5];
                player spawn armst_toxinfogs;
				if ((vest player) in ["Armst_sevastalk","Armst_sevamonolith","Armst_sevadolg","Armst_sevasvoboda","Armst_sevanaemnik","Armst_sevavoen","Armst_science2"]) then 
					{
					if ((goggles player)=="armst_seva_visor") then 
						{
						if ((headgear player) in ["armst_seva_shlem","armst_seva_science_shlem"]) then 
							{
							if ((backpack player) in ["armst_seva_backpack","armst_backpack_ballon","armst_seva_science_backpack"]) then 
								{
								
								}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};
								
							}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};			
						}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};	
					}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};
            };
				sleep 10;
        };
		_meters7 = player distance2D dead_undeground;
        if(_meters7 < 200) then {
            if (player getVariable ["playerfog", -1] < time) then 
			{
                player setVariable ["playerfog", floor time + 5];
                player spawn armst_toxinfogs;
				if ((vest player) in ["Armst_sevastalk","Armst_sevamonolith","Armst_sevadolg","Armst_sevasvoboda","Armst_sevanaemnik","Armst_sevavoen","Armst_science2"]) then 
					{
					if ((goggles player)=="armst_seva_visor") then 
						{
						if ((headgear player) in ["armst_seva_shlem","armst_seva_science_shlem"]) then 
							{
							if ((backpack player) in ["armst_seva_backpack","armst_backpack_ballon","armst_seva_science_backpack"]) then 
								{
								
								}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};
								
							}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};			
						}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};	
					}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};
            };
				sleep 10;
        };
		_meters8 = player distance2D dead_dead_city;
        if(_meters8 < 500) then {
            if (player getVariable ["playerfog", -1] < time) then 
			{
                player setVariable ["playerfog", floor time + 5];
                player spawn armst_toxinfogs;
				if ((vest player) in ["Armst_sevastalk","Armst_sevamonolith","Armst_sevadolg","Armst_sevasvoboda","Armst_sevanaemnik","Armst_sevavoen","Armst_science2"]) then 
					{
					if ((goggles player)=="armst_seva_visor") then 
						{
						if ((headgear player) in ["armst_seva_shlem","armst_seva_science_shlem"]) then 
							{
							if ((backpack player) in ["armst_seva_backpack","armst_backpack_ballon","armst_seva_science_backpack"]) then 
								{
								
								}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};
								
							}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};			
						}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};	
					}
								else 
								{
								"dynamicBlur" ppEffectEnable true;   
								"dynamicBlur" ppEffectAdjust [1];   
								"dynamicBlur" ppEffectCommit 0;     
								"dynamicBlur" ppEffectAdjust [0.0];  
								// "dynamicBlur" ppEffectCommit 17;  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectAdjust [3];  
								"dynamicBlur" ppEffectCommit 10;  
								playsound "kashel";
								sleep 10;
								player setDammage (getDammage player + 0.01);
								"dynamicBlur" ppEffectEnable false; 
								};
            };
				sleep 10;
        };
	};
};