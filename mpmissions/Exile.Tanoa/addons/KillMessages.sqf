ShowDynamicText = true;
halvStyle = true;
ShowHintText = false;
MessageDuration = 30;

KillerNameColor	 = "#5882FA"; // Text Color of the Killer's Name.
VictimNameColor	 = "#C70000"; // Text Color of the Victim's Name.
WeaponNameColor	 = "#FFCC00"; // Text Color of the Weapon's Name. Only Works in Halv's Style
DistanceColor	 = "#FFCC00"; // Text Color of the kill Distance number.

if (!isDedicated) then {
	private ["_id","_killerName","_pic","_victimName","_distance","_weapon","_dyntxt","_message"];
	if (ShowDynamicText) then {
		if (halvStyle) then {
			"Gr8s_kill_msg"		addPublicVariableEventHandler {
				_id = (_this select 1);
				_killerName = _id select 0;
				_pic		= _id select 1;
				_victimName = _id select 2;
				_distance 	= _id select 3;
				_weapon 	= _id select 4;
				_dyntxt = format["
				<t size='0.5'align='left'shadow='1'color='%6'>%1</t>
				<t size='0.5'align='left'shadow='1'>  Killed  </t>
				<t size='0.5'align='left'shadow='1'color='%7'>%2</t><br/>
				<t size='0.45'align='left'shadow='1'> With: </t>
				<t size='0.5'align='left'shadow='1'color='%8'>%3</t>
				<t size='0.45'align='left'shadow='1'> - Distance: </t>
				<t size='0.5'align='left'shadow='1'color='%9'>%4m</t><br/>
				<img size='1.5'align='left'shadow='1'image='%5'/>
				",
				_killerName,
				_victimName,
				_weapon,
				_distance,
				_pic,
				KillerNameColor,
				VictimNameColor,
				WeaponNameColor,
				DistanceColor
				];
				[_dyntxt,[safezoneX + 0.01 * safezoneW,2.0],[safezoneY + 0.01 * safezoneH,0.3],MessageDuration,0.5] spawn BIS_fnc_dynamicText;
				if (ShowHintText) then {
					_message = parseText format ["
						<t color='%5'>%1</t>
						<t>Killed </t>
						<t color='%6'>%2</t>
						<t>With </t>
						<t color='%7'>%3</t>
						<t>from </t>
						<t color='%8'>%4m</t>
						",
						_killerName,
						_victimName,
						_weapon,
						_distance,
						KillerNameColor,
						VictimNameColor,
						WeaponNameColor,
						DistanceColor
					];
					hintSilent _message;
				};
			};
		} else {
			"Gr8s_kill_msg"		addPublicVariableEventHandler {
				_id = (_this select 1);
				_killerName = _id select 0;
				_pic		= _id select 1;
				_victimName = _id select 2;
				_distance 	= _id select 3;
				_weapon 	= _id select 4;
				_dyntxt = format["
				<t align='left'size='0.9'color='%5'>%1 </t>
				<img size='1.0'align='left' image='%2'/>
				<t align='left'size='0.9'color='%6'> %3 </t>
				<t align='left'size='0.9'color='%7'>[%4m]</t>
				",
				_killerName,
				_pic,
				_victimName,
				_distance,
				KillerNameColor,
				VictimNameColor,
				DistanceColor
				];
				[_dyntxt,[safezoneX + 0.01 * safezoneW,2.0],[safezoneY + 0.01 * safezoneH,0.3],MessageDuration,0.5] spawn BIS_fnc_dynamicText;
				if (ShowHintText) then {
					_message = parseText format ["
						<t color='%5'>%1</t>
						<t>Killed </t>
						<t color='%6'>%2</t>
						<t>With </t>
						<t color='%7'>%3</t>
						<t>from </t>
						<t color='%8'>%4m</t>
						",
						_killerName,
						_victimName,
						_weapon,
						_distance,
						KillerNameColor,
						VictimNameColor,
						WeaponNameColor,
						DistanceColor
					];
					hintSilent _message;
				};
			};
		};
	};
	if ((ShowHintText) && !(ShowDynamicText)) then {
		"Gr8s_kill_msg"		addPublicVariableEventHandler {
			_id = (_this select 1);
			_killerName = _id select 0;
			_pic		= _id select 1;
			_victimName = _id select 2;
			_distance 	= _id select 3;
			_weapon 	= _id select 4;
			_message = parseText format ["
				<t color='%5'>%1</t>
				<t>Killed </t>
				<t color='%6'>%2</t>
				<t>With </t>
				<t color='%7'>%3</t>
				<t>from </t>
				<t color='%8'>%4m</t>
				",
				_killerName,
				_victimName,
				_weapon,
				_distance,
				KillerNameColor,
				VictimNameColor,
				WeaponNameColor,
				DistanceColor
			];
			hintSilent _message;
		};
	};
};