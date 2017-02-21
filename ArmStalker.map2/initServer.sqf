

WEST setFriend [CIVILIAN, 0];
if (isServer) then {
	while {true} do {
	    {
	        if (count units _x==0) then {
	            deleteGroup _x;
	        };
	    } forEach allGroups;
	    sleep 2;
	} 
};