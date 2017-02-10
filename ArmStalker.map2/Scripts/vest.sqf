
while{true}do{
	_vest = vest player;
	if (_vest in ["Armst_ekzo","Armst_ekzo2","Armst_ekzo3"]) then {
		_fatigue = getFatigue player;
		player setFatigue (_fatigue - 1);
	};
	if (_vest in ["Armst_ekzodolg","Armst_ekzodolg2","Armst_ekzofreedom","Armst_ekzofreedom2","Armst_ekzoarmy","Armst_ekzomercenaries","Armst_ekzomonolith"]) then {
		_fatigue = getFatigue player;
		player setFatigue (_fatigue - 0.4);
	};
	sleep 10;
};