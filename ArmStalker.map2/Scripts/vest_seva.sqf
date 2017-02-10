while{true}do
{
	if ((vest player) in ["Armst_sevastalk","Armst_sevamonolith","Armst_sevadolg","Armst_sevasvoboda","Armst_sevanaemnik","Armst_sevavoen","Armst_science2"]) then 
		{
		if ((goggles player)=="armst_seva_visor") then 
			{
			if ((headgear player) in ["armst_seva_shlem","armst_seva_science_shlem"]) then 
				{
				if ((backpack player) in ["armst_seva_backpack","armst_backpack_ballon","armst_seva_science_backpack"]) then 
					{
						[0] call ARMST_Radiation_SetInfection;	
						player setVariable ["ARMST_BODYTEMP", 1];
						ARMST_BODYTEMP = 40;	
					};				
				};			
			};		
		};
	sleep 5;
};