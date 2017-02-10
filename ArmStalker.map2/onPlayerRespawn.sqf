player setvariable ["ARMST_DEAD",0];
player setvariable ["armst_pda_web",0];
player setvariable ["ARMST_GPS",1];
player setvariable ["ARMST_BODYTEMP",1];
player setVariable ["ARMST_artdetector",1];
ARMST_BODYTEMP = 37.6;
	titleCut [" ","BLACK in",5];
		[player] spawn armst_respawn_wake;
   	 	player switchmove "armst_wakeup";
		sleep 6;
   	 	player switchmove "";
		
mydamage_eh2 = player addEventHandler ["Fired", {[player] spawn player_fired}];