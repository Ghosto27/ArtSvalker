_kormos_shar = "#particlesource" createVehicleLocal [1138.566,1014.254,21.323];
_kormos_shar setParticleParams 
[["armst_anomalies\anomaly\particles\RefractCaustic.p3d", 4, 0, 16, 1], "","Billboard",1,4,[0,0,0],[0,0,0],0, 1.275, 1, 0,[18.5, 18.6, 18.7, 18.8, 19, 18.8, 18.7, 18.6, 18.5],[[0,0,1,0.5], [0,0,1,1], [0,0,1,3], [0,0,1,5], [0,0,1,4], [1,1,0,5], [0,0,1,3], [0,0,1,1], [0,0,1,0.5]],[1, 1.5, 2, 3, 4, 3, 2, 1.5, 1],0,	1,"","","", 0];
_kormos_shar setParticleRandom 
[0,[0, 0, 0],[0,0,0],2,0,[0,0,0,0],0,1,360];
_kormos_shar setDropInterval 2;

_kormos_moln1 = "#particlesource" createVehicleLocal [1138.566,1014.254,22.323];
_kormos_moln1 setParticleCircle [0, [0, 0, 0]];
_kormos_moln1 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
_kormos_moln1 setDropInterval 0.15;
_kormos_moln1 setParticleParams  [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject",  0.4,  0.4,  [0,0,0],  [0,0,0],  0,0.3,0.233,0,  [0.077,0.08,0.077],  [[1,1,1,0.5],[1,1,1,0.1]],  [1],  0,  0,  "",  "",  "",0,true];

_kormos_moln2 = "#particlesource" createVehicleLocal [1138.566,1014.254,22.323];
_kormos_moln2 setParticleCircle [0, [0, 0, 0]];
_kormos_moln2 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
_kormos_moln2 setDropInterval 0.1;
_kormos_moln2 setParticleParams  [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject",  0.3,  0.3,  [0,0,0],  [0,0,0],  0,0.3,0.233,0,  [0.065,0.055,0.052],  [[1,1,1,0.5],[1,1,1,0.1]],  [1],  0,  0,  "",  "",  "",0,true];

_kormos_moln3 = "#particlesource" createVehicleLocal [1138.566,1014.254,22.323];
_kormos_moln3 setParticleCircle [0, [0, 0, 0]];
_kormos_moln3 setParticleRandom [0, [0, 0, 1], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
_kormos_moln3 setDropInterval 0.075;
_kormos_moln3 setParticleParams  [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject",  0.27,  0.27,  [0,0,0],  [0,0,0],  0,0.3,0.233,0,  [0.03,0.04,0.03],  [[1,1,1,0.5],[1,1,1,0.1]],  [1],  0,  0,  "",  "",  "",0,true];
