player setvariable ["ARMST_DEAD",0];
player setvariable ["armst_pda_web",0];
player setvariable ["ARMST_GPS",1];
player setvariable ["ARMST_BODYTEMP",1];
player setVariable ["ARMST_artdetector",1];
ARMST_BODYTEMP = 37.6;
	titleCut [" ","BLACK in",5];
		//[player] spawn armst_respawn_wake;
   	 	[[player, "armst_wakeup"], "switchMove"] call bis_fnc_mp;
		sleep 6;
   	 	[[player, ""], "switchMove"] call bis_fnc_mp;
		
mydamage_eh22 = player addEventHandler ["Fired", {[player] spawn player_fired}];