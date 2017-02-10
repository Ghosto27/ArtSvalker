waitUntil {!isNull player};

doofog = {
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
            [7,6], [[1, 1, 1, 0], [1, 1, 1, 0.04], [1, 1, 1, 0]], [1000], 1, 0, "", "", _obj
        ];
        _fog1 setParticleRandom [3, [55, 55, 0.2], [0, 0, -0.1], 2, 0.45, [0, 0, 0, 0.1], 0, 0];
        _fog1 setParticleCircle [0.001, [0, 0, -0.12]];
        _fog1 setDropInterval 0.01;
 
        _fog2 = "#particlesource" createVehicleLocal _pos;
        _fog2 setParticleParams [
        ["\A3\Data_F\ParticleEffects\Universal\universal.p3d" , 16, 12, 13, 0], "", "Billboard", 1, 10,
            [0, 0, -6], [0, 0, 0], 1, 1.275, 1, 0,
            [7,6], [[1, 1, 1, 0], [1, 1, 1, 0.04], [1, 1, 1, 0]], [1000], 1, 0, "", "", _obj
        ];
        _fog2 setParticleRandom [3, [55, 55, 0.2], [0, 0, -0.1], 2, 0.45, [0, 0, 0, 0.1], 0, 0];
        _fog2 setParticleCircle [0.001, [0, 0, -0.12]];
        _fog2 setDropInterval 0.01;
 
        _this setVariable ["playerfog", floor time + 5];
 
        sleep 60;
 
        deleteVehicle _fog1;
        deleteVehicle _fog2;
    };
[] spawn {
    while {true} do {
		_meters2 = player distance2D derevnya;
        if(_meters2 < 240) then {
            if (player getVariable ["playerfog", -1] < time) then {
                player setVariable ["playerfog", floor time + 5];
                player spawn doofog;
                sleep 60;
            };
        };
		_meters3 = player distance2D voronka_fog;
        if(_meters3 < 500) then {
            if (player getVariable ["playerfog", -1] < time) then {
                player setVariable ["playerfog", floor time + 5];
                player spawn doofog;
                sleep 60;
            };
        };
		_meters4 = player distance2D dead_city_fog;
        if(_meters4 < 500) then {
            if (player getVariable ["playerfog", -1] < time) then {
                player setVariable ["playerfog", floor time + 5];
                player spawn doofog;
                sleep 60;
            };
        };
		_meters5 = player distance2D dead_forest_fog;
        if(_meters5 < 1000) then {
            if (player getVariable ["playerfog", -1] < time) then {
                player setVariable ["playerfog", floor time + 5];
                player spawn doofog;
                sleep 60;
            };
        };
		_meters6 = player distance2D east_ground_fog;
        if(_meters6 < 1000) then {
            if (player getVariable ["playerfog", -1] < time) then {
                player setVariable ["playerfog", floor time + 5];
                player spawn doofog;
                sleep 60;
            };
        };
    };
};