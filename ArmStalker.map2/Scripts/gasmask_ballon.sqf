
while{true}do
{		
	if ((goggles player) in ["armst_R5","armst_R5_P","armst_R5_SH2"]) then {
		if ((backpack player) == "armst_backpack_ballon") then {
		  [0] call ARMST_Radiation_SetInfection;
		};
	};
	sleep 5;
};