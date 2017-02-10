//////////////////////////////////////////////////////////////////////////
//                            Script Made By                            //
//                                MacRae                                //
//                                                                      //
//                                                                      //
//1.Place a Camping Chair on the map.                                   //
//                                                                      //
//2.Add this to the Camping chair Init:                                 //
//this addAction ["<t color='#0099FF'>Сесть</t>","Scripts\sitdown.sqf"]//
//                              4D6163526165                            //
//////////////////////////////////////////////////////////////////////////


_chair = _this select 0; 
_unit = _this select 1; 
ARMST_ANIM= [
"HubSittingChairA_move1","HubSittingChairB_idle1","HubSittingChairB_idle2","HubSittingChairB_idle3",
"HubSittingChairUA_idle1","HubSittingChairUA_idle2","HubSittingChairUA_idle3","HubSittingChairUA_move1",
"HubSittingChairUB_idle1","HubSittingChairUB_idle2","HubSittingChairUB_idle3","HubSittingChairUB_move1",
"HubSittingChairUC_idle1","HubSittingChairUC_idle2","HubSittingChairUC_idle3"
];	
_ARMST_ANIM = ARMST_ANIM select floor random count ARMST_ANIM;	
[_unit] call AGM_WeaponSelect_fnc_putWeaponAway;
[[_unit, _ARMST_ANIM], "switchMove"] spawn BIS_fnc_MP; 
_unit setPos (getPos _chair); 
_unit setDir ((getDir _chair) - 180); 
standup = _unit addaction ["<t color='#0099FF'>Встать</t>","Scripts\standup.sqf"];
_unit setpos [getpos _unit select 0, getpos _unit select 1,((getpos _unit select 2) +1)];


