

perehod_chaes =
{
	player setPosATL [10033.652, 7478.383, 0.197];
	
	playSound "ambient3";
	titleCut [" ","BLACK in",5];
};

armst_monolith_in1 =
{
	player setPosATL [8904.313,7573.021, 0.197];
	
	playSound "ambient3";
	titleCut [" ","BLACK in",5];
};
armst_monolith =
{
_head = headgear player;
if !(_head == "armst_psy_protector_exp") then 
	{
	player setdamage 1;
	sleep 2;
	Hint "Мозг расплавился";
	};
};


armst_monolith_in2 =
{
	player setPosATL [8933.269, 7605.433, 0.197];
	
	playSound "ambient3";
	titleCut [" ","BLACK in",5];
};
armst_podzem_in1 =
{
	player setPosATL [getPosATL agroprom_exit1 select 0, getPosATL agroprom_exit1 select 1, getPosATL agroprom_exit1 select 2];
	
	playSound "ambient3";
	titleCut [" ","BLACK in",5];
};

armst_podzem_out1 =
{
	player setPosATL [getPosATL agroprom_vhod1 select 0, getPosATL agroprom_vhod1 select 1, getPosATL agroprom_vhod1 select 2];
	setDate [2011, 6, 5, 10, 0];  //(4:00pm February 25, 1986)
	titleCut [" ","BLACK in",5];
	playSound "ambient3";
};

armst_podzem_in2 =
{
	_daytime = daytime;
	player setPosATL [getPosATL agroprom_exit2 select 0, getPosATL agroprom_exit2 select 1, getPosATL agroprom_exit2 select 2];
	
	playSound "ambient3";
	titleCut [" ","BLACK in",5];
};

armst_podzem_out2 =
{
	player setPosATL [getPosATL agroprom_vhod2 select 0, getPosATL agroprom_vhod2 select 1, getPosATL agroprom_vhod2 select 2];
	setDate [2011, 6, 5, 10, 0];  //(4:00pm February 25, 1986)
	titleCut [" ","BLACK in",5];
	playSound "ambient3";
};

armst_perehod_in =
{
	player setPosATL [-321.171, 8822.730,0];
	
	playSound "ambient3";
	titleCut [" ","BLACK in",5];

};
armst_perehod_in2 =
{
	player setPosATL [-283.503, 8655.314,0];
	
	playSound "ambient3";
	titleCut [" ","BLACK in",5];
};

armst_perehod_out =
{
	player setPosATL [6754.122, 8189.998,1.343];
	setDate [2011, 6, 5, 10, 0];  //(4:00pm February 25, 1986)
	titleCut [" ","BLACK in",5];
	playSound "ambient3";
};
armst_perehod_out2 =
{
	player setPosATL [7933.231, 7657.608,0.294];
	setDate [2011, 6, 5, 10, 0];  //(4:00pm February 25, 1986)
	titleCut [" ","BLACK in",5];
	playSound "ambient3";
};

armst_x18_in =
{
	player setPosATL [8014.159,1516.686,19.008];
	
	playSound "ambient3";
	titleCut [" ","BLACK in",5];
};

armst_x18_out =
{
	player setPosATL [5307.916, 3496.265, 0];
	setDate [2011, 6, 5, 10, 0];  //(4:00pm February 25, 1986)
	titleCut [" ","BLACK in",5];
	playSound "ambient3";
};



armst_x17_in =
{
	player setPosATL [7707.483, 275.774, 0.241];
	
	titleCut [" ","BLACK in",5];
	playSound "ambient3";
};

armst_x17_out =
{
	player setPosATL [1271.563, 6316.811, 6.309];
	setDate [2011, 6, 5, 10, 0];  //(4:00pm February 25, 1986)
	titleCut [" ","BLACK in",5];
	playSound "ambient3";
};

armst_x12_in =
{
	player setPosATL [6036.427,-85.274, 10.451];
	
	titleCut [" ","BLACK in",5];
	playSound "ambient3";
};

armst_x12_out =
{
	player setPosATL [7387.358, 4823.866, 54.346];
	setDate [2011, 6, 5, 10, 0];  //(4:00pm February 25, 1986)
	titleCut [" ","BLACK in",5];
	playSound "ambient3";
};
armst_merc_base_out =
{
	player setPosATL [7153.852, 4132.659, 0.201];
	setDate [2011, 6, 5, 10, 0];  //(4:00pm February 25, 1986)
	titleCut [" ","BLACK in",5];
	playSound "ambient3";
};
armst_merc_base_in =
{
if (player isKindOf "elite_merc" or player isKindOf "mercenaries_private2" or player isKindOf "mercenaries_private" or player isKindOf "mercenaries_l") then 
	{
	player setPosATL [8028.863, 872.160, 0];
	setDate [2011, 6, 5, 10, 0];  //(4:00pm February 25, 1986)
	titleCut [" ","BLACK in",5];
	playSound "ambient3";
	};
};
armst_cn_base_out =
{
	player setPosATL [6416.131, 1348.870, 1.926];
	setDate [2011, 6, 5, 10, 0];  //(4:00pm February 25, 1986)
	titleCut [" ","BLACK in",5];
	playSound "ambient3";
};
armst_cn_base_in =
{
if (player isKindOf "clearsky_private") then 
	{
	player setPosATL [5527.747, 445.306, 0];
	setDate [2011, 6, 5, 10, 0];  //(4:00pm February 25, 1986)
	titleCut [" ","BLACK in",5];
	playSound "ambient3";
	};
};